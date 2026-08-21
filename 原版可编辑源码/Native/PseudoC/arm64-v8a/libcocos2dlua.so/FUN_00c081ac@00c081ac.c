
void FUN_00c081ac(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (*(uint *)(param_1 + 0x2c) < *(uint *)(param_1 + 0x28)) {
    lVar4 = *(long *)(param_1 + 0x48);
    lVar3 = (ulong)(*(uint *)(param_1 + 0x28) - 1) * 8;
    uVar1 = *(uint *)(lVar4 + lVar3);
    uVar2 = uVar1 >> 8 & 0xff;
    if ((uVar1 & 0xff) == 0x2b) {
      if (uVar1 >> 0x10 == 0) {
        if (param_2 == uVar2) {
          if (param_3 == 1) {
            return;
          }
        }
        else {
          if (uVar2 + 1 != param_2) goto LAB_00c08234;
          param_3 = param_3 + 1;
          param_2 = uVar2;
        }
        *(uint *)(lVar4 + lVar3) = param_2 << 8 | 0x2c | (param_2 + param_3 + -1) * 0x10000;
        return;
      }
    }
    else if (((uVar1 & 0xff) == 0x2c) && (uVar2 <= param_2)) {
      if (param_2 <= (uVar1 >> 0x10) + 1) {
        param_2 = param_3 + -1 + param_2;
        if (uVar1 >> 0x10 < param_2) {
          *(short *)(lVar4 + lVar3 + 2) = (short)param_2;
        }
        return;
      }
    }
  }
LAB_00c08234:
  if (param_3 != 1) {
    FUN_00c07f70(param_1,param_2 << 8 | 0x2c | (param_3 + -1 + param_2) * 0x10000);
    return;
  }
  FUN_00c07f70(param_1,param_2 << 8 | 0x2b);
  return;
}

