
/* cocos2d::EventDispatcher::dispatchTouchEvent(cocos2d::TouchEvent const&) */

void cocos2d::EventDispatcher::dispatchTouchEvent(TouchEvent *param_1)

{
  long lVar1;
  ScriptEngine *this;
  ulong uVar2;
  Isolate *pIVar3;
  Object *pOVar4;
  ulong uVar5;
  char *pcVar6;
  float *pfVar7;
  float *pfVar8;
  Object *pOVar9;
  HandleScope aHStack_b8 [24];
  Value aVStack_a0 [16];
  Object *local_90;
  Object *local_88;
  undefined8 local_80;
  Value aVStack_78 [8];
  byte local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (ScriptEngine *)se::ScriptEngine::getInstance();
  uVar2 = se::ScriptEngine::isValid(this);
  if ((uVar2 & 1) != 0) {
    pIVar3 = (Isolate *)v8::Isolate::GetCurrent();
    v8::HandleScope::HandleScope(aHStack_b8,pIVar3);
    if (DAT_01d37298 == (Object *)0x0) {
      DAT_01d37298 = (Object *)se::Object::createArrayObject(0);
      se::Object::root(DAT_01d37298);
    }
    pOVar4 = DAT_01d37298;
    se::Value::Value((Value *)&local_90,
                     (*(long *)(param_1 + 8) - *(long *)param_1 >> 2) * -0x5555555555555555);
    se::Object::setProperty(pOVar4,"length",(Value *)&local_90);
    se::Value::~Value((Value *)&local_90);
    pfVar7 = *(float **)param_1;
    pfVar8 = *(float **)(param_1 + 8);
    uVar5 = ((long)pfVar8 - (long)pfVar7 >> 2) * -0x5555555555555555;
    uVar2 = (long)DAT_01d37260 - (long)DAT_01d37258 >> 3;
    if (uVar2 <= uVar5 && uVar5 - uVar2 != 0) {
      do {
        local_90 = (Object *)se::Object::createPlainObject();
        se::Object::root(local_90);
        if (DAT_01d37260 == DAT_01d37268) {
          std::__ndk1::vector<se::Object*,std::__ndk1::allocator<se::Object*>>::
          __push_back_slow_path<se::Object*const&>
                    ((vector<se::Object*,std::__ndk1::allocator<se::Object*>> *)&DAT_01d37258,
                     &local_90);
        }
        else {
          *DAT_01d37260 = local_90;
          DAT_01d37260 = DAT_01d37260 + 1;
        }
        pfVar7 = *(float **)param_1;
        pfVar8 = *(float **)(param_1 + 8);
        uVar5 = ((long)pfVar8 - (long)pfVar7 >> 2) * -0x5555555555555555;
        uVar2 = (long)DAT_01d37260 - (long)DAT_01d37258 >> 3;
      } while (uVar2 <= uVar5 && uVar5 - uVar2 != 0);
    }
    if (pfVar7 != pfVar8) {
      if (DAT_01d37260 != DAT_01d37258) {
        uVar2 = 0;
        do {
          pOVar9 = (Object *)DAT_01d37258[uVar2];
          se::Value::Value((Value *)&local_90,(int)pfVar7[2]);
          se::Object::setProperty(pOVar9,"identifier",(Value *)&local_90);
          se::Value::~Value((Value *)&local_90);
          se::Value::Value((Value *)&local_90,*pfVar7);
          se::Object::setProperty(pOVar9,"clientX",(Value *)&local_90);
          se::Value::~Value((Value *)&local_90);
          se::Value::Value((Value *)&local_90,pfVar7[1]);
          se::Object::setProperty(pOVar9,"clientY",(Value *)&local_90);
          se::Value::~Value((Value *)&local_90);
          se::Value::Value((Value *)&local_90,*pfVar7);
          se::Object::setProperty(pOVar9,"pageX",(Value *)&local_90);
          se::Value::~Value((Value *)&local_90);
          se::Value::Value((Value *)&local_90,pfVar7[1]);
          se::Object::setProperty(pOVar9,"pageY",(Value *)&local_90);
          se::Value::~Value((Value *)&local_90);
          pOVar4 = DAT_01d37298;
          se::Value::Value((Value *)&local_90,pOVar9,false);
          se::Object::setArrayElement(pOVar4,(uint)uVar2,(Value *)&local_90);
          se::Value::~Value((Value *)&local_90);
          pfVar7 = pfVar7 + 3;
          if (pfVar8 == pfVar7) goto LAB_0090e964;
          uVar2 = uVar2 + 1;
        } while (uVar2 < (ulong)((long)DAT_01d37260 - (long)DAT_01d37258 >> 3));
      }
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
    }
LAB_0090e964:
    if ((ulong)(long)(char)param_1[0x18] < 4) {
      pcVar6 = (&PTR_s_onTouchStart_01c68b70)[(char)param_1[0x18]];
    }
    else {
      pcVar6 = (char *)0x0;
    }
    se::Value::Value(aVStack_78);
    uVar2 = se::Object::getProperty(__jsbObj,pcVar6,aVStack_78);
    if (((uVar2 & 1) != 0) && (1 < local_70)) {
      local_90 = (Object *)0x0;
      local_88 = (Object *)0x0;
      local_80 = 0;
      se::Value::Value(aVStack_a0,DAT_01d37298,false);
      std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
      __push_back_slow_path<se::Value>
                ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)&local_90,aVStack_a0);
      se::Value::~Value(aVStack_a0);
      pOVar4 = (Object *)se::Value::toObject(aVStack_78);
      se::Object::call(pOVar4,(vector *)&local_90,(Object *)0x0,(Value *)0x0);
      pOVar9 = local_90;
      pOVar4 = local_88;
      if (local_90 != (Object *)0x0) {
        while (pOVar4 != pOVar9) {
          se::Value::~Value((Value *)(pOVar4 + -0x10));
          pOVar4 = pOVar4 + -0x10;
        }
        local_88 = pOVar9;
        operator_delete(local_90);
      }
    }
    se::Value::~Value(aVStack_78);
    v8::HandleScope::~HandleScope(aHStack_b8);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

