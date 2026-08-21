
/* v8::Context::NewRemoteContext(v8::Isolate*, v8::Local<v8::ObjectTemplate>,
   v8::MaybeLocal<v8::Value>) */

ulong * v8::Context::NewRemoteContext(Isolate *param_1,ulong *param_2,undefined8 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  long *plVar8;
  ulong *puVar9;
  ObjectTemplate *this;
  ulong *puVar10;
  Isolate *pIVar11;
  Isolate *pIVar12;
  Isolate *pIVar13;
  ulong *puVar14;
  ulong uVar15;
  Logger *this_00;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x365);
  }
  this_00 = *(Logger **)(param_1 + 0x9558);
  uVar5 = internal::Logger::is_logging(this_00);
  if ((uVar5 & 1) != 0) {
    internal::Logger::ApiEntryCall(this_00,"v8::Context::NewRemoteContext");
  }
  uVar18 = *(undefined8 *)(param_1 + 0x95a0);
  lVar17 = *(long *)(param_1 + 0x95a8);
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  puVar6 = (ulong *)FUN_00ea6c84(param_1,param_2);
  uVar5 = *puVar6;
  if ((*(byte *)(uVar5 + 0x2b) >> 2 & 1) == 0) {
    lVar7 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar7 == 0) {
LAB_00ec114c:
      base::OS::PrintError
                ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Context::NewRemoteContext",
                 "Global template needs to have access checks enabled.");
                    /* WARNING: Subroutine does not return */
      base::OS::Abort();
    }
    if (*(code **)(lVar7 + 0xb738) == (code *)0x0) goto LAB_00ec114c;
    (**(code **)(lVar7 + 0xb738))
              ("v8::Context::NewRemoteContext",
               "Global template needs to have access checks enabled.");
    *(undefined1 *)(lVar7 + 0xb6b9) = 1;
    uVar5 = *puVar6;
  }
  uVar15 = uVar5 & 0xffffffff00000000;
  uVar16 = *(ulong *)(uVar15 + 0xa0);
  if (*(uint *)(uVar5 + 0x23) != (uint)uVar16) {
    uVar16 = uVar15 | *(uint *)((uVar15 | *(uint *)(uVar5 + 0x23)) + 0x1f);
  }
  if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(param_1 + 0x95a0);
    if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
      puVar6 = (ulong *)internal::HandleScope::Extend(param_1);
    }
    *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar16;
    iVar3 = *(int *)(uVar16 + 7);
  }
  else {
    plVar8 = (long *)internal::CanonicalHandleScope::Lookup
                               (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar16);
    iVar3 = *(int *)(*plVar8 + 7);
  }
  if (iVar3 == 0) {
    lVar7 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar7 != 0) {
      if (*(code **)(lVar7 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar7 + 0xb738))
                  ("v8::Context::NewRemoteContext",
                   "Global template needs to have access check handlers.");
        *(undefined1 *)(lVar7 + 0xb6b9) = 1;
        goto LAB_00ec08b8;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Context::NewRemoteContext",
               "Global template needs to have access check handlers.");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ec08b8:
  uVar2 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  if (param_2 == (ulong *)0x0) {
    puVar6 = (ulong *)internal::Bootstrapper::NewRemoteContext
                                (*(Bootstrapper **)(param_1 + 0x9508),param_3,0);
    *(undefined4 *)(param_1 + 0x2c60) = uVar2;
  }
  else {
    puVar9 = (ulong *)FUN_00ea6c84(param_1,param_2);
    this = (ObjectTemplate *)FUN_00ea4e0c(param_1,0,0);
    puVar10 = (ulong *)FUN_00ea6c84(param_1,this);
    pIVar11 = param_1 + *(uint *)(*puVar10 + 0x23);
    if ((int)pIVar11 == *(int *)(param_1 + 0xa0)) {
      pIVar11 = (Isolate *)
                internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(param_1,puVar10);
    }
    uVar5 = *param_2;
    *(int *)(pIVar11 + 3) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar15 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        internal::Heap_MarkingBarrierSlow(pIVar11,pIVar11 + 3,uVar5);
        uVar15 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar15 & 0x18) != 0) &&
         ((*(byte *)(((ulong)pIVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        internal::Heap_GenerationalBarrierSlow(pIVar11,pIVar11 + 3,uVar5);
      }
    }
    ObjectTemplate::SetInternalFieldCount(this,*(uint *)(*param_2 + 0x1b) >> 2 & 0x1fffffff);
    uVar15 = *puVar9 & 0xffffffff00000000;
    uVar4 = *(uint *)(*puVar9 + 0x23);
    uVar16 = *(ulong *)(uVar15 + 0xa0);
    uVar5 = uVar16;
    if (uVar4 != (uint)uVar16) {
      uVar5 = (ulong)*(uint *)((uVar15 | uVar4) + 0x1f);
    }
    pIVar11 = param_1 + 0xa0;
    if (((uVar5 & 1) == 0) || ((int)uVar5 != *(int *)pIVar11)) {
      if (uVar4 != (uint)uVar16) {
        uVar16 = uVar15 | *(uint *)((uVar15 | uVar4) + 0x1f);
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar6 = *(ulong **)(param_1 + 0x95a0);
        if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
          puVar6 = (ulong *)internal::HandleScope::Extend(param_1);
        }
        *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
        *puVar6 = uVar16;
      }
      else {
        puVar6 = (ulong *)internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar16);
      }
      pIVar12 = param_1 + *(uint *)(*puVar10 + 0x23);
      if ((int)pIVar12 == *(int *)(param_1 + 0xa0)) {
        pIVar12 = (Isolate *)
                  internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(param_1,puVar10);
      }
      uVar5 = *puVar6;
      *(int *)(pIVar12 + 0x1f) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar15 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar15 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(pIVar12,pIVar12 + 0x1f,uVar5);
          uVar15 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar15 & 0x18) != 0) &&
           ((*(byte *)(((ulong)pIVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          internal::Heap_GenerationalBarrierSlow(pIVar12,pIVar12 + 0x1f,uVar5);
        }
      }
      uVar4 = *(int *)(*puVar10 + 0x2b) >> 1;
      uVar1 = uVar4 & 0x7ffffffd;
      if ((*(uint *)(*puVar9 + 0x2b) & 4) != 0) {
        uVar1 = uVar4 | 2;
      }
      *(int *)(*puVar10 + 0x2b) = uVar1 << 1;
      *(uint *)(*puVar9 + 0x2b) = *(uint *)(*puVar9 + 0x2b) & 0xfffffffa;
      uVar5 = *(ulong *)(param_1 + 0xa0);
      pIVar12 = param_1 + *(uint *)(*puVar9 + 0x23);
      if ((int)pIVar12 == (int)uVar5) {
        pIVar12 = (Isolate *)
                  internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(param_1,puVar9);
        uVar5 = *(ulong *)(param_1 + 0xa0);
      }
      *(int *)(pIVar12 + 0x1f) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar15 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar15 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(pIVar12,pIVar12 + 0x1f,uVar5);
          uVar15 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar15 & 0x18) != 0) &&
           ((*(byte *)(((ulong)pIVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          internal::Heap_GenerationalBarrierSlow(pIVar12,pIVar12 + 0x1f,uVar5);
        }
      }
    }
    uVar15 = *puVar9 & 0xffffffff00000000;
    uVar4 = *(uint *)(*puVar9 + 0x23);
    uVar16 = *(ulong *)(uVar15 + 0xa0);
    uVar5 = uVar16;
    if (uVar4 != (uint)uVar16) {
      uVar5 = (ulong)*(uint *)((uVar15 | uVar4) + 0xf);
    }
    if (((uVar5 & 1) == 0) || (pIVar12 = pIVar11, (int)uVar5 != *(int *)pIVar11)) {
      if (uVar4 != (uint)uVar16) {
        uVar16 = uVar15 | *(uint *)((uVar15 | uVar4) + 0xf);
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pIVar12 = *(Isolate **)(param_1 + 0x95a0);
        if (pIVar12 == *(Isolate **)(param_1 + 0x95a8)) {
          pIVar12 = (Isolate *)internal::HandleScope::Extend(param_1);
        }
        *(Isolate **)(param_1 + 0x95a0) = pIVar12 + 8;
        *(ulong *)pIVar12 = uVar16;
      }
      else {
        pIVar12 = (Isolate *)
                  internal::CanonicalHandleScope::Lookup
                            (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar16);
      }
      pIVar13 = param_1 + *(uint *)(*puVar9 + 0x23);
      if ((int)pIVar13 == *(int *)(param_1 + 0xa0)) {
        pIVar13 = (Isolate *)
                  internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(param_1,puVar9);
      }
      uVar5 = *(ulong *)(param_1 + 0x418);
      *(int *)(pIVar13 + 0xf) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar15 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar15 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(pIVar13,pIVar13 + 0xf,uVar5);
          uVar15 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar15 & 0x18) != 0) &&
           ((*(byte *)(((ulong)pIVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          internal::Heap_GenerationalBarrierSlow(pIVar13,pIVar13 + 0xf,uVar5);
        }
      }
    }
    uVar15 = *puVar9 & 0xffffffff00000000;
    uVar4 = *(uint *)(*puVar9 + 0x23);
    uVar16 = *(ulong *)(uVar15 + 0xa0);
    uVar5 = uVar16;
    if (uVar4 != (uint)uVar16) {
      uVar5 = (ulong)*(uint *)((uVar15 | uVar4) + 0x13);
    }
    if (((uVar5 & 1) == 0) || ((int)uVar5 != *(int *)pIVar11)) {
      if (uVar4 != (uint)uVar16) {
        uVar16 = uVar15 | *(uint *)((uVar15 | uVar4) + 0x13);
      }
      if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
        pIVar11 = *(Isolate **)(param_1 + 0x95a0);
        if (pIVar11 == *(Isolate **)(param_1 + 0x95a8)) {
          pIVar11 = (Isolate *)internal::HandleScope::Extend(param_1);
        }
        *(Isolate **)(param_1 + 0x95a0) = pIVar11 + 8;
        *(ulong *)pIVar11 = uVar16;
      }
      else {
        pIVar11 = (Isolate *)
                  internal::CanonicalHandleScope::Lookup
                            (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar16);
      }
      pIVar13 = param_1 + *(uint *)(*puVar9 + 0x23);
      if ((int)pIVar13 == *(int *)(param_1 + 0xa0)) {
        pIVar13 = (Isolate *)
                  internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(param_1,puVar9);
      }
      uVar5 = *(ulong *)(param_1 + 0x418);
      *(int *)(pIVar13 + 0x13) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar15 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar15 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(pIVar13,pIVar13 + 0x13,uVar5);
          uVar15 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar15 & 0x18) != 0) &&
           ((*(byte *)(((ulong)pIVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          internal::Heap_GenerationalBarrierSlow(pIVar13,pIVar13 + 0x13,uVar5);
        }
      }
    }
    puVar6 = (ulong *)internal::Bootstrapper::NewRemoteContext
                                (*(Bootstrapper **)(param_1 + 0x9508),param_3,this);
    uVar5 = *puVar10 & 0xffffffff00000000;
    uVar4 = *(uint *)(*puVar10 + 0x23);
    uVar15 = *(ulong *)(uVar5 + 0xa0);
    if (uVar4 != (uint)uVar15) {
      uVar15 = uVar5 | *(uint *)((uVar5 | uVar4) + 0x1f);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar14 = *(ulong **)(param_1 + 0x95a0);
      if (puVar14 == *(ulong **)(param_1 + 0x95a8)) {
        puVar14 = (ulong *)internal::HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar14 + 1;
      *puVar14 = uVar15;
    }
    else {
      puVar14 = (ulong *)internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar15);
    }
    pIVar13 = param_1 + *(uint *)(*puVar9 + 0x23);
    if ((int)pIVar13 == *(int *)(param_1 + 0xa0)) {
      pIVar13 = (Isolate *)
                internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(param_1,puVar9);
    }
    uVar5 = *puVar14;
    *(int *)(pIVar13 + 0x1f) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar15 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        internal::Heap_MarkingBarrierSlow(pIVar13,pIVar13 + 0x1f,uVar5);
        uVar15 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar15 & 0x18) != 0) &&
         ((*(byte *)(((ulong)pIVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        internal::Heap_GenerationalBarrierSlow(pIVar13,pIVar13 + 0x1f,uVar5);
      }
    }
    uVar4 = *(int *)(*puVar9 + 0x2b) >> 1;
    uVar1 = uVar4 & 0x7ffffffd;
    if ((*(uint *)(*puVar10 + 0x2b) & 4) != 0) {
      uVar1 = uVar4 | 2;
    }
    *(int *)(*puVar9 + 0x2b) = uVar1 << 1;
    pIVar13 = param_1 + *(uint *)(*puVar9 + 0x23);
    if ((int)pIVar13 == *(int *)(param_1 + 0xa0)) {
      pIVar13 = (Isolate *)
                internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(param_1,puVar9);
    }
    uVar5 = *(ulong *)pIVar12;
    *(int *)(pIVar13 + 0xf) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar15 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        internal::Heap_MarkingBarrierSlow(pIVar13,pIVar13 + 0xf,uVar5);
        uVar15 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar15 & 0x18) != 0) &&
         ((*(byte *)(((ulong)pIVar13 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        internal::Heap_GenerationalBarrierSlow(pIVar13,pIVar13 + 0xf,uVar5);
      }
    }
    pIVar12 = param_1 + *(uint *)(*puVar9 + 0x23);
    if ((int)pIVar12 == *(int *)(param_1 + 0xa0)) {
      pIVar12 = (Isolate *)
                internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(param_1,puVar9);
    }
    uVar5 = *(ulong *)pIVar11;
    *(int *)(pIVar12 + 0x13) = (int)uVar5;
    if ((uVar5 & 1) != 0) {
      uVar15 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar15 >> 0x12 & 1) != 0) {
        internal::Heap_MarkingBarrierSlow(pIVar12,pIVar12 + 0x13,uVar5);
        uVar15 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar15 & 0x18) != 0) &&
         ((*(byte *)(((ulong)pIVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        internal::Heap_GenerationalBarrierSlow(pIVar12,pIVar12 + 0x13,uVar5);
      }
    }
    *(undefined4 *)(param_1 + 0x2c60) = uVar2;
  }
  if (puVar6 == (ulong *)0x0) {
    if (((*(ulong *)(param_1 + 0x2bd8) & 1) == 0) ||
       ((int)*(ulong *)(param_1 + 0x2bd8) != (int)*(undefined8 *)(param_1 + 0xa8))) {
      puVar6 = (ulong *)0x0;
      *(undefined8 *)(param_1 + 0x2bd8) = *(undefined8 *)(param_1 + 0xa8);
    }
    else {
      puVar6 = (ulong *)0x0;
    }
  }
  else {
    uVar5 = *puVar6;
    *(undefined8 *)(param_1 + 0x95a0) = uVar18;
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
    if (*(long *)(param_1 + 0x95a8) != lVar17) {
      *(long *)(param_1 + 0x95a8) = lVar17;
      internal::HandleScope::DeleteExtensions(param_1);
    }
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(param_1 + 0x95a0);
      if (puVar6 == *(ulong **)(param_1 + 0x95a8)) {
        puVar6 = (ulong *)internal::HandleScope::Extend(param_1);
      }
      *(ulong **)(param_1 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar5;
    }
    else {
      puVar6 = (ulong *)internal::CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar5);
    }
    uVar18 = *(undefined8 *)(param_1 + 0x95a0);
    lVar17 = *(long *)(param_1 + 0x95a8);
    *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + 1;
  }
  *(undefined8 *)(param_1 + 0x95a0) = uVar18;
  *(int *)(param_1 + 0x95b0) = *(int *)(param_1 + 0x95b0) + -1;
  if (*(long *)(param_1 + 0x95a8) != lVar17) {
    *(long *)(param_1 + 0x95a8) = lVar17;
    internal::HandleScope::DeleteExtensions(param_1);
  }
  if (local_90 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return puVar6;
}

