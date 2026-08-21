
void FUN_008feba4(Value *param_1,char *param_2)

{
  long lVar1;
  Isolate *pIVar2;
  Object *this;
  ulong uVar3;
  Object *pOVar4;
  HandleScope aHStack_60 [24];
  Value aVStack_48 [8];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar2 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_60,pIVar2);
  this = (Object *)se::Value::toObject(param_1);
  se::Value::Value(aVStack_48);
  uVar3 = se::Object::getProperty(this,param_2,aVStack_48);
  if (((uVar3 & 1) != 0) && (local_40 == '\x05')) {
    pOVar4 = (Object *)se::Value::toObject(aVStack_48);
    uVar3 = se::Object::isFunction(pOVar4);
    if ((uVar3 & 1) != 0) {
      pOVar4 = (Object *)se::Value::toObject(aVStack_48);
      se::Object::call(pOVar4,(vector *)&se::EmptyValueArray,this,(Value *)0x0);
    }
  }
  se::Value::~Value(aVStack_48);
  v8::HandleScope::~HandleScope(aHStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

