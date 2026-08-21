
/* se::Object::getProperty(char const*, se::Value*) */

undefined4 __thiscall se::Object::getProperty(Object *this,char *param_1,Value *param_2)

{
  ObjectWrap *this_00;
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  Object *pOVar5;
  ulong uVar6;
  undefined4 uVar7;
  HandleScope aHStack_70 [24];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  se::Value::setUndefined(param_2);
  v8::HandleScope::HandleScope(aHStack_70,DAT_01d371a8);
  this_00 = (ObjectWrap *)(this + 0x18);
  plVar2 = (long *)ObjectWrap::persistent(this_00);
  if ((*plVar2 != 0) &&
     (lVar3 = v8::String::NewFromUtf8(DAT_01d371a8,param_1,0,0xffffffff), lVar3 != 0)) {
    uVar4 = v8::Isolate::GetCurrentContext(DAT_01d371a8);
    pOVar5 = (Object *)ObjectWrap::handle(this_00,DAT_01d371a8);
    uVar6 = v8::Object::Has(pOVar5,uVar4,lVar3);
    uVar7 = 0;
    if (((uVar6 & 0xff) == 0) || ((uVar6 & 0xff00) == 0)) goto LAB_00906998;
    pOVar5 = (Object *)ObjectWrap::handle(this_00,DAT_01d371a8);
    lVar3 = v8::Object::Get(pOVar5,uVar4,lVar3);
    if (lVar3 != 0) {
      internal::jsToSeValue(DAT_01d371a8,lVar3,param_2);
      uVar7 = 1;
      goto LAB_00906998;
    }
  }
  uVar7 = 0;
LAB_00906998:
  v8::HandleScope::~HandleScope(aHStack_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

