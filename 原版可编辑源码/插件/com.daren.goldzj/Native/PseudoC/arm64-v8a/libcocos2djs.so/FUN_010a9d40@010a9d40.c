
bool FUN_010a9d40(undefined8 param_1,ulong param_2,uint param_3,long param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_2 & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar5 | *(uint *)(param_2 + 0xb)) + 7);
  uVar4 = (ulong)param_3;
  if (uVar2 <= param_3) {
    puVar1 = (uint *)(param_2 + 0xb);
    if (*(short *)((uVar5 | 7) + (ulong)*(uint *)(param_2 - 1)) != 0x423) {
      puVar1 = (uint *)(param_4 + 3);
    }
    if ((param_3 < (uint)((int)*puVar1 >> 1)) &&
       ((uVar3 = *(uint *)(param_4 + (int)(param_3 << 2) + 7), (uVar3 & 1) == 0 ||
        (uVar3 != *(uint *)(uVar5 + 0xa8))))) {
      uVar4 = uVar2 + uVar4;
    }
    else {
      uVar4 = 0xffffffffffffffff;
    }
  }
  return uVar4 != 0xffffffffffffffff;
}

