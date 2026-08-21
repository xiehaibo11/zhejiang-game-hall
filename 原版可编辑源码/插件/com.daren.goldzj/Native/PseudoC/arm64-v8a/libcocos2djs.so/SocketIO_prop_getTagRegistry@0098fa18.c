
/* SocketIO_prop_getTagRegistry(v8::Local<v8::Name>, v8::PropertyCallbackInfo<v8::Value> const&) */

void SocketIO_prop_getTagRegistry(undefined8 param_1,PropertyCallbackInfo *param_2)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  Value *pVVar4;
  char *pcVar5;
  Isolate *pIVar6;
  HandleScope aHStack_78 [24];
  State aSStack_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  __jsbInvocationCount = __jsbInvocationCount + 1;
  pIVar6 = *(Isolate **)(*(long *)param_2 + 0x10);
                    /* try { // try from 0098fa60 to 00a8fa63 has its CatchHandler @ 0098fbc8 */
  v8::HandleScope::HandleScope(aHStack_78,pIVar6);
  pvVar2 = (void *)se::internal::getPrivate(pIVar6,*(long *)param_2 + 0x30);
  se::State::State(aSStack_60,pvVar2);
  lVar3 = se::State::nativeThisObject(aSStack_60);
  pVVar4 = (Value *)se::State::rval(aSStack_60);
                    /* try { // try from 0098fa98 to 00a8fa9f has its CatchHandler @ 0098fbc0 */
  if ((*(byte *)(lVar3 + 0x28) & 1) == 0) {
    pcVar5 = (char *)(lVar3 + 0x29);
  }
  else {
    pcVar5 = *(char **)(lVar3 + 0x38);
  }
  se::Value::setString(pVVar4,pcVar5);
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

