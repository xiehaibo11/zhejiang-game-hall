
/* uint16_to_seval(unsigned short, se::Value*) */

undefined8 uint16_to_seval(ushort param_1,Value *param_2)

{
  se::Value::setUint16(param_2,param_1);
  return 1;
}

