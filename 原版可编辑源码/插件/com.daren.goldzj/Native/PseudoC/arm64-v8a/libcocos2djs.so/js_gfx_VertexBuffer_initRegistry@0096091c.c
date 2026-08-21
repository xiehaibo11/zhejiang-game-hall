
/* js_gfx_VertexBuffer_initRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_VertexBuffer_initRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  undefined4 uVar3;
  void *pvVar4;
  VertexBuffer *pVVar5;
  long *plVar6;
  Value *pVVar7;
  Object *pOVar8;
  undefined8 uVar9;
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
  pvVar4 = (void *)se::internal::getPrivate(pIVar13,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_e8,pvVar4,(vector *)&local_130);
  pVVar5 = (VertexBuffer *)se::State::nativeThisObject(aSStack_e8);
  if (pVVar5 == (VertexBuffer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                        ,0xd0,"js_gfx_VertexBuffer_init");
    __android_log_print(6,"jswrapper","js_gfx_VertexBuffer_init : Invalid Native Object");
  }
  else {
    plVar6 = (long *)se::State::args(aSStack_e8);
    pVVar7 = (Value *)*plVar6;
    if (plVar6[1] - (long)pVVar7 == 0x50) {
      if (pVVar7[8] == (Value)0x5) {
        pOVar8 = (Object *)se::Value::toObject(pVVar7);
        uVar9 = se::Object::getPrivateData(pOVar8);
        pVVar7 = (Value *)*plVar6;
      }
      else {
        uVar9 = 0;
      }
      pOVar8 = (Object *)se::Value::toObject(pVVar7 + 0x10);
      uVar10 = se::Object::getPrivateData(pOVar8);
      uVar3 = se::Value::toUint16((Value *)(*plVar6 + 0x20));
      local_f8 = 0;
      puStack_f0 = (uchar *)0x0;
      local_fc = 0;
      lVar11 = *plVar6;
      if (*(char *)(lVar11 + 0x38) == '\x05') {
        pOVar8 = (Object *)se::Value::toObject((Value *)(lVar11 + 0x30));
        se::Object::getTypedArrayData(pOVar8,&puStack_f0,&local_f8);
        lVar11 = *plVar6;
      }
      seval_to_uint32((Value *)(lVar11 + 0x40),&local_fc);
      cocos2d::renderer::VertexBuffer::init(pVVar5,uVar9,uVar10,uVar3,puStack_f0,local_f8,local_fc);
      uStack_b8 = se::State::thisObject(aSStack_e8);
      local_a0 = &local_c0;
      local_c0 = &PTR_FUN_01c69790;
      local_90 = &PTR_FUN_01c69790;
      uStack_88 = uStack_b8;
      local_70 = &local_90;
      FUN_009655fc(&local_90,pVVar5 + 0x30);
      if (&local_90 == local_70) {
        pcVar12 = (code *)(*local_70)[4];
LAB_00960bf0:
        (*pcVar12)();
      }
      else if (local_70 != (undefined ***)0x0) {
        pcVar12 = (code *)(*local_70)[5];
        goto LAB_00960bf0;
      }
      if (&local_c0 == local_a0) {
        (*(code *)(*local_a0)[4])();
      }
      else if (local_a0 != (undefined ***)0x0) {
        (*(code *)(*local_a0)[5])();
      }
      goto LAB_00960a94;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp, 255): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar6[1] - (long)pVVar7) >> 4,5);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_VertexBuffer_init",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                      ,0x102);
LAB_00960a94:
  pVVar7 = (Value *)se::State::rval(aSStack_e8);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_e8);
  pVVar2 = local_130;
  pVVar7 = local_128;
  if (local_130 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
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

