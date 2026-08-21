
/* js_renderer_NodeProxy_constructorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_NodeProxy_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  Value *pVVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  Object *this;
  long *plVar9;
  NodeProxy *this_00;
  Object *pOVar10;
  ulong uVar11;
  Value *local_e0;
  Value *local_d8;
  undefined8 local_d0;
  HandleScope aHStack_c8 [24];
  ulong local_b0;
  undefined8 local_a8;
  void *local_a0;
  ulong local_98;
  ulong uStack_90;
  State aSStack_88 [40];
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_c8,*(Isolate **)(*(long *)param_1 + 8));
  local_e0 = (Value *)0x0;
  local_d8 = (Value *)0x0;
  local_d0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_e0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_e0);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_renderer_NodeProxy_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_renderer_NodeProxy_finalizeRegistry);
  se::State::State(aSStack_88,this,(vector *)&local_e0);
  plVar9 = (long *)se::State::args(aSStack_88);
  local_98 = 0;
  uStack_90 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = 0;
  uVar5 = seval_to_size((Value *)*plVar9,&uStack_90);
  uVar6 = seval_to_size((Value *)(*plVar9 + 0x10),&local_98);
  uVar7 = seval_to_std_string((Value *)(*plVar9 + 0x20),(basic_string *)&local_60);
  uVar8 = seval_to_std_string((Value *)(*plVar9 + 0x30),(basic_string *)&local_b0);
  if ((uVar5 & uVar6 & uVar7 & uVar8 & 1) == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x51c,"js_renderer_NodeProxy_constructor");
    __android_log_print(6,"jswrapper",
                        "js_renderer_NodeProxy_constructor : Error processing arguments");
    bVar2 = false;
  }
  else {
    this_00 = operator_new(0x120,(nothrow_t *)&std::nothrow);
    if (this_00 != (NodeProxy *)0x0) {
      cocos2d::renderer::NodeProxy::NodeProxy
                (this_00,uStack_90,local_98,(basic_string *)&local_60,(basic_string *)&local_b0);
    }
    pOVar10 = (Object *)se::State::thisObject(aSStack_88);
    se::Object::setPrivateData(pOVar10,this_00);
    bVar2 = true;
  }
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (!bVar2) {
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_renderer_NodeProxy_constructor",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_renderer_auto.cpp"
                        ,0x521);
  }
  se::Value::Value((Value *)&local_60);
  uVar11 = se::Object::getProperty(this,"_ctor",(Value *)&local_60);
  if ((uVar11 & 1) != 0) {
    pOVar10 = (Object *)se::Value::toObject((Value *)&local_60);
    se::Object::call(pOVar10,(vector *)&local_e0,this,(Value *)0x0);
  }
  se::Value::~Value((Value *)&local_60);
  se::State::~State(aSStack_88);
  pVVar4 = local_e0;
  pVVar3 = local_d8;
  if (local_e0 != (Value *)0x0) {
    while (pVVar3 != pVVar4) {
      se::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
    local_d8 = pVVar4;
    operator_delete(local_e0);
  }
  v8::HandleScope::~HandleScope(aHStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

