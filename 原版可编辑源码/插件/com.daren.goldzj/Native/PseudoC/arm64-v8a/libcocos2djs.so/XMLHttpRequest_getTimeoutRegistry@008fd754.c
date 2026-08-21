
/* XMLHttpRequest_getTimeoutRegistry(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value>
   const&) */

void XMLHttpRequest_getTimeoutRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar5 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_78,pIVar5);
  pvVar2 = (void *)se::internal::getPrivate(pIVar5,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar2);
  lVar3 = se::State::nativeThisObject(aSStack_60);
  pVVar4 = (Value *)se::State::rval(aSStack_60);
  se::Value::setUlong(pVVar4,(long)(*(float *)(*(long *)(lVar3 + 0x250) + 0xb0) * 1000.0));
  pVVar4 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar4,param_2);
  se::State::~State(aSStack_60);
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

