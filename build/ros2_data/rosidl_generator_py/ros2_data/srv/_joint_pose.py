# generated from rosidl_generator_py/resource/_idl.py.em
# with input from ros2_data:srv/JointPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JointPose_Request(type):
    """Metaclass of message 'JointPose_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros2_data')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_data.srv.JointPose_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__joint_pose__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__joint_pose__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__joint_pose__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__joint_pose__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__joint_pose__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointPose_Request(metaclass=Metaclass_JointPose_Request):
    """Message class 'JointPose_Request'."""

    __slots__ = [
        '_joint1',
        '_joint2',
        '_joint3',
        '_joint4',
        '_joint5',
        '_joint6',
    ]

    _fields_and_field_types = {
        'joint1': 'double',
        'joint2': 'double',
        'joint3': 'double',
        'joint4': 'double',
        'joint5': 'double',
        'joint6': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.joint1 = kwargs.get('joint1', float())
        self.joint2 = kwargs.get('joint2', float())
        self.joint3 = kwargs.get('joint3', float())
        self.joint4 = kwargs.get('joint4', float())
        self.joint5 = kwargs.get('joint5', float())
        self.joint6 = kwargs.get('joint6', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.joint1 != other.joint1:
            return False
        if self.joint2 != other.joint2:
            return False
        if self.joint3 != other.joint3:
            return False
        if self.joint4 != other.joint4:
            return False
        if self.joint5 != other.joint5:
            return False
        if self.joint6 != other.joint6:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def joint1(self):
        """Message field 'joint1'."""
        return self._joint1

    @joint1.setter
    def joint1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint1' field must be of type 'float'"
        self._joint1 = value

    @property
    def joint2(self):
        """Message field 'joint2'."""
        return self._joint2

    @joint2.setter
    def joint2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint2' field must be of type 'float'"
        self._joint2 = value

    @property
    def joint3(self):
        """Message field 'joint3'."""
        return self._joint3

    @joint3.setter
    def joint3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint3' field must be of type 'float'"
        self._joint3 = value

    @property
    def joint4(self):
        """Message field 'joint4'."""
        return self._joint4

    @joint4.setter
    def joint4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint4' field must be of type 'float'"
        self._joint4 = value

    @property
    def joint5(self):
        """Message field 'joint5'."""
        return self._joint5

    @joint5.setter
    def joint5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint5' field must be of type 'float'"
        self._joint5 = value

    @property
    def joint6(self):
        """Message field 'joint6'."""
        return self._joint6

    @joint6.setter
    def joint6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'joint6' field must be of type 'float'"
        self._joint6 = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_JointPose_Response(type):
    """Metaclass of message 'JointPose_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros2_data')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_data.srv.JointPose_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__joint_pose__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__joint_pose__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__joint_pose__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__joint_pose__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__joint_pose__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JointPose_Response(metaclass=Metaclass_JointPose_Response):
    """Message class 'JointPose_Response'."""

    __slots__ = [
        '_result',
    ]

    _fields_and_field_types = {
        'result': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.result = kwargs.get('result', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'result' field must be of type 'str'"
        self._result = value


class Metaclass_JointPose(type):
    """Metaclass of service 'JointPose'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('ros2_data')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'ros2_data.srv.JointPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__joint_pose

            from ros2_data.srv import _joint_pose
            if _joint_pose.Metaclass_JointPose_Request._TYPE_SUPPORT is None:
                _joint_pose.Metaclass_JointPose_Request.__import_type_support__()
            if _joint_pose.Metaclass_JointPose_Response._TYPE_SUPPORT is None:
                _joint_pose.Metaclass_JointPose_Response.__import_type_support__()


class JointPose(metaclass=Metaclass_JointPose):
    from ros2_data.srv._joint_pose import JointPose_Request as Request
    from ros2_data.srv._joint_pose import JointPose_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
