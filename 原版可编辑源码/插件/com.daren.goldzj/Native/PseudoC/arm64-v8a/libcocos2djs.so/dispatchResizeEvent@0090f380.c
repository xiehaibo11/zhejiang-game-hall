
/* cocos2d::EventDispatcher::dispatchResizeEvent(int, int) */

void cocos2d::EventDispatcher::dispatchResizeEvent(int param_1,int param_2)

{
  long lVar1;
  Value *pVVar2;
  Value *pVVar3;
  ScriptEngine *this;
  ulong uVar4;
  Isolate *pIVar5;
  Object *pOVar6;
  HandleScope aHStack_98 [24];
  Value aVStack_80 [16];
  Value *local_70;
  Value *local_68;
  undefined8 local_60;
  Value aVStack_58 [8];
  char local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  uVar4 = se::ScriptEngine::isValid(this);
  if ((uVar4 & 1) != 0) {
    pIVar5 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_98,pIVar5);
    if (DAT_01d372b0 == (Object *)0x0) {
      DAT_01d372b0 = (Object *)se::Object::createPlainObject();
      se::Object::root(DAT_01d372b0);
    }
    se::Value::Value(aVStack_58);
    se::Object::getProperty(__jsbObj,"onResize",aVStack_58);
    if (local_50 == '\x05') {
      pOVar6 = (Object *)se::Value::toObject(aVStack_58);
      uVar4 = se::Object::isFunction(pOVar6);
      pOVar6 = DAT_01d372b0;
      if ((uVar4 & 1) != 0) {
        se::Value::Value((Value *)&local_70,param_1);
        se::Object::setProperty(pOVar6,"width",(Value *)&local_70);
        se::Value::~Value((Value *)&local_70);
        pOVar6 = DAT_01d372b0;
        se::Value::Value((Value *)&local_70,param_2);
        se::Object::setProperty(pOVar6,"height",(Value *)&local_70);
        se::Value::~Value((Value *)&local_70);
        local_70 = (Value *)0x0;
        local_68 = (Value *)0x0;
        local_60 = 0;
        se::Value::Value(aVStack_80,DAT_01d372b0,false);
        std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
        __push_back_slow_path<se::Value>
                  ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_70,aVStack_80);
        se::Value::~Value(aVStack_80);
        pOVar6 = (Object *)se::Value::toObject(aVStack_58);
        se::Object::call(pOVar6,(vector *)&local_70,(Object *)0x0,(Value *)0x0);
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
      }
    }
    se::Value::~Value(aVStack_58);
    v8::HandleScope::~HandleScope(aHStack_98);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

