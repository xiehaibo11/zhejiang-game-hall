
void FUN_008e9114(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  Value *local_70;
  Value *local_68;
  undefined8 local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pcVar6 = (char *)*param_2;
  pcVar5 = (char *)*param_3;
  pcVar4 = (char *)*param_4;
  local_70 = (Value *)0x0;
  local_68 = (Value *)0x0;
  local_60 = 0;
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_70,3);
  se::Value::Value(aVStack_58,pcVar6);
  se::Value::operator=(local_70,aVStack_58);
  se::Value::~Value(aVStack_58);
  se::Value::Value(aVStack_58,pcVar5);
  se::Value::operator=(local_70 + 0x10,aVStack_58);
  se::Value::~Value(aVStack_58);
  se::Value::Value(aVStack_58,pcVar4);
  se::Value::operator=(local_70 + 0x20,aVStack_58);
  se::Value::~Value(aVStack_58);
  se::Object::call(*(Object **)(param_1 + 8),(vector *)&local_70,(Object *)0x0,(Value *)0x0);
  pVVar3 = local_70;
  pVVar2 = local_68;
  if (local_70 != (Value *)0x0) {
    while (pVVar2 != pVVar3) {
      se::Value::~Value(pVVar2 + -0x10);
      pVVar2 = pVVar2 + -0x10;
    }
    local_68 = pVVar3;
    operator_delete(local_70);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

