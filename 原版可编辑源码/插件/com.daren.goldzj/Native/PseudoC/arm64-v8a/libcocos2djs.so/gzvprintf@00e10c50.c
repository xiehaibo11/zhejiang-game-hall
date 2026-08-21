
int gzvprintf(long param_1,char *param_2,undefined8 *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  if (param_1 == 0) {
    return -1;
  }
  if (((*(int *)(param_1 + 0x18) == 0x79b1) && (*(int *)(param_1 + 0x6c) == 0)) &&
     ((*(int *)(param_1 + 0x28) != 0 || (iVar3 = FUN_00e1075c(param_1), iVar3 != -1)))) {
    if (*(int *)(param_1 + 0x68) != 0) {
      lVar5 = *(long *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x68) = 0;
      if ((*(int *)(param_1 + 0x80) != 0) && (iVar3 = FUN_00e10844(param_1,0), iVar3 == -1)) {
        return 0;
      }
      if (lVar5 != 0) {
        bVar2 = false;
        do {
          uVar1 = (uint)lVar5;
          if ((long)(ulong)*(uint *)(param_1 + 0x28) <= lVar5) {
            uVar1 = *(uint *)(param_1 + 0x28);
          }
          if (!bVar2) {
            memset(*(void **)(param_1 + 0x30),0,(ulong)uVar1);
          }
          *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_1 + 0x30);
          *(uint *)(param_1 + 0x80) = uVar1;
          *(ulong *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (ulong)uVar1;
          iVar3 = FUN_00e10844(param_1,0);
          if (iVar3 == -1) {
            return 0;
          }
          lVar5 = lVar5 - (ulong)uVar1;
          bVar2 = true;
        } while (lVar5 != 0);
      }
    }
    if ((*(int *)(param_1 + 0x80) == 0) || (iVar3 = FUN_00e10844(param_1,0), iVar3 != -1)) {
      iVar3 = *(int *)(param_1 + 0x28);
      lVar5 = (long)iVar3 - 1;
      *(undefined1 *)(*(long *)(param_1 + 0x30) + lVar5) = 0;
      uStack_58 = param_3[3];
      local_60 = param_3[2];
      uStack_68 = param_3[1];
      local_70 = *param_3;
      iVar4 = vsnprintf(*(char **)(param_1 + 0x30),(long)iVar3,param_2,&local_70);
      if (iVar4 < 1) {
        return 0;
      }
      if (iVar3 <= iVar4) {
        return 0;
      }
      if (*(char *)(*(long *)(param_1 + 0x30) + lVar5) == '\0') {
        *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x30);
        *(int *)(param_1 + 0x80) = iVar4;
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + (long)iVar4;
        return iVar4;
      }
    }
  }
  return 0;
}

