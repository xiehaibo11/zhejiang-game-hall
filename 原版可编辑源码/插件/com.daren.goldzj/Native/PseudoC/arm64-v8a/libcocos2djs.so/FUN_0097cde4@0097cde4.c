
void FUN_0097cde4(long param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  Value *pVVar4;
  Value *pVVar5;
  Isolate *pIVar6;
  Object *pOVar7;
  Object *this;
  ulong uVar8;
  Value *local_78;
  Value *local_70;
  undefined8 local_68;
  HandleScope aHStack_60 [24];
  Value aVStack_48 [16];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar1 = *param_2;
  iVar2 = *param_3;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar6 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_60,pIVar6);
  local_78 = (Value *)0x0;
  local_70 = (Value *)0x0;
  local_68 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_78,2);
  int32_to_seval(iVar1,local_78);
  int32_to_seval(iVar2,local_78 + 0x10);
  se::Value::Value(aVStack_48);
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar7 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  else {
    pOVar7 = (Object *)0x0;
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar8 = se::Object::call(this,(vector *)&local_78,pOVar7,aVStack_48);
  if ((uVar8 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  se::Value::~Value(aVStack_48);
  pVVar5 = local_78;
  pVVar4 = local_70;
  if (local_78 != (Value *)0x0) {
    while (pVVar4 != pVVar5) {
      se::Value::~Value(pVVar4 + -0x10);
      pVVar4 = pVVar4 + -0x10;
    }
    local_70 = pVVar5;
    operator_delete(local_78);
  }
  v8::HandleScope::~HandleScope(aHStack_60);
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

