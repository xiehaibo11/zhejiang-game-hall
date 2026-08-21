
undefined8 FUN_00c2f06c(long param_1)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = *(ulong **)(param_1 + 0x20);
  if (puVar1 == *(ulong **)(param_1 + 0x28)) {
    *(ulong **)(param_1 + 0x28) = puVar1 + 1;
    *puVar1 = 0xffffffffffffffff;
    puVar1 = *(ulong **)(param_1 + 0x20);
  }
  if (*puVar1 == 0xffffffffffffffff) {
    *puVar1 = *(ulong *)(*(long *)(param_1 + 0x10) + 0x290) | 0xfff9800000000000;
  }
  else {
    lVar2 = FUN_00c2ef90(param_1,&DAT_01411488);
    lVar3 = *(long *)(param_1 + 0x28);
    *(undefined4 *)(lVar2 + 8) = 4;
    *(long *)(param_1 + 0x28) = lVar3 + -8;
    **(ulong **)(param_1 + 0x20) = *(ulong *)(lVar3 + -8) & 0x7fffffffffff | 0xfff9800000000000;
  }
  if ((int)(*(long *)(param_1 + 0x28) - *(long *)(param_1 + 0x20) >> 3) < 0x3d) {
    lua_pushcclosure(param_1,FUN_00c2ec94);
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb3a0(param_1,0x3db);
}

