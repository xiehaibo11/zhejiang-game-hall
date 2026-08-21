
int FUN_00a25000(long param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  uVar1 = (param_2 & 4) << 3 | (param_2 & 1) << 4;
  *(uint *)(param_1 + 0x1e4) = *(uint *)(param_1 + 0x1e4) & 0xffffffcf | uVar1;
  if ((param_2 & 1) == 0) {
    lVar3 = *(long *)(param_1 + 0x8b40);
    if (lVar3 != 0) {
      *(long *)(param_1 + 0x8b40) = 0;
      iVar2 = FUN_00a38f0c(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x8b50),lVar3,
                           *(undefined8 *)(param_1 + 0x8b48));
      (*(code *)PTR_free_01769a00)(lVar3);
      goto joined_r0x00a250a0;
    }
  }
  iVar2 = 0;
joined_r0x00a250a0:
  if ((uVar1 != 0x30) && (iVar2 == 0)) {
    FUN_00a27148(param_1,0);
  }
  return iVar2;
}

