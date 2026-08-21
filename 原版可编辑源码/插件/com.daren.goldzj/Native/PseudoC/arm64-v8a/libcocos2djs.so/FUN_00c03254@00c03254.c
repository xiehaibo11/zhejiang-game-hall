
void FUN_00c03254(long param_1,int *param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  Value *pVVar7;
  Value *pVVar8;
  Isolate *pIVar9;
  Object *this;
  ulong uVar10;
  Object *pOVar11;
  Value *local_98;
  Value *local_90;
  undefined8 local_88;
  HandleScope aHStack_80 [24];
  Value aVStack_68 [16];
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  iVar1 = *param_2;
  uVar2 = *param_3;
  uVar3 = *param_4;
  uVar4 = *param_5;
  uVar5 = *param_6;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pIVar9 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_80,pIVar9);
  local_98 = (Value *)0x0;
  local_90 = (Value *)0x0;
  local_88 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_98,5);
  int32_to_seval(iVar1,local_98);
  uint32_to_seval(uVar2,local_98 + 0x10);
  uint32_to_seval(uVar3,local_98 + 0x20);
  uint32_to_seval(uVar4,local_98 + 0x30);
  uint32_to_seval(uVar5,local_98 + 0x40);
  se::Value::Value(aVStack_68);
  pOVar11 = (Object *)0x0;
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar11 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar10 = se::Object::call(this,(vector *)&local_98,pOVar11,aVStack_68);
  if ((uVar10 & 1) == 0) {
    se::ScriptEngine::getInstance();
    se::ScriptEngine::clearException();
  }
  se::Value::~Value(aVStack_68);
  pVVar8 = local_98;
  pVVar7 = local_90;
  if (local_98 != (Value *)0x0) {
    while (pVVar7 != pVVar8) {
      se::Value::~Value(pVVar7 + -0x10);
      pVVar7 = pVVar7 + -0x10;
    }
    local_90 = pVVar8;
    operator_delete(local_98);
  }
  v8::HandleScope::~HandleScope(aHStack_80);
  if (*(long *)(lVar6 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

