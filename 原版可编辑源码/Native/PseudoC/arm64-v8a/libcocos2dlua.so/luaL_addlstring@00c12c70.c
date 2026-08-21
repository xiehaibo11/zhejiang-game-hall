
void luaL_addlstring(long *param_1,undefined1 *param_2,long param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  do {
    puVar3 = param_2;
    if (param_3 == 0) {
      return;
    }
    while (plVar1 = (long *)*param_1, plVar1 < param_1 + 0x83) {
      *param_1 = (long)plVar1 + 1;
      param_3 = param_3 + -1;
      *(undefined1 *)plVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      if (param_3 == 0) {
        return;
      }
    }
    luaL_prepbuffer(param_1);
    puVar2 = (undefined1 *)*param_1;
    param_3 = param_3 + -1;
    *param_1 = (long)(puVar2 + 1);
    param_2 = puVar3 + 1;
    *puVar2 = *puVar3;
  } while( true );
}

