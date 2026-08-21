
undefined4 FUN_0012f628(long *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  plVar7 = (long *)*param_1;
  uVar9 = *(uint *)(param_1 + 10);
  lVar5 = plVar7[1];
  if (param_1[3] - 5U <= (ulong)uVar9) {
    uVar9 = (uint)(param_1[3] - 5U);
  }
  do {
    uVar11 = *(int *)((long)param_1 + 0x1734) + 0x2a >> 3;
    if (*(uint *)(plVar7 + 4) < uVar11) {
      bVar4 = true;
      goto LAB_0012f7fc;
    }
    uVar11 = *(uint *)(plVar7 + 4) - uVar11;
    uVar3 = *(int *)((long)param_1 + 0xac) - (int)param_1[0x13];
    uVar10 = uVar3 + *(uint *)(plVar7 + 1);
    uVar1 = uVar10;
    if (0xfffe < (ulong)uVar3 + (ulong)*(uint *)(plVar7 + 1)) {
      uVar1 = 0xffff;
    }
    if (uVar1 <= uVar11) {
      uVar11 = uVar1;
    }
    if ((uVar11 < uVar9) &&
       (((bVar4 = true, param_2 != 4 && uVar11 == 0 || (param_2 == 0)) || (uVar11 != uVar10))))
    goto LAB_0012f7fc;
    bVar4 = uVar11 == uVar10;
    FUN_00132cb0(param_1,0,0,param_2 == 4 && bVar4);
    *(char *)(param_1[5] + param_1[2] + -4) = (char)uVar11;
    *(char *)(param_1[5] + param_1[2] + -3) = (char)(uVar11 >> 8);
    *(char *)(param_1[5] + param_1[2] + -2) = (char)~uVar11;
    *(char *)(param_1[5] + param_1[2] + -1) = (char)(~uVar11 >> 8);
    FUN_0012f594(*param_1);
    if (uVar3 != 0) {
      uVar10 = uVar11;
      if (uVar3 <= uVar11) {
        uVar10 = uVar3;
      }
      uVar14 = (ulong)uVar10;
      memcpy(*(void **)(*param_1 + 0x18),(void *)(param_1[0xc] + param_1[0x13]),uVar14);
      lVar8 = *param_1;
      uVar11 = uVar11 - uVar10;
      lVar12 = *(long *)(lVar8 + 0x18);
      iVar2 = *(int *)(lVar8 + 0x20);
      lVar13 = *(long *)(lVar8 + 0x28);
      param_1[0x13] = param_1[0x13] + uVar14;
      *(ulong *)(lVar8 + 0x18) = lVar12 + uVar14;
      *(uint *)(lVar8 + 0x20) = iVar2 - uVar10;
      *(ulong *)(lVar8 + 0x28) = lVar13 + uVar14;
    }
    if (uVar11 != 0) {
      FUN_001309e0(*param_1,*(undefined8 *)(*param_1 + 0x18),uVar11);
      lVar8 = *param_1;
      *(ulong *)(lVar8 + 0x18) = *(long *)(lVar8 + 0x18) + (ulong)uVar11;
      *(uint *)(lVar8 + 0x20) = *(int *)(lVar8 + 0x20) - uVar11;
      *(ulong *)(lVar8 + 0x28) = *(long *)(lVar8 + 0x28) + (ulong)uVar11;
    }
    plVar7 = (long *)*param_1;
  } while (param_2 != 4 || !bVar4);
  bVar4 = false;
LAB_0012f7fc:
  uVar9 = (int)lVar5 - (int)plVar7[1];
  if (uVar9 == 0) {
    uVar11 = *(uint *)((long)param_1 + 0xac);
    uVar14 = (ulong)uVar11;
  }
  else {
    uVar11 = *(uint *)(param_1 + 10);
    uVar14 = (ulong)uVar11;
    if (uVar9 < uVar11) {
      if (param_1[0xd] - (ulong)*(uint *)((long)param_1 + 0xac) <= (ulong)uVar9) {
        uVar11 = *(uint *)((long)param_1 + 0xac) - uVar11;
        *(uint *)((long)param_1 + 0xac) = uVar11;
        memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + uVar14),(ulong)uVar11);
        if (*(uint *)(param_1 + 0x2e5) < 2) {
          *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
        }
      }
      memcpy((void *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac)),
             (void *)(*(long *)*param_1 - (ulong)uVar9),(ulong)uVar9);
      uVar10 = *(uint *)(param_1 + 10);
      uVar11 = *(int *)((long)param_1 + 0xac) + uVar9;
      *(uint *)((long)param_1 + 0xac) = uVar11;
    }
    else {
      lVar5 = *plVar7;
      *(undefined4 *)(param_1 + 0x2e5) = 2;
      memcpy((void *)param_1[0xc],(void *)(lVar5 - uVar14),uVar14);
      uVar10 = *(uint *)(param_1 + 10);
      *(uint *)((long)param_1 + 0xac) = uVar10;
      uVar11 = uVar10;
    }
    uVar14 = (ulong)uVar11;
    param_1[0x13] = uVar14;
    uVar10 = uVar10 - *(int *)((long)param_1 + 0x172c);
    if (uVar9 <= uVar10) {
      uVar10 = uVar9;
    }
    *(uint *)((long)param_1 + 0x172c) = uVar10 + *(int *)((long)param_1 + 0x172c);
  }
  if ((ulong)param_1[0x2e7] < uVar14) {
    param_1[0x2e7] = uVar14;
  }
  if (bVar4) {
    lVar5 = *param_1;
    uVar9 = *(uint *)(lVar5 + 8);
    if (((param_2 & 0xfffffffb) == 0) || (uVar9 != 0)) {
      uVar10 = (int)param_1[0xd] + ~(uint)uVar14;
      if (uVar10 < uVar9) {
        uVar14 = (ulong)*(uint *)(param_1 + 10);
        if ((long)uVar14 <= param_1[0x13]) {
          uVar11 = uVar11 - *(uint *)(param_1 + 10);
          param_1[0x13] = param_1[0x13] - uVar14;
          *(uint *)((long)param_1 + 0xac) = uVar11;
          memcpy((void *)param_1[0xc],(void *)(param_1[0xc] + uVar14),(ulong)uVar11);
          if (*(uint *)(param_1 + 0x2e5) < 2) {
            *(uint *)(param_1 + 0x2e5) = *(uint *)(param_1 + 0x2e5) + 1;
          }
          lVar5 = *param_1;
          uVar9 = *(uint *)(lVar5 + 8);
          uVar10 = (int)param_1[10] + uVar10;
        }
      }
    }
    else {
      if (param_1[0x13] == uVar14) {
        return 1;
      }
      uVar9 = 0;
      uVar10 = (int)param_1[0xd] + ~(uint)uVar14;
    }
    if (uVar10 <= uVar9) {
      uVar9 = uVar10;
    }
    if (uVar9 == 0) {
      uVar9 = *(uint *)((long)param_1 + 0xac);
    }
    else {
      FUN_001309e0(lVar5,param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac),uVar9);
      uVar9 = *(int *)((long)param_1 + 0xac) + uVar9;
      *(uint *)((long)param_1 + 0xac) = uVar9;
    }
    if ((ulong)param_1[0x2e7] < (ulong)uVar9) {
      param_1[0x2e7] = (ulong)uVar9;
    }
    uVar14 = param_1[3] - (ulong)(uint)(*(int *)((long)param_1 + 0x1734) + 0x2a >> 3);
    uVar11 = (uint)uVar14;
    if (0xfffe < uVar14) {
      uVar11 = 0xffff;
    }
    uVar10 = *(uint *)(param_1 + 10);
    if (uVar11 <= *(uint *)(param_1 + 10)) {
      uVar10 = uVar11;
    }
    uVar9 = uVar9 - (int)param_1[0x13];
    if ((uVar10 <= uVar9) ||
       (((uVar6 = 0, param_2 == 4 || uVar9 != 0 && (param_2 != 0)) &&
        ((uVar6 = 0, *(int *)(*param_1 + 8) == 0 && (uVar9 <= uVar11)))))) {
      uVar10 = uVar11;
      if (uVar9 <= uVar11) {
        uVar10 = uVar9;
      }
      if (param_2 == 4) {
        bVar4 = *(int *)(*param_1 + 8) == 0 && uVar9 <= uVar11;
      }
      else {
        bVar4 = false;
      }
      FUN_00132cb0(param_1,param_1[0xc] + param_1[0x13],uVar10,bVar4);
      param_1[0x13] = param_1[0x13] + (ulong)uVar10;
      FUN_0012f594(*param_1);
      uVar6 = 2;
      if (bVar4 == false) {
        uVar6 = 0;
      }
    }
  }
  else {
    uVar6 = 3;
  }
  return uVar6;
}

