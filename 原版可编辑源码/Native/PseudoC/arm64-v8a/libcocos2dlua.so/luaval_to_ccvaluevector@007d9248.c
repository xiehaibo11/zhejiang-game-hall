
/* luaval_to_ccvaluevector(lua_State*, int, std::__ndk1::vector<cocos2d::Value,
   std::__ndk1::allocator<cocos2d::Value> >*, char const*) */

bool luaval_to_ccvaluevector(lua_State *param_1,int param_2,vector *param_3,char *param_4)

{
  long lVar1;
  Value *pVVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  Value *pVVar6;
  ulong uVar7;
  Value **ppVVar8;
  ulong uVar9;
  Value *pVVar10;
  double dVar11;
  Value *apVStack_c0 [2];
  Value aVStack_b0 [16];
  Value *local_a0;
  Value *pVStack_98;
  Value *local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  long local_78;
  
  ppVVar8 = apVStack_c0;
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  bVar3 = false;
  if ((param_1 != (lua_State *)0x0) && (param_3 != (vector *)0x0)) {
    iVar4 = tolua_istable(param_1,param_2,0);
    bVar3 = iVar4 != 0;
    if ((iVar4 != 0) && (uVar5 = lua_objlen(param_1,param_2), uVar5 != 0)) {
      uVar9 = 0;
      do {
        uVar9 = uVar9 + 1;
        lua_pushnumber((double)uVar9,param_1);
        lua_gettable(param_1,param_2);
        iVar4 = lua_type(param_1,0xffffffff);
        if (iVar4 == 0) goto LAB_007d92dc;
        iVar4 = lua_type(param_1,0xffffffff);
        if (iVar4 == 5) {
          lua_pushnumber(0x3ff0000000000000,param_1);
          lua_gettable(param_1,0xfffffffe);
          iVar4 = lua_type(param_1,0xffffffff);
          lua_settop(param_1,0xfffffffe);
          if (iVar4 == 0) {
            pVStack_98 = (Value *)0x0;
            local_a0 = (Value *)0x0;
            uStack_88 = 0;
            local_90 = (Value *)0x0;
            local_80 = 0x3f800000;
            iVar4 = lua_gettop(param_1);
            uVar7 = luaval_to_ccvaluemap(param_1,iVar4,(unordered_map *)&local_a0,(char *)ppVVar8);
            pVVar6 = local_a0;
            pVVar2 = local_90;
            if ((uVar7 & 1) != 0) {
              cocos2d::Value::Value(aVStack_b0,(unordered_map *)&local_a0);
              pVVar6 = *(Value **)(param_3 + 8);
              if (pVVar6 < *(Value **)(param_3 + 0x10)) {
                cocos2d::Value::Value(pVVar6,aVStack_b0);
                *(Value **)(param_3 + 8) = pVVar6 + 0x10;
              }
              else {
                std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                __push_back_slow_path<cocos2d::Value>
                          ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_3,
                           aVStack_b0);
              }
              cocos2d::Value::~Value(aVStack_b0);
              pVVar6 = local_a0;
              pVVar2 = local_90;
            }
            while (pVVar2 != (Value *)0x0) {
              pVVar10 = *(Value **)pVVar2;
              local_a0 = pVVar6;
              cocos2d::Value::~Value(pVVar2 + 0x28);
              if (((byte)pVVar2[0x10] & 1) != 0) {
                operator_delete(*(void **)(pVVar2 + 0x20));
              }
              operator_delete(pVVar2);
              pVVar6 = local_a0;
              pVVar2 = pVVar10;
            }
            local_a0 = (Value *)0x0;
            pVVar2 = pVVar6;
joined_r0x007d9590:
            if (pVVar2 == (Value *)0x0) goto LAB_007d92dc;
          }
          else {
            pVStack_98 = (Value *)0x0;
            local_90 = (Value *)0x0;
            local_a0 = (Value *)0x0;
            iVar4 = lua_gettop(param_1);
            uVar7 = luaval_to_ccvaluevector(param_1,iVar4,(vector *)&local_a0,(char *)ppVVar8);
            if ((uVar7 & 1) != 0) {
              cocos2d::Value::Value(aVStack_b0,(vector *)&local_a0);
              pVVar6 = *(Value **)(param_3 + 8);
              if (pVVar6 < *(Value **)(param_3 + 0x10)) {
                cocos2d::Value::Value(pVVar6,aVStack_b0);
                *(Value **)(param_3 + 8) = pVVar6 + 0x10;
              }
              else {
                std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                __push_back_slow_path<cocos2d::Value>
                          ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_3,
                           aVStack_b0);
              }
              cocos2d::Value::~Value(aVStack_b0);
            }
            pVVar10 = local_a0;
            pVVar6 = local_a0;
            pVVar2 = pVStack_98;
            if (local_a0 == (Value *)0x0) goto LAB_007d92dc;
            while (local_a0 = pVVar6, pVVar2 != pVVar10) {
              cocos2d::Value::~Value(pVVar2 + -0x10);
              pVVar6 = local_a0;
              pVVar2 = pVVar2 + -0x10;
            }
            pVStack_98 = pVVar10;
          }
          operator_delete(pVVar6);
        }
        else {
          iVar4 = lua_type(param_1,0xffffffff);
          if (iVar4 == 4) {
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_a0,"");
            uVar7 = luaval_to_std_string(param_1,-1,(basic_string *)&local_a0,(char *)ppVVar8);
            if ((uVar7 & 1) != 0) {
              cocos2d::Value::Value(aVStack_b0,(basic_string *)&local_a0);
              pVVar6 = *(Value **)(param_3 + 8);
              if (pVVar6 < *(Value **)(param_3 + 0x10)) {
                cocos2d::Value::Value(pVVar6,aVStack_b0);
                *(Value **)(param_3 + 8) = pVVar6 + 0x10;
              }
              else {
                std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                __push_back_slow_path<cocos2d::Value>
                          ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_3,
                           aVStack_b0);
              }
              cocos2d::Value::~Value(aVStack_b0);
            }
            pVVar6 = local_90;
            pVVar2 = (Value *)((ulong)local_a0 & 1);
            goto joined_r0x007d9590;
          }
          iVar4 = lua_type(param_1,0xffffffff);
          if (iVar4 == 1) {
            ppVVar8 = &local_a0;
            iVar4 = tolua_isboolean(param_1,0xffffffff,0);
            if (iVar4 != 0) {
              iVar4 = tolua_toboolean(param_1,0xffffffff,0);
              cocos2d::Value::Value((Value *)&local_a0,iVar4 != 0);
              pVVar6 = *(Value **)(param_3 + 8);
              if (pVVar6 < *(Value **)(param_3 + 0x10)) {
                cocos2d::Value::Value(pVVar6,(Value *)&local_a0);
LAB_007d9528:
                *(Value **)(param_3 + 8) = pVVar6 + 0x10;
              }
              else {
                std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
                __push_back_slow_path<cocos2d::Value>
                          ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_3,
                           (Value *)&local_a0);
              }
LAB_007d9618:
              cocos2d::Value::~Value((Value *)&local_a0);
            }
          }
          else {
            iVar4 = lua_type(param_1,0xffffffff);
            if (iVar4 == 3) {
              dVar11 = (double)tolua_tonumber(0,param_1,0xffffffff);
              cocos2d::Value::Value((Value *)&local_a0,dVar11);
              pVVar6 = *(Value **)(param_3 + 8);
              if (pVVar6 < *(Value **)(param_3 + 0x10)) {
                cocos2d::Value::Value(pVVar6,(Value *)&local_a0);
                goto LAB_007d9528;
              }
              std::__ndk1::vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>>::
              __push_back_slow_path<cocos2d::Value>
                        ((vector<cocos2d::Value,std::__ndk1::allocator<cocos2d::Value>> *)param_3,
                         (Value *)&local_a0);
              goto LAB_007d9618;
            }
          }
        }
LAB_007d92dc:
        lua_settop(param_1,0xfffffffe);
      } while (uVar9 != uVar5);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

