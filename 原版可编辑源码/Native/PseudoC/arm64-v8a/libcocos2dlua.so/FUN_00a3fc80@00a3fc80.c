
int FUN_00a3fc80(char *param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  size_t sVar4;
  undefined8 local_40;
  long local_38;
  
  puVar2 = &local_40;
  local_40 = 0;
  local_38 = 0;
  if (param_1 != (char *)0x0) {
    sVar4 = strlen(param_1);
    plVar1 = &local_38;
    if (param_2 == (long *)0x0) {
      plVar1 = (long *)0x0;
    }
    if (param_3 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    iVar3 = FUN_00a43ff4(param_1,sVar4,plVar1,puVar2,0);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  if (param_2 == (long *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    if ((param_1 != (char *)0x0) && (local_38 == 0)) {
      if (*param_1 == ':') {
        local_38 = (*(code *)PTR_strdup_01769a10)(&DAT_013c996e);
        iVar3 = 0x1b;
        if (local_38 != 0) {
          iVar3 = 0;
        }
      }
      else {
        iVar3 = 0;
      }
    }
    (*(code *)PTR_free_01769a00)(*param_2);
    *param_2 = local_38;
  }
  if (param_3 != (undefined8 *)0x0) {
    (*(code *)PTR_free_01769a00)(*param_3);
    *param_3 = local_40;
  }
  return iVar3;
}

