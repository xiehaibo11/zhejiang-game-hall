
undefined8 FUN_010de314(ulong param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  
  uVar2 = param_1 & 0xffffffff00000000;
  if ((*(uint *)((uVar2 | 0xb) + (ulong)*(uint *)(param_1 - 1)) >> 0x15 & 1) == 0) {
    uVar3 = uVar2 | *(uint *)(param_1 - 1);
    uVar4 = (ulong)(*(uint *)(uVar3 + 0xb) >> 10) & 0x3ff;
    if ((int)uVar4 != 0) {
      puVar6 = (uint *)((uVar2 | *(uint *)(uVar3 + 0x17)) + 0x13);
      do {
        if (((*(short *)((uVar2 | 7) + (ulong)*(uint *)((uVar2 | puVar6[-1]) - 1)) != 0x40) ||
            ((*(byte *)((uVar2 | puVar6[-1]) + 7) & 1) == 0)) &&
           (((*puVar6 >> 6 & 1) == 0 || ((param_2 == 5 && ((*puVar6 & 0x12) == 0)))))) {
          return 0;
        }
        uVar4 = uVar4 - 1;
        puVar6 = puVar6 + 3;
      } while (uVar4 != 0);
    }
  }
  else {
    if ((*(uint *)(param_1 + 3) & 1) == 0) {
      uVar4 = *(ulong *)(uVar2 + 0x410);
    }
    else {
      uVar4 = uVar2 | *(uint *)(param_1 + 3);
    }
    if ((int)*(uint *)(uVar4 + 0xf) >> 1 != 0) {
      lVar5 = (long)((ulong)*(uint *)(uVar4 + 0xf) << 0x20) >> 0x21;
      lVar7 = 0x1c00000000;
      lVar8 = 0x1400000000;
      do {
        uVar1 = *(uint *)((lVar8 >> 0x20) + uVar4 + 7);
        if (((uVar1 != *(uint *)(uVar2 + 0xa8)) && (uVar1 != *(uint *)(uVar2 + 0xa0))) &&
           (((uVar1 & 1) == 0 ||
            ((uVar3 = uVar4 & 0xffffffff00000000 | (ulong)uVar1,
             *(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x40 ||
             ((*(byte *)(uVar3 + 7) & 1) == 0)))))) {
          uVar1 = *(uint *)((lVar7 >> 0x20) + uVar4 + 7);
          if ((uVar1 >> 6 & 1) == 0) {
            return 0;
          }
          if ((param_2 == 5) && ((uVar1 & 0x12) == 0)) {
            return 0;
          }
        }
        lVar5 = lVar5 + -1;
        lVar7 = lVar7 + 0xc00000000;
        lVar8 = lVar8 + 0xc00000000;
      } while (lVar5 != 0);
    }
  }
  return 1;
}

