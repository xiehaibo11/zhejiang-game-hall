
undefined8 FUN_00bfc604(undefined8 *param_1,long param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  if (param_3 == -1) {
    FUN_00c1a5d8(param_1,"[builtin:",9);
    FUN_00c1a6b4(param_1,param_2);
    puVar3 = (undefined1 *)*param_1;
    if ((int)param_1[1] == (int)puVar3) {
      puVar3 = (undefined1 *)FUN_00c1a4a8(param_1,1);
    }
    *puVar3 = 0x5d;
    *param_1 = puVar3 + 1;
    return 0;
  }
  if ((*(char *)(param_2 + 0x18) != '@') && (*(char *)(param_2 + 0x18) != '=')) {
    FUN_00c1a5d8(param_1,"[string]",8);
    return 1;
  }
  lVar4 = param_2 + 0x19;
  iVar5 = *(int *)(param_2 + 0x10) + -1;
  if ((param_4 != 0) && (iVar2 = *(int *)(param_2 + 0x10) + -2, -1 < iVar2)) {
    lVar6 = (long)iVar2;
    cVar1 = *(char *)(lVar4 + lVar6);
    while ((cVar1 != '\\' && (cVar1 != '/'))) {
      lVar6 = lVar6 + -1;
      iVar2 = iVar2 + -1;
      if (iVar2 == -1) goto LAB_00bfc694;
      cVar1 = *(char *)(lVar4 + lVar6);
    }
    iVar5 = (iVar5 - iVar2) + -1;
    lVar4 = lVar4 + lVar6 + 1;
  }
LAB_00bfc694:
  FUN_00c1a5d8(param_1,lVar4,iVar5);
  return 1;
}

