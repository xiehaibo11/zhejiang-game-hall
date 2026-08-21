
char * FUN_00e5ddfc(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int local_54;
  
  local_54 = 0;
  pcVar2 = (char *)FUN_00e1388c(param_1,(ulong)*(ushort *)(param_3 + 8) + 1,&local_54);
  if (local_54 == 0) {
    local_54 = FUN_00e1bb5c(param_2,*(undefined8 *)(param_3 + 0x10));
    if ((local_54 == 0) &&
       (local_54 = FUN_00e1d718(param_2,*(undefined2 *)(param_3 + 8)), local_54 == 0)) {
      pcVar5 = pcVar2;
      iVar1 = 0;
      if (*(ushort *)(param_3 + 8) != 0) {
        iVar6 = -(uint)*(ushort *)(param_3 + 8);
        pcVar3 = *(char **)(param_2 + 0x40);
        pcVar4 = pcVar2;
        do {
          iVar1 = (*param_4)((long)*pcVar3);
          if (iVar1 == 0) {
            FUN_00e1d90c(param_2);
            goto LAB_00e5de78;
          }
          iVar6 = iVar6 + 1;
          pcVar5 = pcVar4 + 1;
          *pcVar4 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar4 = pcVar5;
          iVar1 = local_54;
        } while (iVar6 != 0);
      }
      local_54 = iVar1;
      *pcVar5 = '\0';
      FUN_00e1d90c(param_2);
      return pcVar2;
    }
LAB_00e5de78:
    FUN_00e139fc(param_1,pcVar2);
    *(undefined8 *)(param_3 + 0x10) = 0;
    *(undefined2 *)(param_3 + 8) = 0;
    FUN_00e139fc(param_1,*(undefined8 *)(param_3 + 0x18));
    *(undefined8 *)(param_3 + 0x18) = 0;
  }
  return (char *)0x0;
}

