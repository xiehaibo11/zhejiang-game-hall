
/* v8::internal::Deoptimizer::DebuggerInspectableFrame(v8::internal::JavaScriptFrame*, int,
   v8::internal::Isolate*) */

void * v8::internal::Deoptimizer::DebuggerInspectableFrame
                 (JavaScriptFrame *param_1,int param_2,Isolate *param_3)

{
  TranslatedFrame *pTVar1;
  Isolate *pIVar2;
  uint uVar3;
  long lVar4;
  TranslatedFrame *pTVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  void *pvVar10;
  ulong extraout_x1;
  undefined8 uVar11;
  undefined8 uVar12;
  int local_e4;
  TranslatedFrame *local_e0;
  TranslatedFrame *pTStack_d8;
  undefined8 uStack_d0;
  Isolate *local_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong *local_80;
  ulong local_78;
  undefined4 local_70;
  ulong local_68;
  int local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  iVar6 = (**(code **)(*(long *)param_1 + 8))();
  if (iVar6 != 4) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","frame->is_optimized()");
  }
  local_c0 = 0;
  pTStack_d8 = (TranslatedFrame *)0x0;
  local_e0 = (TranslatedFrame *)0x0;
  local_c8 = (Isolate *)0x0;
  uStack_d0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = (ulong *)0x0;
  local_70 = 0xffffffff;
  local_e4 = -1;
  uVar7 = OptimizedFrame::GetDeoptimizationData((OptimizedFrame *)param_1,&local_e4);
  local_68 = uVar7 & 0xffffffff00000000 | (ulong)*(uint *)(uVar7 + 7);
  local_60 = *(int *)(uVar7 + 7 + (long)(local_e4 * 0xc + 0x28)) >> 1;
  uVar11 = *(undefined8 *)(param_1 + 0x10);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(uint *)(uVar7 + 0xf);
  uVar8 = (**(code **)(*(long *)param_1 + 0x98))(param_1);
  TranslatedState::Init
            ((TranslatedState *)&local_e0,uVar11,uVar12,&local_68,
             uVar7 & 0xffffffff00000000 | (ulong)uVar3,0,0,
             *(undefined2 *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0xb)) + 0x15));
  pTVar5 = pTStack_d8;
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  uVar7 = local_78;
  for (pTVar1 = local_e0; local_78 = uVar7, pTVar1 != pTVar5; pTVar1 = pTVar1 + 0x58) {
    TranslatedFrame::Handlify(pTVar1);
    uVar7 = local_78;
  }
  if ((int)uVar7 != 0) {
    if (*(CanonicalHandleScope **)(local_c8 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      pIVar2 = local_c8 + 0x95a0;
      puVar9 = *(ulong **)pIVar2;
      if (puVar9 == *(ulong **)(local_c8 + 0x95a8)) {
        puVar9 = (ulong *)HandleScope::Extend(local_c8);
      }
      *(ulong **)pIVar2 = puVar9 + 1;
      *puVar9 = uVar7;
    }
    else {
      puVar9 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(local_c8 + 0x95b8),uVar7);
    }
    local_78 = 0;
    local_80 = puVar9;
  }
  local_c0 = uVar11;
  TranslatedState::UpdateFromPreviouslyMaterializedObjects((TranslatedState *)&local_e0);
  pTVar1 = local_e0;
  do {
    if (pTStack_d8 == pTVar1) {
LAB_00f1755c:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","frame_it != translated_values.end()");
    }
    if ((*(uint *)pTVar1 < 6) && ((1 << (ulong)(*(uint *)pTVar1 & 0x1f) & 0x31U) != 0)) {
      if (param_2 == 0) {
        if (pTStack_d8 != pTVar1) {
          if (*(uint *)pTVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","frame_it->kind() == TranslatedFrame::kInterpretedFunction"
                    );
          }
          pvVar10 = Malloced::operator_new((Malloced *)0x48,extraout_x1);
          DeoptimizedFrameInfo::DeoptimizedFrameInfo();
          TranslatedState::~TranslatedState((TranslatedState *)&local_e0);
          if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return pvVar10;
        }
        goto LAB_00f1755c;
      }
      param_2 = param_2 + -1;
    }
    pTVar1 = pTVar1 + 0x58;
  } while( true );
}

