
void oggpack_readinit(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 **)(param_1 + 6) = param_2;
  *(undefined8 **)(param_1 + 8) = param_2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if ((param_2 == (undefined8 *)0x0) || (lVar3 = param_2[2], lVar3 == 0)) {
    lVar3 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  else {
    *(long *)(param_1 + 2) = *(long *)*param_2 + param_2[1];
    *(long *)(param_1 + 4) = lVar3;
  }
  uVar2 = (ulong)*param_1;
  lVar3 = lVar3 - ((int)*param_1 >> 3);
  if (lVar3 < 1) {
    lVar4 = 0;
    while( true ) {
      lVar6 = lVar3;
      uVar1 = (uint)uVar2 & 7;
      uVar2 = (ulong)uVar1;
      if ((param_2 == (undefined8 *)0x0) ||
         (puVar7 = (undefined8 *)param_2[3], puVar7 == (undefined8 *)0x0)) break;
      lVar3 = param_2[2];
      *(undefined8 **)(param_1 + 6) = puVar7;
      lVar4 = lVar4 + lVar3;
      *(long *)(param_1 + 10) = lVar4;
      lVar3 = puVar7[2] + lVar6;
      param_2 = puVar7;
      if (0 < lVar3) {
        lVar4 = puVar7[1];
        lVar5 = *(long *)*puVar7;
        *param_1 = uVar1;
        *(long *)(param_1 + 2) = (lVar5 + lVar4) - lVar6;
        *(long *)(param_1 + 4) = lVar3;
        return;
      }
    }
    *(long *)(param_1 + 4) = lVar6;
    *param_1 = uVar1;
    if (lVar6 * 8 < (long)uVar2) {
      param_1[4] = 0xffffffff;
      param_1[5] = 0xffffffff;
      return;
    }
  }
  return;
}

