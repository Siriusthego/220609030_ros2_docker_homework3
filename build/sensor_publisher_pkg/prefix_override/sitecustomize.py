import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/abdullahemirkirecci/project_root/install/sensor_publisher_pkg'
