
/* v8::internal::OptimizedFrame::Summarize(std::__ndk1::vector<v8::internal::FrameSummary,
   std::__ndk1::allocator<v8::internal::FrameSummary> >*) const */

void __thiscall v8::internal::OptimizedFrame::Summarize(OptimizedFrame *this,vector *param_1)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  uint *puVar9;
  Isolate *pIVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong *puVar14;
  Isolate *pIVar15;
  uint *puVar16;
  ulong local_178;
  ulong uStack_170;
  ulong local_168;
  ulong uStack_160;
  ulong local_158;
  ulong uStack_150;
  ulong local_148;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong local_110;
  int local_104;
  long *local_100;
  TranslatedValue *local_f8;
  int local_f0;
  uint *local_e8;
  uint *local_e0;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  lVar3 = InnerPointerToCodeCache::GetCacheEntry
                    (*(InnerPointerToCodeCache **)(*(long *)(this + 0x10) + 0x95d8),
                     **(ulong **)(this + 0x28));
  if ((*(uint *)(*(long *)(lVar3 + 8) + 0x17) & 0x3e) == 6) {
    JavaScriptFrame::Summarize((JavaScriptFrame *)this,param_1);
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  else {
    local_104 = -1;
    iVar2 = GetDeoptimizationData(this,&local_104);
    if (local_104 == -1) {
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","data.is_null()");
      }
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Missing deoptimization information for OptimizedFrame::Summarize.");
    }
    TranslatedState::TranslatedState((TranslatedState *)&local_e8,(JavaScriptFrame *)this);
    TranslatedState::Prepare((TranslatedState *)&local_e8,*(ulong *)(this + 0x20));
    bVar1 = (**(code **)(*(long *)this + 0x80))(this);
    puVar9 = local_e0;
    puVar16 = local_e8;
    if (local_e8 != local_e0) {
      do {
        uVar13 = *puVar16;
        if ((uVar13 < 6) && ((1 << (ulong)(uVar13 & 0x1f) & 0x31U) != 0)) {
          puVar14 = *(ulong **)(puVar16 + 4);
          local_100 = (long *)(*(long *)(puVar16 + 0xc) +
                              (*(ulong *)(puVar16 + 0x12) >> 4 & 0xffffffffffffff8));
          if (*(long *)(puVar16 + 0xe) == *(long *)(puVar16 + 0xc)) {
            local_f8 = (TranslatedValue *)0x0;
          }
          else {
            local_f8 = (TranslatedValue *)(*local_100 + (*(ulong *)(puVar16 + 0x12) & 0x7f) * 0x20);
          }
          local_f0 = 0;
          puVar4 = (undefined8 *)TranslatedValue::GetValue(local_f8);
          local_f0 = local_f0 + 1;
          TranslatedFrame::AdvanceIterator((__deque_iterator *)&local_100);
          puVar5 = (undefined8 *)TranslatedValue::GetValue(local_f8);
          local_f0 = local_f0 + 1;
          TranslatedFrame::AdvanceIterator((__deque_iterator *)&local_100);
          if ((*puVar16 & 0xfffffffe) == 4) {
            lVar3 = *(long *)(this + 0x10);
            iVar2 = Builtins::GetBuiltinFromBailoutId(puVar16[1]);
            uVar6 = Builtins::builtin((Builtins *)(lVar3 + 0x9e00),iVar2);
            pIVar10 = *(Isolate **)(this + 0x10);
            if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              pIVar15 = pIVar10 + 0x95a0;
              puVar14 = *(ulong **)pIVar15;
              if (puVar14 == *(ulong **)(pIVar10 + 0x95a8)) {
                puVar14 = (ulong *)HandleScope::Extend(pIVar10);
              }
              uVar13 = 0;
LAB_00f47598:
              *(ulong **)pIVar15 = puVar14 + 1;
              *puVar14 = uVar6;
            }
            else {
              puVar14 = (ulong *)CanonicalHandleScope::Lookup
                                           (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar6);
              uVar13 = 0;
            }
          }
          else {
            local_140 = *puVar14;
            uVar13 = puVar16[1];
            if ((((*(uint *)(local_140 + 3) & 1) == 0) ||
                (*(short *)((local_140 & 0xffffffff00000000 | 7) +
                           (ulong)*(uint *)((local_140 & 0xffffffff00000000 |
                                            (ulong)*(uint *)(local_140 + 3)) - 1)) != 0x86)) &&
               (((*(uint *)(local_140 + 3) & 1) == 0 ||
                (*(short *)((local_140 & 0xffffffff00000000 | 7) +
                           (ulong)*(uint *)((local_140 & 0xffffffff00000000 |
                                            (ulong)*(uint *)(local_140 + 3)) - 1)) != 0x61)))) {
              uVar6 = SharedFunctionInfo::GetCode((SharedFunctionInfo *)&local_140);
            }
            else {
              uVar6 = local_140 & 0xffffffff00000000;
              uVar12 = uVar6 | *(uint *)(local_140 + 0xf);
              uVar11 = uVar6 | 7;
              if ((*(short *)(uVar11 + *(uint *)(uVar12 - 1)) == 0x5b) &&
                 (*(short *)(uVar11 + *(uint *)((uVar6 | *(uint *)(uVar12 + 0x13)) - 1)) == 0x86)) {
                uVar6 = (ulong)*(uint *)(uVar12 + 0xf);
              }
              else if (((*(uint *)(local_140 + 3) & 1) == 0) ||
                      (*(short *)(uVar11 + *(uint *)((uVar6 | *(uint *)(local_140 + 3)) - 1)) !=
                       0x86)) {
                uVar6 = (ulong)*(uint *)((local_140 & 0xffffffff00000000 |
                                         (ulong)*(uint *)(local_140 + 3)) + 3);
              }
              else {
                uVar6 = (ulong)*(uint *)(local_140 + 3);
              }
              uVar6 = local_140 & 0xffffffff00000000 | uVar6;
            }
            pIVar10 = *(Isolate **)(this + 0x10);
            if (*(CanonicalHandleScope **)(pIVar10 + 0x95b8) == (CanonicalHandleScope *)0x0) {
              pIVar15 = pIVar10 + 0x95a0;
              puVar14 = *(ulong **)pIVar15;
              if (puVar14 == *(ulong **)(pIVar10 + 0x95a8)) {
                puVar14 = (ulong *)HandleScope::Extend(pIVar10);
              }
              goto LAB_00f47598;
            }
            puVar14 = (ulong *)CanonicalHandleScope::Lookup
                                         (*(CanonicalHandleScope **)(pIVar10 + 0x95b8),uVar6);
          }
          puVar7 = (undefined8 *)JavaScriptFrame::GetParameters((JavaScriptFrame *)this);
          FrameSummary::JavaScriptFrameSummary::JavaScriptFrameSummary
                    ((JavaScriptFrameSummary *)&local_178,*(undefined8 *)(this + 0x10),*puVar5,
                     *puVar4,*puVar14,uVar13,bVar1 & 1,*puVar7);
          local_110 = local_148;
          uStack_128 = uStack_160;
          local_130 = local_168;
          uStack_118 = uStack_150;
          uStack_120 = local_158;
          uStack_138 = uStack_170;
          local_140 = local_178;
          puVar14 = *(ulong **)(param_1 + 8);
          if (puVar14 < *(ulong **)(param_1 + 0x10)) {
            puVar14[6] = local_148;
            puVar14[3] = uStack_160;
            puVar14[2] = local_168;
            puVar14[5] = uStack_150;
            puVar14[4] = local_158;
            puVar14[1] = uStack_170;
            *puVar14 = local_178;
            *(long *)(param_1 + 8) = *(long *)(param_1 + 8) + 0x38;
          }
          else {
            std::__ndk1::
            vector<v8::internal::FrameSummary,std::__ndk1::allocator<v8::internal::FrameSummary>>::
            __push_back_slow_path<v8::internal::FrameSummary>
                      ((vector<v8::internal::FrameSummary,std::__ndk1::allocator<v8::internal::FrameSummary>>
                        *)param_1,(FrameSummary *)&local_140);
          }
          if (2 < (uint)uStack_138) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          bVar1 = 0;
          puVar9 = local_e0;
        }
        else {
          bVar1 = bVar1 | uVar13 == 2;
        }
        puVar16 = puVar16 + 0x16;
      } while (puVar16 != puVar9);
    }
    TranslatedState::~TranslatedState((TranslatedState *)&local_e8);
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  if (lVar8 != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

