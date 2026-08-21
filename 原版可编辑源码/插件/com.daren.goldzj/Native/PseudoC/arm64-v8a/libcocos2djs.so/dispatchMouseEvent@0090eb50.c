
/* cocos2d::EventDispatcher::dispatchMouseEvent(cocos2d::MouseEvent const&) */

void cocos2d::EventDispatcher::dispatchMouseEvent(MouseEvent *param_1)

{
  MouseEvent MVar1;
  long lVar2;
  Value *pVVar3;
  Value *pVVar4;
  ScriptEngine *this;
  ulong uVar5;
  Isolate *pIVar6;
  Object *pOVar7;
  char *pcVar8;
  HandleScope aHStack_b8 [24];
  Value aVStack_a0 [16];
  Value *local_90;
  Value *local_88;
  undefined8 local_80;
  Value aVStack_78 [8];
  byte local_70;
  Value aVStack_68 [16];
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  uVar5 = se::ScriptEngine::isValid(this);
  if ((uVar5 & 1) != 0) {
    pIVar6 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_b8,pIVar6);
    if (DAT_01d372a0 == (Object *)0x0) {
      DAT_01d372a0 = (Object *)se::Object::createPlainObject();
      se::Object::root(DAT_01d372a0);
    }
    se::Value::Value(aVStack_58,*(float *)param_1);
    se::Value::Value(aVStack_68,*(float *)(param_1 + 4));
    pOVar7 = DAT_01d372a0;
    MVar1 = param_1[10];
    if ((long)(char)MVar1 == 3) {
      se::Object::setProperty(DAT_01d372a0,"wheelDeltaX",aVStack_58);
      se::Object::setProperty(DAT_01d372a0,"wheelDeltaY",aVStack_68);
      pcVar8 = "onMouseWheel";
    }
    else {
      if ((byte)MVar1 < 2) {
        se::Value::Value((Value *)&local_90,*(ushort *)(param_1 + 8));
        se::Object::setProperty(pOVar7,"button",(Value *)&local_90);
        se::Value::~Value((Value *)&local_90);
      }
      se::Object::setProperty(DAT_01d372a0,"x",aVStack_58);
      se::Object::setProperty(DAT_01d372a0,"y",aVStack_68);
      if ((byte)MVar1 < 4) {
        pcVar8 = (&PTR_s_onMouseDown_01c68b90)[(char)MVar1];
      }
      else {
        pcVar8 = (char *)0x0;
      }
    }
    se::Value::Value(aVStack_78);
    uVar5 = se::Object::getProperty(__jsbObj,pcVar8,aVStack_78);
    if (((uVar5 & 1) != 0) && (1 < local_70)) {
      local_90 = (Value *)0x0;
      local_88 = (Value *)0x0;
      local_80 = 0;
      se::Value::Value(aVStack_a0,DAT_01d372a0,false);
      std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
      __push_back_slow_path<se::Value>
                ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,aVStack_a0);
      se::Value::~Value(aVStack_a0);
      pOVar7 = (Object *)se::Value::toObject(aVStack_78);
      se::Object::call(pOVar7,(vector *)&local_90,(Object *)0x0,(Value *)0x0);
      pVVar4 = local_90;
      pVVar3 = local_88;
      if (local_90 != (Value *)0x0) {
        while (pVVar3 != pVVar4) {
          se::Value::~Value(pVVar3 + -0x10);
          pVVar3 = pVVar3 + -0x10;
        }
        local_88 = pVVar4;
        operator_delete(local_90);
      }
    }
    se::Value::~Value(aVStack_78);
    se::Value::~Value(aVStack_68);
    se::Value::~Value(aVStack_58);
    v8::HandleScope::~HandleScope(aHStack_b8);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

