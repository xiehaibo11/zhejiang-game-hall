
/* lua_cocos2dx_extension_ControlSlider_create(lua_State*) */

void lua_cocos2dx_extension_ControlSlider_create(lua_State *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  Sprite *pSVar9;
  Sprite *pSVar10;
  Sprite *pSVar11;
  void *pvVar12;
  undefined8 uVar13;
  Sprite *pSVar14;
  ulong local_a8;
  undefined8 local_a0;
  char *local_98;
  ulong local_90;
  undefined8 local_88;
  char *local_80;
  ulong local_78;
  undefined8 local_70;
  char *local_68;
  ulong local_60;
  undefined8 local_58;
  char *local_50;
  long local_48;
  
                    /* try { // try from 009a7a5c to 00aa7a73 has its CatchHandler @ 009a7ac4 */
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 009a7a74 to 00aa7adf has its CatchHandler @ 009a796c */
  iVar6 = lua_gettop();
  if (iVar6 == 5) {
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
    uVar8 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.ControlSlider:create");
    pcVar2 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar2 = local_50;
    }
    if ((uVar8 & 1) == 0) {
                    /* try { // try from 009a7d90 to 00aa7dd7 has its CatchHandler @ 009a7e30 */
      iVar7 = 6;
    }
    else {
      local_70 = 0;
      local_68 = (char *)0x0;
      local_78 = 0;
      uVar8 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"cc.ControlSlider:create");
      pcVar3 = (char *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pcVar3 = local_68;
      }
      if ((uVar8 & 1) == 0) {
        iVar7 = 6;
      }
      else {
        local_88 = 0;
        local_80 = (char *)0x0;
        local_90 = 0;
        uVar8 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"cc.ControlSlider:create");
        pcVar4 = (char *)((ulong)&local_90 | 1);
        if ((local_90 & 1) != 0) {
          pcVar4 = local_80;
        }
        if ((uVar8 & 1) == 0) {
          iVar7 = 6;
        }
        else {
          local_a0 = 0;
          local_98 = (char *)0x0;
          local_a8 = 0;
          uVar8 = luaval_to_std_string
                            (param_1,5,(basic_string *)&local_a8,"cc.ControlSlider:create");
          if ((uVar8 & 1) == 0) {
            iVar7 = 6;
          }
          else {
            pcVar1 = (char *)((ulong)&local_a8 | 1);
            if ((local_a8 & 1) != 0) {
              pcVar1 = local_98;
            }
                    /* try { // try from 009a7c74 to 00aa7caf has its CatchHandler @ 009a7c74
                       catch() { ... } // from try @ 009a7c74 with catch @ 009a7c74
                       catch() { ... } // from try @ 009a7cfc with catch @ 009a7c74
                       catch() { ... } // from try @ 009a7dd8 with catch @ 009a7c74 */
            pvVar12 = (void *)cocos2d::extension::ControlSlider::create(pcVar2,pcVar3,pcVar4,pcVar1)
            ;
            if (pvVar12 == (void *)0x0) {
              lua_pushnil(param_1);
            }
            else {
              toluafix_pushusertype_ccobject
                        (param_1,*(int *)((long)pvVar12 + 0xc),(int *)((long)pvVar12 + 0x10),pvVar12
                         ,"cc.ControlSlider");
            }
            iVar7 = 1;
          }
          if ((local_a8 & 1) != 0) {
            operator_delete(local_98);
          }
        }
        if ((local_90 & 1) != 0) {
          operator_delete(local_80);
        }
      }
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar7 != 6) {
LAB_009a7f10:
      uVar13 = 1;
      goto LAB_009a7f14;
    }
    if (((param_1 != (lua_State *)0x0) && (iVar7 = lua_gettop(param_1), 1 < iVar7)) &&
       (uVar8 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar8 & 1) != 0)) {
                    /* try { // try from 009a7dd8 to 00aa7e4b has its CatchHandler @ 009a7c74 */
      pSVar9 = (Sprite *)tolua_tousertype(param_1,2,0);
      iVar7 = lua_gettop(param_1);
                    /* catch() { ... } // from try @ 009a7cec with catch @ 009a7dfc */
      if ((2 < iVar7) && (uVar8 = luaval_is_usertype(param_1,3,"cc.Sprite",0), (uVar8 & 1) != 0)) {
        pSVar10 = (Sprite *)tolua_tousertype(param_1,3,0);
                    /* catch() { ... } // from try @ 009a7cb0 with catch @ 009a7e2c
                       catch() { ... } // from try @ 009a7d40 with catch @ 009a7e2c */
                    /* catch() { ... } // from try @ 009a7ccc with catch @ 009a7e30
                       catch() { ... } // from try @ 009a7d90 with catch @ 009a7e30 */
        iVar7 = lua_gettop(param_1);
        if ((3 < iVar7) && (uVar8 = luaval_is_usertype(param_1,4,"cc.Sprite",0), (uVar8 & 1) != 0))
        {
          pSVar11 = (Sprite *)tolua_tousertype(param_1,4,0);
          iVar7 = lua_gettop(param_1);
          if ((4 < iVar7) && (uVar8 = luaval_is_usertype(param_1,5,"cc.Sprite",0), (uVar8 & 1) != 0)
             ) {
            pSVar14 = (Sprite *)tolua_tousertype(param_1,5,0);
            pvVar12 = (void *)cocos2d::extension::ControlSlider::create
                                        (pSVar9,pSVar10,pSVar11,pSVar14);
            goto joined_r0x009a7ebc;
          }
        }
      }
    }
  }
  else if (iVar6 == 4) {
    if (((param_1 != (lua_State *)0x0) && (iVar7 = lua_gettop(param_1), 1 < iVar7)) &&
       (uVar8 = luaval_is_usertype(param_1,2,"cc.Sprite",0), (uVar8 & 1) != 0)) {
                    /* catch() { ... } // from try @ 009a79e4 with catch @ 009a7abc */
                    /* catch() { ... } // from try @ 009a7a34 with catch @ 009a7ac0 */
                    /* catch() { ... } // from try @ 009a7a5c with catch @ 009a7ac4 */
      pSVar9 = (Sprite *)tolua_tousertype(param_1,2,0);
      iVar7 = lua_gettop(param_1);
      if ((2 < iVar7) && (uVar8 = luaval_is_usertype(param_1,3,"cc.Sprite",0), (uVar8 & 1) != 0)) {
        pSVar10 = (Sprite *)tolua_tousertype(param_1,3,0);
        iVar7 = lua_gettop(param_1);
        if ((3 < iVar7) && (uVar8 = luaval_is_usertype(param_1,4,"cc.Sprite",0), (uVar8 & 1) != 0))
        {
          pSVar11 = (Sprite *)tolua_tousertype(param_1,4,0);
          pvVar12 = (void *)cocos2d::extension::ControlSlider::create(pSVar9,pSVar10,pSVar11);
joined_r0x009a7ebc:
          if (pvVar12 != (void *)0x0) {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar12 + 0xc),(int *)((long)pvVar12 + 0x10),pvVar12,
                       "cc.ControlSlider");
            uVar13 = 1;
            goto LAB_009a7f14;
          }
          lua_pushnil(param_1);
          goto LAB_009a7f10;
        }
      }
    }
    local_58 = 0;
    local_50 = (char *)0x0;
    local_60 = 0;
                    /* try { // try from 009a7cb0 to 00aa7cc7 has its CatchHandler @ 009a7e2c */
    uVar8 = luaval_to_std_string(param_1,2,(basic_string *)&local_60,"cc.ControlSlider:create");
                    /* try { // try from 009a7ccc to 00aa7ceb has its CatchHandler @ 009a7e30 */
    pcVar2 = (char *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pcVar2 = local_50;
    }
    if ((uVar8 & 1) == 0) {
      iVar7 = 4;
    }
    else {
      local_70 = 0;
      local_68 = (char *)0x0;
      local_78 = 0;
                    /* try { // try from 009a7cec to 00aa7cfb has its CatchHandler @ 009a7dfc */
                    /* try { // try from 009a7cfc to 00aa7d3f has its CatchHandler @ 009a7c74 */
      uVar8 = luaval_to_std_string(param_1,3,(basic_string *)&local_78,"cc.ControlSlider:create");
      pcVar3 = (char *)((ulong)&local_78 | 1);
      if ((local_78 & 1) != 0) {
        pcVar3 = local_68;
      }
      if ((uVar8 & 1) == 0) {
        iVar7 = 4;
      }
      else {
        local_88 = 0;
        local_80 = (char *)0x0;
        local_90 = 0;
        uVar8 = luaval_to_std_string(param_1,4,(basic_string *)&local_90,"cc.ControlSlider:create");
                    /* try { // try from 009a7d40 to 00aa7d53 has its CatchHandler @ 009a7e2c */
        if ((uVar8 & 1) == 0) {
          iVar7 = 4;
        }
        else {
          pcVar4 = (char *)((ulong)&local_90 | 1);
          if ((local_90 & 1) != 0) {
            pcVar4 = local_80;
          }
          pvVar12 = (void *)cocos2d::extension::ControlSlider::create(pcVar2,pcVar3,pcVar4);
          if (pvVar12 == (void *)0x0) {
            lua_pushnil(param_1);
          }
          else {
            toluafix_pushusertype_ccobject
                      (param_1,*(int *)((long)pvVar12 + 0xc),(int *)((long)pvVar12 + 0x10),pvVar12,
                       "cc.ControlSlider");
          }
          iVar7 = 1;
                    /* try { // try from 009a8000 to 00aa8057 has its CatchHandler @ 009a7f68 */
        }
        if ((local_90 & 1) != 0) {
                    /* try { // try from 009a7fb4 to 00aa7fff has its CatchHandler @ 009a803c */
          operator_delete(local_80);
        }
      }
                    /* try { // try from 009a7f68 to 00aa7fb3 has its CatchHandler @ 009a7f68
                       catch() { ... } // from try @ 009a7f68 with catch @ 009a7f68
                       catch() { ... } // from try @ 009a8000 with catch @ 009a7f68 */
      if ((local_78 & 1) != 0) {
        operator_delete(local_68);
      }
    }
    if ((local_60 & 1) != 0) {
      operator_delete(local_50);
    }
    if (iVar7 != 4) goto LAB_009a7f10;
  }
  luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d",
             "cc.ControlSlider:create",iVar6 + -1,4);
  uVar13 = 0;
LAB_009a7f14:
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar13);
}

