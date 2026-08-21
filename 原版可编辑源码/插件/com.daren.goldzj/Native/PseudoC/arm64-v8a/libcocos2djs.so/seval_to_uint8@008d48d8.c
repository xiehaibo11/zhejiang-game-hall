
/* seval_to_uint8(se::Value const&, unsigned char*) */

undefined4 seval_to_uint8(Value *param_1,uchar *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_1[8] == (Value)0x3) {
    bVar1 = se::Value::toBoolean(param_1);
    bVar1 = bVar1 & 1;
  }
  else {
    if (param_1[8] != (Value)0x2) {
      bVar1 = 0;
      uVar2 = 0;
      goto LAB_008d491c;
    }
    bVar1 = se::Value::toUint8(param_1);
  }
  uVar2 = 1;
LAB_008d491c:
  *param_2 = bVar1;
  return uVar2;
}

