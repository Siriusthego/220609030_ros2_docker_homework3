from setuptools import find_packages
from setuptools import setup

setup(
    name='command_server_pkg',
    version='0.0.0',
    packages=find_packages(
        include=('command_server_pkg', 'command_server_pkg.*')),
)
