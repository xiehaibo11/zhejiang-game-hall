
/* js_gfx_VertexBuffer_prop_getNumVerticesRegistry(v8::Local<v8::Name>,
   v8::PropertyCallbackInfo<v8::Value> const&) */

void js_gfx_VertexBuffer_prop_getNumVerticesRegistry
               (undefined8 param_1,PropertyCallbackInfo *param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  Value *pVVar6;
  Isolate *pIVar7;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar7 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_78,pIVar7);
  pvVar3 = (void *)se::internal::getPrivate(pIVar7,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar3);
  lVar4 = se::State::nativeThisObject(aSStack_60);
  if (lVar4 == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                        ,0x1a0,"js_gfx_VertexBuffer_prop_getNumVertices");
    __android_log_print(6,"jswrapper",
                        "js_gfx_VertexBuffer_prop_getNumVertices : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_60);
    if (plVar5[1] - *plVar5 == 0) {
      uVar1 = *(uint *)(lVar4 + 0x24);
      pVVar6 = (Value *)se::State::rval(aSStack_60);
      se::Value::setUint32(pVVar6,uVar1);
      goto LAB_00961e40;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp, 426): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,0);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_VertexBuffer_prop_getNumVertices",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                      ,0x1ad);
LAB_00961e40:
  pVVar6 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar6,param_2);
  se::State::~State(aSStack_60);
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

