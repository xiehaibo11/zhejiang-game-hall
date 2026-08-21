
undefined8 FUN_00c2a1d8(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  ulong *puVar4;
  
  iVar1 = FUN_00c29ed8(param_1,1,2,&DAT_01411800);
  uVar2 = FUN_00c29da0(param_1,2,0);
  if (iVar1 == 3) {
    **(double **)(param_1 + 0x28) =
         (double)*(ulong *)(*(long *)(param_1 + 0x10) + 0x20) * 0.0009765625;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
    return 1;
  }
  iVar3 = lua_gc(param_1,iVar1,uVar2);
  puVar4 = *(ulong **)(param_1 + 0x28);
  if ((iVar1 - 5U & 0xfffffffb) != 0) {
    *(int *)puVar4 = iVar3;
    *(int *)((long)puVar4 + 4) = -0x70000;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
    return 1;
  }
  *puVar4 = ~((ulong)(iVar3 + 1) << 0x2f);
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 8;
  return 1;
}

