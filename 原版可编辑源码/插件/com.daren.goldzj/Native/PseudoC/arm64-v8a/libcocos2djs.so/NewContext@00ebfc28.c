
/* v8::NewContext(v8::Isolate*, v8::ExtensionConfiguration*, v8::MaybeLocal<v8::ObjectTemplate>,
   v8::MaybeLocal<v8::Value>, unsigned long, v8::DeserializeInternalFieldsCallback,
   v8::MicrotaskQueue*) */

ulong * __thiscall
v8::NewContext(v8 *this,undefined4 *param_1,ulong *param_2,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  ulong *puVar7;
  ObjectTemplate *this_00;
  ulong *puVar8;
  v8 *pvVar9;
  ulong *puVar10;
  v8 *pvVar11;
  v8 *pvVar12;
  ulong *puVar13;
  ulong uVar14;
  Logger *this_01;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  RuntimeCallStats *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  CallStatsScopedTracer aCStack_90 [8];
  long local_88;
  char *local_80;
  
  uVar5 = internal::Builtins::builtin((Builtins *)(this + 0x9e00),0x97);
  if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar5 - 1)) == 0x9a) {
    if (DAT_01d3eb80 == (byte *)0x0) {
      plVar6 = (long *)internal::tracing::TraceEventHelper::GetTracingController();
      DAT_01d3eb80 = (byte *)(**(code **)(*plVar6 + 0x10))(plVar6,&DAT_019c38f7);
    }
    local_88 = 0;
    if ((*DAT_01d3eb80 & 5) != 0) {
      internal::tracing::CallStatsScopedTracer::Initialize
                (aCStack_90,(Isolate *)this,DAT_01d3eb80,"V8.NewContext");
    }
    local_a0 = 0;
    uStack_b8 = 0;
    local_c0 = (RuntimeCallStats *)0x0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    if (internal::TracingFlags::runtime_stats != 0) {
      local_c0 = (RuntimeCallStats *)(*(long *)(this + 0x9520) + 0x58a0);
      internal::RuntimeCallStats::Enter(local_c0,(ulong)&local_c0 | 8,0x364);
    }
    this_01 = *(Logger **)(this + 0x9558);
    uVar5 = internal::Logger::is_logging(this_01);
    if ((uVar5 & 1) != 0) {
      internal::Logger::ApiEntryCall(this_01,"v8::Context::New");
    }
    uVar17 = *(undefined8 *)(this + 0x95a0);
    lVar16 = *(long *)(this + 0x95a8);
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
    local_d0[0] = 0;
    local_c8 = 0;
    uVar3 = *(undefined4 *)(this + 0x2c60);
    puVar2 = local_d0;
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_1;
    }
    *(undefined4 *)(this + 0x2c60) = 5;
    if (param_2 == (ulong *)0x0) {
      puVar10 = (ulong *)internal::Bootstrapper::CreateEnvironment
                                   (*(undefined8 *)(this + 0x9508),param_4,0,puVar2,param_5,param_6,
                                    param_7,param_8);
      *(undefined4 *)(this + 0x2c60) = uVar3;
    }
    else {
      puVar7 = (ulong *)FUN_00ea6c84(this,param_2);
      this_00 = (ObjectTemplate *)FUN_00ea4e0c(this,0,0);
      puVar8 = (ulong *)FUN_00ea6c84(this);
      pvVar9 = this + *(uint *)(*puVar8 + 0x23);
      if ((int)pvVar9 == *(int *)(this + 0xa0)) {
        pvVar9 = (v8 *)internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData(this,puVar8)
        ;
      }
      uVar5 = *param_2;
      *(int *)(pvVar9 + 3) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar14 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar14 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(pvVar9,pvVar9 + 3,uVar5);
          uVar14 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar14 & 0x18) != 0) &&
           ((*(byte *)(((ulong)pvVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          internal::Heap_GenerationalBarrierSlow(pvVar9,pvVar9 + 3,uVar5);
        }
      }
      ObjectTemplate::SetInternalFieldCount(this_00,*(uint *)(*param_2 + 0x1b) >> 2 & 0x1fffffff);
      uVar14 = *puVar7 & 0xffffffff00000000;
      uVar4 = *(uint *)(*puVar7 + 0x23);
      uVar15 = *(ulong *)(uVar14 + 0xa0);
      uVar5 = uVar15;
      if (uVar4 != (uint)uVar15) {
        uVar5 = (ulong)*(uint *)((uVar14 | uVar4) + 0x1f);
      }
      pvVar9 = this + 0xa0;
      if (((uVar5 & 1) == 0) || ((int)uVar5 != *(int *)pvVar9)) {
        if (uVar4 != (uint)uVar15) {
          uVar15 = uVar14 | *(uint *)((uVar14 | uVar4) + 0x1f);
        }
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          puVar10 = *(ulong **)(this + 0x95a0);
          if (puVar10 == *(ulong **)(this + 0x95a8)) {
            puVar10 = (ulong *)internal::HandleScope::Extend((Isolate *)this);
          }
          *(ulong **)(this + 0x95a0) = puVar10 + 1;
          *puVar10 = uVar15;
        }
        else {
          puVar10 = (ulong *)internal::CanonicalHandleScope::Lookup
                                       (*(CanonicalHandleScope **)(this + 0x95b8),uVar15);
        }
        pvVar11 = this + *(uint *)(*puVar8 + 0x23);
        if ((int)pvVar11 == *(int *)(this + 0xa0)) {
          pvVar11 = (v8 *)internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData
                                    (this,puVar8);
        }
        uVar5 = *puVar10;
        *(int *)(pvVar11 + 0x1f) = (int)uVar5;
        if ((uVar5 & 1) != 0) {
          uVar14 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar14 >> 0x12 & 1) != 0) {
            internal::Heap_MarkingBarrierSlow(pvVar11,pvVar11 + 0x1f,uVar5);
            uVar14 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar14 & 0x18) != 0) &&
             ((*(byte *)(((ulong)pvVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            internal::Heap_GenerationalBarrierSlow(pvVar11,pvVar11 + 0x1f,uVar5);
          }
        }
        uVar4 = *(int *)(*puVar8 + 0x2b) >> 1;
        uVar1 = uVar4 & 0x7ffffffd;
        if ((*(uint *)(*puVar7 + 0x2b) & 4) != 0) {
          uVar1 = uVar4 | 2;
        }
        *(int *)(*puVar8 + 0x2b) = uVar1 << 1;
        *(uint *)(*puVar7 + 0x2b) = *(uint *)(*puVar7 + 0x2b) & 0xfffffffa;
        uVar5 = *(ulong *)(this + 0xa0);
        pvVar11 = this + *(uint *)(*puVar7 + 0x23);
        if ((int)pvVar11 == (int)uVar5) {
          pvVar11 = (v8 *)internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData
                                    (this,puVar7);
          uVar5 = *(ulong *)(this + 0xa0);
        }
        *(int *)(pvVar11 + 0x1f) = (int)uVar5;
        if ((uVar5 & 1) != 0) {
          uVar14 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar14 >> 0x12 & 1) != 0) {
            internal::Heap_MarkingBarrierSlow(pvVar11,pvVar11 + 0x1f,uVar5);
            uVar14 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar14 & 0x18) != 0) &&
             ((*(byte *)(((ulong)pvVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            internal::Heap_GenerationalBarrierSlow(pvVar11,pvVar11 + 0x1f,uVar5);
          }
        }
      }
      uVar14 = *puVar7 & 0xffffffff00000000;
      uVar4 = *(uint *)(*puVar7 + 0x23);
      uVar15 = *(ulong *)(uVar14 + 0xa0);
      uVar5 = uVar15;
      if (uVar4 != (uint)uVar15) {
        uVar5 = (ulong)*(uint *)((uVar14 | uVar4) + 0xf);
      }
      if (((uVar5 & 1) == 0) || (pvVar11 = pvVar9, (int)uVar5 != *(int *)pvVar9)) {
        if (uVar4 != (uint)uVar15) {
          uVar15 = uVar14 | *(uint *)((uVar14 | uVar4) + 0xf);
        }
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          pvVar11 = *(v8 **)(this + 0x95a0);
          if (pvVar11 == *(v8 **)(this + 0x95a8)) {
            pvVar11 = (v8 *)internal::HandleScope::Extend((Isolate *)this);
          }
          *(v8 **)(this + 0x95a0) = pvVar11 + 8;
          *(ulong *)pvVar11 = uVar15;
        }
        else {
          pvVar11 = (v8 *)internal::CanonicalHandleScope::Lookup
                                    (*(CanonicalHandleScope **)(this + 0x95b8),uVar15);
        }
        pvVar12 = this + *(uint *)(*puVar7 + 0x23);
        if ((int)pvVar12 == *(int *)(this + 0xa0)) {
          pvVar12 = (v8 *)internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData
                                    (this,puVar7);
        }
        uVar5 = *(ulong *)(this + 0x418);
        *(int *)(pvVar12 + 0xf) = (int)uVar5;
        if ((uVar5 & 1) != 0) {
          uVar14 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar14 >> 0x12 & 1) != 0) {
            internal::Heap_MarkingBarrierSlow(pvVar12,pvVar12 + 0xf,uVar5);
            uVar14 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar14 & 0x18) != 0) &&
             ((*(byte *)(((ulong)pvVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            internal::Heap_GenerationalBarrierSlow(pvVar12,pvVar12 + 0xf,uVar5);
          }
        }
      }
      uVar14 = *puVar7 & 0xffffffff00000000;
      uVar4 = *(uint *)(*puVar7 + 0x23);
      uVar15 = *(ulong *)(uVar14 + 0xa0);
      uVar5 = uVar15;
      if (uVar4 != (uint)uVar15) {
        uVar5 = (ulong)*(uint *)((uVar14 | uVar4) + 0x13);
      }
      if (((uVar5 & 1) == 0) || ((int)uVar5 != *(int *)pvVar9)) {
        if (uVar4 != (uint)uVar15) {
          uVar15 = uVar14 | *(uint *)((uVar14 | uVar4) + 0x13);
        }
        if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
          pvVar9 = *(v8 **)(this + 0x95a0);
          if (pvVar9 == *(v8 **)(this + 0x95a8)) {
            pvVar9 = (v8 *)internal::HandleScope::Extend((Isolate *)this);
          }
          *(v8 **)(this + 0x95a0) = pvVar9 + 8;
          *(ulong *)pvVar9 = uVar15;
        }
        else {
          pvVar9 = (v8 *)internal::CanonicalHandleScope::Lookup
                                   (*(CanonicalHandleScope **)(this + 0x95b8),uVar15);
        }
        pvVar12 = this + *(uint *)(*puVar7 + 0x23);
        if ((int)pvVar12 == *(int *)(this + 0xa0)) {
          pvVar12 = (v8 *)internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData
                                    (this,puVar7);
        }
        uVar5 = *(ulong *)(this + 0x418);
        *(int *)(pvVar12 + 0x13) = (int)uVar5;
        if ((uVar5 & 1) != 0) {
          uVar14 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar14 >> 0x12 & 1) != 0) {
            internal::Heap_MarkingBarrierSlow(pvVar12,pvVar12 + 0x13,uVar5);
            uVar14 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar14 & 0x18) != 0) &&
             ((*(byte *)(((ulong)pvVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
            internal::Heap_GenerationalBarrierSlow(pvVar12,pvVar12 + 0x13,uVar5);
          }
        }
      }
      puVar10 = (ulong *)internal::Bootstrapper::CreateEnvironment
                                   (*(undefined8 *)(this + 0x9508),param_4,this_00,puVar2,param_5,
                                    param_6,param_7,param_8);
      uVar5 = *puVar8 & 0xffffffff00000000;
      uVar4 = *(uint *)(*puVar8 + 0x23);
      uVar14 = *(ulong *)(uVar5 + 0xa0);
      if (uVar4 != (uint)uVar14) {
        uVar14 = uVar5 | *(uint *)((uVar5 | uVar4) + 0x1f);
      }
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar13 = *(ulong **)(this + 0x95a0);
        if (puVar13 == *(ulong **)(this + 0x95a8)) {
          puVar13 = (ulong *)internal::HandleScope::Extend((Isolate *)this);
        }
        *(ulong **)(this + 0x95a0) = puVar13 + 1;
        *puVar13 = uVar14;
      }
      else {
        puVar13 = (ulong *)internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(this + 0x95b8),uVar14);
      }
      pvVar12 = this + *(uint *)(*puVar7 + 0x23);
      if ((int)pvVar12 == *(int *)(this + 0xa0)) {
        pvVar12 = (v8 *)internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData
                                  (this,puVar7);
      }
      uVar5 = *puVar13;
      *(int *)(pvVar12 + 0x1f) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar14 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar14 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(pvVar12,pvVar12 + 0x1f,uVar5);
          uVar14 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar14 & 0x18) != 0) &&
           ((*(byte *)(((ulong)pvVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          internal::Heap_GenerationalBarrierSlow(pvVar12,pvVar12 + 0x1f,uVar5);
        }
      }
      uVar4 = *(int *)(*puVar7 + 0x2b) >> 1;
      uVar1 = uVar4 & 0x7ffffffd;
      if ((*(uint *)(*puVar8 + 0x2b) & 4) != 0) {
        uVar1 = uVar4 | 2;
      }
      *(int *)(*puVar7 + 0x2b) = uVar1 << 1;
      pvVar12 = this + *(uint *)(*puVar7 + 0x23);
      if ((int)pvVar12 == *(int *)(this + 0xa0)) {
        pvVar12 = (v8 *)internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData
                                  (this,puVar7);
      }
      uVar5 = *(ulong *)pvVar11;
      *(int *)(pvVar12 + 0xf) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar14 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar14 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(pvVar12,pvVar12 + 0xf,uVar5);
          uVar14 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar14 & 0x18) != 0) &&
           ((*(byte *)(((ulong)pvVar12 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          internal::Heap_GenerationalBarrierSlow(pvVar12,pvVar12 + 0xf,uVar5);
        }
      }
      pvVar11 = this + *(uint *)(*puVar7 + 0x23);
      if ((int)pvVar11 == *(int *)(this + 0xa0)) {
        pvVar11 = (v8 *)internal::FunctionTemplateInfo::AllocateFunctionTemplateRareData
                                  (this,puVar7);
      }
      uVar5 = *(ulong *)pvVar9;
      *(int *)(pvVar11 + 0x13) = (int)uVar5;
      if ((uVar5 & 1) == 0) {
        *(undefined4 *)(this + 0x2c60) = uVar3;
      }
      else {
        uVar14 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar14 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(pvVar11,pvVar11 + 0x13,uVar5);
          uVar14 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar14 & 0x18) != 0) &&
           ((*(byte *)(((ulong)pvVar11 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          internal::Heap_GenerationalBarrierSlow(pvVar11,pvVar11 + 0x13,uVar5);
        }
        *(undefined4 *)(this + 0x2c60) = uVar3;
      }
    }
    if (puVar10 == (ulong *)0x0) {
      if (((*(ulong *)(this + 0x2bd8) & 1) == 0) ||
         ((int)*(ulong *)(this + 0x2bd8) != (int)*(undefined8 *)(this + 0xa8))) {
        puVar10 = (ulong *)0x0;
        *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
      }
      else {
        puVar10 = (ulong *)0x0;
      }
    }
    else {
      uVar5 = *puVar10;
      *(undefined8 *)(this + 0x95a0) = uVar17;
      *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
      if (*(long *)(this + 0x95a8) != lVar16) {
        *(long *)(this + 0x95a8) = lVar16;
        internal::HandleScope::DeleteExtensions((Isolate *)this);
      }
      if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
        puVar10 = *(ulong **)(this + 0x95a0);
        if (puVar10 == *(ulong **)(this + 0x95a8)) {
          puVar10 = (ulong *)internal::HandleScope::Extend((Isolate *)this);
        }
        *(ulong **)(this + 0x95a0) = puVar10 + 1;
        *puVar10 = uVar5;
      }
      else {
        puVar10 = (ulong *)internal::CanonicalHandleScope::Lookup
                                     (*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
      }
      uVar17 = *(undefined8 *)(this + 0x95a0);
      lVar16 = *(long *)(this + 0x95a8);
      *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + 1;
    }
    *(undefined8 *)(this + 0x95a0) = uVar17;
    *(int *)(this + 0x95b0) = *(int *)(this + 0x95b0) + -1;
    if (*(long *)(this + 0x95a8) != lVar16) {
      *(long *)(this + 0x95a8) = lVar16;
      internal::HandleScope::DeleteExtensions((Isolate *)this);
    }
    if (local_c0 != (RuntimeCallStats *)0x0) {
      internal::RuntimeCallStats::Leave(local_c0,(RuntimeCallTimer *)((ulong)&local_c0 | 8));
    }
    if ((local_88 != 0) && (*local_80 != '\0')) {
      internal::tracing::CallStatsScopedTracer::AddEndTraceEvent(aCStack_90);
    }
    return puVar10;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","isolate->builtins()->builtin(i::Builtins::kIllegal).IsCode()");
}

