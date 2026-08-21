
undefined8 FUN_00c137e8(long param_1)

{
  int iVar1;
  ulong *puVar2;
  ulong uVar3;
  long *plVar4;
  size_t sVar5;
  char *local_8;
  
  plVar4 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
  plVar4[2] = param_1;
  puVar2 = (ulong *)FUN_00c29a84(param_1,1);
  if ((puVar2 + 1 < *(ulong **)(param_1 + 0x28)) && (puVar2[1] != 0xffffffffffffffff)) {
    iVar1 = FUN_00c1363c(param_1,2);
    sVar5 = (size_t)iVar1;
    FUN_00c22594(plVar4,*plVar4 + 0x1b0,&local_8,puVar2,0x100);
  }
  else {
    FUN_00c22594(plVar4,*plVar4 + 0x1c8,&local_8,puVar2,0x100);
    sVar5 = strlen(local_8);
  }
  *(ulong **)(param_1 + 0x28) = puVar2 + 1;
  uVar3 = FUN_00bfba1c(param_1,local_8,sVar5);
  *puVar2 = uVar3 | 0xfffd800000000000;
  if (*(ulong *)(*(long *)(param_1 + 0x10) + 0x20) < *(ulong *)(*(long *)(param_1 + 0x10) + 0x28)) {
    return 1;
  }
  FUN_00c19f80(param_1);
  return 1;
}

