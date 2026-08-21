
void FUN_00c088e8(long param_1,uint param_2,undefined1 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  lVar1 = (ulong)param_2 * 8;
  lVar3 = *(long *)(param_1 + 0x48);
  *(undefined1 *)(lVar3 + lVar1 + 1) = param_3;
  if (*(char *)(lVar3 + lVar1) != 'X') {
    return;
  }
  iVar2 = (*(uint *)(*(long *)(param_1 + 0x48) + lVar1) >> 0x10) - 0x8000;
  if (iVar2 != -1) {
    iVar2 = param_2 + 1 + iVar2;
    if (iVar2 != -1) {
      if (param_2 == *(uint *)(param_1 + 0x28)) {
        *(uint *)(param_1 + 0x2c) = param_2;
        FUN_00c07bd8(param_1,param_1 + 0x30);
      }
      else {
        FUN_00c07d88(param_1,iVar2,param_2,0xff,param_2);
      }
    }
  }
  *(undefined1 *)(lVar3 + lVar1) = 0x32;
  *(undefined2 *)(lVar3 + lVar1 + 2) = 0x7fff;
  return;
}

