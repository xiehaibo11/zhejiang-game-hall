
/* v8::internal::LookupIterator::LookupIterator(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, unsigned long,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::LookupIterator::Configuration,
   v8::internal::Handle<v8::internal::Name>) */

void __thiscall
v8::internal::LookupIterator::LookupIterator
          (LookupIterator *this,Factory *param_1,undefined8 param_3,ulong param_4,ulong *param_5,
          undefined4 param_6,ulong *param_7)

{
  int iVar1;
  ulong uVar2;
  
  *(undefined4 *)this = param_6;
  *(Factory **)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = param_3;
  *(undefined8 *)(this + 0xc) = 0xc000000000;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(ulong **)(this + 0x40) = param_5;
  *(ulong *)(this + 0x48) = param_4;
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
  if ((param_4 < 0xffffffff) ||
     (*(short *)((*param_5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_5 - 1)) == 0x41b)) {
    if ((param_7 != (ulong *)0x0) &&
       (*(ushort *)((*param_7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_7 - 1)) < 0x20)) {
      *(ulong **)(this + 0x20) = param_7;
    }
  }
  else {
    if (param_7 == (ulong *)0x0) {
      param_7 = (ulong *)Factory::SizeToString(param_1,param_4,true);
    }
    if ((*(ushort *)((*param_7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_7 - 1)) & 0xffe0)
        == 0x20) {
      param_7 = (ulong *)StringTable::LookupString(param_1,param_7);
    }
    param_5 = *(ulong **)(this + 0x40);
    param_1 = *(Factory **)(this + 0x18);
    *(ulong **)(this + 0x20) = param_7;
  }
  this[8] = (LookupIterator)0x0;
  *(undefined4 *)(this + 4) = 4;
  *(ulong **)(this + 0x38) = param_5;
  uVar2 = *param_5;
  param_1 = param_1 + *(uint *)(uVar2 - 1);
  if (*(ushort *)(param_1 + 7) < 0x411) {
    iVar1 = LookupInSpecialHolder<true>();
  }
  else {
    iVar1 = LookupInRegularHolder<true>(this,param_1,uVar2);
  }
  *(int *)(this + 4) = iVar1;
  if (iVar1 == 4) {
    NextInternal<true>(this,param_1,uVar2);
    return;
  }
  return;
}

