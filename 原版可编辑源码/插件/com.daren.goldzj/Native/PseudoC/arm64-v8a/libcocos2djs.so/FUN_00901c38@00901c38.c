
void FUN_00901c38(long param_1,DownloadTask *param_2,int *param_3,int *param_4,basic_string *param_5
                 )

{
  int iVar1;
  int iVar2;
  long lVar3;
  Value *pVVar4;
  Value *pVVar5;
  Isolate *pIVar6;
  Object *this;
  Object *this_00;
  ulong uVar7;
  Value *local_88;
  Value *local_80;
  undefined8 local_78;
  HandleScope aHStack_70 [24];
  Value aVStack_58 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  iVar1 = *param_3;
  iVar2 = *param_4;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar6 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_70,pIVar6);
  local_88 = (Value *)0x0;
  local_80 = (Value *)0x0;
  local_78 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_88,4);
  DownloadTask_to_seval(param_2,local_88);
  int32_to_seval(iVar1,local_88 + 0x10);
  int32_to_seval(iVar2,local_88 + 0x20);
  std_string_to_seval(param_5,local_88 + 0x30);
  se::Value::Value(aVStack_58);
  if (*(char *)(param_1 + 0x10) == '\x05') {
    this = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  else {
    this = (Object *)0x0;
  }
  this_00 = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar7 = se::Object::call(this_00,(vector *)&local_88,this,aVStack_58);
  if ((uVar7 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  se::Object::unroot(this);
  se::Value::~Value(aVStack_58);
  pVVar5 = local_88;
  pVVar4 = local_80;
  if (local_88 != (Value *)0x0) {
    while (pVVar4 != pVVar5) {
      se::Value::~Value(pVVar4 + -0x10);
      pVVar4 = pVVar4 + -0x10;
    }
    local_80 = pVVar5;
    operator_delete(local_88);
  }
  v8::HandleScope::~HandleScope(aHStack_70);
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

