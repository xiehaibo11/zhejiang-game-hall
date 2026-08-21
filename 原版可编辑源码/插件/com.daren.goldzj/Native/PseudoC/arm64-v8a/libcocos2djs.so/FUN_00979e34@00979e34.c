
void FUN_00979e34(long param_1,basic_string *param_2,basic_string *param_3,int *param_4,
                 basic_string *param_5)

{
  int iVar1;
  long lVar2;
  Value *pVVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  Object *pOVar6;
  Object *this;
  ulong uVar7;
  Value *local_88;
  Value *local_80;
  undefined8 local_78;
  HandleScope aHStack_70 [24];
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  iVar1 = *param_4;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar5 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_70,pIVar5);
  local_88 = (Value *)0x0;
  local_80 = (Value *)0x0;
  local_78 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_88,4);
  std_string_to_seval(param_2,local_88);
  std_string_to_seval(param_3,local_88 + 0x10);
  int32_to_seval(iVar1,local_88 + 0x20);
  std_string_to_seval(param_5,local_88 + 0x30);
  se::Value::Value(aVStack_58);
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar6 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  else {
    pOVar6 = (Object *)0x0;
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar7 = se::Object::call(this,(vector *)&local_88,pOVar6,aVStack_58);
  if ((uVar7 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  se::Value::~Value(aVStack_58);
  pVVar4 = local_88;
  pVVar3 = local_80;
  if (local_88 != (Value *)0x0) {
    while (pVVar3 != pVVar4) {
      se::Value::~Value(pVVar3 + -0x10);
      pVVar3 = pVVar3 + -0x10;
    }
    local_80 = pVVar4;
    operator_delete(local_88);
  }
  v8::HandleScope::~HandleScope(aHStack_70);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

