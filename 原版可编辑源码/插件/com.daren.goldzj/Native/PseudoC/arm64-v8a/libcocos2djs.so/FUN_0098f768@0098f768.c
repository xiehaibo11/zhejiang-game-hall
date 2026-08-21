
void FUN_0098f768(long param_1,int *param_2,basic_string *param_3)

{
  int iVar1;
  long lVar2;
  Value *pVVar3;
  Value *pVVar4;
  Isolate *pIVar5;
  Object *pOVar6;
  Object *this;
  ulong uVar7;
  Value *local_78;
  Value *local_70;
  undefined8 local_68;
  HandleScope aHStack_60 [24];
  Value aVStack_48 [16];
  long local_38;
  
                    /* try { // try from 0098f768 to 00a8f76f has its CatchHandler @ 0098f800 */
                    /* try { // try from 0098f770 to 00a8f78f has its CatchHandler @ 0098f6a0 */
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
                    /* try { // try from 0098f790 to 00a8f797 has its CatchHandler @ 0098f800 */
  iVar1 = *param_2;
  se::ScriptEngine::getInstance();
                    /* try { // try from 0098f798 to 00a8f7b7 has its CatchHandler @ 0098f6a0 */
  se::ScriptEngine::clearException();
  pIVar5 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope(aHStack_60,pIVar5);
  local_78 = (Value *)0x0;
  local_70 = (Value *)0x0;
  local_68 = 0;
                    /* try { // try from 0098f7b8 to 00a8f7c3 has its CatchHandler @ 0098f800 */
  std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::__append
            ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_78,2);
                    /* try { // try from 0098f7c4 to 00a8f807 has its CatchHandler @ 0098f6a0 */
  int32_to_seval(iVar1,local_78);
  std_string_to_seval(param_3,local_78 + 0x10);
  se::Value::Value(aVStack_48);
  if (*(char *)(param_1 + 0x10) == '\x05') {
    pOVar6 = (Object *)se::Value::toObject((Value *)(param_1 + 8));
  }
  else {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0098f768 with catch @ 0098f800
                       catch(type#1 @ 00000000) { ... } // from try @ 0098f790 with catch @ 0098f800
                       catch(type#1 @ 00000000) { ... } // from try @ 0098f7b8 with catch @ 0098f800
                        */
    pOVar6 = (Object *)0x0;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0098f708 with catch @ 0098f804
                       catch(type#1 @ 00000000) { ... } // from try @ 0098f734 with catch @ 0098f804
                        */
  this = (Object *)se::Value::toObject((Value *)(param_1 + 0x18));
  uVar7 = se::Object::call(this,(vector *)&local_78,pOVar6,aVStack_48);
  if ((uVar7 & 1) == 0) {
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

