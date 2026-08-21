
undefined * FUN_00af68fc(uint *param_1,char *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  
  if (param_2 != (char *)0x0) {
    uVar1 = *param_1;
    uVar3 = uVar1 >> 5 & 1;
    if ((uVar1 >> 3 & 1) == 0) {
      uVar6 = 0;
      puVar5 = &DAT_016adce0;
      do {
        uVar2 = *(ushort *)(puVar5 + 0x18);
        if ((((uVar2 >> 3 & 1) == 0) && (((uVar1 >> 2 & 1) != 0 || ((uVar2 >> 2 & 1) == 0)))) &&
           (((uVar2 >> 5 ^ 0xffff) & 1) != 0 || uVar3 != 0)) {
          if ((((uVar1 & 1) != 0) && (*(char **)(puVar5 + 0x10) != (char *)0x0)) &&
             (iVar4 = strcmp(*(char **)(puVar5 + 0x10),param_2), iVar4 == 0)) {
            return puVar5;
          }
          if ((((uVar1 >> 1 & 1) != 0) && (*(char **)(puVar5 + 8) != (char *)0x0)) &&
             (iVar4 = strcasecmp(*(char **)(puVar5 + 8),param_2), iVar4 == 0)) {
            return puVar5;
          }
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 0x20;
      } while (uVar6 < 0x23);
    }
    else if ((uVar1 >> 2 & 1) == 0) {
      uVar6 = 0;
      puVar5 = &DAT_016adce0;
      do {
        if (((*(ushort *)(puVar5 + 0x18) >> 2 & 1) == 0) &&
           (((*(ushort *)(puVar5 + 0x18) >> 5 ^ 0xffff) & 1) != 0 || uVar3 != 0)) {
          if (((uVar1 & 1) != 0) &&
             ((*(char **)(puVar5 + 0x10) != (char *)0x0 &&
              (iVar4 = strcmp(*(char **)(puVar5 + 0x10),param_2), iVar4 == 0)))) {
            return puVar5;
          }
          if ((((uVar1 >> 1 & 1) != 0) && (*(char **)(puVar5 + 8) != (char *)0x0)) &&
             (iVar4 = strcasecmp(*(char **)(puVar5 + 8),param_2), iVar4 == 0)) {
            return puVar5;
          }
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 0x20;
      } while (uVar6 < 0x23);
    }
    else {
      uVar6 = 0;
      puVar5 = &DAT_016adce0;
      do {
        if (((*(ushort *)(puVar5 + 0x18) >> 5 ^ 0xffff) & 1) != 0 || uVar3 != 0) {
          if ((((uVar1 & 1) != 0) && (*(char **)(puVar5 + 0x10) != (char *)0x0)) &&
             (iVar4 = strcmp(*(char **)(puVar5 + 0x10),param_2), iVar4 == 0)) {
            return puVar5;
          }
          if ((((uVar1 >> 1 & 1) != 0) && (*(char **)(puVar5 + 8) != (char *)0x0)) &&
             (iVar4 = strcasecmp(*(char **)(puVar5 + 8),param_2), iVar4 == 0)) {
            return puVar5;
          }
        }
        uVar6 = uVar6 + 1;
        puVar5 = puVar5 + 0x20;
      } while (uVar6 < 0x23);
    }
  }
  return (undefined *)0x0;
}

