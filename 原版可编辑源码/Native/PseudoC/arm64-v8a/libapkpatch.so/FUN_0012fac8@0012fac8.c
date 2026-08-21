
undefined4 FUN_0012fac8(long *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  
  while ((*(int *)((long)param_1 + 0xb4) != 0 ||
         (FUN_0012e71c(param_1), *(int *)((long)param_1 + 0xb4) != 0))) {
    uVar1 = *(uint *)((long)param_1 + 0x170c);
    *(undefined4 *)(param_1 + 0x14) = 0;
    bVar4 = *(byte *)(param_1[0xc] + (ulong)*(uint *)((long)param_1 + 0xac));
    lVar5 = param_1[0x2e0];
    *(undefined2 *)(param_1[0x2e2] + (ulong)uVar1 * 2) = 0;
    *(uint *)((long)param_1 + 0x170c) = uVar1 + 1;
    *(byte *)(lVar5 + (ulong)uVar1) = bVar4;
    iVar2 = *(int *)((long)param_1 + 0xb4);
    iVar3 = *(int *)((long)param_1 + 0xac);
    *(short *)((long)param_1 + (ulong)bVar4 * 4 + 0xd4) =
         *(short *)((long)param_1 + (ulong)bVar4 * 4 + 0xd4) + 1;
    *(int *)((long)param_1 + 0xb4) = iVar2 + -1;
    uVar1 = iVar3 + 1;
    *(uint *)((long)param_1 + 0xac) = uVar1;
    if (*(int *)((long)param_1 + 0x170c) == (int)param_1[0x2e1] + -1) {
      uVar6 = param_1[0x13];
      if ((long)uVar6 < 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = param_1[0xc] + (uVar6 & 0xffffffff);
      }
      FUN_00132fbc(param_1,lVar5,uVar1 - uVar6,0);
      param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
      FUN_0012f594(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  *(undefined4 *)((long)param_1 + 0x172c) = 0;
  if (param_2 != 4) {
    if (*(int *)((long)param_1 + 0x170c) != 0) {
      uVar6 = param_1[0x13];
      if ((long)uVar6 < 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = param_1[0xc] + (uVar6 & 0xffffffff);
      }
      FUN_00132fbc(param_1,lVar5,*(uint *)((long)param_1 + 0xac) - uVar6,0);
      param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
      FUN_0012f594(*param_1);
      if (*(int *)(*param_1 + 0x20) == 0) {
        return 0;
      }
    }
    return 1;
  }
  uVar6 = param_1[0x13];
  if ((long)uVar6 < 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_1[0xc] + (uVar6 & 0xffffffff);
  }
  FUN_00132fbc(param_1,lVar5,*(uint *)((long)param_1 + 0xac) - uVar6,1);
  param_1[0x13] = (ulong)*(uint *)((long)param_1 + 0xac);
  FUN_0012f594(*param_1);
  if (*(int *)(*param_1 + 0x20) != 0) {
    return 3;
  }
  return 2;
}

