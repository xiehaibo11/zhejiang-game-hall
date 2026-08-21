
void oggpack_read(uint *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  
  oggpack_look();
  uVar1 = *param_1 + param_2 & 7;
  lVar4 = (long)((ulong)(*param_1 + param_2) << 0x20) >> 0x23;
  lVar3 = *(long *)(param_1 + 4) - lVar4;
  *param_1 = uVar1;
  *(long *)(param_1 + 2) = *(long *)(param_1 + 2) + lVar4;
  *(long *)(param_1 + 4) = lVar3;
  if (lVar3 < 1) {
    puVar6 = *(undefined8 **)(param_1 + 6);
    do {
      lVar4 = lVar3;
      if ((puVar6 == (undefined8 *)0x0) ||
         (puVar5 = (undefined8 *)puVar6[3], puVar5 == (undefined8 *)0x0)) {
        *(long *)(param_1 + 4) = lVar4;
        *param_1 = uVar1;
        if ((long)(ulong)uVar1 <= lVar4 * 8) {
          return;
        }
        param_1[4] = 0xffffffff;
        param_1[5] = 0xffffffff;
        return;
      }
      lVar3 = puVar6[2];
      *(undefined8 **)(param_1 + 6) = puVar5;
      *(long *)(param_1 + 10) = *(long *)(param_1 + 10) + lVar3;
      lVar3 = puVar5[2] + lVar4;
      puVar6 = puVar5;
    } while (lVar3 < 1);
    lVar2 = puVar5[1];
    lVar7 = *(long *)*puVar5;
    *param_1 = uVar1;
    *(long *)(param_1 + 2) = (lVar7 + lVar2) - lVar4;
    *(long *)(param_1 + 4) = lVar3;
  }
  return;
}

