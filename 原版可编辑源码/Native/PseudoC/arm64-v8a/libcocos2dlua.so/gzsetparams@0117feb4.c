
ulong gzsetparams(long param_1,int param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x18) != 0x79b1)) || (*(int *)(param_1 + 0x6c) != 0)) {
    uVar4 = 0xfffffffe;
  }
  else if ((*(int *)(param_1 + 0x58) == param_2) && (*(int *)(param_1 + 0x5c) == param_3)) {
    uVar4 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x68) != 0) {
      lVar5 = *(long *)(param_1 + 0x60);
      *(undefined4 *)(param_1 + 0x68) = 0;
      if ((*(int *)(param_1 + 0x80) != 0) && (uVar4 = FUN_0117f76c(param_1,0), (int)uVar4 == -1)) {
        return uVar4;
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
          uVar4 = FUN_0117f76c(param_1,0);
          if ((int)uVar4 == -1) {
            return uVar4;
          }
          lVar5 = lVar5 - (ulong)uVar1;
          bVar2 = true;
        } while (lVar5 != 0);
      }
    }
    if (*(int *)(param_1 + 0x28) != 0) {
      if ((*(int *)(param_1 + 0x80) != 0) && (iVar3 = FUN_0117f76c(param_1,1), iVar3 == -1)) {
        return (ulong)*(uint *)(param_1 + 0x6c);
      }
      deflateParams(param_1 + 0x78,param_2,param_3);
    }
    uVar4 = 0;
    *(int *)(param_1 + 0x58) = param_2;
    *(int *)(param_1 + 0x5c) = param_3;
  }
  return uVar4;
}

