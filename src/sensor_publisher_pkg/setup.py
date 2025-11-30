from setuptools import setup
import os
from glob import glob

package_name = 'sensor_publisher_pkg'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
         ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Abdullah Emir Kireçci',
    maintainer_email='aemirkirecci@gmail.com',
    description='Publishes fake sensor data to /sensor_value',
    license='Me.AEK',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'sensor_publisher = sensor_publisher_pkg.sensor_publisher_node:main',
        ],
    },
)

