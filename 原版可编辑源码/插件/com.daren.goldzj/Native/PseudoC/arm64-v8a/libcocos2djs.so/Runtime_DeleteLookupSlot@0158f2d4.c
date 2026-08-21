
/* v8::internal::Runtime_DeleteLookupSlot(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_DeleteLookupSlot(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ushort uVar4;
  ulong *puVar5;
  ulong uVar6;
  Isolate *pIVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  
  if (TracingFlags::runtime_stats != 0) {
    uVar9 = FUN_0158f49c(param_1,param_2,param_3);
    return uVar9;
  }
  pIVar1 = param_3 + 0x95a0;
  puVar2 = *(ulong **)pIVar1;
  puVar3 = *(ulong **)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar6 = *param_2;
  if (((uVar6 & 1) == 0) ||
     (0x3f < *(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsString()");
  }
  uVar6 = *(ulong *)(param_3 + 0x2bc8);
  if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar5 = puVar2;
    if (puVar3 == puVar2) {
      puVar5 = (ulong *)HandleScope::Extend(param_3);
    }
    *(ulong **)pIVar1 = puVar5 + 1;
    *puVar5 = uVar6;
  }
  else {
    puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
  }
  puVar5 = (ulong *)Context::Lookup(puVar5,param_2,3,auStack_44,auStack_48,auStack_4c,auStack_50,0);
  if (puVar5 == (ulong *)0x0) {
    if (((*(ulong *)(param_3 + 0x2bd8) & 1) != 0) &&
       ((int)*(ulong *)(param_3 + 0x2bd8) == *(int *)(param_3 + 0xa8))) {
      pIVar7 = param_3 + 0xb8;
      goto LAB_0158f420;
    }
  }
  else {
    uVar6 = *puVar5;
    if (((uVar6 & 1) != 0) &&
       ((uVar8 = uVar6 & 0xffffffff00000000 | 7,
        *(ushort *)(uVar8 + *(uint *)(uVar6 - 1)) - 0x88 < 10 ||
        (*(short *)(uVar8 + *(uint *)(uVar6 - 1)) == 0x44)))) {
      pIVar7 = param_3 + 0xc0;
      goto LAB_0158f420;
    }
    uVar4 = JSReceiver::DeleteProperty(puVar5,param_2,0);
    if ((uVar4 & 0xff) != 0) {
      pIVar7 = param_3 + 0xb8;
      if (uVar4 < 0x100) {
        pIVar7 = param_3 + 0xc0;
      }
      goto LAB_0158f420;
    }
  }
  pIVar7 = param_3 + 0x180;
LAB_0158f420:
  uVar9 = *(undefined8 *)pIVar7;
  *(ulong **)pIVar1 = puVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(ulong **)(param_3 + 0x95a8) != puVar3) {
    *(ulong **)(param_3 + 0x95a8) = puVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar9;
}

