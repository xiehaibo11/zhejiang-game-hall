
/* cocos2d::ComponentLua::storeLuaTable() */

void __thiscall cocos2d::ComponentLua::storeLuaTable(ComponentLua *this)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  ComponentLua *pCVar6;
  lua_State *plVar7;
  byte local_60 [8];
  ulong local_58;
  char *local_50;
  long local_48;
  
                    /* try { // try from 008fc370 to 009fc387 has its CatchHandler @ 008fc478 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = LuaEngine::getInstance();
                    /* try { // try from 008fc38c to 009fc393 has its CatchHandler @ 008fc45c */
                    /* try { // try from 008fc394 to 009fc3cf has its CatchHandler @ 008fc460 */
  plVar7 = *(lua_State **)(*(long *)(lVar5 + 8) + 0x28);
  _index = _index + 1;
  StringUtils::toString<int>(_index);
  uVar1 = (ulong)(local_60[0] >> 1);
  pcVar3 = (char *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    uVar1 = local_58;
    pcVar3 = local_50;
  }
                    /* try { // try from 008fc3d0 to 009fc4a7 has its CatchHandler @ 008fc2b0 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x78),pcVar3,uVar1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  lua_pushstring(plVar7,"component");
  lua_rawget(plVar7,0xffffd8f0);
  if (((byte)*(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              (this + 0x78) & 1) == 0) {
    pCVar6 = this + 0x79;
  }
  else {
    pCVar6 = *(ComponentLua **)(this + 0x88);
  }
  lua_pushstring(plVar7,pCVar6);
  lua_pushvalue(plVar7,0xfffffffd);
  lua_rawset(plVar7,0xfffffffd);
  lua_settop(plVar7,0xfffffffe);
                    /* catch() { ... } // from try @ 008fc38c with catch @ 008fc45c */
                    /* catch() { ... } // from try @ 008fc394 with catch @ 008fc460 */
  toluafix_pushusertype_ccobject
            (plVar7,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.ComponentLua");
  lua_getmetatable(plVar7,0xffffffff);
                    /* catch() { ... } // from try @ 008fc370 with catch @ 008fc478 */
  lua_remove(plVar7,0xfffffffe);
  lua_pushnil(plVar7);
  while (iVar4 = lua_next(plVar7,0xfffffffd), iVar4 != 0) {
                    /* catch() { ... } // from try @ 008fc31c with catch @ 008fc494 */
    lua_pushvalue(plVar7,0xfffffffe);
                    /* try { // try from 008fc4a8 to 009fc59b has its CatchHandler @ 008fc4a8
                       catch() { ... } // from try @ 008fc4a8 with catch @ 008fc4a8
                       catch() { ... } // from try @ 008fc640 with catch @ 008fc4a8 */
    lua_insert(plVar7,0xfffffffe);
    lua_rawset(plVar7,0xfffffffc);
  }
  lua_settop(plVar7,0xfffffffd);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

