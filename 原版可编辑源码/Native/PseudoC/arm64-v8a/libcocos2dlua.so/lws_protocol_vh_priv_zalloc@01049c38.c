
undefined8 lws_protocol_vh_priv_zalloc(long param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *__s2;
  ulong uVar5;
  undefined8 *puVar6;
  
  if (*(long *)(param_1 + 400) == 0) {
    lVar3 = FUN_0104b1fc((long)*(int *)(param_1 + 0x1dc) << 3,"protocol_vh_privs");
    *(long *)(param_1 + 400) = lVar3;
    if (lVar3 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1dc);
  if (iVar1 < 1) {
    uVar5 = 0;
    if (iVar1 != 0) goto LAB_01049d18;
  }
  else {
    uVar5 = 0;
    lVar3 = (long)param_2 + (0x38 - *(long *)(param_1 + 0x188));
    do {
      lVar3 = lVar3 + -0x38;
      if (lVar3 == 0) break;
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < (long)iVar1);
    if ((int)uVar5 != iVar1) goto LAB_01049d18;
  }
  if (iVar1 < 1) {
    uVar5 = 0;
    if (iVar1 == 0) {
      return 0;
    }
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x188);
    __s2 = (char *)*param_2;
    uVar5 = 0;
    do {
      iVar2 = strcmp((char *)*puVar6,__s2);
      if (iVar2 == 0) break;
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 7;
    } while ((long)uVar5 < (long)iVar1);
    if ((int)uVar5 == iVar1) {
      return 0;
    }
  }
LAB_01049d18:
  uVar4 = FUN_0104b1fc((long)param_3,"vh priv");
  uVar5 = -(uVar5 >> 0x1f & 1) & 0xfffffff800000000 | (uVar5 & 0xffffffff) << 3;
  *(undefined8 *)(*(long *)(param_1 + 400) + uVar5) = uVar4;
  return *(undefined8 *)(*(long *)(param_1 + 400) + uVar5);
}

