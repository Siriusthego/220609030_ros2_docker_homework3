import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32

class DataProcessor(Node):
    def __init__(self):
        super().__init__("data_processor")

        # /sensor_value dinle
        self.subscription = self.create_subscription(
            Float32,
            "/sensor_value",
            self.sensor_callback,
            10
        )

        # /processed_value yayınla
        self.publisher_ = self.create_publisher(Float32, "/processed_value", 10)

    def sensor_callback(self, msg: Float32):
        # Basit işlem: gelen değeri 2 ile çarp
        processed_value = msg.data * 2.0

        out_msg = Float32()
        out_msg.data = processed_value
        self.publisher_.publish(out_msg)

        self.get_logger().info(
            f"Received: {msg.data:.2f}  ->  Processed: {processed_value:.2f}"
        )

def main(args=None):
    rclpy.init(args=args)
    node = DataProcessor()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()

