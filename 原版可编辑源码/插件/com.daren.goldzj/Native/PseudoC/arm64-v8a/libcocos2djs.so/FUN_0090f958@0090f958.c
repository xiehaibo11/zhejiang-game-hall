
void FUN_0090f958(char *param_1)

{
  long lVar1;
  ScriptEngine *this;
  ulong uVar2;
  Isolate *pIVar3;
  Object *pOVar4;
  HandleScope aHStack_50 [24];
  Value aVStack_38 [8];
  char local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  uVar2 = se::ScriptEngine::isValid(this);
  if ((uVar2 & 1) != 0) {
    pIVar3 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_50,pIVar3);
    se::Value::Value(aVStack_38);
    se::Object::getProperty(__jsbObj,param_1,aVStack_38);
    if (local_30 == '\x05') {
      pOVar4 = (Object *)se::Value::toObject(aVStack_38);
      uVar2 = se::Object::isFunction(pOVar4);
      if ((uVar2 & 1) != 0) {
        pOVar4 = (Object *)se::Value::toObject(aVStack_38);
        se::Object::call(pOVar4,(vector *)&se::EmptyValueArray,(Object *)0x0,(Value *)0x0);
      }
    }
    se::Value::~Value(aVStack_38);
    v8::HandleScope::~HandleScope(aHStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

