
/* v8::internal::LookupIterator::LookupIterator(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::Name>,
   v8::internal::Handle<v8::internal::JSReceiver>, v8::internal::LookupIterator::Configuration) */

void __thiscall
v8::internal::LookupIterator::LookupIterator
          (LookupIterator *this,ulong param_1,undefined8 param_3,ulong *param_4,long *param_5,
          undefined4 param_6)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if ((*(short *)((param_1 | 7) + (ulong)*(uint *)(*param_4 - 1)) == 0x40) &&
     ((*(byte *)(*param_4 + 7) & 1) != 0)) {
    param_6 = 0;
  }
  *(undefined4 *)this = param_6;
  *(ulong *)(this + 0x18) = param_1;
  *(undefined8 *)(this + 0xc) = 0xc000000000;
  if ((*(ushort *)((*param_4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_4 - 1)) & 0xffe0)
      == 0x20) {
    param_4 = (ulong *)StringTable::LookupString(param_1,param_4);
    param_1 = *(ulong *)(this + 0x18);
  }
  *(long **)(this + 0x40) = param_5;
  *(undefined8 *)(this + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x50) = 0xffffffffffffffff;
  *(ulong **)(this + 0x20) = param_4;
  *(undefined8 *)(this + 0x28) = 0;
  this[8] = (LookupIterator)0x0;
  *(undefined4 *)(this + 4) = 4;
  *(undefined8 *)(this + 0x30) = param_3;
  *(long **)(this + 0x38) = param_5;
  lVar3 = *param_5;
  lVar1 = param_1 + *(uint *)(lVar3 + -1);
  if (*(ushort *)(lVar1 + 7) < 0x411) {
    iVar2 = LookupInSpecialHolder<false>();
  }
  else {
    iVar2 = LookupInRegularHolder<false>(this,lVar1,lVar3);
  }
  *(int *)(this + 4) = iVar2;
  if (iVar2 != 4) {
    return;
  }
  NextInternal<false>(this,lVar1,lVar3);
  return;
}

