
/* js_engine_CanvasRenderingContext2D_constructorRegistry(v8::FunctionCallbackInfo<v8::Value>
   const&) */

void js_engine_CanvasRenderingContext2D_constructorRegistry(FunctionCallbackInfo *param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  uint uVar4;
  uint uVar5;
  Object *this;
  long *plVar6;
  CanvasRenderingContext2D *this_00;
  Object *pOVar7;
  ulong uVar8;
  Value *local_a8;
  Value *local_a0;
  undefined8 local_98;
  HandleScope aHStack_90 [28];
  float local_74;
  float afStack_70 [4];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  v8::HandleScope::HandleScope(aHStack_90,*(Isolate **)(*(long *)param_1 + 8));
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  local_98 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_a8,10);
  se::internal::jsToSeArgs(param_1,(vector *)&local_a8);
  this = (Object *)
         se::Object::_createJSObject
                   (__jsb_cocos2d_CanvasRenderingContext2D_class,*(long *)(param_1 + 8) + 8);
  se::Object::_setFinalizeCallback(this,js_cocos2d_CanvasRenderingContext2D_finalizeRegistry);
  se::State::State(aSStack_60,this,(vector *)&local_a8);
  plVar6 = (long *)se::State::args(aSStack_60);
  local_74 = 0.0;
  afStack_70[0] = 0.0;
  uVar4 = seval_to_float((Value *)*plVar6,afStack_70);
  uVar5 = seval_to_float((Value *)(*plVar6 + 0x10),&local_74);
  if ((uVar4 & uVar5 & 1) == 0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x706,"js_engine_CanvasRenderingContext2D_constructor");
    __android_log_print(6,"jswrapper",
                        "js_engine_CanvasRenderingContext2D_constructor : Error processing arguments"
                       );
    __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                        "js_engine_CanvasRenderingContext2D_constructor",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/auto/jsb_cocos2dx_auto.cpp"
                        ,0x70c);
  }
  else {
    this_00 = operator_new(0x110,(nothrow_t *)&std::nothrow);
    if (this_00 != (CanvasRenderingContext2D *)0x0) {
      cocos2d::CanvasRenderingContext2D::CanvasRenderingContext2D(this_00,afStack_70[0],local_74);
    }
    pOVar7 = (Object *)se::State::thisObject(aSStack_60);
    se::Object::setPrivateData(pOVar7,this_00);
    se::NonRefNativePtrCreatedByCtorMap::emplace(this_00);
  }
  se::Value::Value((Value *)afStack_70);
  uVar8 = se::Object::getProperty(this,"_ctor",(Value *)afStack_70);
  if ((uVar8 & 1) != 0) {
    pOVar7 = (Object *)se::Value::toObject((Value *)afStack_70);
    se::Object::call(pOVar7,(vector *)&local_a8,this,(Value *)0x0);
  }
  se::Value::~Value((Value *)afStack_70);
  se::State::~State(aSStack_60);
  pVVar3 = local_a8;
  pVVar2 = local_a0;
  if (local_a8 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_a0 = pVVar3;
    operator_delete(local_a8);
  }
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

