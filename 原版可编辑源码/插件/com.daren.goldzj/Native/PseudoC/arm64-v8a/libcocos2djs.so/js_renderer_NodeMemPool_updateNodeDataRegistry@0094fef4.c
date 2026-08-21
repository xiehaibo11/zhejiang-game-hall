
/* js_renderer_NodeMemPool_updateNodeDataRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_NodeMemPool_updateNodeDataRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  void *pvVar3;
  NodeMemPool *this;
  long *plVar4;
  Object *pOVar5;
  Object *pOVar6;
  Object *pOVar7;
  Object *pOVar8;
  Object *pOVar9;
  Object *pOVar10;
  Object *pOVar11;
  Object *pOVar12;
  Object *pOVar13;
  Object *pOVar14;
  Object *pOVar15;
  Value *pVVar16;
  ulong uVar17;
  Isolate *pIVar18;
  Value *local_d0;
  Value *local_c8;
  undefined8 local_c0;
  HandleScope aHStack_b8 [24];
  ulong local_a0;
  State aSStack_98 [40];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar18 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_b8,pIVar18);
  local_d0 = (Value *)0x0;
  local_c8 = (Value *)0x0;
  local_c0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_d0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_d0);
  pvVar3 = (void *)se::internal::getPrivate(pIVar18,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_98,pvVar3,(vector *)&local_d0);
  this = (NodeMemPool *)se::State::nativeThisObject(aSStack_98);
  if (this == (NodeMemPool *)0x0) {
                    /* try { // try from 009500c8 to 00a500cf has its CatchHandler @ 009505bc */
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0xd25,"js_renderer_NodeMemPool_updateNodeData");
    __android_log_print(6,"jswrapper",
                        "js_renderer_NodeMemPool_updateNodeData : Invalid Native Object");
  }
  else {
    plVar4 = (long *)se::State::args(aSStack_98);
    uVar17 = plVar4[1] - *plVar4;
    if (uVar17 == 0xc0) {
      local_a0 = 0;
      uVar17 = seval_to_size((Value *)*plVar4,&local_a0);
      pOVar5 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0x10));
      pOVar6 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0x20));
      pOVar7 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0x30));
      pOVar8 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0x40));
      pOVar9 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0x50));
      pOVar10 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0x60));
      pOVar11 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0x70));
      pOVar12 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0x80));
      pOVar13 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0x90));
      pOVar14 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0xa0));
      pOVar15 = (Object *)se::Value::toObject((Value *)(*plVar4 + 0xb0));
      if ((uVar17 & 1) != 0) {
        cocos2d::renderer::NodeMemPool::updateNodeData
                  (this,local_a0,pOVar5,pOVar6,pOVar7,pOVar8,pOVar9,pOVar10,pOVar11,pOVar12,pOVar13,
                   pOVar14,pOVar15);
        goto LAB_00950184;
      }
      __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                          ,0xd42,"js_renderer_NodeMemPool_updateNodeData");
      __android_log_print(6,"jswrapper",
                          "js_renderer_NodeMemPool_updateNodeData : Error processing arguments");
    }
    else {
      __android_log_print(6,"jswrapper",
                          "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp, 3398): wrong number of arguments: %d, was expecting %d\n"
                          ,uVar17 >> 4,0xc);
                    /* try { // try from 00950110 to 00a50117 has its CatchHandler @ 009505b8 */
    }
  }
                    /* try { // try from 00950158 to 00a5015f has its CatchHandler @ 009505b4 */
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_renderer_NodeMemPool_updateNodeData",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                      ,0xd49);
LAB_00950184:
  pVVar16 = (Value *)se::State::rval(aSStack_98);
  se::internal::setReturnValue(pVVar16,param_1);
  se::State::~State(aSStack_98);
  pVVar2 = local_d0;
  pVVar16 = local_c8;
  if (local_d0 != (Value *)0x0) {
    while (pVVar16 != pVVar2) {
      se::Value::~Value(pVVar16 + -0x10);
      pVVar16 = pVVar16 + -0x10;
    }
    local_c8 = pVVar2;
    operator_delete(local_d0);
  }
  v8::HandleScope::~HandleScope(aHStack_b8);
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

