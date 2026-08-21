
/* v8::internal::Runtime_GetInitializerFunction(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_GetInitializerFunction(int param_1,ulong *param_2,Isolate *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint local_98;
  int local_94;
  undefined8 local_8c;
  ulong local_80;
  Isolate *local_78;
  undefined8 uStack_70;
  ulong *local_68;
  undefined8 uStack_60;
  ulong *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar3 = FUN_0156e114(param_1,param_2,param_3);
    return uVar3;
  }
  uVar3 = *(undefined8 *)(param_3 + 0x95a0);
  lVar1 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar4 = *param_2;
  if ((uVar4 & 1) != 0) {
    local_80 = uVar4 & 0xffffffff00000000;
    if (0xa8 < *(ushort *)((local_80 | 7) + (ulong)*(uint *)(uVar4 - 1))) {
      uVar4 = *(ulong *)(param_3 + 0xb30);
      local_78 = param_3 + 0xb30;
      local_98 = 2;
      if (*(short *)((local_80 | 7) + (ulong)*(uint *)(uVar4 - 1)) == 0x40) {
        local_98 = (*(int *)(uVar4 + 7) << 1 ^ 0xffffffffU) & 2;
      }
      local_8c = 0xc000000000;
      if ((*(ushort *)((uVar4 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar4 - 1)) & 0xffe0) ==
          0x20) {
        local_78 = (Isolate *)StringTable::LookupString();
      }
      uStack_70 = 0;
      uStack_60 = 0;
      local_48 = 0xffffffffffffffff;
      uStack_50 = 0xffffffffffffffff;
      local_68 = param_2;
      local_58 = param_2;
      LookupIterator::Start<false>((LookupIterator *)&local_98);
      if (local_94 == 4) {
        puVar2 = (undefined8 *)(local_80 + 0xa0);
      }
      else {
        puVar2 = (undefined8 *)JSReceiver::GetDataProperty((LookupIterator *)&local_98);
      }
      uVar5 = *puVar2;
      *(undefined8 *)(param_3 + 0x95a0) = uVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar1) {
        *(long *)(param_3 + 0x95a8) = lVar1;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsJSReceiver()");
}

