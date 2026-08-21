
/* js_cocos2dx_spine_SkeletonCacheAnimation_constructorRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_spine_SkeletonCacheAnimation_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  Value *pVVar4;
  Object *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  SkeletonCacheAnimation *this_00;
  Object *pOVar8;
  Value *local_b0;
  Value *local_a8;
  Value *local_a0;
  HandleScope aHStack_98 [28];
  bool local_7c [4];
  State aSStack_78 [40];
  ulong local_50;
  undefined8 uStack_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_98,*(Isolate **)(*(long *)param_1 + 8));
  local_b0 = operator_new(0xa0);
  local_a0 = local_b0 + 0xa0;
  local_a8 = local_b0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_b0);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_spine_SkeletonCacheAnimation_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_spine_SkeletonCacheAnimation_finalizeRegistry);
  se::State::State(aSStack_78,this,(vector *)&local_b0);
  plVar5 = (long *)se::State::args(aSStack_78);
  local_50 = 0;
  uStack_48 = 0;
  local_40 = (void *)0x0;
  uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_50);
  uVar7 = seval_to_boolean((Value *)(*plVar5 + 0x10),local_7c);
  if (((uVar6 & 1) == 0) || ((uVar7 & 1) == 0)) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3efa,"js_cocos2dx_spine_SkeletonCacheAnimation_constructor");
    __android_log_print(6,"jswrapper",&DAT_019252ef);
    bVar2 = false;
  }
  else {
    this_00 = operator_new(0x170,(nothrow_t *)&std::nothrow);
    if (this_00 != (SkeletonCacheAnimation *)0x0) {
      spine::SkeletonCacheAnimation::SkeletonCacheAnimation
                (this_00,(basic_string *)&local_50,local_7c[0]);
    }
    pOVar8 = (Object *)se::State::thisObject(aSStack_78);
    se::Object::setPrivateData(pOVar8,this_00);
    bVar2 = true;
  }
  if ((local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  if (!bVar2) {
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_cocos2dx_spine_SkeletonCacheAnimation_constructor",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_spine_auto.cpp"
                        ,0x3eff);
  }
  se::Value::Value((Value *)&local_50);
  uVar6 = se::Object::getProperty(this,"_ctor",(Value *)&local_50);
  if ((uVar6 & 1) != 0) {
    pOVar8 = (Object *)se::Value::toObject((Value *)&local_50);
    se::Object::call(pOVar8,(vector *)&local_b0,this,(Value *)0x0);
  }
  se::Value::~Value((Value *)&local_50);
  se::State::~State(aSStack_78);
  pVVar4 = local_b0;
  pVVar3 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar3 != pVVar4) {
      se::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
    local_a8 = pVVar4;
    operator_delete(local_b0);
  }
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

