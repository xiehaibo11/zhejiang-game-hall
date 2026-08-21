
/* lua_cocos2dx_3d_BatchSprite3D_create(lua_State*) */

void lua_cocos2dx_3d_BatchSprite3D_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  int iVar6;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
                    /* catch() { ... } // from try @ 0090a124 with catch @ 0090a178 */
                    /* try { // try from 0090a18c to 00a0a25b has its CatchHandler @ 0090a18c
                       catch() { ... } // from try @ 0090a18c with catch @ 0090a18c
                       catch() { ... } // from try @ 0090a2dc with catch @ 0090a18c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 2) {
    local_48 = 0;
    local_40 = (void *)0x0;
    local_50 = 0;
    uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.BatchSprite3D:create");
    if ((uVar3 & 1) == 0) {
      iVar6 = 2;
    }
    else {
      local_60 = 0;
      local_58 = (void *)0x0;
      local_68 = 0;
      uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"cc.BatchSprite3D:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        pvVar4 = (void *)cocos2d::BatchSprite3D::create
                                   ((basic_string *)&local_50,(basic_string *)&local_68);
        if (pvVar4 == (void *)0x0) {
          lua_pushnil(param_1);
        }
        else {
          toluafix_pushusertype_ccobject
                    (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),pvVar4,
                     "cc.BatchSprite3D");
        }
        iVar6 = 1;
      }
      if ((local_68 & 1) != 0) {
        operator_delete(local_58);
      }
    }
    if ((local_50 & 1) != 0) {
      operator_delete(local_40);
    }
                    /* try { // try from 0090a25c to 00a0a28f has its CatchHandler @ 0090a35c */
    if (iVar6 != 2) {
      uVar5 = 1;
      goto LAB_0090a28c;
    }
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.BatchSprite3D:create",iVar2 + -1,2);
  uVar5 = 0;
LAB_0090a28c:
                    /* try { // try from 0090a290 to 00a0a2a3 has its CatchHandler @ 0090a328 */
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
                    /* try { // try from 0090a2a8 to 00a0a2db has its CatchHandler @ 0090a32c */
  return;
}

