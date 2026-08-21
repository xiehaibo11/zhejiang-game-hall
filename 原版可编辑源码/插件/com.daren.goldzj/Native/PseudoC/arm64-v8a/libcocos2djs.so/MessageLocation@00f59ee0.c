
/* v8::internal::MessageLocation::MessageLocation(v8::internal::Handle<v8::internal::Script>, int,
   int) */

void __thiscall
v8::internal::MessageLocation::MessageLocation
          (MessageLocation *this,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined8 *)this = param_2;
  *(undefined4 *)(this + 8) = param_3;
  *(undefined4 *)(this + 0xc) = param_4;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined8 *)(this + 0x18) = 0;
  return;
}

