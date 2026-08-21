
/* lua_cocos2dx_FileUtils_writeValueMapToFile(lua_State*) */

void lua_cocos2dx_FileUtils_writeValueMapToFile(lua_State *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  int iVar10;
  void *pvVar11;
  ulong local_130;
  undefined8 local_128;
  void *local_120;
  void *local_118 [2];
  undefined8 *local_108;
  void *local_f0;
  undefined8 uStack_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  long alStack_c0 [4];
  long *local_a0;
  void *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  void **local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  plVar6 = (long *)tolua_tousertype(param_1,1,0);
  iVar4 = lua_gettop(param_1);
  if (iVar4 == 3) {
    uStack_88 = 0;
    local_90 = (void *)0x0;
    uStack_78 = 0;
    local_80 = (undefined8 *)0x0;
    local_70 = (void **)CONCAT44(local_70._4_4_,0x3f800000);
    uVar7 = luaval_to_ccvaluemap
                      (param_1,2,(unordered_map *)&local_90,"cc.FileUtils:writeValueMapToFile");
    if ((uVar7 & 1) == 0) {
      iVar10 = 6;
      pvVar2 = local_90;
      puVar3 = local_80;
    }
    else {
      uStack_e8 = 0;
      local_e0 = (undefined8 *)0x0;
      local_f0 = (void *)0x0;
      uVar7 = luaval_to_std_string
                        (param_1,3,(basic_string *)&local_f0,"cc.FileUtils:writeValueMapToFile");
      if ((uVar7 & 1) == 0) {
        iVar10 = 6;
      }
      else {
        uVar5 = (**(code **)(*plVar6 + 0xf8))(plVar6,&local_90,&local_f0);
        tolua_pushboolean(param_1,uVar5 & 1);
        iVar10 = 1;
      }
      pvVar2 = local_90;
      puVar3 = local_80;
      if (((ulong)local_f0 & 1) != 0) {
        operator_delete(local_e0);
        pvVar2 = local_90;
        puVar3 = local_80;
      }
    }
    while (puVar3 != (void *)0x0) {
      pvVar11 = (void *)*puVar3;
      local_90 = pvVar2;
      cocos2d::Value::~Value((Value *)(puVar3 + 5));
      if ((*(byte *)(puVar3 + 2) & 1) != 0) {
        operator_delete((void *)puVar3[4]);
      }
      operator_delete(puVar3);
      pvVar2 = local_90;
      puVar3 = pvVar11;
    }
    local_90 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    if (iVar10 == 6) goto LAB_0081458c;
LAB_008145b4:
    uVar8 = 1;
  }
  else {
    if (iVar4 == 4) {
      uStack_e8 = 0;
      local_f0 = (void *)0x0;
      uStack_d8 = 0;
      local_e0 = (undefined8 *)0x0;
      local_d0 = 0x3f800000;
      uVar7 = luaval_to_ccvaluemap
                        (param_1,2,(unordered_map *)&local_f0,"cc.FileUtils:writeValueMapToFile");
      if ((uVar7 & 1) == 0) {
        iVar10 = 2;
        pvVar2 = local_f0;
        puVar3 = local_e0;
      }
      else {
        local_128 = 0;
        local_120 = (void *)0x0;
        local_130 = 0;
        uVar7 = luaval_to_std_string
                          (param_1,3,(basic_string *)&local_130,"cc.FileUtils:writeValueMapToFile");
        if ((uVar7 & 1) == 0) {
          iVar10 = 2;
        }
        else {
          local_70 = (void **)0x0;
          std::__ndk1::
          unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
          ::unordered_map((unordered_map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const,cocos2d::Value>>>
                           *)local_118,(unordered_map *)&local_f0);
          if (local_70 == (void **)0x0) {
            local_a0 = (long *)0x0;
          }
          else if (&local_90 == local_70) {
            local_a0 = alStack_c0;
            (**(code **)((long)*local_70 + 0x18))(local_70,alStack_c0);
          }
          else {
            local_a0 = (long *)(**(code **)((long)*local_70 + 0x10))();
          }
          (**(code **)(*plVar6 + 0x100))(plVar6,local_118,&local_130,alStack_c0);
          if (alStack_c0 == local_a0) {
            pcVar9 = *(code **)(*local_a0 + 0x20);
LAB_00814648:
            (*pcVar9)();
            pvVar2 = local_118[0];
            puVar3 = local_108;
          }
          else {
            pvVar2 = local_118[0];
            puVar3 = local_108;
            if (local_a0 != (long *)0x0) {
              pcVar9 = *(code **)(*local_a0 + 0x28);
              goto LAB_00814648;
            }
          }
          while (puVar3 != (void *)0x0) {
            pvVar11 = (void *)*puVar3;
            local_118[0] = pvVar2;
            cocos2d::Value::~Value((Value *)(puVar3 + 5));
            if ((*(byte *)(puVar3 + 2) & 1) != 0) {
              operator_delete((void *)puVar3[4]);
            }
            operator_delete(puVar3);
            pvVar2 = local_118[0];
            puVar3 = pvVar11;
          }
          local_118[0] = (void *)0x0;
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2);
          }
          lua_settop(param_1,1);
          if (&local_90 == local_70) {
            pcVar9 = *(code **)((long)*local_70 + 0x20);
LAB_008146cc:
            (*pcVar9)();
          }
          else if (local_70 != (void **)0x0) {
            pcVar9 = *(code **)((long)*local_70 + 0x28);
            goto LAB_008146cc;
          }
          iVar10 = 1;
        }
        pvVar2 = local_f0;
        puVar3 = local_e0;
        if ((local_130 & 1) != 0) {
          operator_delete(local_120);
          pvVar2 = local_f0;
          puVar3 = local_e0;
        }
      }
      while (puVar3 != (void *)0x0) {
        pvVar11 = (void *)*puVar3;
        local_f0 = pvVar2;
        cocos2d::Value::~Value((Value *)(puVar3 + 5));
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        pvVar2 = local_f0;
        puVar3 = pvVar11;
      }
      local_f0 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      if (iVar10 != 2) goto LAB_008145b4;
    }
LAB_0081458c:
    luaL_error(param_1,"%s has wrong number of arguments: %d, was expecting %d \n",
               "cc.FileUtils:writeValueMapToFile",iVar4 + -1,2);
    uVar8 = 0;
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar8);
  }
  return;
}

