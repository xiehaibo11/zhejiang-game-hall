
/* JavaScriptJavaBridge::convertReturnValue(JavaScriptJavaBridge::ReturnValue,
   JavaScriptJavaBridge::ValueType, se::Value*) */

undefined8
JavaScriptJavaBridge::convertReturnValue(basic_string *param_1,undefined1 param_2,Value *param_3)

{
  float fVar1;
  
  fVar1 = SUB84(param_1,0);
  switch(param_2) {
  case 2:
    se::Value::setInt32(param_3,(int)fVar1);
    break;
  case 3:
    se::Value::setLong(param_3,(long)param_1);
    break;
  case 4:
    se::Value::setFloat(param_3,fVar1);
    break;
  case 5:
    se::Value::setBoolean(param_3,fVar1 != 0.0);
    break;
  case 6:
    if (param_1 == (basic_string *)0x0) {
      se::Value::setNull(param_3);
    }
    else {
      se::Value::setString(param_3,param_1);
    }
    break;
  default:
    se::Value::setUndefined(param_3);
  }
  return 1;
}

