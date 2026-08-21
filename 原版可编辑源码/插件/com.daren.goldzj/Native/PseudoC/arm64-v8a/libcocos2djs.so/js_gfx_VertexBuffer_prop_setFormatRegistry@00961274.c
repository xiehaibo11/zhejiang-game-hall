
/* js_gfx_VertexBuffer_prop_setFormatRegistry(v8::Local<v8::Name>, v8::Local<v8::Value>,
   v8::PropertyCallbackInfo<void> const&) */

void js_gfx_VertexBuffer_prop_setFormatRegistry(undefined8 param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  void *pvVar4;
  VertexBuffer *this;
  long *plVar5;
  Object *pOVar6;
  VertexFormat *pVVar7;
  Isolate *pIVar8;
  Value *local_b0;
  Value *local_a8;
  Value *local_a0;
  HandleScope aHStack_98 [24];
  State aSStack_80 [40];
  Value aVStack_58 [16];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar8 = *(Isolate **)(*param_3 + 0x10);
  v8::HandleScope::HandleScope(aHStack_98,pIVar8);
  pvVar4 = (void *)se::internal::getPrivate(pIVar8,*param_3 + 0x30);
  se::Value::Value(aVStack_58);
  se::internal::jsToSeValue(pIVar8,param_2,aVStack_58);
  local_b0 = (Value *)0x0;
  local_a8 = (Value *)0x0;
  local_a0 = (Value *)0x0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::reserve
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,10);
  if (local_a8 < local_a0) {
    se::Value::Value(local_a8,aVStack_58);
    local_a8 = local_a8 + 0x10;
  }
  else {
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_b0,aVStack_58);
  }
  se::State::State(aSStack_80,pvVar4,(vector *)&local_b0);
  this = (VertexBuffer *)se::State::nativeThisObject(aSStack_80);
  if (this == (VertexBuffer *)0x0) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                        ,0x140,"js_gfx_VertexBuffer_prop_setFormat");
    __android_log_print(6,"jswrapper","js_gfx_VertexBuffer_prop_setFormat : Invalid Native Object");
  }
  else {
    plVar5 = (long *)se::State::args(aSStack_80);
    if (plVar5[1] - *plVar5 == 0x10) {
      se::Value::Value(aVStack_48);
      pOVar6 = (Object *)se::Value::toObject((Value *)*plVar5);
      se::Object::getProperty(pOVar6,"_nativeObj",aVStack_48);
      pOVar6 = (Object *)se::Value::toObject(aVStack_48);
      pVVar7 = (VertexFormat *)se::Object::getPrivateData(pOVar6);
      cocos2d::renderer::VertexBuffer::setFormat(this,pVVar7);
      se::Value::~Value(aVStack_48);
      goto LAB_00961448;
    }
    __android_log_print(6,"jswrapper",
                        "[ERROR] (F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp, 333): wrong number of arguments: %d, was expecting %d\n"
                        ,(ulong)(plVar5[1] - *plVar5) >> 4,1);
  }
  __android_log_print(6,"jswrapper","[ERROR] Failed to invoke %s, location: %s:%d\n",
                      "js_gfx_VertexBuffer_prop_setFormat",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_gfx_manual.cpp"
                      ,0x150);
LAB_00961448:
  se::State::~State(aSStack_80);
  pVVar3 = local_b0;
  pVVar2 = local_a8;
  if (local_b0 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_a8 = pVVar3;
    operator_delete(local_b0);
  }
  se::Value::~Value(aVStack_58);
  v8::HandleScope::~HandleScope(aHStack_98);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

