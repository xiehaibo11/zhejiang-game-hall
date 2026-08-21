
/* ccvaluemap_to_luaval(lua_State*, std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > > const&)
    */

void ccvaluemap_to_luaval(lua_State *param_1,unordered_map *param_2)

{
  Value *this;
  void *pvVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  vector *pvVar5;
  unordered_map *puVar6;
  long *plVar7;
  void *pvVar8;
  byte local_88 [16];
  void *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [16];
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lua_createtable(param_1,0,0);
  if ((param_1 != (lua_State *)0x0) && (plVar7 = *(long **)(param_2 + 0x10), plVar7 != (long *)0x0))
  {
    pvVar8 = (void *)((ulong)local_70 | 1);
    do {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string(local_70,(basic_string *)(plVar7 + 2));
      if ((int)plVar7[6] - 2U < 9) {
        this = (Value *)(plVar7 + 5);
        switch((int)plVar7[6]) {
        case 2:
          pvVar1 = pvVar8;
          if (((byte)local_70[0] & 1) != 0) {
            pvVar1 = local_60;
          }
          lua_pushstring(param_1,pvVar1);
          iVar3 = cocos2d::Value::asInt(this);
          lua_pushinteger(param_1,(long)iVar3);
          lua_rawset(param_1,0xfffffffd);
          break;
        case 3:
          break;
        default:
          pvVar1 = pvVar8;
          if (((byte)local_70[0] & 1) != 0) {
            pvVar1 = local_60;
          }
          lua_pushstring(param_1,pvVar1);
          cocos2d::Value::asDouble(this);
          lua_pushnumber(param_1);
          lua_rawset(param_1,0xfffffffd);
          break;
        case 6:
          pvVar1 = pvVar8;
          if (((byte)local_70[0] & 1) != 0) {
            pvVar1 = local_60;
          }
          lua_pushstring(param_1,pvVar1);
          uVar4 = cocos2d::Value::asBool(this);
          lua_pushboolean(param_1,uVar4 & 1);
          lua_rawset(param_1,0xfffffffd);
          break;
        case 7:
          pvVar1 = pvVar8;
          if (((byte)local_70[0] & 1) != 0) {
            pvVar1 = local_60;
          }
          lua_pushstring(param_1,pvVar1);
          cocos2d::Value::asString();
          pvVar1 = (void *)((ulong)local_88 | 1);
          if ((local_88[0] & 1) != 0) {
            pvVar1 = local_78;
          }
          lua_pushstring(param_1,pvVar1);
          if ((local_88[0] & 1) != 0) {
            operator_delete(local_78);
          }
          lua_rawset(param_1,0xfffffffd);
          break;
        case 8:
          pvVar1 = pvVar8;
          if (((byte)local_70[0] & 1) != 0) {
            pvVar1 = local_60;
          }
          lua_pushstring(param_1,pvVar1);
          pvVar5 = (vector *)cocos2d::Value::asValueVector(this);
          ccvaluevector_to_luaval(param_1,pvVar5);
          lua_rawset(param_1,0xfffffffd);
          break;
        case 9:
          pvVar1 = pvVar8;
          if (((byte)local_70[0] & 1) != 0) {
            pvVar1 = local_60;
          }
          lua_pushstring(param_1,pvVar1);
          puVar6 = (unordered_map *)cocos2d::Value::asValueMap(this);
          ccvaluemap_to_luaval(param_1,puVar6);
          lua_rawset(param_1,0xfffffffd);
          break;
        case 10:
          pvVar1 = pvVar8;
          if (((byte)local_70[0] & 1) != 0) {
            pvVar1 = local_60;
          }
          lua_pushstring(param_1,pvVar1);
          puVar6 = (unordered_map *)cocos2d::Value::asIntKeyMap(this);
          ccvaluemapintkey_to_luaval(param_1,puVar6);
          lua_rawset(param_1,0xfffffffd);
        }
      }
      if (((byte)local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

