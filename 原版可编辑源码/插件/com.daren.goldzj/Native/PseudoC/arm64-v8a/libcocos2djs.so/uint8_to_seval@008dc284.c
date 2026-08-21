
/* uint8_to_seval(unsigned char, se::Value*) */

undefined8 uint8_to_seval(uchar param_1,Value *param_2)

{
  se::Value::setUint8(param_2,param_1);
  return 1;
}

