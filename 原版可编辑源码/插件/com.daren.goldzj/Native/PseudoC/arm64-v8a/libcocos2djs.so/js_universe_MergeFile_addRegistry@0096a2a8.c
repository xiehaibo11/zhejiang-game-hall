
/* js_universe_MergeFile_addRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_universe_MergeFile_addRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  Value *pVVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  MergeFile *this;
  long *plVar9;
  Value *pVVar10;
  Isolate *pIVar11;
  byte *pbVar12;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  ulong local_a0;
  undefined8 local_98;
  void *local_90;
  byte *local_88;
  byte *local_80;
  undefined8 local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar11 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar11);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar8 = (void *)se::internal::getPrivate(pIVar11,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar8,(vector *)&local_d0);
  this = (MergeFile *)se::State::nativeThisObject(aSStack_70);
  if (this == (MergeFile *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                        ,0x26e,"js_universe_MergeFile_add");
    __android_log_print(6,"jswrapper","js_universe_MergeFile_add : Invalid Native Object");
  }
  else {
    plVar9 = (long *)se::State::args(aSStack_70);
    if (plVar9[1] - *plVar9 == 0x20) {
      local_88 = (byte *)0x0;
      local_80 = (byte *)0x0;
      local_78 = 0;
      local_98 = 0;
      local_90 = (void *)0x0;
      local_a0 = 0;
      uVar6 = seval_to_std_vector_string((Value *)*plVar9,(vector *)&local_88);
      uVar7 = seval_to_std_string((Value *)(*plVar9 + 0x10),(basic_string *)&local_a0);
      bVar1 = (uVar6 & uVar7 & 1) == 0;
      if (bVar1) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                            ,0x277,"js_universe_MergeFile_add");
        __android_log_print(6,"jswrapper","js_universe_MergeFile_add : Error processing arguments");
      }
      else {
        universe::MergeFile::add(this,(vector *)&local_88,(basic_string *)&local_a0);
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      pbVar5 = local_88;
      pbVar12 = local_80;
      if (local_88 != (byte *)0x0) {
        while (pbVar3 = pbVar12, pbVar3 != pbVar5) {
          pbVar12 = pbVar3 + -0x18;
          if ((*pbVar12 & 1) != 0) {
            operator_delete(*(void **)(pbVar3 + -8));
          }
        }
        local_80 = pbVar5;
        operator_delete(local_88);
      }
      if (!bVar1) goto LAB_0096a4f8;
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp, 635): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar9[1] - *plVar9) >> 4,2);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_universe_MergeFile_add",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_homeup_auto.cpp"
                      ,0x27e);
LAB_0096a4f8:
  pVVar10 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar10,param_1);
  se::State::~State(aSStack_70);
  pVVar4 = local_d0;
  pVVar10 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar10 != pVVar4) {
      se::Value::~Value(pVVar10 + -0x10);
      pVVar10 = pVVar10 + -0x10;
    }
    local_c8 = pVVar4;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

