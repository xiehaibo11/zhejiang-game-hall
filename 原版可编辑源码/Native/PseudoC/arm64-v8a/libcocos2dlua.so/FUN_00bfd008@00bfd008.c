
void FUN_00bfd008(undefined8 param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_2 + 0x40);
  lVar6 = *(long *)(param_2 + 0x50);
  if ((*(uint *)(param_2 + 0xc) < param_3) || (lVar6 == 0)) {
    iVar3 = *(int *)(param_2 + 0x48);
    iVar4 = 0;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x48);
    if (param_3 == *(uint *)(param_2 + 0xc)) {
      iVar4 = iVar3 + *(int *)(param_2 + 0x4c);
    }
    else {
      iVar4 = iVar3;
      if (param_3 != 0) {
        param_3 = param_3 - 1;
        if (*(int *)(param_2 + 0x4c) < 0x100) {
          iVar4 = iVar3 + (uint)*(byte *)(lVar6 + (ulong)param_3);
        }
        else if (*(int *)(param_2 + 0x4c) < 0x10000) {
          iVar4 = iVar3 + (uint)*(ushort *)(lVar6 + (ulong)param_3 * 2);
        }
        else {
          iVar4 = iVar3 + *(int *)(lVar6 + (ulong)param_3 * 4);
        }
      }
    }
  }
  if (iVar3 == -1) {
    FUN_00c00c18(param_1,"builtin:%s",lVar5 + 0x18,iVar4);
    return;
  }
  if (*(char *)(lVar5 + 0x18) == '@') {
    lVar6 = lVar5 + 0x19;
    uVar1 = *(uint *)(lVar5 + 0x10);
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 - 1;
      if (uVar1 == 0) {
        FUN_00c00c18(param_1,"%s:%d",lVar6,iVar4);
        return;
      }
    } while ((*(char *)(lVar6 + (ulong)uVar1) != '\\') && (*(char *)(lVar6 + (ulong)uVar1) != '/'));
    FUN_00c00c18(param_1,"%s:%d",lVar6 + (ulong)uVar2,iVar4);
    return;
  }
  if (0x28 < *(uint *)(lVar5 + 0x10)) {
    FUN_00c00c18(param_1,"%p:%d",param_2,iVar4);
    return;
  }
  if (*(char *)(lVar5 + 0x18) != '=') {
    FUN_00c00c18(param_1,"\"%s\":%d",lVar5 + 0x18,iVar4);
    return;
  }
  FUN_00c00c18(param_1,"%s:%d",lVar5 + 0x19,iVar4);
  return;
}

