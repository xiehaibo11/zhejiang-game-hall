
void FUN_0012c45c(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_2;
  if ((*(int *)(param_1 + 0x44) == 0) &&
     (uVar2 = (ulong)(uint)(*(int *)(param_1 + 4) - *(int *)(param_1 + 0x40)),
     lVar1 = *(long *)(param_1 + 0x28) + uVar2,
     (ulong)(param_2 - *(long *)(param_1 + 0x28)) <= uVar2)) {
    lVar1 = param_2;
  }
  LzmaDec_DecodeReal_3(param_1,lVar1);
  if ((*(int *)(param_1 + 0x44) == 0) && (*(uint *)(param_1 + 4) <= *(uint *)(param_1 + 0x40))) {
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 4);
  }
  return;
}

