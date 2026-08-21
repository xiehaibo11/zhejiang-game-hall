
/* lua_cocos2dx_extension_AssetsManager_create(lua_State*) */

undefined4 lua_cocos2dx_extension_AssetsManager_create(lua_State *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  code *pcVar9;
  undefined4 uVar10;
  ulong local_1c8;
  undefined8 local_1c0;
  void *local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  ulong local_198;
  undefined8 local_190;
  void *local_188;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  long local_58;
  
                    /* catch() { ... } // from try @ 009ae054 with catch @ 009ae490 */
                    /* catch() { ... } // from try @ 009ae024 with catch @ 009ae494 */
                    /* catch() { ... } // from try @ 009adff4 with catch @ 009ae498 */
                    /* catch() { ... } // from try @ 009adfc4 with catch @ 009ae49c */
                    /* catch() { ... } // from try @ 009adf94 with catch @ 009ae4a0 */
                    /* catch() { ... } // from try @ 009adf64 with catch @ 009ae4a4 */
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  iVar4 = lua_gettop();
  if (iVar4 + -1 != 6) {
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d\n ",&DAT_012e7ae5,
               iVar4 + -1,6);
    uVar10 = 0;
    goto LAB_009ae6cc;
  }
  local_70 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_190 = 0;
  local_188 = (void *)0x0;
  local_198 = 0;
  uVar5 = luaval_to_std_string(param_1,2,(basic_string *)&local_198,"cc.AssetsManager:create");
  pvVar8 = (void *)((ulong)&local_198 | 1);
  if ((local_198 & 1) != 0) {
    pvVar8 = local_188;
  }
  local_1a8 = 0;
  local_1a0 = (void *)0x0;
  local_1b0 = 0;
  uVar6 = luaval_to_std_string(param_1,3,(basic_string *)&local_1b0,"cc.AssetsManager:create");
  pvVar1 = (void *)((ulong)&local_1b0 | 1);
  if ((local_1b0 & 1) != 0) {
    pvVar1 = local_1a0;
  }
  local_1c0 = 0;
  local_1b8 = (void *)0x0;
  local_1c8 = 0;
  uVar7 = luaval_to_std_string(param_1,4,(basic_string *)&local_1c8,"cc.AssetsManager:create");
  pvVar2 = (void *)((ulong)&local_1c8 | 1);
  if ((local_1c8 & 1) != 0) {
    pvVar2 = local_1b8;
  }
  if ((uVar5 & uVar6 & uVar7 & 1) == 0) {
    tolua_error(param_1,&DAT_012e7afd,0);
    uVar10 = 0;
  }
  else {
    if (local_70 == (long *)0x0) {
      local_100 = (long *)0x0;
joined_r0x009ae704:
      if (local_a0 != (long *)0x0) goto LAB_009ae72c;
LAB_009ae5c0:
      local_130 = (long *)0x0;
joined_r0x009ae5c8:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009ae638 with catch @ 009ae5c8
                       catch(type#1 @ 00000000) { ... } // from try @ 009ae668 with catch @ 009ae5c8
                       catch(type#1 @ 00000000) { ... } // from try @ 009ae698 with catch @ 009ae5c8
                       catch(type#1 @ 00000000) { ... } // from try @ 009ae6c0 with catch @ 009ae5c8
                       catch(type#1 @ 00000000) { ... } // from try @ 009ae6ec with catch @ 009ae5c8
                        */
      if (local_d0 == (long *)0x0) goto LAB_009ae750;
LAB_009ae778:
      if (alStack_f0 == local_d0) {
        local_160 = alStack_180;
        (**(code **)(*local_d0 + 0x18))(local_d0,alStack_180);
      }
      else {
        local_160 = (long *)(**(code **)(*local_d0 + 0x10))();
      }
    }
    else {
      if (alStack_90 == local_70) {
        local_100 = alStack_120;
        (**(code **)(*local_70 + 0x18))(local_70,alStack_120);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009ae690 with catch @ 009ae728
                       catch(type#1 @ 00000000) { ... } // from try @ 009ae6b8 with catch @ 009ae728
                       catch(type#1 @ 00000000) { ... } // from try @ 009ae6e0 with catch @ 009ae728
                        */
        goto joined_r0x009ae704;
      }
      local_100 = (long *)(**(code **)(*local_70 + 0x10))();
      if (local_a0 == (long *)0x0) goto LAB_009ae5c0;
LAB_009ae72c:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009ae630 with catch @ 009ae72c
                       catch(type#1 @ 00000000) { ... } // from try @ 009ae65c with catch @ 009ae72c
                        */
      if (alStack_c0 == local_a0) {
        local_130 = alStack_150;
        (**(code **)(*local_a0 + 0x18))(local_a0,alStack_150);
        goto joined_r0x009ae5c8;
      }
      local_130 = (long *)(**(code **)(*local_a0 + 0x10))();
      if (local_d0 != (long *)0x0) goto LAB_009ae778;
LAB_009ae750:
      local_160 = (long *)0x0;
    }
    pvVar8 = (void *)cocos2d::extension::AssetsManager::create
                               (pvVar8,pvVar1,pvVar2,alStack_120,alStack_150,alStack_180);
    if (alStack_180 == local_160) {
      pcVar9 = *(code **)(*local_160 + 0x20);
LAB_009ae7f8:
      (*pcVar9)();
    }
    else if (local_160 != (long *)0x0) {
      pcVar9 = *(code **)(*local_160 + 0x28);
      goto LAB_009ae7f8;
    }
    if (alStack_150 == local_130) {
      pcVar9 = *(code **)(*local_130 + 0x20);
LAB_009ae824:
      (*pcVar9)();
    }
    else if (local_130 != (long *)0x0) {
      pcVar9 = *(code **)(*local_130 + 0x28);
      goto LAB_009ae824;
    }
    if (alStack_120 == local_100) {
      pcVar9 = *(code **)(*local_100 + 0x20);
LAB_009ae850:
      (*pcVar9)();
    }
    else if (local_100 != (long *)0x0) {
      pcVar9 = *(code **)(*local_100 + 0x28);
      goto LAB_009ae850;
    }
    if (pvVar8 == (void *)0x0) {
      lua_pushnil(param_1);
    }
    else {
      toluafix_pushusertype_ccobject
                (param_1,*(int *)((long)pvVar8 + 0xc),(int *)((long)pvVar8 + 0x10),pvVar8,
                 "cc.AssetsManager");
    }
    uVar10 = 1;
  }
  if ((local_1c8 & 1) != 0) {
    operator_delete(local_1b8);
  }
  if ((local_1b0 & 1) != 0) {
    operator_delete(local_1a0);
                    /* try { // try from 009ae65c to 00aae667 has its CatchHandler @ 009ae72c */
  }
  if ((local_198 & 1) != 0) {
                    /* try { // try from 009ae630 to 00aae637 has its CatchHandler @ 009ae72c */
    operator_delete(local_188);
  }
                    /* try { // try from 009ae638 to 00aae65b has its CatchHandler @ 009ae5c8 */
  if (alStack_f0 == local_d0) {
                    /* try { // try from 009ae668 to 00aae68f has its CatchHandler @ 009ae5c8 */
    pcVar9 = *(code **)(*local_d0 + 0x20);
LAB_009ae670:
    (*pcVar9)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_d0 + 0x28);
    goto LAB_009ae670;
  }
  if (alStack_c0 == local_a0) {
                    /* try { // try from 009ae698 to 00aae6b7 has its CatchHandler @ 009ae5c8 */
    pcVar9 = *(code **)(*local_a0 + 0x20);
LAB_009ae69c:
    (*pcVar9)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_a0 + 0x28);
                    /* try { // try from 009ae690 to 00aae697 has its CatchHandler @ 009ae728 */
    goto LAB_009ae69c;
  }
  if (alStack_90 == local_70) {
                    /* try { // try from 009ae6c0 to 00aae6df has its CatchHandler @ 009ae5c8 */
    pcVar9 = *(code **)(*local_70 + 0x20);
  }
  else {
    if (local_70 == (long *)0x0) goto LAB_009ae6cc;
                    /* try { // try from 009ae6b8 to 00aae6bf has its CatchHandler @ 009ae728 */
    pcVar9 = *(code **)(*local_70 + 0x28);
  }
  (*pcVar9)();
LAB_009ae6cc:
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* try { // try from 009ae6e0 to 00aae6eb has its CatchHandler @ 009ae728 */
                    /* try { // try from 009ae6ec to 00aae72f has its CatchHandler @ 009ae5c8 */
    return uVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

