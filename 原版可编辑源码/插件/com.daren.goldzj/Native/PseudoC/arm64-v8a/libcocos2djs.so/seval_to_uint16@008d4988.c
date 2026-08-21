
/* seval_to_uint16(se::Value const&, unsigned short*) */

undefined4 seval_to_uint16(Value *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  
  if (param_1[8] == (Value)0x3) {
    uVar1 = se::Value::toBoolean(param_1);
    uVar1 = uVar1 & 1;
  }
  else {
    if (param_1[8] != (Value)0x2) {
      uVar1 = 0;
      uVar2 = 0;
      goto LAB_008d49cc;
    }
    uVar1 = se::Value::toUint16(param_1);
  }
  uVar2 = 1;
LAB_008d49cc:
  *param_2 = uVar1;
  return uVar2;
}

