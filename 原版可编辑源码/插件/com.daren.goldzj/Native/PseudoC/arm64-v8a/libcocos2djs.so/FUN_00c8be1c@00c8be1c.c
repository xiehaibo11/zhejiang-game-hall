
void FUN_00c8be1c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  Isolate *pIVar4;
  Object *this;
  ulong uVar5;
  type *ptVar6;
  Object *pOVar7;
  type *ptVar8;
  Value *local_78;
  Value *local_70;
  undefined8 local_68;
  HandleScope aHStack_60 [24];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ptVar6 = (type *)*param_2;
  ptVar8 = (type *)*param_3;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar4 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_60,pIVar4);
  local_78 = (Value *)0x0;
  local_70 = (Value *)0x0;
  local_68 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_78,2);
  native_ptr_to_rooted_seval<spine::TrackEntry>(ptVar6,local_78,(bool *)0x0);
  native_ptr_to_rooted_seval<spine::Event>(ptVar8,local_78 + 0x10,(bool *)0x0);
  se::Value::Value(aVStack_48);
  pOVar7 = (Object *)0x0;
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar7 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar5 = se::Object::call(this,(vector *)&local_78,pOVar7,aVStack_48);
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
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

