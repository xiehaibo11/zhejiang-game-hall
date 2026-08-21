
/* seval_to_boolean(se::Value const&, bool*) */

undefined8 seval_to_boolean(Value *param_1,bool *param_2)

{
  ulong uVar1;
  Value VVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  
  VVar2 = param_1[8];
  if (VVar2 == (Value)0x2) {
    iVar4 = se::Value::toInt32(param_1);
    bVar3 = iVar4 != 0;
  }
  else if (VVar2 == (Value)0x3) {
    bVar3 = se::Value::toBoolean(param_1);
  }
  else {
    if (1 < (byte)VVar2) {
      if (VVar2 == (Value)0x5) {
        bVar3 = 1;
        goto LAB_008d4a64;
      }
      if (VVar2 == (Value)0x4) {
        pbVar5 = (byte *)se::Value::toString(param_1);
        uVar1 = (ulong)(*pbVar5 >> 1);
        if ((*pbVar5 & 1) != 0) {
          uVar1 = *(ulong *)(pbVar5 + 8);
        }
        bVar3 = uVar1 != 0;
        goto LAB_008d4a64;
      }
    }
    bVar3 = 0;
  }
LAB_008d4a64:
  *param_2 = (bool)(bVar3 & 1);
  return 1;
}

