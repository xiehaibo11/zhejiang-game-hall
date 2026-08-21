
/* v8::internal::RegExpUtils::IsRegExp(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>) */

undefined8 v8::internal::RegExpUtils::IsRegExp(Isolate *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 local_78;
  undefined8 local_6c;
  Isolate *local_60;
  Isolate *local_58;
  undefined8 uStack_50;
  ulong *local_48;
  undefined8 uStack_40;
  ulong *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar3 = *param_2;
  if (((uVar3 & 1) == 0) ||
     (*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) < 0xa9)) {
    return 1;
  }
  uVar3 = *(ulong *)(param_1 + 0xc30);
  local_58 = param_1 + 0xc30;
  uVar5 = 3;
  if ((*(short *)(((ulong)param_1 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x40) &&
     (uVar5 = 3, (*(byte *)(uVar3 + 7) & 1) != 0)) {
    uVar5 = 0;
  }
  local_6c = 0xc000000000;
  local_60 = param_1;
  local_78._0_4_ = uVar5;
  if ((*(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) & 0xffe0) == 0x20
     ) {
    local_58 = (Isolate *)StringTable::LookupString(param_1);
  }
  uStack_50 = 0;
  uStack_40 = 0;
  local_28 = 0xffffffffffffffff;
  uStack_30 = 0xffffffffffffffff;
  local_48 = param_2;
  local_38 = param_2;
  LookupIterator::Start<false>((LookupIterator *)&local_78);
  if (local_78._4_4_ == 4) {
    local_78 = *(ulong *)(local_60 + 0xa0);
  }
  else {
    puVar1 = (ulong *)Object::GetProperty((LookupIterator *)&local_78,false);
    if (puVar1 == (ulong *)0x0) {
      return 0;
    }
    local_78 = *puVar1;
  }
  if (((local_78 & 1) != 0) && ((int)local_78 == *(int *)(param_1 + 0xa0))) {
    uVar3 = *param_2;
    if ((uVar3 & 1) == 0) {
      return 1;
    }
    if (*(short *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) != 0x42e) {
      return 1;
    }
    return 0x101;
  }
  uVar3 = Object::BooleanValue((Object *)&local_78,param_1);
  uVar4 = *param_2;
  if ((uVar3 & 1) == 0) {
    if (((uVar4 & 1) == 0) ||
       (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) != 0x42e))
    goto LAB_011ba6d8;
    uVar2 = 0x49;
  }
  else {
    if (((uVar4 & 1) != 0) &&
       (*(short *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x42e))
    goto LAB_011ba6d8;
    uVar2 = 0x48;
  }
  Isolate::CountUsage(param_1,uVar2);
LAB_011ba6d8:
  if ((uVar3 & 1) == 0) {
    return 1;
  }
  return 0x101;
}

