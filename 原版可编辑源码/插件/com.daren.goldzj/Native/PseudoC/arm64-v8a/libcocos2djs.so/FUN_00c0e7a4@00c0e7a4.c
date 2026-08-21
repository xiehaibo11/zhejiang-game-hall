
void FUN_00c0e7a4(long param_1)

{
  long lVar1;
  Isolate *pIVar2;
  Object *pOVar3;
  Object *this;
  ulong uVar4;
  HandleScope aHStack_60 [24];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar2 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_60,pIVar2);
  se::Value::Value(aVStack_48);
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar3 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  else {
    pOVar3 = (Object *)0x0;
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar4 = se::Object::call(this,(vector *)&se::EmptyValueArray,pOVar3,aVStack_48);
  if ((uVar4 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  se::Value::~Value(aVStack_48);
  v8::HandleScope::~HandleScope(aHStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

