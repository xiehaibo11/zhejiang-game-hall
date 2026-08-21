
/* se::Object::setArrayElement(unsigned int, se::Value const&) */

bool __thiscall se::Object::setArrayElement(Object *this,uint param_1,Value *param_2)

{
  long lVar1;
  Object *pOVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  internal::seToJsValue(DAT_01d371a8,param_2,(Local *)&local_40);
  pOVar2 = (Object *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
  uVar3 = v8::Isolate::GetCurrentContext(DAT_01d371a8);
  uVar4 = v8::Object::Set(pOVar2,uVar3,param_1,local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return (uVar4 & 0xff00) != 0 && (uVar4 & 0xff) != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

