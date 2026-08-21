
/* XMLHttpRequest_getResponseTypeRegistry(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value>
   const&) */

void XMLHttpRequest_getResponseTypeRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

{
  char cVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  Value *pVVar5;
  Isolate *pIVar6;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar6 = *(Isolate **)(*(long *)param_2 + 0x10);
  v8::HandleScope::HandleScope(aHStack_78,pIVar6);
  pvVar3 = (void *)se::internal::getPrivate(pIVar6,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar3);
  lVar4 = se::State::nativeThisObject(aSStack_60);
  cVar1 = *(char *)(lVar4 + 0x262);
  if (cVar1 == '\x04') {
    pVVar5 = (Value *)se::State::rval(aSStack_60);
    se::Value::setString(pVVar5,"json");
  }
  else if (cVar1 == '\x01') {
    pVVar5 = (Value *)se::State::rval(aSStack_60);
    se::Value::setString(pVVar5,"arraybuffer");
  }
  else if (cVar1 == '\0') {
    pVVar5 = (Value *)se::State::rval(aSStack_60);
    se::Value::setString(pVVar5,"text");
  }
  pVVar5 = (Value *)se::State::rval(aSStack_60);
  se::internal::setReturnValue(pVVar5,param_2);
  se::State::~State(aSStack_60);
  v8::HandleScope::~HandleScope(aHStack_78);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

