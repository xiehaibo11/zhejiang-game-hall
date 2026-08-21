
void FUN_00c13a0c(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x168);
  *(long *)(lVar3 + 0x10) = param_1;
  uVar1 = FUN_00c132c0(param_1,lVar3,0);
  uVar2 = FUN_00c0ecb0(lVar3,uVar1);
  lVar3 = *(long *)(param_1 + 0x28);
  *(int *)(lVar3 + -8) = 1 << (uVar2 >> 0x10 & 0xf);
  *(undefined4 *)(lVar3 + -4) = 0xfff90000;
  return;
}

