
undefined8 FUN_00917dec(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = auxiliar_checkgroup(param_1,"tcp{any}",1);
  iVar1 = buffer_isempty(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00917d7c with catch @ 00917e14 */
                    /* catch() { ... } // from try @ 00917d94 with catch @ 00917e18 */
  lua_pushboolean(param_1,iVar1 == 0);
  return 1;
}

