
undefined8 FUN_00c2a354(long param_1,undefined8 param_2,undefined8 *param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  luaL_checkstack(param_1,2,"too many nested functions");
  puVar3 = *(undefined8 **)(param_1 + 0x28);
  uVar4 = **(undefined8 **)(param_1 + 0x20);
  *(undefined8 **)(param_1 + 0x28) = puVar3 + 1;
  *puVar3 = uVar4;
  lua_call(param_1,0,1);
  lVar2 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = lVar2 + -8;
  if (*(long *)(lVar2 + -8) == -1) {
    *param_3 = 0;
    return 0;
  }
  uVar1 = (uint)(*(long *)(lVar2 + -8) >> 0x2f);
  if ((0xfffffff2 < uVar1) && (uVar1 != 0xfffffffb)) {
                    /* WARNING: Subroutine does not return */
    FUN_00bfb3a0(param_1,0x3f6);
  }
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20) = *(undefined8 *)(lVar2 + -8);
  uVar4 = lua_tolstring(param_1,5,param_3);
  return uVar4;
}

