
undefined8 FUN_00c2ad44(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if ((*(undefined8 **)(param_1 + 0x20) < *(undefined8 **)(param_1 + 0x28)) &&
     ((int)((long)**(undefined8 **)(param_1 + 0x20) >> 0x2f) == -9)) {
    lVar1 = lua_newthread();
    puVar3 = *(ulong **)(param_1 + 0x20);
    puVar2 = *(ulong **)(lVar1 + 0x28);
    *(ulong **)(lVar1 + 0x28) = puVar2 + 1;
    *puVar2 = *puVar3 & 0x7fffffffffff | 0xfffb800000000000;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,1,6);
}

