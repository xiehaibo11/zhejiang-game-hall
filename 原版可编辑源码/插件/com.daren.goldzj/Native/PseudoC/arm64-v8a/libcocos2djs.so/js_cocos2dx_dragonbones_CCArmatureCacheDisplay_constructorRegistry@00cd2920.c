
/* js_cocos2dx_dragonbones_CCArmatureCacheDisplay_constructorRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_cocos2dx_dragonbones_CCArmatureCacheDisplay_constructorRegistry
               (FunctionCallbackInfo *param_1)

{
  long lVar1;
  bool bVar2;
  Value *pVVar3;
  Value *pVVar4;
  Object *this;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  CCArmatureCacheDisplay *this_00;
  Object *pOVar10;
  Value *local_f0;
  Value *local_e8;
  Value *local_e0;
  HandleScope aHStack_d8 [28];
  bool local_bc [4];
  ulong local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  State aSStack_88 [40];
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_d8,*(Isolate **)(*(long *)param_1 + 8));
  local_f0 = operator_new(0xa0);
  local_e0 = local_f0 + 0xa0;
  local_e8 = local_f0;
  se::internal::jsToSeArgs(param_1,(vector *)&local_f0);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_dragonBones_CCArmatureCacheDisplay_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_dragonBones_CCArmatureCacheDisplay_finalizeRegistry);
  se::State::State(aSStack_88,this,(vector *)&local_f0);
  plVar5 = (long *)se::State::args(aSStack_88);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = (void *)0x0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = (void *)0x0;
  uVar6 = seval_to_std_string((Value *)*plVar5,(basic_string *)&local_60);
  uVar7 = seval_to_std_string((Value *)(*plVar5 + 0x10),(basic_string *)&local_a0);
  uVar8 = seval_to_std_string((Value *)(*plVar5 + 0x20),(basic_string *)&local_b8);
  uVar9 = seval_to_boolean((Value *)(*plVar5 + 0x30),local_bc);
  if (((((uVar6 & 1) == 0) || ((uVar7 & 1) == 0)) || ((uVar8 & 1) == 0)) || ((uVar9 & 1) == 0)) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x22ce,"js_cocos2dx_dragonbones_CCArmatureCacheDisplay_constructor");
    __android_log_print(6,"jswrapper",
                        "js_cocos2dx_dragonbones_CCArmatureCacheDisplay_constructor : Error processing arguments"
                       );
    bVar2 = false;
  }
  else {
    this_00 = operator_new(0xf0,(nothrow_t *)&std::nothrow);
    if (this_00 != (CCArmatureCacheDisplay *)0x0) {
      dragonBones::CCArmatureCacheDisplay::CCArmatureCacheDisplay
                (this_00,(basic_string *)&local_60,(basic_string *)&local_a0,
                 (basic_string *)&local_b8,local_bc[0]);
    }
    pOVar10 = (Object *)se::State::thisObject(aSStack_88);
    se::Object::setPrivateData(pOVar10,this_00);
    bVar2 = true;
  }
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  if (!bVar2) {
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_cocos2dx_dragonbones_CCArmatureCacheDisplay_constructor",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/../scripting/js-bindings/auto/jsb_cocos2dx_dragonbones_auto.cpp"
                        ,0x22d3);
  }
  se::Value::Value((Value *)&local_60);
  uVar6 = se::Object::getProperty(this,"_ctor",(Value *)&local_60);
  if ((uVar6 & 1) != 0) {
    pOVar10 = (Object *)se::Value::toObject((Value *)&local_60);
    se::Object::call(pOVar10,(vector *)&local_f0,this,(Value *)0x0);
  }
  se::Value::~Value((Value *)&local_60);
  se::State::~State(aSStack_88);
  pVVar4 = local_f0;
  pVVar3 = local_e8;
  if (local_f0 != (Value *)0x0) {
    while (pVVar3 != pVVar4) {
      se::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
    local_e8 = pVVar4;
    operator_delete(local_f0);
  }
  v8::HandleScope::~HandleScope(aHStack_d8);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

