
/* JSB_glShaderFinalizeRegistry(void*) */

void JSB_glShaderFinalizeRegistry(void *param_1)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  ScriptEngine *this;
  Ref *this_00;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  State aSStack_78 [40];
  void *local_50 [2];
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 != (void *)0x0) {
    this = (ScriptEngine *)se::ScriptEngine::getInstance();
    se::ScriptEngine::_setGarbageCollecting(this,true);
    se::State::State(aSStack_78,param_1);
    this_00 = (Ref *)se::State::nativeThisObject(aSStack_78);
    if (DAT_01d36de8 != 0) {
      uVar5 = (ulong)*(uint *)(this_00 + 0xc);
      uVar6 = DAT_01d36de8 - 1;
      if ((uVar6 & DAT_01d36de8) == 0) {
        uVar7 = uVar6 & uVar5;
      }
      else {
        uVar7 = uVar5;
        if (DAT_01d36de8 <= uVar5) {
          uVar7 = 0;
          if (DAT_01d36de8 != 0) {
            uVar7 = uVar5 / DAT_01d36de8;
          }
          uVar7 = uVar5 - uVar7 * DAT_01d36de8;
        }
      }
      plVar8 = *(long **)(DAT_01d36de0 + uVar7 * 8);
      if (plVar8 != (long *)0x0) {
        for (plVar8 = (long *)*plVar8; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
          uVar9 = plVar8[1];
          if (uVar9 == uVar5) {
            if (*(uint *)(plVar8 + 2) == *(uint *)(this_00 + 0xc)) {
              std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<unsigned_int,se::Value>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,se::Value>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,se::Value>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,se::Value>>>
              ::remove(local_50,&DAT_01d36de0);
              pvVar3 = local_50[0];
              local_50[0] = (void *)0x0;
              if (pvVar3 != (void *)0x0) {
                if (local_40 != '\0') {
                  se::Value::~Value((Value *)((long)pvVar3 + 0x18));
                }
                operator_delete(pvVar3);
              }
              break;
            }
          }
          else {
            if ((uVar6 & DAT_01d36de8) == 0) {
              uVar9 = uVar9 & uVar6;
            }
            else if (DAT_01d36de8 <= uVar9) {
              uVar1 = 0;
              if (DAT_01d36de8 != 0) {
                uVar1 = uVar9 / DAT_01d36de8;
              }
              uVar9 = uVar9 - uVar1 * DAT_01d36de8;
            }
            if (uVar9 != uVar7) break;
          }
        }
      }
    }
    lVar4 = se::ScriptEngine::getInstance();
    if (*(char *)(lVar4 + 0x20e) == '\0') {
      cocos2d::Ref::autorelease(this_00);
    }
    else {
      cocos2d::Ref::release(this_00);
    }
    se::ScriptEngine::_setGarbageCollecting(this,false);
    se::State::~State(aSStack_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

