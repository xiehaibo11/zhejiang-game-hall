
int FUN_00ee6e98(UnoptimizedCompilationJob *param_1,ulong *param_2,Isolate *param_3)

{
  undefined4 *puVar1;
  Mutex *this;
  UnoptimizedCompilationInfo *this_00;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *puVar15;
  long *plVar16;
  FunctionLiteral *this_01;
  long lVar17;
  double dVar18;
  double dVar19;
  ulong local_88 [2];
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  lVar17 = *(long *)(param_1 + 0x20);
  this_00 = *(UnoptimizedCompilationInfo **)(param_1 + 0x28);
  this_01 = *(FunctionLiteral **)(this_00 + 0x10);
  uVar13 = *(uint *)(*param_2 + 0x1b);
  *(uint *)(*param_2 + 0x1b) =
       uVar13 & 0xfffff000 | uVar13 & 0x7ff | (*(uint *)(this_01 + 4) >> 0xb & 1) << 0xb;
  local_88[0] = *param_2;
  if ((*(uint *)(local_88[0] + 0x1b) >> 10 & 1) == 0) {
    *(uint *)(local_88[0] + 0x1b) =
         *(uint *)(local_88[0] + 0x1b) & 0xc0000000 |
         *(uint *)(local_88[0] + 0x1b) & 0x1fffffff | (*(uint *)(this_01 + 4) >> 0x16 & 1) << 0x1d;
    local_88[0] = *param_2;
  }
  v8::internal::SharedFunctionInfo::UpdateAndFinalizeExpectedNofPropertiesFromEstimate
            ((SharedFunctionInfo *)local_88,this_01);
  if ((*(uint *)(this_01 + 4) >> 0xc & 0xff) != 0) {
    local_88[0] = *param_2;
    v8::internal::SharedFunctionInfo::DisableOptimization
              ((SharedFunctionInfo *)local_88,*(uint *)(this_01 + 4) >> 0xc);
  }
  uVar14 = *param_2;
  uVar7 = v8::internal::FunctionLiteral::SafeToSkipArgumentsAdaptor(this_01);
  uVar13 = 0x40000000;
  if ((uVar7 & 1) == 0) {
    uVar13 = 0;
  }
  *(uint *)(uVar14 + 0x1b) = *(uint *)(uVar14 + 0x1b) & 0xbfffffff | uVar13;
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  PerIsolateAssertScope
            ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *)local_88,param_3)
  ;
  lVar8 = v8::base::TimeTicks::HighResolutionNow();
  iVar3 = (**(code **)(*(long *)param_1 + 0x18))(param_1,param_2,param_3);
  uVar4 = 3;
  if (iVar3 != 0) {
    uVar4 = 4;
  }
  *(undefined4 *)(param_1 + 8) = uVar4;
  lVar9 = v8::base::TimeTicks::HighResolutionNow();
  *(long *)(param_1 + 0x38) = (lVar9 - lVar8) + *(long *)(param_1 + 0x38);
  v8::internal::PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false>::
  ~PerIsolateAssertScope
            ((PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,false> *)local_88);
  if (iVar3 == 0) {
    lVar8 = v8::internal::UnoptimizedCompilationInfo::scope(this_00);
    local_88[0] = *param_2;
    v8::internal::SharedFunctionInfo::set_scope_info
              ((SharedFunctionInfo *)local_88,**(undefined8 **)(lVar8 + 0x68),4);
    if (*(long *)(this_00 + 0x28) == 0) {
      uVar14 = *param_2;
      uVar7 = **(ulong **)(this_00 + 0x30);
      puVar1 = (undefined4 *)(uVar14 + 3);
      *puVar1 = (int)uVar7;
      if ((uVar7 & 1) != 0) {
        uVar12 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
        if (((uint)uVar12 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar14,puVar1,uVar7);
          uVar12 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0))
        {
          v8::internal::Heap_GenerationalBarrierSlow(uVar14,puVar1,uVar7);
        }
      }
      uVar7 = *param_2;
      uVar14 = *(ulong *)(param_3 + 0x400);
      *(int *)(uVar7 + 0xb) = (int)uVar14;
    }
    else {
      uVar7 = v8::internal::Scope::IsAsmModule(*(Scope **)(*(long *)(this_00 + 0x10) + 0x28));
      if ((uVar7 & 1) != 0) {
        *(uint *)(*param_2 + 0x1b) = *(uint *)(*param_2 + 0x1b) | 0x4000;
      }
      puVar15 = *(ulong **)(this_00 + 0x28);
      if (v8::internal::FLAG_interpreted_frames_native_stack == '\0') {
        uVar14 = *param_2;
        uVar7 = *puVar15;
        puVar1 = (undefined4 *)(uVar14 + 3);
        *puVar1 = (int)uVar7;
        if ((uVar7 & 1) != 0) {
          uVar12 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar12 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar14,puVar1,uVar7);
            uVar12 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar14,puVar1,uVar7);
          }
        }
      }
      else {
        puVar10 = (ulong *)v8::internal::Factory::CopyCode((Factory *)param_3,param_3 + 0xfb8);
        puVar11 = (ulong *)v8::internal::Factory::NewStruct((Factory *)param_3,0x61,1);
        uVar14 = *puVar11;
        uVar7 = *puVar15;
        *(int *)(uVar14 + 3) = (int)uVar7;
        if ((uVar7 & 1) != 0) {
          uVar12 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar12 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar14,uVar14 + 3,uVar7);
            uVar12 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar14,uVar14 + 3,uVar7);
          }
        }
        uVar14 = *puVar11;
        uVar7 = *puVar10;
        *(int *)(uVar14 + 7) = (int)uVar7;
        if ((uVar7 & 1) != 0) {
          uVar12 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar12 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar14,uVar14 + 7,uVar7);
            uVar12 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar14,uVar14 + 7,uVar7);
          }
        }
        uVar14 = *param_2;
        uVar7 = *puVar11;
        puVar1 = (undefined4 *)(uVar14 + 3);
        *puVar1 = (int)uVar7;
        if ((uVar7 & 1) != 0) {
          uVar12 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
          if (((uint)uVar12 >> 0x12 & 1) != 0) {
            v8::internal::Heap_MarkingBarrierSlow(uVar14,puVar1,uVar7);
            uVar12 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
          }
          if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar14 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
             ) {
            v8::internal::Heap_GenerationalBarrierSlow(uVar14,puVar1,uVar7);
          }
        }
        local_88[0] = *param_2;
        puVar15 = *(ulong **)(lVar17 + 0x50);
        uVar4 = v8::internal::SharedFunctionInfo::StartPosition((SharedFunctionInfo *)local_88);
        iVar5 = v8::internal::Script::GetLineNumber(puVar15,uVar4);
        local_88[0] = *param_2;
        uVar4 = v8::internal::SharedFunctionInfo::StartPosition((SharedFunctionInfo *)local_88);
        iVar6 = v8::internal::Script::GetColumnNumber(puVar15,uVar4);
        uVar13 = *(uint *)(*puVar15 + 7);
        if (((uVar13 & 1) == 0) ||
           (uVar7 = *puVar15 & 0xffffffff00000000, uVar14 = uVar7 | uVar13,
           0x3f < *(ushort *)((uVar7 | 7) + (ulong)*(uint *)(uVar14 - 1)))) {
          uVar14 = *(ulong *)(param_3 + 200);
        }
        uVar7 = *puVar10;
        uVar12 = *param_2;
        lVar8 = *(long *)(param_3 + 0xb6d8);
        this = (Mutex *)(lVar8 + 0x28);
        v8::base::Mutex::Lock(this);
        plVar16 = *(long **)(lVar8 + 0x10);
        if (plVar16 != (long *)0x0) {
          do {
            (**(code **)(*(long *)plVar16[2] + 0x28))
                      ((long *)plVar16[2],0xc,uVar7,uVar12,uVar14,iVar5 + 1,iVar6 + 1);
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        v8::base::Mutex::Unlock(this);
      }
      puVar15 = (ulong *)v8::internal::FeedbackMetadata::New
                                   (param_3,(FeedbackVectorSpec *)(this_00 + 0x38));
      uVar7 = *param_2;
      uVar14 = *puVar15;
      *(int *)(uVar7 + 0xb) = (int)uVar14;
    }
    if ((uVar14 & 1) != 0) {
      uVar12 = *(ulong *)((uVar14 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar12 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xb,uVar14);
        uVar12 = *(ulong *)(uVar14 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar12 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xb,uVar14);
      }
    }
    if (*(long *)(this_00 + 0x20) != 0) {
      local_88[0] = *param_2;
      uVar7 = v8::internal::SharedFunctionInfo::HasCoverageInfo((SharedFunctionInfo *)local_88);
      if ((uVar7 & 1) == 0) {
        v8::internal::Debug::InstallCoverageInfo
                  (*(Debug **)(param_3 + 0xb6c8),param_2,*(undefined8 *)(this_00 + 0x20));
      }
    }
    uVar7 = v8::internal::Isolate::NeedsDetailedOptimizedCodeLineInfo(param_3);
    if ((uVar7 & 1) != 0) {
      v8::internal::SharedFunctionInfo::EnsureSourcePositionsAvailable(param_3,param_2);
    }
    uVar13 = *(uint *)(lVar17 + 8);
    if ((uVar13 & 1) == 0) {
      uVar4 = 0xb;
      if ((uVar13 & 0x100) != 0) {
        uVar4 = 0xf;
      }
    }
    else {
      uVar4 = 0x11;
      if (((byte)*this_00 & 1) != 0) {
        uVar4 = 10;
      }
    }
    lVar17 = *(long *)(*(long *)(param_1 + 0x28) + 0x28);
    if (lVar17 == 0) {
      lVar17 = v8::internal::Builtins::builtin_handle((Builtins *)(param_3 + 0x9e00),0x44);
    }
    dVar18 = (double)v8::base::TimeDelta::InMillisecondsF((TimeDelta *)(param_1 + 0x30));
    dVar19 = (double)v8::base::TimeDelta::InMillisecondsF((TimeDelta *)(param_1 + 0x38));
    FUN_00edf34c(dVar18 + dVar19,uVar4,param_2,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x50),
                 lVar17,0,param_3);
    v8::internal::UnoptimizedCompilationJob::RecordCompilationStats(param_1,param_3);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

