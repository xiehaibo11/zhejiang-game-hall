
void FUN_01712e9c(undefined1 *param_1,ulong *param_2,ulong *param_3)

{
  short sVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  Isolate *pIVar6;
  ulong uVar7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  int local_a4;
  undefined8 local_9c;
  ulong local_90;
  ulong *local_88;
  undefined8 uStack_80;
  ulong *local_78;
  ulong *local_70;
  ulong *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  if ((char)param_2[3] != '\x01') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","storage_.is_populated_");
  }
  uVar7 = *param_2;
  local_b8 = **(undefined8 **)param_2[4];
  uVar2 = v8::internal::Context::global_object((Context *)&local_b8);
  pIVar6 = (Isolate *)*param_2;
  if (*(CanonicalHandleScope **)(pIVar6 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar3 = *(ulong **)(pIVar6 + 0x95a0);
    if (puVar3 == *(ulong **)(pIVar6 + 0x95a8)) {
      puVar3 = (ulong *)v8::internal::HandleScope::Extend(pIVar6);
    }
    *(ulong **)(pIVar6 + 0x95a0) = puVar3 + 1;
    *puVar3 = uVar2;
    uVar2 = *puVar3;
    if ((uVar2 & 1) != 0) goto LAB_01712f54;
LAB_01712f6c:
    local_68 = (ulong *)v8::internal::LookupIterator::GetRootForNonJSReceiver
                                  (uVar7,puVar3,0xffffffffffffffff);
  }
  else {
    puVar3 = (ulong *)v8::internal::CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(pIVar6 + 0x95b8),uVar2);
    uVar2 = *puVar3;
    if ((uVar2 & 1) == 0) goto LAB_01712f6c;
LAB_01712f54:
    local_68 = puVar3;
    if (*(ushort *)((uVar7 | 7) + (ulong)*(uint *)(uVar2 - 1)) < 0xa9) goto LAB_01712f6c;
  }
  if (*(short *)((uVar7 | 7) + (ulong)*(uint *)(*param_3 - 1)) == 0x40) {
    local_a8 = ~*(uint *)(*param_3 + 7) & 1;
  }
  else {
    local_a8 = 1;
  }
  local_9c = 0xc000000000;
  local_90 = uVar7;
  if ((*(ushort *)((*param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*param_3 - 1)) & 0xffe0)
      == 0x20) {
    param_3 = (ulong *)v8::internal::StringTable::LookupString(uVar7,param_3);
  }
  uStack_80 = 0;
  local_70 = (ulong *)0x0;
  local_58 = 0xffffffffffffffff;
  uStack_60 = 0xffffffffffffffff;
  local_88 = param_3;
  local_78 = puVar3;
  v8::internal::LookupIterator::Start<false>((LookupIterator *)&local_a8);
  v8::internal::LookupIterator::TryLookupCachedProperty((LookupIterator *)&local_a8);
  if ((local_a4 == 6) &&
     (*(short *)((*local_70 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*local_70 - 1)) == 0xaa)) {
    uVar4 = v8::internal::LookupIterator::GetPropertyCell((LookupIterator *)&local_a8);
    v8::internal::compiler::ObjectRef::ObjectRef((ObjectRef *)&local_b8,param_2,uVar4,0);
    puVar5 = (undefined8 *)v8::internal::compiler::ObjectRef::data((ObjectRef *)&local_b8);
    if (*(int *)(puVar5 + 1) == 2) {
      uVar2 = *(ulong *)*puVar5;
      if ((uVar2 & 1) == 0) goto LAB_017130f4;
      sVar1 = *(short *)((uVar2 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar2 - 1));
    }
    else {
      if (*(int *)(puVar5 + 1) == 0) goto LAB_017130f4;
      sVar1 = *(short *)(puVar5[2] + 0x18);
    }
    if (sVar1 != 0xa5) {
LAB_017130f4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsPropertyCell()");
    }
    *param_1 = 1;
    *(undefined8 *)(param_1 + 0x10) = uStack_b0;
    *(undefined8 *)(param_1 + 8) = local_b8;
  }
  else {
    *param_1 = 0;
    param_1[8] = 0;
  }
  return;
}

