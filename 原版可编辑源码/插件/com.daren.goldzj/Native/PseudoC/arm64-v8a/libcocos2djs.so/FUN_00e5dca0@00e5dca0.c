
char * FUN_00e5dca0(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int local_54;
  
  local_54 = 0;
  pcVar3 = (char *)FUN_00e1388c(param_1,(*(ushort *)(param_3 + 8) >> 1) + 1,&local_54);
  if (local_54 == 0) {
    local_54 = FUN_00e1bb5c(param_2,*(undefined8 *)(param_3 + 0x10));
    if ((local_54 == 0) &&
       (local_54 = FUN_00e1d718(param_2,*(undefined2 *)(param_3 + 8)), local_54 == 0)) {
      uVar4 = (uint)(*(ushort *)(param_3 + 8) >> 1);
      pcVar7 = pcVar3;
      iVar2 = 0;
      if (uVar4 != 0) {
        pcVar5 = *(char **)(param_2 + 0x40);
        iVar8 = -uVar4;
        pcVar6 = pcVar3;
        do {
          if ((*pcVar5 != '\0') || (iVar2 = (*param_4)((long)pcVar5[1]), iVar2 == 0)) {
            FUN_00e1d90c(param_2);
            goto LAB_00e5dd7c;
          }
          pcVar1 = pcVar5 + 1;
          iVar8 = iVar8 + 1;
          pcVar5 = pcVar5 + 2;
          pcVar7 = pcVar6 + 1;
          *pcVar6 = *pcVar1;
          pcVar6 = pcVar7;
          iVar2 = local_54;
        } while (iVar8 != 0);
      }
      local_54 = iVar2;
      *pcVar7 = '\0';
      FUN_00e1d90c(param_2);
      return pcVar3;
    }
LAB_00e5dd7c:
    FUN_00e139fc(param_1,pcVar3);
    *(undefined2 *)(param_3 + 8) = 0;
    *(undefined8 *)(param_3 + 0x10) = 0;
    FUN_00e139fc(param_1,*(undefined8 *)(param_3 + 0x18));
    *(undefined8 *)(param_3 + 0x18) = 0;
  }
  return (char *)0x0;
}

