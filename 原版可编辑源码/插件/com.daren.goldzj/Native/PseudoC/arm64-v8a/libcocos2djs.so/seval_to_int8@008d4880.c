
/* seval_to_int8(se::Value const&, signed char*) */

undefined4 seval_to_int8(Value *param_1,signed *param_2)

{
  signed sVar1;
  byte bVar2;
  undefined4 uVar3;
  
  if (param_1[8] == (Value)0x3) {
    bVar2 = se::Value::toBoolean(param_1);
    sVar1 = (signed)(bVar2 & 1);
  }
  else {
    if (param_1[8] != (Value)0x2) {
      sVar1 = (signed)0x0;
      uVar3 = 0;
      goto LAB_008d48c4;
    }
    sVar1 = (signed)se::Value::toInt8(param_1);
  }
  uVar3 = 1;
LAB_008d48c4:
  *param_2 = sVar1;
  return uVar3;
}

