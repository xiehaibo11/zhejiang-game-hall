
/* cocos2d::ComponentLua::getLuaFunction(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

bool __thiscall cocos2d::ComponentLua::getLuaFunction(ComponentLua *this,basic_string *param_1)

{
  int iVar1;
  long lVar2;
  ComponentLua *pCVar3;
  basic_string *pbVar4;
  undefined8 uVar5;
  
  lVar2 = LuaEngine::getInstance();
  uVar5 = *(undefined8 *)(*(long *)(lVar2 + 8) + 0x28);
  lua_pushstring(uVar5,"component");
  lua_rawget(uVar5,0xffffd8f0);
  if (((byte)this[0x78] & 1) == 0) {
    pCVar3 = this + 0x79;
  }
  else {
                    /* try { // try from 008fc1ac to 009fc1c3 has its CatchHandler @ 008fc294 */
    pCVar3 = *(ComponentLua **)(this + 0x88);
  }
  lua_pushstring(uVar5,pCVar3);
  lua_rawget(uVar5,0xfffffffe);
                    /* try { // try from 008fc1c8 to 009fc207 has its CatchHandler @ 008fc290 */
  pbVar4 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar4 = param_1 + 1;
  }
  lua_pushstring(uVar5,pbVar4);
  lua_rawget(uVar5,0xfffffffe);
  lua_remove(uVar5,0xfffffffe);
  lua_remove(uVar5,0xfffffffe);
                    /* try { // try from 008fc208 to 009fc2af has its CatchHandler @ 008fc0fc */
  iVar1 = lua_type(uVar5,0xffffffff);
  return iVar1 == 6;
}

