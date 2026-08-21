
undefined8 FUN_00c2b4c0(long param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong *puVar3;
  
  if ((*(undefined8 **)(param_1 + 0x20) < *(undefined8 **)(param_1 + 0x28)) &&
     ((int)((long)**(undefined8 **)(param_1 + 0x20) >> 0x2f) == -9)) {
    lVar1 = lua_newthread();
    puVar3 = *(ulong **)(lVar1 + 0x28);
    puVar2 = *(ulong **)(param_1 + 0x20);
    *(ulong **)(lVar1 + 0x28) = puVar3 + 1;
    *puVar3 = *puVar2 & 0x7fffffffffff | 0xfffb800000000000;
    lVar1 = FUN_00c298e0(param_1,FUN_00c2b44c,0x23,1);
    *(long *)(lVar1 + 0x20) = *(long *)(param_1 + 0x10) + 0xa74;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00bfb554(param_1,1,6);
}

