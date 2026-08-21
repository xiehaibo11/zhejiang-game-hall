
/* ccvaluevector_to_luaval(lua_State*, std::__ndk1::vector<cocos2d::Value,
   std::__ndk1::allocator<cocos2d::Value> > const&) */

void ccvaluevector_to_luaval(lua_State *param_1,vector *param_2)

{
  void *pvVar1;
  Value *pVVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  vector *pvVar6;
  unordered_map *puVar7;
  Value *this;
  int iVar8;
  double dVar9;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lua_createtable(param_1,0,0);
  if (param_1 != (lua_State *)0x0) {
    this = *(Value **)param_2;
    pVVar2 = *(Value **)(param_2 + 8);
    if (this != pVVar2) {
      iVar8 = 1;
      do {
        if (8 < *(int *)(this + 8) - 2U) goto switchD_007dcee4_caseD_3;
        dVar9 = (double)iVar8;
        switch(*(int *)(this + 8)) {
        case 2:
          lua_pushnumber(dVar9,param_1);
          iVar4 = cocos2d::Value::asInt(this);
          dVar9 = (double)iVar4;
          goto LAB_007dcf10;
        case 3:
          goto switchD_007dcee4_caseD_3;
        default:
          lua_pushnumber(dVar9,param_1);
          dVar9 = (double)cocos2d::Value::asDouble(this);
LAB_007dcf10:
          lua_pushnumber(dVar9,param_1);
          break;
        case 6:
          lua_pushnumber(dVar9,param_1);
          uVar5 = cocos2d::Value::asBool(this);
          lua_pushboolean(param_1,uVar5 & 1);
          break;
        case 7:
          lua_pushnumber(dVar9,param_1);
          cocos2d::Value::asString();
          pvVar1 = (void *)((ulong)local_70 | 1);
          if ((local_70[0] & 1) != 0) {
            pvVar1 = local_60;
          }
          lua_pushstring(param_1,pvVar1);
          if ((local_70[0] & 1) != 0) {
            operator_delete(local_60);
          }
          break;
        case 8:
          lua_pushnumber(dVar9,param_1);
          pvVar6 = (vector *)cocos2d::Value::asValueVector(this);
          ccvaluevector_to_luaval(param_1,pvVar6);
          break;
        case 9:
          lua_pushnumber(dVar9,param_1);
          puVar7 = (unordered_map *)cocos2d::Value::asValueMap(this);
          ccvaluemap_to_luaval(param_1,puVar7);
          break;
        case 10:
          lua_pushnumber(dVar9,param_1);
          puVar7 = (unordered_map *)cocos2d::Value::asIntKeyMap(this);
          ccvaluemapintkey_to_luaval(param_1,puVar7);
        }
        lua_rawset(param_1,0xfffffffd);
        iVar8 = iVar8 + 1;
switchD_007dcee4_caseD_3:
        this = this + 0x10;
      } while (pVVar2 != this);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

