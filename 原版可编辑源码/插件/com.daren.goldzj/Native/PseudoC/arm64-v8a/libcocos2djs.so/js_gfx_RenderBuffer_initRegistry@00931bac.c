
/* js_gfx_RenderBuffer_initRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_gfx_RenderBuffer_initRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  int iVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  void *pvVar8;
  RenderBuffer *pRVar9;
  long *plVar10;
  Value *pVVar11;
  Object *this;
  long lVar12;
  ulong uVar13;
  Isolate *pIVar14;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [28];
  int local_9c;
  ushort local_98 [2];
  ushort local_94 [2];
  State aSStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar14 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar14);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar8 = (void *)se::internal::getPrivate(pIVar14,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_90,pvVar8,(vector *)&local_d0);
  pRVar9 = (RenderBuffer *)se::State::nativeThisObject(aSStack_90);
  if (pRVar9 == (RenderBuffer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                        ,0x4e3,"js_gfx_RenderBuffer_init");
    __android_log_print(6,"jswrapper","js_gfx_RenderBuffer_init : Invalid Native Object");
  }
  else {
    plVar10 = (long *)se::State::args(aSStack_90);
    pVVar11 = (Value *)*plVar10;
    if (plVar10[1] - (long)pVVar11 == 0x40) {
      local_94[0] = 0;
      local_98[0] = 0;
      if (pVVar11[8] == (Value)0x5) {
        this = (Object *)se::Value::toObject(pVVar11);
        lVar12 = se::Object::getPrivateData(this);
        pVVar11 = (Value *)*plVar10;
        bVar4 = lVar12 == 0;
      }
      else {
        bVar4 = 1 < (byte)pVVar11[8];
        lVar12 = 0;
      }
      local_9c = 0;
      bVar5 = seval_to_int32(pVVar11 + 0x10,&local_9c);
      iVar3 = local_9c;
      bVar6 = seval_to_uint16((Value *)(*plVar10 + 0x20),local_94);
      bVar7 = seval_to_uint16((Value *)(*plVar10 + 0x30),local_98);
      if ((!bVar4 & bVar5 & bVar6 & bVar7) == 0) {
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                            ,0x4f0,"js_gfx_RenderBuffer_init");
        __android_log_print(6,"jswrapper","js_gfx_RenderBuffer_init : Error processing arguments");
      }
      else {
        bVar5 = cocos2d::renderer::RenderBuffer::init(pRVar9,lVar12,iVar3,local_94[0],local_98[0]);
        pVVar11 = (Value *)se::State::rval(aSStack_90);
        uVar13 = boolean_to_seval((bool)(bVar5 & 1),pVVar11);
        if ((uVar13 & 1) != 0) goto LAB_00931e54;
        __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                            "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                            ,0x4f3,"js_gfx_RenderBuffer_init");
        __android_log_print(6,"jswrapper","js_gfx_RenderBuffer_init : Error processing arguments");
      }
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp, 1270): wrong number of arguments: %d, was expecting %d\n"
                          ,(ulong)(plVar10[1] - (long)pVVar11) >> 4,4);
    }
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_RenderBuffer_init",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_gfx_auto.cpp"
                      ,0x4f9);
LAB_00931e54:
  pVVar11 = (Value *)se::State::rval(aSStack_90);
  se::internal::setReturnValue(pVVar11,param_1);
  se::State::~State(aSStack_90);
  pVVar2 = local_d0;
  pVVar11 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar11 != pVVar2) {
      se::Value::~Value(pVVar11 + -0x10);
      pVVar11 = pVVar11 + -0x10;
    }
    local_c8 = pVVar2;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

