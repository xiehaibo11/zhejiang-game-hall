
/* v8::internal::LookupIterator::LookupIterator(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, unsigned long,
   v8::internal::LookupIterator::Configuration, v8::internal::Handle<v8::internal::Name>) */

void __thiscall
v8::internal::LookupIterator::LookupIterator
          (LookupIterator *this,Factory *param_1,ulong *param_3,ulong param_4,undefined4 param_5,
          ulong *param_6)

{
  ulong *puVar1;
  
  if (((*param_3 & 1) == 0) ||
     (puVar1 = param_3, *(ushort *)(((ulong)param_1 | 7) + (ulong)*(uint *)(*param_3 - 1)) < 0xa9))
  {
    puVar1 = (ulong *)GetRootForNonJSReceiver(param_1,param_3,param_4);
  }
  *(undefined4 *)this = param_5;
  *(Factory **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(ulong **)(this + 0x30) = param_3;
  *(undefined8 *)(this + 0xc) = 0xc000000000;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(ulong **)(this + 0x40) = puVar1;
  *(ulong *)(this + 0x48) = param_4;
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
  if ((param_4 < 0xffffffff) ||
     (*(short *)((*puVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar1 - 1)) == 0x41b)) {
    if ((param_6 != (ulong *)0x0) &&
       (*(ushort *)((*param_6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_6 - 1)) < 0x20)) {
      *(ulong **)(this + 0x20) = param_6;
    }
  }
  else {
    if (param_6 == (ulong *)0x0) {
      param_6 = (ulong *)Factory::SizeToString(param_1,param_4,true);
    }
    if ((*(ushort *)((*param_6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_6 - 1)) & 0xffe0)
        == 0x20) {
      param_6 = (ulong *)StringTable::LookupString(param_1,param_6);
    }
    *(ulong **)(this + 0x20) = param_6;
  }
  Start<true>(this);
  return;
}

