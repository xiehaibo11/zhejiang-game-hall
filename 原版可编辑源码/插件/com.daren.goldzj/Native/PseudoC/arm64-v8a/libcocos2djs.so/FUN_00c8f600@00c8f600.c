
void FUN_00c8f600(long param_1,ulong *param_2)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Isolate *pIVar4;
  Object *this;
  ulong uVar5;
  Object *pOVar6;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  Value *local_78;
  Value *local_70;
  undefined8 local_68;
  HandleScope aHStack_60 [24];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_80 = (void *)param_2[2];
  uStack_88 = param_2[1];
  local_90 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar4 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_60,pIVar4);
  local_78 = (Value *)0x0;
  local_70 = (Value *)0x0;
  local_68 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_78,1);
  std_string_to_seval((basic_string *)&local_90,local_78);
  se::Value::Value(aVStack_48);
  pOVar6 = (Object *)0x0;
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar6 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar5 = se::Object::call(this,(vector *)&local_78,pOVar6,aVStack_48);
  if ((uVar5 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
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
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

