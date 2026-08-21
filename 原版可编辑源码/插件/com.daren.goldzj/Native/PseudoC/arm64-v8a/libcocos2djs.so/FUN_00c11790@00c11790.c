
void FUN_00c11790(long param_1)

{
  long lVar1;
  ScriptEngine *this;
  ulong uVar2;
  Isolate *pIVar3;
  HandleScope aHStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  uVar2 = se::ScriptEngine::isValid(this);
  if (((uVar2 & 1) != 0) && (this[0x20e] == (ScriptEngine)0x0)) {
    pIVar3 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_50,pIVar3);
    se::ScriptEngine::clearException();
    se::Object::clearPrivateData(*(Object **)(param_1 + 8),false);
    se::Object::unroot(*(Object **)(param_1 + 8));
    se::RefCounter::decRef(*(RefCounter **)(param_1 + 8));
    v8::HandleScope::~HandleScope(aHStack_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

