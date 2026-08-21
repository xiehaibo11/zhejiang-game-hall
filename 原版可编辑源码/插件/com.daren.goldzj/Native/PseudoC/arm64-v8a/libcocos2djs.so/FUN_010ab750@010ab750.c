
undefined1  [16]
FUN_010ab750(undefined8 param_1,Factory *param_2,ulong *param_3,undefined8 *param_4,ulong param_5,
            ulong param_6)

{
  ulong *puVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
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
  undefined8 local_68;
  
  if (param_5 < param_6) {
    uVar5 = *param_3;
    while( true ) {
      if (((uVar5 & 1) == 0) ||
         (puVar1 = param_3, *(ushort *)(((ulong)param_2 | 7) + (ulong)*(uint *)(uVar5 - 1)) < 0xa9))
      {
        puVar1 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                    (param_2,param_3,param_5);
      }
      local_c8 = 3;
      local_bc = 0xc000000000;
      local_a8 = (ulong *)0x0;
      uStack_a0 = 0;
      uStack_90 = 0;
      local_78 = 0xffffffffffffffff;
      local_b0 = param_2;
      puVar2 = local_a8;
      local_98 = param_3;
      local_88 = puVar1;
      uStack_80 = param_5;
      if (((0xfffffffe < param_5) &&
          (*(short *)((*puVar1 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar1 - 1)) != 0x41b))
         && (puVar2 = (ulong *)v8::internal::Factory::SizeToString(param_2,param_5,true),
            (*(ushort *)((*puVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar2 - 1)) &
            0xffe0) == 0x20)) {
        puVar2 = (ulong *)v8::internal::StringTable::LookupString(param_2);
      }
      local_a8 = puVar2;
      v8::internal::LookupIterator::Start<true>((LookupIterator *)&local_c8);
      if (local_c4 != 4) {
        puVar3 = (undefined8 *)v8::internal::Object::GetProperty((LookupIterator *)&local_c8,false);
        uVar4 = 0;
        if (puVar3 == (undefined8 *)0x0) goto LAB_010ab8cc;
        local_68 = *param_4;
        uVar5 = v8::internal::Object::StrictEquals((Object *)&local_68,*puVar3);
        if ((uVar5 & 1) != 0) goto LAB_010ab8c8;
      }
      param_5 = param_5 + 1;
      if (param_6 == param_5) break;
      uVar5 = *param_3;
    }
    param_5 = 0xffffffffffffffff;
LAB_010ab8c8:
    uVar4 = 1;
  }
  else {
    uVar4 = 1;
    param_5 = 0xffffffffffffffff;
  }
LAB_010ab8cc:
  auVar6._8_8_ = param_5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}

