
/* se::Object::createJSONObject(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 se::Object::createJSONObject(basic_string *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_50;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = v8::Isolate::GetCurrentContext(DAT_01d371a8);
  se::Value::Value(aVStack_48,param_1);
  local_50 = 0;
  internal::seToJsValue(DAT_01d371a8,aVStack_48,(Local *)&local_50);
  lVar3 = v8::JSON::Parse(uVar2,local_50);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _createJSObject(0);
  }
  se::Value::~Value(aVStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

