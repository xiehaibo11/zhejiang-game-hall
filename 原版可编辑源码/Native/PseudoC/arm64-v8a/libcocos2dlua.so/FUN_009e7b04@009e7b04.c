
undefined8 FUN_009e7b04(lua_State *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  iVar2 = lua_gettop();
  if (iVar2 != 0) {
    luaL_argerror(param_1,0,"lua_universe_Http_new: expected 0 argument");
  }
  puVar3 = operator_new(0x70);
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[0xd] = 0;
  puVar3[0xc] = 0;
  *puVar3 = &PTR__Http_016a10c8;
  puVar3[6] = 0;
  lVar4 = universe::core::Service::getInstance();
  puVar5 = (undefined8 *)puVar3[6];
  uVar7 = *(long *)(lVar4 + 0xe8) - *(long *)(lVar4 + 0xe0);
  if (puVar5 == (undefined8 *)0x0) {
    uVar1 = (long)(uVar7 * 0x20000000) >> 0x20;
    uVar6 = uVar1 << 3;
    if (uVar1 >> 0x3d != 0) {
      uVar6 = 0xffffffffffffffff;
    }
    puVar5 = operator_new__(uVar6);
    puVar3[6] = puVar5;
  }
  if (0 < (int)(uVar7 >> 3)) {
    uVar7 = uVar7 >> 3 & 0xffffffff;
    *puVar5 = 0;
    if (uVar7 != 1) {
      uVar6 = 1;
      do {
        *(undefined8 *)(puVar3[6] + uVar6 * 8) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
  }
  puVar3[0xc] = 0;
  universe::create_instance(param_1,"un.Http",puVar3);
  return 1;
}

