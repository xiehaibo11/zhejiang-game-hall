
/* luaval_to_ccvalue(lua_State*, int, cocos2d::Value*, char const*) */

void luaval_to_ccvalue(lua_State *param_1,int param_2,Value *param_3,char *param_4)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  Value *pVVar6;
  char *pcVar7;
  char *pcVar8;
  Value *pVVar9;
  double dVar10;
  char acStack_90 [16];
  Value aVStack_80 [16];
  Value *local_70;
  Value *pVStack_68;
  Value *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  pcVar7 = acStack_90;
  pcVar8 = acStack_90;
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar4 = 0;
  if ((param_1 == (lua_State *)0x0) || (param_3 == (Value *)0x0)) goto LAB_007d9a94;
  iVar3 = tolua_istable(param_1,param_2,0);
  if (iVar3 == 0) {
    iVar3 = lua_type(param_1,param_2);
    if ((iVar3 == 4) && (iVar3 = tolua_isstring(param_1,param_2,0), iVar3 != 0)) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_70,"");
      uVar5 = luaval_to_std_string(param_1,param_2,(basic_string *)&local_70,pcVar8);
      if ((uVar5 & 1) != 0) {
        cocos2d::Value::Value(aVStack_80,(basic_string *)&local_70);
        cocos2d::Value::operator=(param_3,aVStack_80);
        cocos2d::Value::~Value(aVStack_80);
      }
      pVVar6 = local_60;
      pVVar2 = (Value *)((ulong)local_70 & 1);
      goto joined_r0x007d9918;
    }
    iVar3 = lua_type(param_1,param_2);
    if ((iVar3 == 1) && (iVar3 = tolua_isboolean(param_1,param_2,0,acStack_90), iVar3 != 0)) {
      iVar3 = tolua_isboolean(param_1,param_2,0,&local_70);
      if (iVar3 != 0) {
        iVar3 = tolua_toboolean(param_1,param_2,0);
        cocos2d::Value::Value((Value *)&local_70,iVar3 != 0);
        cocos2d::Value::operator=(param_3,(Value *)&local_70);
LAB_007d9a78:
        cocos2d::Value::~Value((Value *)&local_70);
      }
    }
    else {
      iVar3 = lua_type(param_1,param_2);
      if ((iVar3 == 3) && (iVar3 = tolua_isnumber(param_1,param_2,0,acStack_90), iVar3 != 0)) {
        dVar10 = (double)tolua_tonumber(0,param_1,param_2);
        cocos2d::Value::Value((Value *)&local_70,dVar10);
        cocos2d::Value::operator=(param_3,(Value *)&local_70);
        goto LAB_007d9a78;
      }
    }
  }
  else {
    lua_pushnumber(0x3ff0000000000000,param_1);
    lua_gettable(param_1,param_2);
    iVar3 = lua_type(param_1,0xffffffff);
    lua_settop(param_1,0xfffffffe);
    if (iVar3 == 0) {
      pVStack_68 = (Value *)0x0;
      local_70 = (Value *)0x0;
      uStack_58 = 0;
      local_60 = (Value *)0x0;
      local_50 = 0x3f800000;
      uVar5 = luaval_to_ccvaluemap(param_1,param_2,(unordered_map *)&local_70,pcVar7);
      pVVar6 = local_70;
      pVVar2 = local_60;
      if ((uVar5 & 1) != 0) {
        cocos2d::Value::Value(aVStack_80,(unordered_map *)&local_70);
        cocos2d::Value::operator=(param_3,aVStack_80);
        cocos2d::Value::~Value(aVStack_80);
        pVVar6 = local_70;
        pVVar2 = local_60;
      }
      while (pVVar2 != (Value *)0x0) {
        pVVar9 = *(Value **)pVVar2;
        local_70 = pVVar6;
        cocos2d::Value::~Value(pVVar2 + 0x28);
        if (((byte)pVVar2[0x10] & 1) != 0) {
          operator_delete(*(void **)(pVVar2 + 0x20));
        }
        operator_delete(pVVar2);
        pVVar6 = local_70;
        pVVar2 = pVVar9;
      }
      local_70 = (Value *)0x0;
      pVVar2 = pVVar6;
joined_r0x007d9918:
      if (pVVar2 == (Value *)0x0) goto LAB_007d9a90;
    }
    else {
      pVStack_68 = (Value *)0x0;
      local_60 = (Value *)0x0;
      local_70 = (Value *)0x0;
      uVar5 = luaval_to_ccvaluevector(param_1,param_2,(vector *)&local_70,pcVar7);
      if ((uVar5 & 1) != 0) {
        cocos2d::Value::Value(aVStack_80,(vector *)&local_70);
        cocos2d::Value::operator=(param_3,aVStack_80);
        cocos2d::Value::~Value(aVStack_80);
      }
      pVVar9 = local_70;
      pVVar6 = local_70;
      pVVar2 = pVStack_68;
      if (local_70 == (Value *)0x0) goto LAB_007d9a90;
      while (local_70 = pVVar6, pVVar2 != pVVar9) {
        cocos2d::Value::~Value(pVVar2 + -0x10);
        pVVar6 = local_70;
        pVVar2 = pVVar2 + -0x10;
      }
      pVStack_68 = pVVar9;
    }
    operator_delete(pVVar6);
  }
LAB_007d9a90:
  uVar4 = 1;
LAB_007d9a94:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

