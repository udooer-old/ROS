// Auto-generated. Do not edit!

// (in-package testing.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class my_msg {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.name = null;
      this.age = null;
      this.sex = null;
    }
    else {
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = '';
      }
      if (initObj.hasOwnProperty('age')) {
        this.age = initObj.age
      }
      else {
        this.age = 0;
      }
      if (initObj.hasOwnProperty('sex')) {
        this.sex = initObj.sex
      }
      else {
        this.sex = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type my_msg
    // Serialize message field [name]
    bufferOffset = _serializer.string(obj.name, buffer, bufferOffset);
    // Serialize message field [age]
    bufferOffset = _serializer.int64(obj.age, buffer, bufferOffset);
    // Serialize message field [sex]
    bufferOffset = _serializer.string(obj.sex, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type my_msg
    let len;
    let data = new my_msg(null);
    // Deserialize message field [name]
    data.name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [age]
    data.age = _deserializer.int64(buffer, bufferOffset);
    // Deserialize message field [sex]
    data.sex = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.name.length;
    length += object.sex.length;
    return length + 16;
  }

  static datatype() {
    // Returns string type for a message object
    return 'testing/my_msg';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '23a1de837c8644a2ce845ae9317db1e6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string name
    int64 age
    string sex 
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new my_msg(null);
    if (msg.name !== undefined) {
      resolved.name = msg.name;
    }
    else {
      resolved.name = ''
    }

    if (msg.age !== undefined) {
      resolved.age = msg.age;
    }
    else {
      resolved.age = 0
    }

    if (msg.sex !== undefined) {
      resolved.sex = msg.sex;
    }
    else {
      resolved.sex = ''
    }

    return resolved;
    }
};

module.exports = my_msg;
