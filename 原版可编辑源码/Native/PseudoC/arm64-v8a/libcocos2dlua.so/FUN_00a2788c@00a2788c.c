
uint FUN_00a2788c(undefined8 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  
  plVar6 = (long *)*param_1;
  lVar5 = *plVar6;
  if (*(char *)(lVar5 + 0x8d08) != '\0') {
    return 0;
  }
  FUN_00a401d8(lVar5,plVar6);
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar5 + 0x1f8));
  *(undefined8 *)(lVar5 + 0x1f8) = 0;
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar5 + 0x1f0));
  *(undefined8 *)(lVar5 + 0x1f0) = 0;
  if ((param_2 < 0x2b) && ((1L << ((ulong)param_2 & 0x3f) & 0x40004800000U) != 0)) {
    param_3 = 1;
  }
  if (*(code **)(plVar6[0x80] + 0x18) != (code *)0x0) {
    param_2 = (**(code **)(plVar6[0x80] + 0x18))(plVar6,param_2,param_3 & 1);
  }
  uVar7 = 0x2a;
  if ((param_2 != 0x2a) && (iVar1 = FUN_00a30680(plVar6), iVar1 == 0 || param_2 != 0)) {
    uVar7 = param_2;
  }
  if (((*(long *)(plVar6[0x8f] + 0x18) + *(long *)(plVar6[0x90] + 0x18) != 0) &&
      (*(char *)(lVar5 + 0x62a) == '\0')) && (*(char *)((long)plVar6 + 0x3b9) == '\0')) {
    *(undefined8 *)(lVar5 + 0x10) = 0;
    return 0;
  }
  *(char *)(lVar5 + 0x8d08) = '\x01';
  if (plVar6[0xb] != 0) {
    FUN_00a301e8(lVar5);
    plVar6[0xb] = 0;
  }
  (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar5 + 0x8b40));
  *(undefined8 *)(lVar5 + 0x8b40) = 0;
  uVar2 = uVar7;
  if ((((*(char *)(lVar5 + 0x62a) != '\0') && ((int)plVar6[0x96] != 2)) && ((int)plVar6[0x9a] != 2))
     || ((param_3 & 1) != 0 || *(char *)((long)plVar6 + 0x3b9) != '\0')) {
    uVar2 = FUN_00a3fd90(plVar6,param_3 & 1);
    if (uVar2 == 0 || uVar7 != 0) {
      uVar2 = uVar7;
    }
    goto LAB_00a27ad4;
  }
  uVar4 = *(ulong *)(*(long *)(lVar5 + 0x60) + 0x120);
  if ((long)uVar4 < 0) {
    uVar4 = (long)*(int *)(*(long *)(lVar5 + 0x60) + 0x18) << 2;
    *(undefined1 *)(plVar6 + 9) = 0;
    if (uVar4 != 0) goto LAB_00a27a28;
joined_r0x00a27acc:
    if (plVar6 != (long *)0x0) {
LAB_00a27a90:
      *(long **)(lVar5 + 0xaf0) = plVar6;
      plVar3 = plVar6 + 0x1f;
      if (*(char *)((long)plVar6 + 0x3be) == '\0') {
        plVar3 = plVar6 + 0x16;
      }
      FUN_00a38740(lVar5,"Connection #%ld to host %s left intact\n",plVar6[10],plVar3[3]);
      goto LAB_00a27ad4;
    }
  }
  else {
    *(undefined1 *)(plVar6 + 9) = 0;
    if (uVar4 == 0) goto joined_r0x00a27acc;
LAB_00a27a28:
    if (*(ulong *)(*(long *)(lVar5 + 0xad0) + 0x30) <= uVar4) goto joined_r0x00a27acc;
    FUN_00a38740(lVar5,"Connection cache is full, closing the oldest one.\n");
    plVar3 = (long *)FUN_00a402d0(lVar5);
    if (plVar3 == (long *)0x0) goto joined_r0x00a27acc;
    *plVar3 = lVar5;
    FUN_00a3fd90(plVar3,0);
    if (plVar3 != plVar6) goto LAB_00a27a90;
  }
  *(undefined8 *)(lVar5 + 0xaf0) = 0;
LAB_00a27ad4:
  *param_1 = 0;
  FUN_00a3992c(lVar5);
  return uVar2;
}

