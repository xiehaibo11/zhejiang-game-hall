
/* v8::internal::LookupIterator::LookupIterator(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::Map>, v8::internal::PropertyDetails, bool) */

void __thiscall
v8::internal::LookupIterator::LookupIterator
          (LookupIterator *this,ulong param_1,ulong *param_3,undefined8 param_4,undefined8 param_5,
          undefined4 param_6,byte param_7)

{
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = param_6;
  *(ulong *)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x20) = param_4;
  *(undefined8 *)(this + 0x28) = param_5;
  *(ulong **)(this + 0x30) = param_3;
  this[8] = (LookupIterator)(param_7 & 1);
  *(undefined8 *)this = 0x700000003;
  *(undefined8 *)(this + 0x38) = 0;
  if (((*param_3 & 1) == 0) || (*(ushort *)((param_1 | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0xa9))
  {
    param_3 = (ulong *)GetRootForNonJSReceiver(param_1,param_3,0xffffffffffffffff);
  }
  *(ulong **)(this + 0x38) = param_3;
  *(ulong **)(this + 0x40) = param_3;
  *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
  return;
}

