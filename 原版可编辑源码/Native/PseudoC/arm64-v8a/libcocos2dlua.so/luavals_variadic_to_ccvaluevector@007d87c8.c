
/* luavals_variadic_to_ccvaluevector(lua_State*, int, std::__ndk1::vector<cocos2d::Value,
   std::__ndk1::allocator<cocos2d::Value> >*) */

void luavals_variadic_to_ccvaluevector(lua_State *param_1,int param_2,vector *param_3)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  Value *pVVar6;
  ulong uVar7;
  Value **in_x3;
  Value *pVVar8;
  int iVar9;
  double dVar10;
  Value aVStack_a0 [16];
  Value *local_90;
  Value *pVStack_88;
  Value *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar5 = 0;
  if ((param_1 != (lua_State *)0x0) && (param_2 != 0)) {
    if (0 < param_2) {
      iVar9 = 0;
      do {
        iVar4 = iVar9 + 2;
        iVar3 = lua_type(param_1,iVar4);
        if (iVar3 == 5) {
          lua_pushnumber(0x3ff0000000000000,param_1);
          lua_gettable(param_1,iVar4);
          iVar3 = lua_type(param_1,0xffffffff);
          lua_settop(param_1,0xfffffffe);
          if (iVar3 == 0) {
            pVStack_88 = (Value *)0x0;
            local_90 = (Value *)0x0;
            uStack_78 = 0;
            local_80 = (Value *)0x0;
            local_70 = 0x3f800000;
            uVar7 = luaval_to_ccvaluemap(param_1,iVar4,(unordered_map *)&local_90,(char *)in_x3);
            pVVar6 = local_90;
            pVVar2 = local_80;
            if ((uVar7 & 1) != 0) {
              cocos2d::Value::Value(aVStack_a0,(unordered_map *)&local_90);
              pVVar6 = *(Value **)(param_3 + 8);
              if (pVVar6 < *(Value **)(param_3 + 0x10)) {
                cocos2d::Value::Value(pVVar6,aVStack_a0);
                *(Value **)(param_3 + 8) = pVVar6 + 0x10;
              }
              else {
                std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                __push_back_slow_path<cocos2d::Value>
                          ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_3,
                           aVStack_a0);
              }
              cocos2d::Value::~Value(aVStack_a0);
              pVVar6 = local_90;
              pVVar2 = local_80;
            }
            while (pVVar2 != (Value *)0x0) {
              pVVar8 = *(Value **)pVVar2;
              local_90 = pVVar6;
              cocos2d::Value::~Value(pVVar2 + 0x28);
              if (((byte)pVVar2[0x10] & 1) != 0) {
                operator_delete(*(void **)(pVVar2 + 0x20));
              }
              operator_delete(pVVar2);
              pVVar6 = local_90;
              pVVar2 = pVVar8;
            }
            local_90 = (Value *)0x0;
            pVVar2 = pVVar6;
joined_r0x007d8aac:
            if (pVVar2 == (Value *)0x0) goto LAB_007d883c;
          }
          else {
            pVStack_88 = (Value *)0x0;
            local_80 = (Value *)0x0;
            local_90 = (Value *)0x0;
            uVar7 = luaval_to_ccvaluevector(param_1,iVar4,(vector *)&local_90,(char *)in_x3);
            if ((uVar7 & 1) != 0) {
              cocos2d::Value::Value(aVStack_a0,(vector *)&local_90);
              pVVar6 = *(Value **)(param_3 + 8);
              if (pVVar6 < *(Value **)(param_3 + 0x10)) {
                cocos2d::Value::Value(pVVar6,aVStack_a0);
                *(Value **)(param_3 + 8) = pVVar6 + 0x10;
              }
              else {
                std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                __push_back_slow_path<cocos2d::Value>
                          ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_3,
                           aVStack_a0);
              }
              cocos2d::Value::~Value(aVStack_a0);
            }
            pVVar8 = local_90;
            pVVar6 = local_90;
            pVVar2 = pVStack_88;
            if (local_90 == (Value *)0x0) goto LAB_007d883c;
            while (local_90 = pVVar6, pVVar2 != pVVar8) {
              cocos2d::Value::~Value(pVVar2 + -0x10);
              pVVar6 = local_90;
              pVVar2 = pVVar2 + -0x10;
            }
            pVStack_88 = pVVar8;
          }
          operator_delete(pVVar6);
        }
        else {
          iVar3 = lua_type(param_1,iVar4);
          if (iVar3 == 4) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_90,"");
            uVar7 = luaval_to_std_string(param_1,iVar4,(basic_string *)&local_90,(char *)in_x3);
            if ((uVar7 & 1) != 0) {
              cocos2d::Value::Value(aVStack_a0,(basic_string *)&local_90);
              pVVar6 = *(Value **)(param_3 + 8);
              if (pVVar6 < *(Value **)(param_3 + 0x10)) {
                cocos2d::Value::Value(pVVar6,aVStack_a0);
                *(Value **)(param_3 + 8) = pVVar6 + 0x10;
              }
              else {
                std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                __push_back_slow_path<cocos2d::Value>
                          ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_3,
                           aVStack_a0);
              }
              cocos2d::Value::~Value(aVStack_a0);
            }
            pVVar6 = local_80;
            pVVar2 = (Value *)((ulong)local_90 & 1);
            goto joined_r0x007d8aac;
          }
          iVar3 = lua_type(param_1,iVar4);
          if (iVar3 == 1) {
            in_x3 = &local_90;
            iVar3 = tolua_isboolean(param_1,iVar4,0);
            if (iVar3 != 0) {
              iVar4 = tolua_toboolean(param_1,iVar4,0);
              cocos2d::Value::Value((Value *)&local_90,iVar4 != 0);
              pVVar6 = *(Value **)(param_3 + 8);
              if (pVVar6 < *(Value **)(param_3 + 0x10)) {
                cocos2d::Value::Value(pVVar6,(Value *)&local_90);
LAB_007d8a44:
                *(Value **)(param_3 + 8) = pVVar6 + 0x10;
              }
              else {
                std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                __push_back_slow_path<cocos2d::Value>
                          ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_3,
                           (Value *)&local_90);
              }
LAB_007d8b34:
              cocos2d::Value::~Value((Value *)&local_90);
            }
          }
          else {
            iVar3 = lua_type(param_1,iVar4);
            if (iVar3 == 3) {
              dVar10 = (double)tolua_tonumber(0,param_1,iVar4);
              cocos2d::Value::Value((Value *)&local_90,dVar10);
              pVVar6 = *(Value **)(param_3 + 8);
              if (pVVar6 < *(Value **)(param_3 + 0x10)) {
                cocos2d::Value::Value(pVVar6,(Value *)&local_90);
                goto LAB_007d8a44;
              }
              std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
              __push_back_slow_path<cocos2d::Value>
                        ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_3,
                         (Value *)&local_90);
              goto LAB_007d8b34;
            }
          }
        }
LAB_007d883c:
        iVar9 = iVar9 + 1;
      } while (iVar9 != param_2);
    }
    uVar5 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

