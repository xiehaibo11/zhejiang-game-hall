
undefined8 pvmp3_header_sync(long param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + 7U & 8;
  uVar4 = getUpTo17bits(param_1,0xb);
  uVar2 = *(uint *)(param_1 + 8);
  for (; bVar3 = (uint)(iVar1 << 3) <= uVar2, (~uVar4 & 0x7ff) != 0;
      uVar4 = (uVar5 | uVar4 << 8) & 0xffff) {
    if (bVar3) goto LAB_00e9d9b8;
    uVar5 = getUpTo9bits(param_1,8);
    uVar2 = *(uint *)(param_1 + 8);
  }
  if (bVar3) {
LAB_00e9d9b8:
    uVar6 = 0xc;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

