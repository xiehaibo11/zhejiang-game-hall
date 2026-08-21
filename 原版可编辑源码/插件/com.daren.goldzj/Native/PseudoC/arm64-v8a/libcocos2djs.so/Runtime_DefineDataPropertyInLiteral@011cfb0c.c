
/* v8::internal::Runtime_DefineDataPropertyInLiteral(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_DefineDataPropertyInLiteral(int param_1,ulong *param_2,Isolate *param_3)

{
  Isolate *pIVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  uint uVar10;
  ulong *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 local_b4;
  ulong local_70;
  undefined8 local_68;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar7 = FUN_011cfec8(param_1,param_2,param_3);
    return uVar7;
  }
  pIVar1 = param_3 + 0x95a0;
  lVar2 = *(long *)pIVar1;
  lVar3 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  uVar7 = *param_2;
  if (((uVar7 & 1) == 0) ||
     (*(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)) < 0xaa)) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[0].IsJSObject()");
  }
  puVar8 = param_2 + -1;
  uVar7 = *puVar8;
  if (((uVar7 & 1) == 0) ||
     (0x40 < *(ushort *)((uVar7 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar7 - 1)))) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[1].IsName()");
  }
  uVar10 = (uint)param_2[-3];
  if ((param_2[-3] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[3].IsSmi()");
  }
  puVar6 = param_2 + -4;
  uVar7 = *puVar6;
  if ((uVar7 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[4].IsHeapObject()");
  }
  if ((param_2[-5] & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","args[5].IsSmi()");
  }
  puVar9 = param_2 + -2;
  if ((int)uVar7 != *(int *)((uVar7 & 0xffffffff00000000) + 0xa0)) {
    local_b8 = (int)param_2[-5] >> 1;
    uStack_c0 = 0;
    local_c8 = puVar6;
    if (puVar6 == (ulong *)0x0) {
      local_b4 = 0;
    }
    else {
      local_70 = *puVar6;
      local_b4 = FeedbackVector::GetKind((FeedbackVector *)&local_70);
    }
    iVar5 = FeedbackNexus::ic_state((FeedbackNexus *)&local_c8);
    if (iVar5 == 1) {
      if ((*(ushort *)((*puVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(*puVar8 - 1)) & 0xffe0)
          == 0x20) {
LAB_011cfc90:
        FeedbackNexus::ConfigureMegamorphic((FeedbackNexus *)&local_c8,1);
      }
      else {
        uVar7 = *param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 - 1);
        if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar6 = *(ulong **)pIVar1;
          if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
            puVar6 = (ulong *)HandleScope::Extend(param_3);
          }
          *(ulong **)pIVar1 = puVar6 + 1;
          *puVar6 = uVar7;
        }
        else {
          puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                      (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
        }
        local_70 = CONCAT44(local_70._4_4_,1);
        local_68 = 0;
        FeedbackNexus::ConfigureMonomorphic((FeedbackNexus *)&local_c8,puVar8,puVar6,&local_70);
      }
    }
    else {
      iVar5 = FeedbackNexus::ic_state((FeedbackNexus *)&local_c8);
      if ((iVar5 == 2) &&
         ((iVar5 = FeedbackNexus::GetFirstMap((FeedbackNexus *)&local_c8),
          *(int *)(*param_2 - 1) != iVar5 ||
          (iVar5 = FeedbackNexus::GetName((FeedbackNexus *)&local_c8), iVar5 != (int)*puVar8))))
      goto LAB_011cfc90;
    }
  }
  if ((uVar10 >> 2 & 1) != 0) {
    uVar7 = *puVar9 & 0xffffffff00000000 | (ulong)*(uint *)(*puVar9 - 1);
    if (*(CanonicalHandleScope **)(param_3 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)pIVar1;
      if (puVar6 == *(ulong **)(param_3 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(param_3);
      }
      *(ulong **)pIVar1 = puVar6 + 1;
      *puVar6 = uVar7;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_3 + 0x95b8),uVar7);
    }
    uVar7 = JSFunction::SetName(puVar9,puVar8,param_3 + 200);
    if ((uVar7 & 1) == 0) {
      uVar7 = *(ulong *)(param_3 + 0x180);
      goto LAB_011cfddc;
    }
    uVar7 = *puVar9;
    if ((3 < ((*(uint *)((uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 0xb)) + 0x1b) & 0x1f
              ) - 3 & 0xff)) && (*(int *)(uVar7 - 1) != (int)*puVar6)) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.",
               "!IsClassConstructor(function->shared().kind()) implies *function_map == function->map()"
              );
    }
  }
  LookupIterator::PropertyOrElement((LookupIterator *)&local_c8,param_3,param_2,puVar8,param_2,1);
  cVar4 = JSObject::DefineOwnPropertyIgnoreAttributes(&local_c8,puVar9,uVar10 & 2,0x100000001,1);
  if (cVar4 == '\0') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "JSObject::DefineOwnPropertyIgnoreAttributes(&it, value, attrs, Just(kDontThrow)) .IsJust()"
            );
  }
  uVar7 = *param_2;
LAB_011cfddc:
  *(long *)pIVar1 = lVar2;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar3) {
    *(long *)(param_3 + 0x95a8) = lVar3;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar7;
}

