
/* XMLHttpRequest_getMIMETypeRegistry(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value>
   const&) */

void XMLHttpRequest_getMIMETypeRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  Value *pVVar3;
  Isolate *pIVar4;
  HandleScope aHStack_90 [24];
  basic_string local_78 [16];
  void *local_68;
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar4 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_90,pIVar4);
  pvVar2 = (void *)se::internal::getPrivate(pIVar4,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar2);
  se::State::nativeThisObject(aSStack_60);
  XMLHttpRequest::getMimeType();
  pVVar3 = (Value *)se::State::rval(aSStack_60);
  se::Value::setString(pVVar3,local_78);
  if (((byte)local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  pVVar3 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar3,param_2);
  se::State::~State(aSStack_60);
  v8::HandleScope::~HandleScope(aHStack_90);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

