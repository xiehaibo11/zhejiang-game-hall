
undefined8 luaL_execresult(long param_1,uint param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (param_2 != 0xffffffff) {
    if ((param_2 + 1 & 0x7f) < 2) {
      if (((param_2 & 0x7f) == 0) && (param_2 = param_2 >> 8 & 0xff, param_2 == 0)) {
        puVar3 = *(undefined8 **)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x28) = puVar3 + 1;
        *puVar3 = 0xfffeffffffffffff;
      }
      else {
        puVar3 = *(undefined8 **)(param_1 + 0x28);
        *(undefined8 **)(param_1 + 0x28) = puVar3 + 1;
        *puVar3 = 0xffffffffffffffff;
      }
      lua_pushlstring(param_1,&DAT_01410cd8,4);
    }
    else {
      puVar3 = *(undefined8 **)(param_1 + 0x28);
      param_2 = param_2 & 0x7f;
      *(undefined8 **)(param_1 + 0x28) = puVar3 + 1;
      *puVar3 = 0xffffffffffffffff;
      lua_pushlstring(param_1,"signal",6);
    }
    puVar1 = *(uint **)(param_1 + 0x28);
    *(uint **)(param_1 + 0x28) = puVar1 + 2;
    *puVar1 = param_2;
    puVar1[1] = 0xfff90000;
    return 3;
  }
  uVar2 = luaL_fileresult(param_1,0,0);
  return uVar2;
}

