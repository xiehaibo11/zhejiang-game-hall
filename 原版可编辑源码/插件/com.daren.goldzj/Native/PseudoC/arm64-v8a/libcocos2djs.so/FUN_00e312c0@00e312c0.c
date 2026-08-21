
undefined4 FUN_00e312c0(long param_1,uint param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x4b9) == '\0') {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x4c0);
  if (lVar4 != 0) {
    if (*(char *)(lVar4 + 0x50) == '\0') {
      uVar2 = FUN_00e31568(param_1,1);
      lVar4 = *(long *)(param_1 + 0x4c0);
      *(undefined4 *)(lVar4 + 0x54) = uVar2;
      cVar1 = *(char *)(lVar4 + 0x51);
    }
    else {
      cVar1 = *(char *)(lVar4 + 0x51);
    }
    if (cVar1 != '\0') {
      lVar4 = *(long *)(lVar4 + 0x58);
      if (*(long *)(lVar4 + 0x30) == 0) {
        if (**(uint **)(lVar4 + 8) <= param_2) {
          return 6;
        }
        uVar2 = 0;
      }
      else {
        if (*(uint *)(lVar4 + 0x20) <= param_2) {
          param_2 = *(uint *)(lVar4 + 0x20) - 1;
        }
        uVar2 = *(undefined4 *)(*(long *)(lVar4 + 0x28) + (ulong)param_2 * 4);
        param_2 = *(uint *)(*(long *)(lVar4 + 0x30) + (ulong)param_2 * 4);
      }
      iVar3 = FUN_00e31898(param_1,lVar4,uVar2,param_2);
      *param_3 = *param_3 + iVar3;
      return 0;
    }
    return *(undefined4 *)(lVar4 + 0x54);
  }
  return 0;
}

