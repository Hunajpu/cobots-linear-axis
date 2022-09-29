from launch import LaunchDescription
from launch_ros.actions import Node


# Note that this is on Eloquent
def generate_launch_description():
    return LaunchDescription([
        Node(
            package='cobots_axis_gui',
            executable='cobot_7thaxis',
            name='cobot_7thaxis',
            output='screen'
        )
    ])
