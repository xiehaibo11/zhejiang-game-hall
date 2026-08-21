
/* seval_to_int32(se::Value const&, int*) */

undefined4 seval_to_int32(Value *param_1,int *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1[8] == (Value)0x3) {
    uVar1 = se::Value::toBoolean(param_1);
    uVar1 = uVar1 & 1;
  }
  else {
    if (param_1[8] != (Value)0x2) {
      uVar1 = 0;
      uVar2 = 0;
      goto LAB_008d4814;
    }
    uVar1 = se::Value::toInt32(param_1);
  }
  uVar2 = 1;
LAB_008d4814:
  *param_2 = uVar1;
  return uVar2;
}

