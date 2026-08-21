
/* ccvaluemapintkey_to_luaval(lua_State*, std::__ndk1::unordered_map<int, cocos2d::Value,
   std::__ndk1::hash<int>, std::__ndk1::equal_to<int>, std::__ndk1::allocator<std::__ndk1::pair<int
   const, cocos2d::Value> > > const&) */

void ccvaluemapintkey_to_luaval(lua_State *param_1,unordered_map *param_2)

{
  Value *this;
  void *pvVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  vector *pvVar5;
  unordered_map *puVar6;
  void *pvVar7;
  long *plVar8;
  byte local_1c0 [16];
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined **ppuStack_178;
  locale alStack_170 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  lua_createtable(param_1,0,0);
  if ((param_1 != (lua_State *)0x0) && (plVar8 = *(long **)(param_2 + 0x10), plVar8 != (long *)0x0))
  {
    pvVar7 = (void *)((ulong)local_1a8 | 1);
    do {
      local_110[0] = 0x1698928;
      local_190 = 0x1698900;
      uStack_188 = 0;
      local_180 = 0x1698810;
      std::__ndk1::ios_base::init((ios_base *)local_110,&ppuStack_178);
      local_80 = 0xffffffff;
      local_190 = 0x16987e8;
      local_180 = 0x1698810;
      local_110[0] = 0x1698838;
      local_88 = 0;
      ppuStack_178 = &PTR__basic_streambuf_01698a08;
      std::__ndk1::locale::locale(alStack_170);
      uStack_150 = 0;
      local_158 = 0;
      uStack_140 = 0;
      uStack_148 = 0;
      uStack_160 = 0;
      local_168 = 0;
      ppuStack_178 = &PTR__basic_stringbuf_01698960;
      uStack_130 = 0;
      local_138 = 0;
      uStack_120 = 0;
      local_128 = (void *)0x0;
      local_118 = 0x18;
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_180,(int)plVar8[2]);
      std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
      ::str();
      if ((int)plVar8[4] - 2U < 9) {
        this = (Value *)(plVar8 + 3);
        switch((int)plVar8[4]) {
        case 2:
          pvVar1 = pvVar7;
          if ((local_1a8[0] & 1) != 0) {
            pvVar1 = local_198;
          }
          lua_pushstring(param_1,pvVar1);
          iVar3 = cocos2d::Value::asInt(this);
          lua_pushinteger(param_1,(long)iVar3);
          lua_rawset(param_1,0xfffffffd);
          break;
        case 3:
          break;
        default:
          pvVar1 = pvVar7;
          if ((local_1a8[0] & 1) != 0) {
            pvVar1 = local_198;
          }
          lua_pushstring(param_1,pvVar1);
          cocos2d::Value::asDouble(this);
          lua_pushnumber(param_1);
          lua_rawset(param_1,0xfffffffd);
          break;
        case 6:
          pvVar1 = pvVar7;
          if ((local_1a8[0] & 1) != 0) {
            pvVar1 = local_198;
          }
          lua_pushstring(param_1,pvVar1);
          uVar4 = cocos2d::Value::asBool(this);
          lua_pushboolean(param_1,uVar4 & 1);
          lua_rawset(param_1,0xfffffffd);
          break;
        case 7:
          pvVar1 = pvVar7;
          if ((local_1a8[0] & 1) != 0) {
            pvVar1 = local_198;
          }
          lua_pushstring(param_1,pvVar1);
          cocos2d::Value::asString();
          pvVar1 = (void *)((ulong)local_1c0 | 1);
          if ((local_1c0[0] & 1) != 0) {
            pvVar1 = local_1b0;
          }
          lua_pushstring(param_1,pvVar1);
          if ((local_1c0[0] & 1) != 0) {
            operator_delete(local_1b0);
          }
          lua_rawset(param_1,0xfffffffd);
          break;
        case 8:
          pvVar1 = pvVar7;
          if ((local_1a8[0] & 1) != 0) {
            pvVar1 = local_198;
          }
          lua_pushstring(param_1,pvVar1);
          pvVar5 = (vector *)cocos2d::Value::asValueVector(this);
          ccvaluevector_to_luaval(param_1,pvVar5);
          lua_rawset(param_1,0xfffffffd);
          break;
        case 9:
          pvVar1 = pvVar7;
          if ((local_1a8[0] & 1) != 0) {
            pvVar1 = local_198;
          }
          lua_pushstring(param_1,pvVar1);
          puVar6 = (unordered_map *)cocos2d::Value::asValueMap(this);
          ccvaluemap_to_luaval(param_1,puVar6);
          lua_rawset(param_1,0xfffffffd);
          break;
        case 10:
          pvVar1 = pvVar7;
          if ((local_1a8[0] & 1) != 0) {
            pvVar1 = local_198;
          }
          lua_pushstring(param_1,pvVar1);
          puVar6 = (unordered_map *)cocos2d::Value::asIntKeyMap(this);
          ccvaluemapintkey_to_luaval(param_1,puVar6);
          lua_rawset(param_1,0xfffffffd);
        }
      }
      if ((local_1a8[0] & 1) != 0) {
        operator_delete(local_198);
      }
      local_190 = 0x16987e8;
      local_180 = 0x1698810;
      local_110[0] = 0x1698838;
      ppuStack_178 = &PTR__basic_stringbuf_01698960;
      if ((local_138 & 1) != 0) {
        operator_delete(local_128);
      }
      ppuStack_178 = &PTR__basic_streambuf_01698a08;
      std::__ndk1::locale::~locale(alStack_170);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)0x0);
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

