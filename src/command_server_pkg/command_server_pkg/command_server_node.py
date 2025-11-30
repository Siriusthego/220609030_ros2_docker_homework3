#!/usr/bin/env python3


import rclpy
from rclpy.node import Node

from command_server_pkg.srv import ComputeCommand


class CommandServer(Node):
    def __init__(self):
        super().__init__('command_server')
        # Servis adı: /compute_command
        self.srv = self.create_service(
            ComputeCommand,
            'compute_command',
            self.handle_command
        )
        self.get_logger().info('Command server ready.')

    def handle_command(self, request, response):
        # input > 10 → HIGH, aksi halde LOW
        if request.input > 10.0:
            response.output = 'HIGH'
        else:
            response.output = 'LOW'

        self.get_logger().info(
            f"Received: {request.input:.2f} -> {response.output}"
        )
        return response


def main(args=None):
    rclpy.init(args=args)
    node = CommandServer()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

