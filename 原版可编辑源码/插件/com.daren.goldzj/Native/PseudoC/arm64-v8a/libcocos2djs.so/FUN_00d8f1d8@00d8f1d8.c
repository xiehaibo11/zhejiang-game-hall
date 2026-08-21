
bool FUN_00d8f1d8(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (((((((*(int *)(param_1 + 400) == 0) && ((*(uint *)(param_1 + 0x3c) | 4) == 7)) &&
         (*(int *)(param_1 + 0x38) == 3)) &&
        ((*(int *)(param_1 + 0x40) == 2 && (*(int *)(param_1 + 0x90) == 3)))) &&
       ((*(int *)(param_1 + 0x18c) == 0 &&
        ((lVar2 = *(long *)(param_1 + 0x130), *(int *)(lVar2 + 8) == 2 &&
         (*(int *)(lVar2 + 0x68) == 1)))))) && (*(int *)(lVar2 + 200) == 1)) &&
     ((((*(int *)(lVar2 + 0xc) < 3 && (*(int *)(lVar2 + 0x6c) == 1)) &&
       (*(int *)(lVar2 + 0xcc) == 1)) &&
      (((iVar1 = *(int *)(lVar2 + 0x24), iVar1 == *(int *)(param_1 + 0x1a8) &&
        (*(int *)(lVar2 + 0x84) == iVar1)) &&
       ((*(int *)(lVar2 + 0xe4) == iVar1 &&
        ((iVar1 = *(int *)(lVar2 + 0x28), iVar1 == *(int *)(param_1 + 0x1ac) &&
         (*(int *)(lVar2 + 0x88) == iVar1)))))))))) {
    return *(int *)(lVar2 + 0xe8) == iVar1;
  }
  return false;
}

