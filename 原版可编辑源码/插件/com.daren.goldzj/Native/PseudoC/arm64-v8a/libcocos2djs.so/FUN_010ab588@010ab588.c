
undefined8
FUN_010ab588(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong param_5,
            ulong param_6)

{
  bool bVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  Factory *this;
  ulong uVar5;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined8 uStack_cc;
  Factory *pFStack_c0;
  ulong *puStack_b8;
  undefined8 uStack_b0;
  ulong *puStack_a8;
  undefined8 uStack_a0;
  ulong *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  ulong uStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  
  FUN_010ac1f8();
  pcStack_68 = FUN_010ab594;
  if ((*param_4 & 1) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = (int)*param_4 == *(int *)(this + 0xa0);
  }
  if (param_6 <= param_5) {
    return 1;
  }
  uVar5 = *param_3;
  puStack_70 = &stack0xfffffffffffffff0;
  do {
    if (((uVar5 & 1) == 0) ||
       (puVar2 = param_3, *(ushort *)(((ulong)this | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9)) {
      puVar2 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver(this,param_3,param_5);
    }
    uStack_d8 = 3;
    uStack_cc = 0xc000000000;
    puStack_b8 = (ulong *)0x0;
    uStack_b0 = 0;
    uStack_a0 = 0;
    uStack_88 = 0xffffffffffffffff;
    pFStack_c0 = this;
    puVar3 = puStack_b8;
    puStack_a8 = param_3;
    puStack_98 = puVar2;
    uStack_90 = param_5;
    if (((0xfffffffe < param_5) &&
        (*(short *)((*puVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar2 - 1)) != 0x41b))
       && (puVar3 = (ulong *)v8::internal::Factory::SizeToString(this,param_5,true),
          (*(ushort *)((*puVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar3 - 1)) & 0xffe0)
          == 0x20)) {
      puVar3 = (ulong *)v8::internal::StringTable::LookupString(this);
    }
    puStack_b8 = puVar3;
    v8::internal::LookupIterator::Start<true>((LookupIterator *)&uStack_d8);
    if (iStack_d4 == 4) {
      if (bVar1) {
        return 0x101;
      }
    }
    else {
      puVar4 = (undefined8 *)v8::internal::Object::GetProperty((LookupIterator *)&uStack_d8,false);
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      uStack_78 = *param_4;
      uVar5 = v8::internal::Object::SameValueZero((Object *)&uStack_78,*puVar4);
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

