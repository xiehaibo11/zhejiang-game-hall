
long * FUN_00bfba1c(long param_1,uint *param_2,ulong param_3)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  
  uVar1 = (uint)param_3;
  if (0x7ffffeff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfaf54(param_1,0x38);
  }
  plVar9 = *(long **)(param_1 + 0x10);
  if (uVar1 < 4) {
    if (uVar1 == 0) {
      return plVar9 + 0x15;
    }
    uVar7 = (uint)(byte)*param_2;
    uVar6 = (uint)*(byte *)((long)param_2 + (param_3 >> 1 & 0x7fffffff));
    uVar3 = (*(byte *)((long)param_2 + (param_3 - 1)) ^ uVar1 ^ uVar6) + uVar6 * -0x4000;
  }
  else {
    uVar7 = *param_2;
    uVar3 = *(uint *)((long)param_2 + ((param_3 >> 1 & 0x7fffffff) - 2));
    uVar6 = uVar3 + *(int *)((long)param_2 + ((param_3 >> 2 & 0x3fffffff) - 1));
    uVar3 = (uVar3 ^ *(uint *)((long)param_2 + (param_3 - 4)) ^ uVar1) -
            (uVar3 >> 0x12 | uVar3 << 0xe);
  }
  uVar7 = (uVar3 ^ uVar7) - (uVar3 >> 0x15 | uVar3 << 0xb);
  uVar6 = (uVar7 ^ uVar6) - (uVar7 >> 7 | uVar7 * 0x2000000);
  uVar6 = (uVar6 ^ uVar3) - (uVar6 >> 0x10 | uVar6 * 0x10000);
  plVar8 = *(long **)(*plVar9 + (ulong)(uVar6 & *(uint *)(plVar9 + 1)) * 8);
  if (((ulong)((long)param_2 + (param_3 - 1)) & 0xfff) < 0xffd) {
    for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      if (*(uint *)(plVar8 + 2) == uVar1) {
        uVar7 = 0;
        while (uVar3 = *(uint *)((long)plVar8 + (ulong)uVar7 + 0x18) ^
                       *(uint *)((long)param_2 + (ulong)uVar7), uVar3 == 0) {
          uVar7 = uVar7 + 4;
          if (uVar1 <= uVar7) goto LAB_00bfbb40;
        }
        if ((-4 < (int)(uVar7 - uVar1)) &&
           (uVar3 << (ulong)((uVar7 - uVar1) * 8 + 0x20 & 0x1f) == 0)) {
LAB_00bfbb40:
          if ((*(byte *)(plVar8 + 1) & 3 & (*(byte *)(plVar9 + 6) ^ 3)) == 0) {
            return plVar8;
          }
          *(byte *)(plVar8 + 1) = *(byte *)(plVar8 + 1) ^ 3;
          return plVar8;
        }
      }
    }
  }
  else {
    while (plVar8 != (long *)0x0) {
      if (*(uint *)(plVar8 + 2) == uVar1) {
        iVar4 = memcmp(param_2,plVar8 + 3,param_3);
        if (iVar4 == 0) {
          if ((*(byte *)(plVar8 + 1) & 3 & (*(byte *)(plVar9 + 6) ^ 3)) == 0) {
            return plVar8;
          }
          *(byte *)(plVar8 + 1) = *(byte *)(plVar8 + 1) ^ 3;
          return plVar8;
        }
        plVar8 = (long *)*plVar8;
      }
      else {
        plVar8 = (long *)*plVar8;
      }
    }
  }
  plVar8 = (long *)FUN_00c1a2b4(param_1,0,0,param_3 + 0x19);
  bVar2 = *(byte *)(plVar9 + 6);
  *(uint *)(plVar8 + 2) = uVar1;
  *(byte *)(plVar8 + 1) = bVar2 & 3;
  *(undefined1 *)((long)plVar8 + 9) = 4;
  *(uint *)((long)plVar8 + 0xc) = uVar6;
  *(undefined1 *)((long)plVar8 + 10) = 0;
  memcpy(plVar8 + 3,param_2,param_3);
  *(undefined1 *)((long)plVar8 + param_3 + 0x18) = 0;
  uVar1 = *(uint *)(plVar9 + 1);
  lVar5 = *plVar9;
  uVar7 = *(uint *)((long)plVar9 + 0xc);
  *plVar8 = *(long *)(lVar5 + (ulong)(uVar6 & uVar1) * 8);
  *(long **)(lVar5 + (ulong)(uVar6 & uVar1) * 8) = plVar8;
  *(uint *)((long)plVar9 + 0xc) = uVar7 + 1;
  if (uVar7 <= uVar1) {
    return plVar8;
  }
  FUN_00bfb938(param_1,uVar1 * 2 + 1);
  return plVar8;
}

