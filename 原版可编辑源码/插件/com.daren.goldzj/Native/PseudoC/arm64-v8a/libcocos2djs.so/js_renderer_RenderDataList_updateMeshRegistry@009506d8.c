
/* js_renderer_RenderDataList_updateMeshRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_RenderDataList_updateMeshRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  RenderDataList *this;
  long *plVar4;
  Object *pOVar5;
  Object *pOVar6;
  Value *pVVar7;
  ulong uVar8;
  Isolate *pIVar9;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [24];
  ulong local_78;
  State aSStack_70 [40];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar9 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_90,pIVar9);
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  pvVar3 = (void *)se::internal::getPrivate(pIVar9,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_70,pvVar3,(vector *)&local_a8);
  this = (RenderDataList *)se::State::nativeThisObject(aSStack_70);
  if (this == (RenderDataList *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xd7f,"js_renderer_RenderDataList_updateMesh");
    __android_log_print(6,"jswrapper",
                        "js_renderer_RenderDataList_updateMesh : Invalid Native Object");
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_70);
    uVar8 = plVar4[1] - *plVar4;
    if (uVar8 == 0x30) {
      local_78 = 0;
      uVar8 = seval_to_size((Value *)*plVar4,&local_78);
      pOVar5 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0x10));
      pOVar6 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0x20));
      if ((uVar8 & 1) != 0) {
        cocos2d::renderer::RenderDataList::updateMesh(this,local_78,pOVar5,pOVar6);
        goto LAB_009508bc;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xd8a,"js_renderer_RenderDataList_updateMesh");
      __android_log_print(6,"jswrapper",
                          "js_renderer_RenderDataList_updateMesh : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 3470): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar8 >> 4,3);
    }
  }
                    /* try { // try from 009508b8 to 00a5097b has its CatchHandler @ 009508b8
                       catch() { ... } // from try @ 009508b8 with catch @ 009508b8
                       catch() { ... } // from try @ 00950984 with catch @ 009508b8
                       catch() { ... } // from try @ 00950a4c with catch @ 009508b8
                       catch() { ... } // from try @ 00950b14 with catch @ 009508b8
                       catch() { ... } // from try @ 00950bdc with catch @ 009508b8
                       catch() { ... } // from try @ 00950ca4 with catch @ 009508b8
                       catch() { ... } // from try @ 00950d6c with catch @ 009508b8
                       catch() { ... } // from try @ 00950e34 with catch @ 009508b8
                       catch() { ... } // from try @ 00950efc with catch @ 009508b8
                       catch() { ... } // from try @ 00950fc4 with catch @ 009508b8
                       catch() { ... } // from try @ 0095108c with catch @ 009508b8
                       catch() { ... } // from try @ 00951154 with catch @ 009508b8
                       catch() { ... } // from try @ 0095121c with catch @ 009508b8
                       catch() { ... } // from try @ 009512e4 with catch @ 009508b8
                       catch() { ... } // from try @ 009513ac with catch @ 009508b8
                       catch() { ... } // from try @ 00951474 with catch @ 009508b8
                       catch() { ... } // from try @ 0095153c with catch @ 009508b8
                       catch() { ... } // from try @ 00951604 with catch @ 009508b8
                       catch() { ... } // from try @ 009516cc with catch @ 009508b8 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_RenderDataList_updateMesh",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xd91);
LAB_009508bc:
  pVVar7 = (Value *)se::State::rval(aSStack_70);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_70);
  pVVar2 = local_a8;
  pVVar7 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar7 != pVVar2) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_a0 = pVVar2;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

