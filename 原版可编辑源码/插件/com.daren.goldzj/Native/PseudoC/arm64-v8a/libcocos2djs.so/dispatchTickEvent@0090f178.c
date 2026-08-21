
/* cocos2d::EventDispatcher::dispatchTickEvent(float) */

void cocos2d::EventDispatcher::dispatchTickEvent(float param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  int iVar4;
  ScriptEngine *pSVar5;
  ulong uVar6;
  Isolate *pIVar7;
  Object *pOVar8;
  long *plVar9;
  Value *local_78;
  Value *local_70;
  undefined8 local_68;
  HandleScope aHStack_60 [24];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pSVar5 = (ScriptEngine *)se::ScriptEngine::getInstance();
  uVar6 = se::ScriptEngine::isValid(pSVar5);
  if ((uVar6 & 1) != 0) {
    pIVar7 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_60,pIVar7);
    if (DAT_01d37250 == '\0') {
      pSVar5 = (ScriptEngine *)se::ScriptEngine::getInstance();
      pOVar8 = (Object *)se::ScriptEngine::getGlobalObject(pSVar5);
      se::Object::getProperty(pOVar8,"gameTick",(Value *)&DAT_01d37248);
    }
    if (((DAT_01d372c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_01d372c0), iVar4 != 0)) {
      DAT_01d372d0 = 0;
      __cxa_guard_release(&DAT_01d372c0);
    }
    DAT_01d372d0 = std::__ndk1::chrono::steady_clock::now();
    local_78 = (Value *)0x0;
    local_70 = (Value *)0x0;
    local_68 = 0;
    plVar9 = (long *)se::ScriptEngine::getInstance();
    se::Value::Value(aVStack_48,(double)((DAT_01d372d0 - *plVar9) / 1000) * 0.001);
    std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
    __push_back_slow_path<se::Value>
              ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_78,aVStack_48);
    se::Value::~Value(aVStack_48);
    pOVar8 = (Object *)se::Value::toObject((Value *)&DAT_01d37248);
    se::Object::call(pOVar8,(vector *)&local_78,(Object *)0x0,(Value *)0x0);
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
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

