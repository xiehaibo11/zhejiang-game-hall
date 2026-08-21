
/* cocos2d::ComponentLua::loadAndExecuteScript() */

undefined4 __thiscall cocos2d::ComponentLua::loadAndExecuteScript(ComponentLua *this)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  undefined4 uVar8;
  lua_State *plVar9;
  LuaStack *this_00;
  Data aDStack_70 [16];
  byte local_60 [16];
  char *local_50;
  long local_48;
  
                    /* try { // try from 008fbd2c to 009fbd43 has its CatchHandler @ 008fbdc0 */
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar4 = LuaEngine::getInstance();
                    /* try { // try from 008fbd48 to 009fbd5f has its CatchHandler @ 008fbdbc */
  plVar9 = *(lua_State **)(*(long *)(lVar4 + 8) + 0x28);
  plVar5 = (long *)FileUtils::getInstance();
                    /* try { // try from 008fbd60 to 009fbddb has its CatchHandler @ 008fbcac */
  (**(code **)(*plVar5 + 0x50))(local_60,plVar5,this + 0x50);
  (**(code **)(*plVar5 + 0x28))(aDStack_70,plVar5,local_60);
  lVar6 = Data::getSize(aDStack_70);
  if (lVar6 < 1) {
LAB_008fbddc:
    lua_settop(plVar9,0xfffffffe);
  }
  else {
    this_00 = *(LuaStack **)(lVar4 + 8);
    pcVar7 = (char *)Data::getBytes(aDStack_70);
    iVar3 = Data::getSize(aDStack_70);
                    /* catch() { ... } // from try @ 008fbd48 with catch @ 008fbdbc */
    pcVar1 = (char *)((ulong)local_60 | 1);
                    /* catch() { ... } // from try @ 008fbd2c with catch @ 008fbdc0 */
    if ((local_60[0] & 1) != 0) {
      pcVar1 = local_50;
    }
    iVar3 = LuaStack::luaLoadBuffer(this_00,plVar9,pcVar7,iVar3,pcVar1);
    if (iVar3 != 0) goto LAB_008fbddc;
    iVar3 = lua_pcall(plVar9,0,1,0);
    if (iVar3 == 0) {
      iVar3 = lua_type(plVar9,0xffffffff);
      if (iVar3 == 5) {
                    /* try { // try from 008fbe6c to 009fbf47 has its CatchHandler @ 008fbe6c
                       catch() { ... } // from try @ 008fbe6c with catch @ 008fbe6c
                       catch() { ... } // from try @ 008fbfe4 with catch @ 008fbe6c */
        storeLuaTable(this);
        uVar8 = 1;
        goto LAB_008fbdec;
      }
    }
    else {
      lua_settop(plVar9,0xfffffffe);
    }
  }
  uVar8 = 0;
LAB_008fbdec:
  Data::~Data(aDStack_70);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

