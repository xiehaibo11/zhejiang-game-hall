
void FUN_00901760(long param_1,DownloadTask *param_2)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Isolate *pIVar4;
  Object *this;
  Object *this_00;
  ulong uVar5;
  Value *local_78;
  Value *local_70;
  undefined8 local_68;
  HandleScope aHStack_60 [24];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar4 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_60,pIVar4);
  local_78 = (Value *)0x0;
  local_70 = (Value *)0x0;
  local_68 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_78,1);
  DownloadTask_to_seval(param_2,local_78);
  se::Value::Value(aVStack_48);
  if (*(char *)(param_1 + 0x10) == '\x05') {
    this = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  else {
    this = (Object *)0x0;
  }
  this_00 = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar5 = se::Object::call(this_00,(vector *)&local_78,this,aVStack_48);
  if ((uVar5 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  se::Object::unroot(this);
  se::Value::~Value(aVStack_48);
  pVVar3 = local_78;
  pVVar2 = local_70;
  if (local_78 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_70 = pVVar3;
    operator_delete(local_78);
  }
  v8::HandleScope::~HandleScope(aHStack_60);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

