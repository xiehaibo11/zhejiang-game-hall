
/* lua_cocos2dx_3d_Skybox_create(lua_State*) */

void lua_cocos2dx_3d_Skybox_create(lua_State *param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  void *pvVar4;
  Skybox *this;
  undefined8 uVar5;
  int iVar6;
  ulong local_c8;
  undefined8 local_c0;
  void *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  undefined8 local_78;
  void *local_70;
  ulong local_68;
  undefined8 local_60;
  void *local_58;
  ulong local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = lua_gettop();
  if (iVar2 + -1 == 0) {
    this = operator_new(0x370,(nothrow_t *)&std::nothrow);
    if (this != (Skybox *)0x0) {
      cocos2d::Skybox::Skybox(this);
      uVar3 = (**(code **)(*(long *)this + 0x500))(this);
      if ((uVar3 & 1) != 0) {
        cocos2d::Ref::autorelease((Ref *)this);
        toluafix_pushusertype_ccobject
                  (param_1,*(int *)(this + 0xc),(int *)(this + 0x10),this,"cc.Skybox");
        goto LAB_0090543c;
      }
      (**(code **)(*(long *)this + 8))(this);
    }
    lua_pushnil(param_1);
LAB_0090543c:
    uVar5 = 1;
  }
  else {
    if (iVar2 == 7) {
      local_48 = 0;
      local_40 = (void *)0x0;
      local_50 = 0;
                    /* try { // try from 009051d8 to 00a0520b has its CatchHandler @ 009052d8 */
      uVar3 = luaval_to_std_string(param_1,2,(basic_string *)&local_50,"cc.Skybox:create");
      if ((uVar3 & 1) == 0) {
        iVar6 = 2;
      }
      else {
        local_60 = 0;
        local_58 = (void *)0x0;
        local_68 = 0;
                    /* try { // try from 0090520c to 00a0521f has its CatchHandler @ 009052a4 */
        uVar3 = luaval_to_std_string(param_1,3,(basic_string *)&local_68,"cc.Skybox:create");
        if ((uVar3 & 1) == 0) {
          iVar6 = 2;
        }
        else {
          local_78 = 0;
          local_70 = (void *)0x0;
          local_80 = 0;
                    /* try { // try from 00905224 to 00a05257 has its CatchHandler @ 009052a8 */
          uVar3 = luaval_to_std_string(param_1,4,(basic_string *)&local_80,"cc.Skybox:create");
          if ((uVar3 & 1) == 0) {
            iVar6 = 2;
          }
          else {
            local_90 = 0;
            local_88 = (void *)0x0;
            local_98 = 0;
            uVar3 = luaval_to_std_string(param_1,5,(basic_string *)&local_98,"cc.Skybox:create");
                    /* try { // try from 00905258 to 00a052f3 has its CatchHandler @ 00905108 */
            if ((uVar3 & 1) == 0) {
              iVar6 = 2;
            }
            else {
              local_a8 = 0;
              local_a0 = (void *)0x0;
              local_b0 = 0;
              uVar3 = luaval_to_std_string(param_1,6,(basic_string *)&local_b0,"cc.Skybox:create");
              if ((uVar3 & 1) == 0) {
                iVar6 = 2;
              }
              else {
                local_c0 = 0;
                local_b8 = (void *)0x0;
                local_c8 = 0;
                uVar3 = luaval_to_std_string(param_1,7,(basic_string *)&local_c8,"cc.Skybox:create")
                ;
                if ((uVar3 & 1) == 0) {
                  iVar6 = 2;
                }
                else {
                    /* catch() { ... } // from try @ 0090520c with catch @ 009052a4 */
                    /* catch() { ... } // from try @ 00905224 with catch @ 009052a8 */
                  pvVar4 = (void *)cocos2d::Skybox::create
                                             ((basic_string *)&local_50,(basic_string *)&local_68,
                                              (basic_string *)&local_80,(basic_string *)&local_98,
                                              (basic_string *)&local_b0,(basic_string *)&local_c8);
                  if (pvVar4 == (void *)0x0) {
                    lua_pushnil(param_1);
                  }
                  else {
                    /* catch() { ... } // from try @ 009051d8 with catch @ 009052d8 */
                    toluafix_pushusertype_ccobject
                              (param_1,*(int *)((long)pvVar4 + 0xc),(int *)((long)pvVar4 + 0x10),
                               pvVar4,"cc.Skybox");
                  }
                  iVar6 = 1;
                }
                if ((local_c8 & 1) != 0) {
                  operator_delete(local_b8);
                }
              }
              if ((local_b0 & 1) != 0) {
                operator_delete(local_a0);
              }
            }
            if ((local_98 & 1) != 0) {
              operator_delete(local_88);
            }
          }
          if ((local_80 & 1) != 0) {
            operator_delete(local_70);
          }
        }
        if ((local_68 & 1) != 0) {
          operator_delete(local_58);
        }
      }
      if ((local_50 & 1) != 0) {
        operator_delete(local_40);
      }
      if (iVar6 != 2) goto LAB_0090543c;
    }
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d","cc.Skybox:create",
               iVar2 + -1,0);
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

