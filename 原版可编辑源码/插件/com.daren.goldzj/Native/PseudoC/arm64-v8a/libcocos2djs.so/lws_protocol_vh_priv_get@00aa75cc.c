
undefined8 lws_protocol_vh_priv_get(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  char *__s2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar3 = *(long *)(param_1 + 400);
  if (lVar3 == 0) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x1dc);
  if (iVar1 < 1) {
    iVar2 = 0;
    if (iVar1 != 0) goto LAB_00aa76b0;
  }
  else {
    lVar4 = 0;
    lVar5 = (long)param_2 + (0x38 - *(long *)(param_1 + 0x188));
    do {
      lVar5 = lVar5 + -0x38;
      if (lVar5 == 0) break;
      lVar4 = lVar4 + 1;
    } while (lVar4 < iVar1);
    iVar2 = (int)lVar4;
    if (iVar2 != iVar1) goto LAB_00aa76b0;
  }
  if (iVar1 < 1) {
    iVar2 = 0;
    if (iVar1 == 0) goto LAB_00aa768c;
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + 0x188);
    __s2 = (char *)*param_2;
    lVar5 = 0;
    do {
      iVar2 = strcmp((char *)*puVar6,__s2);
      if (iVar2 == 0) break;
      lVar5 = lVar5 + 1;
      puVar6 = puVar6 + 7;
    } while (lVar5 < iVar1);
    iVar2 = (int)lVar5;
    if (iVar2 == iVar1) {
LAB_00aa768c:
      _lws_log(1,"%s: unknown protocol %p\n","lws_protocol_vh_priv_get",param_2);
      return 0;
    }
  }
LAB_00aa76b0:
  return *(undefined8 *)(lVar3 + (long)iVar2 * 8);
}

