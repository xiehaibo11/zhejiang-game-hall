
void FUN_00c8e504(long param_1,int *param_2)

{
  int iVar1;
  long lVar2;
  Value *pVVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  Object *this;
  ulong uVar6;
  Object *pOVar7;
  Value *local_78;
  Value *local_70;
  undefined8 local_68;
  HandleScope aHStack_60 [24];
  Value aVStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar1 = *param_2;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar5 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_60,pIVar5);
  local_78 = (Value *)0x0;
  local_70 = (Value *)0x0;
  local_68 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_78,1);
  int32_to_seval(iVar1,local_78);
  se::Value::Value(aVStack_48);
  pOVar7 = (Object *)0x0;
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar7 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar6 = se::Object::call(this,(vector *)&local_78,pOVar7,aVStack_48);
  if ((uVar6 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  se::Value::~Value(aVStack_48);
  pVVar4 = local_78;
  pVVar3 = local_70;
  if (local_78 != (Value *)0x0) {
    while (pVVar3 != pVVar4) {
      se::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
    local_70 = pVVar4;
    operator_delete(local_78);
  }
  v8::HandleScope::~HandleScope(aHStack_60);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

