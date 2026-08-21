
/* se::Object::deleteProperty(char const*) */

bool __thiscall se::Object::deleteProperty(Object *this,char *param_1)

{
  long lVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  Object *pOVar6;
  ulong uVar7;
  HandleScope aHStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  v8::HandleScope::HandleScope(aHStack_60,DAT_01d371a8);
  plVar3 = (long *)ObjectWrap::persistent((ObjectWrap *)(this + 0x18));
  if ((*plVar3 != 0) &&
     (lVar4 = v8::String::NewFromUtf8(DAT_01d371a8,param_1,0,0xffffffff), lVar4 != 0)) {
    uVar5 = v8::Isolate::GetCurrentContext(DAT_01d371a8);
    pOVar6 = (Object *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
    uVar7 = v8::Object::Delete(pOVar6,uVar5,lVar4);
    if ((uVar7 & 0xff) != 0) {
      bVar2 = (uVar7 & 0xff00) != 0;
      goto LAB_00906aa4;
    }
  }
  bVar2 = false;
LAB_00906aa4:
  v8::HandleScope::~HandleScope(aHStack_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

