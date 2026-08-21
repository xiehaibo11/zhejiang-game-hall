
/* v8::internal::Object::GetLengthFromArrayLike(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::JSReceiver>) */

void v8::internal::Object::GetLengthFromArrayLike(Isolate *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined4 local_88;
  int local_84;
  undefined8 local_7c;
  Isolate *local_70;
  Isolate *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar2 = *(ulong *)(param_1 + 0x7b8);
  local_68 = param_1 + 0x7b8;
  local_88 = 3;
  if ((*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar2 - 1)) == 0x40) &&
     (local_88 = 3, (*(byte *)(uVar2 + 7) & 1) != 0)) {
    local_88 = 0;
  }
  local_7c = 0xc000000000;
  local_70 = param_1;
  if ((*(ushort *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1)) & 0xffe0) == 0x20
     ) {
    local_68 = (Isolate *)StringTable::LookupString(param_1);
  }
  uStack_60 = 0;
  uStack_50 = 0;
  local_38 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_58 = param_2;
  local_48 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_88);
  if (local_84 == 4) {
    uVar2 = *(ulong *)(local_70 + 0xa0);
  }
  else {
    puVar1 = (ulong *)GetProperty((LookupIterator *)&local_88,false);
    if (puVar1 == (ulong *)0x0) {
      return;
    }
    uVar2 = *puVar1;
  }
  if ((uVar2 & 1) == 0) {
    uVar2 = (ulong)(((uint)(uVar2 >> 1) & 0x7fffffff & ((int)uVar2 >> 0x1f ^ 0xffffffffU)) << 1);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar1 = *(ulong **)(param_1 + 0x95a0);
      if (puVar1 == *(ulong **)(param_1 + 0x95a8)) {
        puVar1 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar1 + 1;
      *puVar1 = uVar2;
    }
    else {
      CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar2);
    }
  }
  else {
    ConvertToLength(param_1);
  }
  return;
}

