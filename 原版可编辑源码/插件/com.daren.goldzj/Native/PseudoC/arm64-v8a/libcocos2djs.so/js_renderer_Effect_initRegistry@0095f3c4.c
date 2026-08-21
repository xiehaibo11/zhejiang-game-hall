
/* js_renderer_Effect_initRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_Effect_initRegistry(FunctionCallbackInfo *param_1)

{
  bool bVar1;
  long lVar2;
  Value *pVVar3;
  void *pvVar4;
  Effect *this;
  undefined8 *puVar5;
  ulong uVar6;
  Value *pVVar7;
  Isolate *pIVar8;
  Value *local_c0;
  Value *local_b8;
  undefined8 local_b0;
  HandleScope aHStack_a8 [24];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined8 local_70;
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*(long *)param_1 + 8);
  v8::HandleScope::HandleScope(aHStack_a8,pIVar8);
  local_c0 = (Value *)0x0;
  local_b8 = (Value *)0x0;
  local_b0 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_c0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_c0);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*(long *)(param_1 + 8) + 8);
  se::State::State(aSStack_60,pvVar4,(vector *)&local_c0);
  this = (Effect *)se::State::nativeThisObject(aSStack_60);
  puVar5 = (undefined8 *)se::State::args(aSStack_60);
  local_70 = 0;
  local_68 = (void *)0x0;
  local_78 = 0;
  seval_to_std_string((Value *)*puVar5,(basic_string *)&local_78);
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  uVar6 = seval_to_EffectAsset((Value *)*puVar5,(Vector *)&local_90);
  bVar1 = (uVar6 & 1) == 0;
  if (bVar1) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                        ,0x186,"js_renderer_Effect_init");
    __android_log_print(6,"jswrapper","js_renderer_Effect_init : Error processing arguments");
  }
  else {
    cocos2d::renderer::Effect::init(this,(Vector *)&local_90);
  }
  puVar5 = local_90;
  if (local_90 != local_88) {
    do {
      cocos2d::Ref::release((Ref *)*puVar5);
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_88);
  }
  local_88 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    operator_delete(local_90);
  }
  if ((local_78 & 1) != 0) {
    operator_delete(local_68);
  }
  if (bVar1) {
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_renderer_Effect_init",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_renderer_manual.cpp"
                        ,0x18a);
  }
  pVVar7 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar7,param_1);
  se::State::~State(aSStack_60);
  pVVar3 = local_c0;
  pVVar7 = local_b8;
  if (local_c0 != (Value *)0x0) {
    while (pVVar7 != pVVar3) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_b8 = pVVar3;
    operator_delete(local_c0);
  }
  v8::HandleScope::~HandleScope(aHStack_a8);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

