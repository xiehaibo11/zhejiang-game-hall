
/* v8::internal::Runtime_CollectTypeProfile(int, unsigned long*, v8::internal::Isolate*) */

undefined8 v8::internal::Runtime_CollectTypeProfile(int param_1,ulong *param_2,Isolate *param_3)

{
  ulong *puVar1;
  Isolate *pIVar2;
  long lVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong *local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  ulong local_58;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar7 = FUN_011d0590(param_1,param_2,param_3);
    return uVar7;
  }
  pIVar2 = param_3 + 0x95a0;
  lVar3 = *(long *)pIVar2;
  lVar4 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  if ((*param_2 & 1) == 0) {
    puVar8 = param_2 + -2;
    uVar6 = *puVar8;
    if (((uVar6 & 1) != 0) &&
       (*(short *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) == 0x9f)) {
      puVar1 = param_2 + -1;
      puVar5 = (ulong *)Object::TypeOf(param_3,puVar1);
      uVar6 = *puVar1;
      if ((uVar6 & 1) != 0) {
        if (*(ushort *)((uVar6 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar6 - 1)) < 0xa9) {
          if ((int)uVar6 == *(int *)(param_3 + 0xb0)) {
            uVar6 = *(ulong *)(param_3 + 0x878);
            if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              puVar5 = *(ulong **)pIVar2;
              if (puVar5 == *(ulong **)(param_3 + 0x95a8)) {
                puVar5 = (ulong *)HandleScope::Extend(param_3);
              }
              *(ulong **)pIVar2 = puVar5 + 1;
              *puVar5 = uVar6;
            }
            else {
              puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar6);
            }
          }
        }
        else {
          puVar5 = (ulong *)JSReceiver::GetConstructorName(puVar1);
        }
      }
      local_60 = FeedbackVector::GetTypeProfileSlot();
      uStack_68 = 0;
      local_70 = puVar8;
      if (puVar8 == (ulong *)0x0) {
        local_5c = 0;
      }
      else {
        local_58 = *puVar8;
        local_5c = FeedbackVector::GetKind((FeedbackVector *)&local_58,local_60);
      }
      FeedbackNexus::Collect((FeedbackNexus *)&local_70,puVar5,(int)*param_2 >> 1);
      uVar7 = *(undefined8 *)(param_3 + 0xa0);
      *(long *)pIVar2 = lVar3;
      *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
      if (*(long *)(param_3 + 0x95a8) != lVar4) {
        *(long *)(param_3 + 0x95a8) = lVar4;
        HandleScope::DeleteExtensions(param_3);
      }
      return uVar7;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[2].IsFeedbackVector()");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","args[0].IsSmi()");
}

