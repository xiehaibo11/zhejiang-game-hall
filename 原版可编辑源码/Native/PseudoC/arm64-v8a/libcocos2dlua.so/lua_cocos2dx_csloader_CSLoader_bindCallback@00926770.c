
/* lua_cocos2dx_csloader_CSLoader_bindCallback(lua_State*) */

undefined4 lua_cocos2dx_csloader_CSLoader_bindCallback(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  CSLoader *this;
  ulong uVar5;
  Node *pNVar6;
  undefined4 uVar7;
  Widget *unaff_x23;
  uint uVar8;
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
                    /* catch() { ... } // from try @ 009266f4 with catch @ 0092678c */
  lVar1 = tpidr_el0;
                    /* catch() { ... } // from try @ 0092670c with catch @ 00926790 */
  local_58 = *(long *)(lVar1 + 0x28);
  this = (CSLoader *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 + -1 != 4) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.CSLoader:bindCallback",iVar2 + -1,4);
    uVar7 = 0;
    goto LAB_0092692c;
  }
                    /* catch() { ... } // from try @ 009266c0 with catch @ 009267c0 */
  local_68 = 0;
  local_60 = (void *)0x0;
  local_78 = (void *)0x0;
  local_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_70,"cc.CSLoader:bindCallback");
  uVar4 = luaval_to_std_string(param_1,3,(basic_string *)&local_88,"cc.CSLoader:bindCallback");
  if (param_1 == (lua_State *)0x0) {
LAB_009268f4:
    tolua_error(param_1,
                "invalid arguments in function \'lua_cocos2dx_csloader_CSLoader_bindCallback\'",0);
    uVar7 = 0;
  }
  else {
    iVar2 = lua_gettop(param_1);
    if ((iVar2 < 4) || (uVar5 = luaval_is_usertype(param_1,4,"ccui.Widget",0), (uVar5 & 1) == 0)) {
      uVar8 = 0;
    }
    else {
      unaff_x23 = (Widget *)tolua_tousertype(param_1,4,0);
      uVar8 = 1;
    }
    iVar2 = lua_gettop(param_1);
    if (((iVar2 < 5) || (uVar5 = luaval_is_usertype(param_1,5,"cc.Node",0), (uVar5 & 1) == 0)) ||
       (pNVar6 = (Node *)tolua_tousertype(param_1,5,0), (uVar3 & uVar4 & uVar8) == 0))
    goto LAB_009268f4;
    uVar3 = cocos2d::CSLoader::bindCallback
                      (this,(basic_string *)&local_70,(basic_string *)&local_88,unaff_x23,pNVar6);
    tolua_pushboolean(param_1,uVar3 & 1);
    uVar7 = 1;
  }
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
LAB_0092692c:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

