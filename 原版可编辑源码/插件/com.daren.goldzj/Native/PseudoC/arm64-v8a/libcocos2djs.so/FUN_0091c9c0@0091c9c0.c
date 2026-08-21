
void FUN_0091c9c0(basic_string *param_1,undefined8 *param_2)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  ScriptEngine *pSVar4;
  Object *pOVar5;
  ulong uVar6;
  Isolate *pIVar7;
  code *pcVar8;
  Value local_b0 [16];
  void *local_a0;
  Value aVStack_98 [16];
  Value *local_88;
  Value *local_80;
  Value *local_78;
  undefined **local_70 [4];
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (DAT_01d372e0 != '\0') goto LAB_0091ca98;
  pSVar4 = (ScriptEngine *)se::ScriptEngine::getInstance();
  pOVar5 = (Object *)se::ScriptEngine::getGlobalObject(pSVar4);
  se::Value::Value((Value *)&local_88);
  uVar6 = se::Object::getProperty(pOVar5,"jsb",(Value *)&local_88);
  if (((uVar6 & 1) != 0) && ((char)local_80 == '\x05')) {
    pOVar5 = (Object *)se::Value::toObject((Value *)&local_88);
    se::Object::getProperty(pOVar5,"onTextInput",(Value *)&DAT_01d372d8);
    pSVar4 = (ScriptEngine *)se::ScriptEngine::getInstance();
    local_70[0] = &PTR_FUN_01c69340;
    local_50 = local_70;
    se::ScriptEngine::addBeforeCleanupHook(pSVar4,(function *)local_70);
    if (local_70 == local_50) {
      pcVar8 = (code *)(*local_50)[4];
    }
    else {
      if (local_50 == (undefined ***)0x0) goto LAB_0091ca90;
      pcVar8 = (code *)(*local_50)[5];
    }
    (*pcVar8)();
  }
LAB_0091ca90:
  se::Value::~Value((Value *)&local_88);
LAB_0091ca98:
  pIVar7 = (Isolate *)v8::Isolate::GetCurrent();
  v8::HandleScope::HandleScope((HandleScope *)local_70,pIVar7);
  local_88 = (Value *)0x0;
  local_80 = (Value *)0x0;
  local_78 = (Value *)0x0;
  se::Value::Value(local_b0,param_1);
  if (local_80 < local_78) {
    se::Value::Value(local_80,local_b0);
    local_80 = local_80 + 0x10;
  }
  else {
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_88,local_b0);
  }
  se::Value::~Value(local_b0);
  cocos2d::JniHelper::jstring2string((_jstring *)*param_2);
  se::Value::Value(aVStack_98,(basic_string *)local_b0);
  if (local_80 < local_78) {
    se::Value::Value(local_80,aVStack_98);
    local_80 = local_80 + 0x10;
  }
  else {
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_88,aVStack_98);
  }
  se::Value::~Value(aVStack_98);
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(local_a0);
  }
  pOVar5 = (Object *)se::Value::toObject((Value *)&DAT_01d372d8);
  se::Object::call(pOVar5,(vector *)&local_88,(Object *)0x0,(Value *)0x0);
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
  v8::HandleScope::~HandleScope((HandleScope *)local_70);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

