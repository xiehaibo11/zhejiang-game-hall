
/* lua_cocos2dx_3d_Sprite3D_createAsync(lua_State*) */

void lua_cocos2dx_3d_Sprite3D_createAsync(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  ulong local_88;
  undefined8 local_80;
  void *local_78;
  undefined **local_70;
  lua_State *plStack_68;
  ulong local_60;
  undefined ***local_50;
  long local_38;
  
                    /* try { // try from 008fc99c to 009fc9cb has its CatchHandler @ 008fca38 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 == 3) {
    local_80 = 0;
    local_78 = (void *)0x0;
    local_88 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_88,"cc.Sprite3D:createAsync");
    if ((uVar3 & 1) == 0) {
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      goto LAB_008fcb98;
    }
    local_60 = toluafix_ref_function(param_1,3,0);
    local_60 = local_60 & 0xffffffff;
    local_70 = &PTR_FUN_0169bf40;
    plStack_68 = param_1;
    local_50 = &local_70;
    cocos2d::Sprite3D::createAsync((basic_string *)&local_88,(function *)&local_70,(void *)0x0);
    if (&local_70 == local_50) {
      pcVar5 = (code *)(*local_50)[4];
LAB_008fcb30:
      (*pcVar5)();
    }
    else if (local_50 != (undefined ***)0x0) {
      pcVar5 = (code *)(*local_50)[5];
      goto LAB_008fcb30;
    }
    lua_settop(param_1,1);
                    /* try { // try from 008fcb40 to 009fcb87 has its CatchHandler @ 008fcb40
                       catch() { ... } // from try @ 008fcb40 with catch @ 008fcb40
                       catch() { ... } // from try @ 008fcc14 with catch @ 008fcb40
                       catch() { ... } // from try @ 008fccc0 with catch @ 008fcb40 */
    if ((local_88 & 1) != 0) {
      operator_delete(local_78);
    }
LAB_008fcbc0:
    uVar4 = 1;
  }
  else {
                    /* try { // try from 008fc9d0 to 009fc9f7 has its CatchHandler @ 008fca34 */
    if (iVar2 == 4) {
      local_80 = 0;
      local_78 = (void *)0x0;
      local_88 = 0;
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_88,"cc.Sprite3D:createAsync");
      if ((uVar3 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        local_98 = 0;
        local_90 = (void *)0x0;
                    /* try { // try from 008fc9fc to 009fca03 has its CatchHandler @ 008fca3c */
        local_a0 = 0;
        uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_a0,"cc.Sprite3D:createAsync");
                    /* try { // try from 008fca18 to 009fca1f has its CatchHandler @ 008fca34 */
        if ((uVar3 & 1) == 0) {
          iVar6 = 2;
        }
        else {
                    /* try { // try from 008fca20 to 009fca5f has its CatchHandler @ 008fc838 */
          local_60 = toluafix_ref_function(param_1,4,0);
          local_60 = local_60 & 0xffffffff;
                    /* catch() { ... } // from try @ 008fc9d0 with catch @ 008fca34
                       catch() { ... } // from try @ 008fca18 with catch @ 008fca34 */
                    /* catch() { ... } // from try @ 008fc8ac with catch @ 008fca38
                       catch() { ... } // from try @ 008fc99c with catch @ 008fca38 */
                    /* catch() { ... } // from try @ 008fc900 with catch @ 008fca3c
                       catch() { ... } // from try @ 008fc9fc with catch @ 008fca3c */
          local_70 = &PTR_FUN_0169beb0;
                    /* catch() { ... } // from try @ 008fc8e4 with catch @ 008fca40 */
                    /* catch() { ... } // from try @ 008fc880 with catch @ 008fca44 */
          plStack_68 = param_1;
          local_50 = &local_70;
          cocos2d::Sprite3D::createAsync
                    ((basic_string *)&local_88,(basic_string *)&local_a0,(function *)&local_70,
                     (void *)0x0);
          if (&local_70 == local_50) {
            pcVar5 = (code *)(*local_50)[4];
LAB_008fcb5c:
            (*pcVar5)();
          }
          else if (local_50 != (undefined ***)0x0) {
            pcVar5 = (code *)(*local_50)[5];
            goto LAB_008fcb5c;
          }
          iVar6 = 1;
          lua_settop(param_1,1);
        }
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      if ((local_88 & 1) != 0) {
                    /* try { // try from 008fcb88 to 009fcbd7 has its CatchHandler @ 008fccd8 */
        operator_delete(local_78);
      }
      if (iVar6 != 2) goto LAB_008fcbc0;
    }
LAB_008fcb98:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
               "cc.Sprite3D:createAsync",iVar2 + -1,3);
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
                    /* try { // try from 008fcbe4 to 009fcc13 has its CatchHandler @ 008fccd4 */
  return;
}

