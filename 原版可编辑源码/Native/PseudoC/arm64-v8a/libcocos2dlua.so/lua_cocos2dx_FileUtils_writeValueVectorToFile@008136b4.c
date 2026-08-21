
/* lua_cocos2dx_FileUtils_writeValueVectorToFile(lua_State*) */

void lua_cocos2dx_FileUtils_writeValueVectorToFile(lua_State *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  int iVar10;
  Value *local_108;
  Value *local_100;
  ulong local_f0;
  undefined8 local_e8;
  void *local_e0;
  Value *local_d8;
  Value *local_d0;
  void *local_c8;
  long alStack_c0 [4];
  long *local_a0;
  Value *local_90;
  Value *local_88;
  undefined8 uStack_80;
  Value **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar6 = (long *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 == 3) {
    local_88 = (Value *)0x0;
    uStack_80 = 0;
    local_90 = (Value *)0x0;
    uVar7 = luaval_to_ccvaluevector
                      (param_1,2,(vector *)&local_90,"cc.FileUtils:writeValueVectorToFile");
    if ((uVar7 & 1) == 0) {
      iVar10 = 6;
      pVVar2 = local_90;
    }
    else {
      local_d0 = (Value *)0x0;
      local_c8 = (void *)0x0;
      local_d8 = (Value *)0x0;
      uVar7 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_d8,"cc.FileUtils:writeValueVectorToFile");
      if ((uVar7 & 1) == 0) {
        iVar10 = 6;
      }
      else {
        uVar5 = (**(code **)(*plVar6 + 0x108))(plVar6,&local_90,&local_d8);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar10 = 1;
      }
      pVVar2 = local_90;
      if (((ulong)local_d8 & 1) != 0) {
        operator_delete(local_c8);
        pVVar2 = local_90;
      }
    }
    local_90 = pVVar2;
    pVVar3 = local_88;
    if (pVVar2 != (Value *)0x0) {
      while (pVVar3 != pVVar2) {
        cocos2d::Value::~Value(pVVar3 + -0x10);
        pVVar3 = pVVar3 + -0x10;
      }
      local_88 = pVVar2;
      operator_delete(local_90);
    }
    if (iVar10 == 6) goto LAB_00813894;
LAB_00813914:
    uVar8 = 1;
  }
  else {
    if (iVar4 == 4) {
      local_d0 = (Value *)0x0;
      local_c8 = (void *)0x0;
      local_d8 = (Value *)0x0;
      uVar7 = luaval_to_ccvaluevector
                        (param_1,2,(vector *)&local_d8,"cc.FileUtils:writeValueVectorToFile");
      if ((uVar7 & 1) == 0) {
        iVar10 = 2;
        pVVar2 = local_d8;
      }
      else {
        local_e8 = 0;
        local_e0 = (void *)0x0;
        local_f0 = 0;
        uVar7 = luaval_to_std_string
                          (param_1,3,(basic_string *)&local_f0,"cc.FileUtils:writeValueVectorToFile"
                          );
        if ((uVar7 & 1) == 0) {
          iVar10 = 2;
        }
        else {
          local_70 = (Value **)0x0;
          std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::vector
                    ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)&local_108,
                     (vector *)&local_d8);
          if (local_70 == (Value **)0x0) {
            local_a0 = (long *)0x0;
          }
          else if (&local_90 == local_70) {
            local_a0 = alStack_c0;
            (**(code **)(*local_70 + 0x18))(local_70,alStack_c0);
          }
          else {
            local_a0 = (long *)(**(code **)(*local_70 + 0x10))();
          }
          (**(code **)(*plVar6 + 0x110))(plVar6,&local_108,&local_f0,alStack_c0);
          if (alStack_c0 == local_a0) {
            pcVar9 = *(code **)(*local_a0 + 0x20);
LAB_008139a8:
            (*pcVar9)();
          }
          else if (local_a0 != (long *)0x0) {
            pcVar9 = *(code **)(*local_a0 + 0x28);
            goto LAB_008139a8;
          }
          pVVar2 = local_108;
          if (local_108 != (Value *)0x0) {
            while (local_100 != pVVar2) {
              cocos2d::Value::~Value(local_100 + -0x10);
              local_100 = local_100 + -0x10;
            }
            local_100 = pVVar2;
            operator_delete(local_108);
          }
          lua_settop(param_1,1);
          if (&local_90 == local_70) {
            pcVar9 = *(code **)(*local_70 + 0x20);
LAB_00813a1c:
            (*pcVar9)();
          }
          else if (local_70 != (Value **)0x0) {
            pcVar9 = *(code **)(*local_70 + 0x28);
            goto LAB_00813a1c;
          }
          iVar10 = 1;
        }
        pVVar2 = local_d8;
        if ((local_f0 & 1) != 0) {
          operator_delete(local_e0);
          pVVar2 = local_d8;
        }
      }
      local_d8 = pVVar2;
      pVVar3 = local_d0;
      if (pVVar2 != (Value *)0x0) {
        while (pVVar3 != pVVar2) {
          cocos2d::Value::~Value(pVVar3 + -0x10);
          pVVar3 = pVVar3 + -0x10;
        }
        local_d0 = pVVar2;
        operator_delete(local_d8);
      }
      if (iVar10 != 2) goto LAB_00813914;
    }
LAB_00813894:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:writeValueVectorToFile",iVar4 + -1,2);
    uVar8 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

