
undefined8 FUN_00c14ff8(long param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined4 local_4;
  
  puVar2 = (undefined4 *)__errno();
  puVar4 = *(undefined4 **)(param_1 + 0x20);
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  uVar1 = *puVar2;
  if (puVar4 < puVar3) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x10) + 0x168);
    plVar5[2] = param_1;
    FUN_00c22594(plVar5,*plVar5 + 0xd8,&local_4,puVar4,0x100);
    puVar3 = *(undefined4 **)(param_1 + 0x28);
    *puVar2 = local_4;
  }
  *(undefined4 **)(param_1 + 0x28) = puVar3 + 2;
  *puVar3 = uVar1;
  puVar3[1] = 0xfff90000;
  return 1;
}

