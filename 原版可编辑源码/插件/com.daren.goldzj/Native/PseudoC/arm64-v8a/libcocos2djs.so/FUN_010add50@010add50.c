
undefined8
FUN_010add50(undefined8 param_1,Factory *param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 local_c8;
  int local_c4;
  undefined8 local_bc;
  Factory *local_b0;
  ulong *local_a8;
  undefined8 uStack_a0;
  ulong *local_98;
  undefined8 uStack_90;
  ulong *local_88;
  ulong uStack_80;
  undefined8 local_78;
  ulong local_68;
  
  if ((*param_4 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (int)*param_4 == *(int *)(param_2 + 0xa0);
  }
  if (param_6 <= param_5) {
    return 1;
  }
  uVar5 = *param_3;
  do {
    if (((uVar5 & 1) == 0) ||
       (puVar2 = param_3, *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)) {
      puVar2 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                  (param_2,param_3,param_5);
    }
    local_c8 = 3;
    local_bc = 0xc000000000;
    local_a8 = (ulong *)0x0;
    uStack_a0 = 0;
    uStack_90 = 0;
    local_78 = 0xffffffffffffffff;
    local_b0 = param_2;
    puVar3 = local_a8;
    local_98 = param_3;
    local_88 = puVar2;
    uStack_80 = param_5;
    if (((0xfffffffe < param_5) &&
        (*(short *)((*puVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar2 - 1)) != 0x41b))
       && (puVar3 = (ulong *)v8::internal::Factory::SizeToString(param_2,param_5,true),
          (*(ushort *)((*puVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar3 - 1)) & 0xffe0)
          == 0x20)) {
      puVar3 = (ulong *)v8::internal::StringTable::LookupString(param_2);
    }
    local_a8 = puVar3;
    v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_c8);
    if (local_c4 == 4) {
      if (bVar1) {
        return 0x101;
      }
    }
    else {
      puVar4 = (undefined8 *)v8::internal::Object::GetProperty((LookupIterator *)&local_c8,false);
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      local_68 = *param_4;
      uVar5 = v8::internal::Object::SameValueZero((Object *)&local_68,*puVar4);
      if ((uVar5 & 1) != 0) {
        return 0x101;
      }
    }
    param_5 = param_5 + 1;
    if (param_6 == param_5) {
      return 1;
    }
    uVar5 = *param_3;
  } while( true );
}

