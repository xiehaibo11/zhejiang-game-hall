
/* lua_cocos2dx_studio_ArmatureDataManager_addArmatureData(lua_State*) */

bool lua_cocos2dx_studio_ArmatureDataManager_addArmatureData(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ArmatureDataManager *this;
  ulong uVar5;
  ulong uVar6;
  ArmatureData *pAVar7;
  bool bVar8;
  ArmatureData *unaff_x22;
  uint uVar9;
  ulong local_78;
  undefined8 uStack_70;
  void *local_68;
  ulong local_60;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (ArmatureDataManager *)tolua_tousertype(param_1,1,0);
  iVar2 = lua_gettop(param_1);
  if (iVar2 == 4) {
    local_58 = 0;
    local_50 = (void *)0x0;
    local_68 = (void *)0x0;
    local_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uVar3 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"ccs.ArmatureDataManager:addArmatureData"
                      );
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       (uVar5 = luaval_is_usertype(param_1,3,"ccs.ArmatureData",0), (uVar5 & 1) == 0)) {
      uVar9 = 0;
    }
    else {
      unaff_x22 = (ArmatureData *)tolua_tousertype(param_1,3,0);
      uVar9 = 1;
    }
                    /* try { // try from 00935b14 to 00a35b47 has its CatchHandler @ 00935b98 */
    uVar4 = luaval_to_std_string
                      (param_1,4,(basic_string *)&local_78,"ccs.ArmatureDataManager:addArmatureData"
                      );
    bVar8 = (uVar3 & uVar9 & uVar4) == 0;
    if (bVar8) {
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ArmatureDataManager_addArmatureData\'"
                  ,0);
    }
    else {
                    /* try { // try from 00935b48 to 00a35be3 has its CatchHandler @ 009359c8 */
      cocostudio::ArmatureDataManager::addArmatureData
                (this,(basic_string *)&local_60,unaff_x22,(basic_string *)&local_78);
      lua_settop(param_1,1);
    }
    bVar8 = !bVar8;
    if ((local_78 & 1) != 0) {
      operator_delete(local_68);
    }
  }
  else {
    if (iVar2 != 3) {
                    /* try { // try from 00935ac8 to 00a35afb has its CatchHandler @ 00935bc8 */
      luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
                 "ccs.ArmatureDataManager:addArmatureData",iVar2 + -1,2);
      bVar8 = false;
      goto LAB_00935b7c;
    }
    local_58 = 0;
    local_50 = (void *)0x0;
    local_60 = 0;
    uVar5 = luaval_to_std_string
                      (param_1,2,(basic_string *)&local_60,"ccs.ArmatureDataManager:addArmatureData"
                      );
                    /* try { // try from 009359c8 to 00a35ac7 has its CatchHandler @ 009359c8
                       catch() { ... } // from try @ 009359c8 with catch @ 009359c8
                       catch() { ... } // from try @ 00935b48 with catch @ 009359c8 */
    if (((param_1 == (lua_State *)0x0) || (iVar2 = lua_gettop(param_1), iVar2 < 3)) ||
       ((uVar6 = luaval_is_usertype(param_1,3,"ccs.ArmatureData",0), (uVar6 & 1) == 0 ||
        (pAVar7 = (ArmatureData *)tolua_tousertype(param_1,3,0), (uVar5 & 1) == 0)))) {
                    /* try { // try from 00935afc to 00a35b0f has its CatchHandler @ 00935b94 */
      tolua_error(param_1,
                  "invalid arguments in function \'lua_cocos2dx_studio_ArmatureDataManager_addArmatureData\'"
                  ,0);
      bVar8 = false;
    }
    else {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_78,"");
      cocostudio::ArmatureDataManager::addArmatureData
                (this,(basic_string *)&local_60,pAVar7,(basic_string *)&local_78);
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
      bVar8 = true;
      lua_settop(param_1,1);
    }
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00935b7c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* catch() { ... } // from try @ 00935afc with catch @ 00935b94 */
                    /* catch() { ... } // from try @ 00935b14 with catch @ 00935b98 */
  return bVar8;
}

