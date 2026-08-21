
/* js_renderer_SlicedSprite3D_ctorRegistry(v8::FunctionCallbackInfo<v8::Value> const&) */

void js_renderer_SlicedSprite3D_ctorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Object *this;
  SlicedSprite3D *this_00;
  Object *pOVar4;
  ulong uVar5;
  Value *local_a0;
  Value *local_98;
  undefined8 local_90;
  HandleScope aHStack_88 [24];
  Value aVStack_70 [16];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_88,*(Isolate **)(*(long *)param_1 + 8));
  local_a0 = (Value *)0x0;
  local_98 = (Value *)0x0;
  local_90 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a0,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a0);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_renderer_SlicedSprite3D_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_renderer_SlicedSprite3D_finalizeRegistry);
  se::State::State(aSStack_60,this,(vector *)&local_a0);
  this_00 = operator_new(0xa8,(nothrow_t *)&std::nothrow);
  if (this_00 != (SlicedSprite3D *)0x0) {
    cocos2d::renderer::SlicedSprite3D::SlicedSprite3D(this_00);
  }
  pOVar4 = (Object *)se::State::thisObject(aSStack_60);
  se::Object::setPrivateData(pOVar4,this_00);
  se::Value::Value(aVStack_70);
  uVar5 = se::Object::getProperty(this,"_ctor",aVStack_70);
  if ((uVar5 & 1) != 0) {
    pOVar4 = (Object *)se::Value::toObject(aVStack_70);
    se::Object::call(pOVar4,(vector *)&local_a0,this,(Value *)0x0);
  }
  se::Value::~Value(aVStack_70);
  se::State::~State(aSStack_60);
  pVVar3 = local_a0;
  pVVar2 = local_98;
  if (local_a0 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_98 = pVVar3;
    operator_delete(local_a0);
  }
  v8::HandleScope::~HandleScope(aHStack_88);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

