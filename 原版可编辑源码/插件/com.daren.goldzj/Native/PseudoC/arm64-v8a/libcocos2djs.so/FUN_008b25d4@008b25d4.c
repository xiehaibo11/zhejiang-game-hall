
void FUN_008b25d4(long param_1,DownloadTask *param_2,longlong *param_3,longlong *param_4,
                 longlong *param_5)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Isolate *pIVar4;
  Object *pOVar5;
  Object *this;
  ulong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  Value *local_88;
  Value *local_80;
  undefined8 local_78;
  HandleScope aHStack_70 [24];
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar9 = *param_3;
  lVar8 = *param_4;
  lVar7 = *param_5;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar4 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_70,pIVar4);
  local_88 = (Value *)0x0;
  local_80 = (Value *)0x0;
  local_78 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_88,4);
  DownloadTask_to_seval(param_2,local_88);
  longlong_to_seval(lVar9,local_88 + 0x10);
  longlong_to_seval(lVar8,local_88 + 0x20);
  longlong_to_seval(lVar7,local_88 + 0x30);
  se::Value::Value(aVStack_58);
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar5 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  else {
    pOVar5 = (Object *)0x0;
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar6 = se::Object::call(this,(vector *)&local_88,pOVar5,aVStack_58);
  if ((uVar6 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  se::Value::~Value(aVStack_58);
  pVVar3 = local_88;
  pVVar2 = local_80;
  if (local_88 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_80 = pVVar3;
    operator_delete(local_88);
  }
  v8::HandleScope::~HandleScope(aHStack_70);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

