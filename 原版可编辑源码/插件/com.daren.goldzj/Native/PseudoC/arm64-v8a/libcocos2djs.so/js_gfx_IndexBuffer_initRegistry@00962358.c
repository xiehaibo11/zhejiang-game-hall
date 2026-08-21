
/* js_gfx_IndexBuffer_initRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_IndexBuffer_initRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *pvVar5;
  IndexBuffer *pIVar6;
  long *plVar7;
  Value *pVVar8;
  Object *pOVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  Isolate *pIVar13;
  Value *local_130;
  Value *local_128;
  undefined8 local_120;
  HandleScope aHStack_118 [28];
  uint local_fc;
  ulong local_f8;
  uchar *puStack_f0;
  State aSStack_e8 [40];
  undefined **local_c0;
  undefined8 uStack_b8;
  undefined ***local_a0;
  undefined **local_90;
  undefined8 uStack_88;
  undefined ***local_70;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar13 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_118,pIVar13);
  local_130 = (Value *)0x0;
  local_128 = (Value *)0x0;
  local_120 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_130,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_130);
  pvVar5 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_e8,pvVar5,(vector *)&local_130);
  pIVar6 = (IndexBuffer *)se::State::nativeThisObject(aSStack_e8);
  if (pIVar6 == (IndexBuffer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                        ,0x1d8,"js_gfx_IndexBuffer_init");
    __android_log_print(6,"jswrapper","js_gfx_IndexBuffer_init : Invalid Native Object");
  }
  else {
    plVar7 = (long *)se::State::args(aSStack_e8);
    pVVar8 = (Value *)*plVar7;
    if (plVar7[1] - (long)pVVar8 == 0x50) {
      if (pVVar8[8] == (Value)0x5) {
        pOVar9 = (Object *)se::Value::toObject(pVVar8);
        uVar10 = se::Object::getPrivateData(pOVar9);
        pVVar8 = (Value *)*plVar7;
      }
      else {
        uVar10 = 0;
      }
      uVar3 = se::Value::toUint16(pVVar8 + 0x10);
      uVar4 = se::Value::toUint16((Value *)(*plVar7 + 0x20));
      local_f8 = 0;
      puStack_f0 = (uchar *)0x0;
      local_fc = 0;
      lVar11 = *plVar7;
      if (*(char *)(lVar11 + 0x38) == '\x05') {
        pOVar9 = (Object *)se::Value::toObject((Value *)(lVar11 + 0x30));
        se::Object::getTypedArrayData(pOVar9,&puStack_f0,&local_f8);
        lVar11 = *plVar7;
      }
      seval_to_uint32((Value *)(lVar11 + 0x40),&local_fc);
      cocos2d::renderer::IndexBuffer::init(pIVar6,uVar10,uVar3,uVar4,puStack_f0,local_f8,local_fc);
      uStack_b8 = se::State::thisObject(aSStack_e8);
      local_a0 = &local_c0;
      local_c0 = &PTR_FUN_01c69820;
      local_90 = &PTR_FUN_01c69820;
      uStack_88 = uStack_b8;
      local_70 = &local_90;
      FUN_009655fc(&local_90,pIVar6 + 0x30);
      if (&local_90 == local_70) {
        pcVar12 = (code *)(*local_70)[4];
LAB_00962628:
        (*pcVar12)();
      }
      else if (local_70 != (undefined ***)0x0) {
        pcVar12 = (code *)(*local_70)[5];
        goto LAB_00962628;
      }
      if (&local_c0 == local_a0) {
        (*(code *)(*local_a0)[4])();
      }
      else if (local_a0 != (undefined ***)0x0) {
        (*(code *)(*local_a0)[5])();
      }
      goto LAB_009624d0;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp, 517): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar7[1] - (long)pVVar8) >> 4,5);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_IndexBuffer_init",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                      ,0x208);
LAB_009624d0:
  pVVar8 = (Value *)se::State::rval(aSStack_e8);
  se::internal::setReturnValue(pVVar8,param_1);
  se::State::~State(aSStack_e8);
  pVVar2 = local_130;
  pVVar8 = local_128;
  if (local_130 != (Value *)0x0) {
    while (pVVar8 != pVVar2) {
      se::Value::~Value(pVVar8 + -0x10);
      pVVar8 = pVVar8 + -0x10;
    }
    local_128 = pVVar2;
    operator_delete(local_130);
  }
  v8::HandleScope::~HandleScope(aHStack_118);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

