
/* cocos2d::EventDispatcher::dispatchOrientationChangeEvent(int) */

void cocos2d::EventDispatcher::dispatchOrientationChangeEvent(int param_1)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  ScriptEngine *this;
  ulong uVar4;
  Isolate *pIVar5;
  Object *pOVar6;
  HandleScope aHStack_88 [24];
  Value aVStack_70 [16];
  Value *local_60;
  Value *local_58;
  undefined8 local_50;
  Value aVStack_48 [8];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  uVar4 = se::ScriptEngine::isValid(this);
  if ((uVar4 & 1) != 0) {
    pIVar5 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_88,pIVar5);
    if (DAT_01d372b8 == (Object *)0x0) {
      DAT_01d372b8 = (Object *)se::Object::createPlainObject();
      se::Object::root(DAT_01d372b8);
    }
    se::Value::Value(aVStack_48);
    se::Object::getProperty(__jsbObj,"onOrientationChanged",aVStack_48);
    if (local_40 == '\x05') {
      pOVar6 = (Object *)se::Value::toObject(aVStack_48);
      uVar4 = se::Object::isFunction(pOVar6);
      pOVar6 = DAT_01d372b8;
      if ((uVar4 & 1) != 0) {
        se::Value::Value((Value *)&local_60,param_1);
        se::Object::setProperty(pOVar6,"rotation",(Value *)&local_60);
        se::Value::~Value((Value *)&local_60);
        local_60 = (Value *)0x0;
        local_58 = (Value *)0x0;
        local_50 = 0;
        se::Value::Value(aVStack_70,DAT_01d372b8,false);
        std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
        __push_back_slow_path<se::Value>
                  ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_60,aVStack_70);
        se::Value::~Value(aVStack_70);
        pOVar6 = (Object *)se::Value::toObject(aVStack_48);
        se::Object::call(pOVar6,(vector *)&local_60,(Object *)0x0,(Value *)0x0);
        pVVar3 = local_60;
        pVVar2 = local_58;
        if (local_60 != (Value *)0x0) {
          while (pVVar2 != pVVar3) {
            se::Value::~Value(pVVar2 + -0x10);
            pVVar2 = pVVar2 + -0x10;
          }
          local_58 = pVVar3;
          operator_delete(local_60);
        }
      }
    }
    se::Value::~Value(aVStack_48);
    v8::HandleScope::~HandleScope(aHStack_88);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

