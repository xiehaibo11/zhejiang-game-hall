
/* uint32_to_seval(unsigned int, se::Value*) */

undefined8 uint32_to_seval(uint param_1,Value *param_2)

{
  se::Value::setUint32(param_2,param_1);
  return 1;
}

