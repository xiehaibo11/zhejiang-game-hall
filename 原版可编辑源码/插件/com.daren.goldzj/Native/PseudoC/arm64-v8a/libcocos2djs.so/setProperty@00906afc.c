
/* se::Object::setProperty(char const*, se::Value const&) */

void __thiscall se::Object::setProperty(Object *this,char *param_1,Value *param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  Object *pOVar4;
  undefined8 uVar5;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = v8::String::NewFromUtf8(DAT_01d371a8,param_1,0,0xffffffff);
  uVar5 = 0;
  if (lVar3 != 0) {
    local_50 = 0;
    internal::seToJsValue(DAT_01d371a8,param_2,(Local *)&local_50);
    pOVar4 = (Object *)ObjectWrap::handle((ObjectWrap *)(this + 0x18),DAT_01d371a8);
    uVar5 = v8::Isolate::GetCurrentContext(DAT_01d371a8);
    cVar2 = v8::Object::Set(pOVar4,uVar5,lVar3,local_50);
    if (cVar2 == '\0') {
      __android_log_print(3,"jswrapper","ERROR: %s, Set return nothing ...\n","setProperty");
      uVar5 = 0;
    }
    else {
      uVar5 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

