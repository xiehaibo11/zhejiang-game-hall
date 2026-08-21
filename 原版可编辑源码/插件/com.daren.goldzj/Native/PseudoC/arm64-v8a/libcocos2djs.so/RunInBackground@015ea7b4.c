
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffe90 */
/* v8::internal::wasm::AsyncCompileJob::DecodeModule::RunInBackground(v8::internal::wasm::AsyncCompileJob*)
    */

void __thiscall
v8::internal::wasm::AsyncCompileJob::DecodeModule::RunInBackground
          (DecodeModule *this,AsyncCompileJob *param_1)

{
  __shared_weak_count *p_Var1;
  int iVar2;
  AsyncCompileJob AVar3;
  int iVar4;
  char cVar5;
  ulong uVar6;
  byte *pbVar7;
  WasmModule *pWVar8;
  bool bVar9;
  long *plVar10;
  undefined8 extraout_x0;
  DecodeModule *pDVar11;
  void *pvVar12;
  undefined8 extraout_x0_00;
  undefined8 extraout_x0_01;
  undefined8 extraout_x0_02;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  DecodeModule *pDVar13;
  WasmModule *pWVar14;
  WasmFeatures *pWVar15;
  FunctionBody *pFVar16;
  long lVar17;
  DecodeModule *pDVar18;
  undefined8 uVar19;
  long lVar20;
  DecodeModule *pDVar21;
  long lVar22;
  DecodeModule *pDVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  __shared_weak_count *p_Var27;
  char *unaff_x23;
  DecodeModule *unaff_x24;
  undefined4 uVar28;
  DecodeModule *__dest;
  DecodeModule *unaff_x26;
  DecodeModule *pDVar29;
  undefined1 uVar30;
  undefined1 auVar31 [16];
  DecodeModule *local_180;
  undefined4 local_178;
  undefined8 local_170;
  DecodeModule *local_168;
  DecodeModule *local_160;
  uint local_158 [2];
  byte **local_150;
  byte *local_148;
  char *local_140;
  DecodeModule *local_138;
  WasmModule *local_130;
  __shared_weak_count *p_Stack_128;
  undefined4 local_120 [2];
  ulong local_118;
  ulong uStack_110;
  DecodeModule *local_108;
  undefined4 local_100 [2];
  undefined8 local_f8;
  DecodeModule *local_f0;
  DecodeModule *local_e8;
  uint local_e0 [2];
  uint local_d8;
  undefined3 uStack_d4;
  undefined7 local_d0;
  undefined1 uStack_c9;
  uint uStack_c8;
  uint uStack_c4;
  undefined4 local_c0;
  DecodeModule *local_b8;
  DecodeModule *pDStack_b0;
  DecodeModule *local_a8;
  ulong local_98;
  uint local_90;
  DecodeModule *local_88;
  DecodeModule *pDStack_80;
  long local_78;
  
  uVar6 = tpidr_el0;
  local_78 = *(long *)(uVar6 + 0x28);
  uStack_110 = 0;
  local_108 = (DecodeModule *)0x0;
  local_118 = 0;
  local_130 = (WasmModule *)0x0;
  p_Stack_128 = (__shared_weak_count *)0x0;
  local_120[0] = 0;
  if (RunInBackground(v8::internal::wasm::AsyncCompileJob*)::trace_event_unique_atomic1786 ==
      (byte *)0x0) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    RunInBackground(v8::internal::wasm::AsyncCompileJob*)::trace_event_unique_atomic1786 =
         (byte *)(**(code **)(*plVar10 + 0x10))(plVar10,"disabled-by-default-v8.wasm");
  }
  pbVar7 = RunInBackground(v8::internal::wasm::AsyncCompileJob*)::trace_event_unique_atomic1786;
  local_150 = (byte **)0x0;
  if ((*RunInBackground(v8::internal::wasm::AsyncCompileJob*)::trace_event_unique_atomic1786 & 5) ==
      0) {
    p_Var27 = (__shared_weak_count *)0x0;
  }
  else {
    local_d0 = 0;
    uStack_c9 = 0;
    uStack_c8 = 0;
    uStack_c4 = 0;
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    unaff_x23 = "AsyncCompileJob::DecodeModule";
    unaff_x24 = (DecodeModule *)
                (**(code **)(*plVar10 + 0x18))
                          (plVar10,0x58,pbVar7,"AsyncCompileJob::DecodeModule",0,0,0,0,0,0,0,
                           &local_d0,0);
    plVar10 = (long *)CONCAT44(uStack_c4,uStack_c8);
    uStack_c8 = 0;
    uStack_c4 = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    plVar10 = (long *)CONCAT17(uStack_c9,local_d0);
    local_d0 = 0;
    uStack_c9 = 0;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 8))();
    }
    local_150 = &local_148;
    local_140 = "AsyncCompileJob::DecodeModule";
    p_Var27 = p_Stack_128;
    local_148 = pbVar7;
    local_138 = unaff_x24;
  }
  local_158[0] = *(uint *)(param_1 + 0x10);
  pWVar14 = (WasmModule *)0x0;
  pFVar16 = *(FunctionBody **)(this + 8);
  pWVar15 = (WasmFeatures *)0x0;
  pDVar13 = (DecodeModule *)(*(long *)(param_1 + 0x28) + *(long *)(param_1 + 0x30));
  auVar31 = DecodeWasmModule((wasm *)&local_d0,local_158);
  local_130 = (WasmModule *)CONCAT17(uStack_c9,local_d0);
  p_Stack_128 = (__shared_weak_count *)CONCAT44(uStack_c4,uStack_c8);
  local_d0 = 0;
  uStack_c9 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  if (p_Var27 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var27 + 8;
    do {
      lVar20 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar9) {
        *(long *)p_Var1 = lVar20 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*(long *)p_Var27 + 0x10))(p_Var27);
      auVar31 = std::__ndk1::__shared_weak_count::__release_weak(p_Var27);
    }
  }
  local_120[0] = local_c0;
  if ((local_118 & 1) != 0) {
    *local_108 = (DecodeModule)0x0;
    uStack_110 = 0;
    if ((local_118 & 1) != 0) {
      operator_delete(local_108);
      auVar31._8_8_ = extraout_x1;
      auVar31._0_8_ = extraout_x0;
    }
  }
  local_108 = local_a8;
  uStack_110 = (ulong)pDStack_b0;
  local_118 = (ulong)local_b8;
  pDStack_b0 = (DecodeModule *)0x0;
  local_a8 = (DecodeModule *)0x0;
  local_b8 = (DecodeModule *)0x0;
  p_Var27 = (__shared_weak_count *)CONCAT44(uStack_c4,uStack_c8);
  if (p_Var27 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Var27 + 8;
    do {
      lVar20 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar9) {
        *(long *)p_Var1 = lVar20 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*(long *)p_Var27 + 0x10))(p_Var27);
      auVar31 = std::__ndk1::__shared_weak_count::__release_weak(p_Var27);
    }
  }
  pWVar8 = local_130;
  if (FLAG_wasm_lazy_validation == '\0') {
    uVar24 = local_118 >> 1 & 0x7f;
    if ((local_118 & 1) != 0) {
      uVar24 = uStack_110;
    }
    if ((uVar24 == 0) &&
       ((AVar3 = param_1[0x14], AVar3 != (AsyncCompileJob)0x0 ||
        (((byte)local_158[0] >> 4 & 1) != 0)))) {
      iVar4 = *(int *)(local_130 + 0x3c);
      lVar20 = (long)iVar4;
      iVar2 = *(int *)(local_130 + 0x44);
      if (iVar4 < iVar2 + iVar4) {
        lVar17 = *(long *)(*(long *)param_1 + 0xc770);
LAB_015eabe0:
        pDVar11 = auVar31._0_8_;
        __dest = (DecodeModule *)&local_d8;
        pDVar18 = *(DecodeModule **)(pWVar8 + 0x88);
        pDVar21 = pDVar18 + lVar20 * 0x20 + 0x10;
        pDVar23 = *(DecodeModule **)(param_1 + 0x28);
        if (AVar3 != (AsyncCompileJob)0x0) {
switchD_015ead60_caseD_15eac00:
          local_e0[0] = local_158[0];
          local_98 = *(ulong *)(pDVar18 + lVar20 * 0x20);
          local_90 = *(uint *)pDVar21;
          local_88 = pDVar23 + *(uint *)pDVar21;
          pDStack_80 = pDVar23 + (*(int *)(pDVar18 + lVar20 * 0x20 + 0x14) + *(uint *)pDVar21);
          local_d8 = 0;
          uStack_d4 = 0;
          pDVar11 = (DecodeModule *)(*(long *)(this + 8) + 0x1120);
          if (*(WasmFeatures *)(pWVar8 + 0x178) != (WasmFeatures)0x0) {
            pDVar11 = (DecodeModule *)(*(long *)(this + 8) + 0x10f0);
          }
switchD_015ead60_caseD_15eac50:
          auVar31._8_8_ = &local_f8;
          auVar31._0_8_ = pDVar11;
          pDVar13 = (DecodeModule *)0x0;
          local_e8 = (DecodeModule *)0x0;
switchD_015ead60_caseD_15eac5c:
          local_f0 = auVar31._0_8_;
          local_f8 = 0;
          TimedHistogram::Start((TimedHistogram *)local_f0,auVar31._8_8_,(Isolate *)pDVar13);
          goto switchD_015ead60_caseD_15eac64;
        }
        if ((local_158[0] >> 4 & 1) != 0) {
switchD_015ead60_caseD_15ead18:
          uVar24 = *(ulong *)(pWVar8 + 0x130);
switchD_015ead60_caseD_15ead1c:
          if (uVar24 != 0) {
            uVar25 = (ulong)(uint)((int)lVar20 - *(int *)(pWVar8 + 0x3c));
            uVar26 = (*(long *)(pWVar8 + 0x138) - uVar24) * -0x5555555555555555;
            bVar9 = uVar25 <= uVar26;
            if (bVar9 && uVar26 - uVar25 != 0) {
              uVar24 = (ulong)*(byte *)(uVar24 + uVar25 * 3);
switchD_015ead60_caseD_15ead4c:
switchD_015ead60_caseD_15ead54:
              lVar22 = 0x15eabd0;
switchD_015ead60_caseD_15ead58:
              goto switchD_015ead60_caseD_15ead5c;
            }
          }
        }
        goto switchD_015ead60_caseD_15eabd0;
      }
    }
  }
LAB_015eaa10:
  if ((local_150 != (byte **)0x0) && (*local_148 != 0)) {
    plVar10 = (long *)tracing::TraceEventHelper::GetTracingController();
    (**(code **)(*plVar10 + 0x28))(plVar10,local_148,local_140,local_138);
  }
  p_Var27 = p_Stack_128;
  pWVar14 = local_130;
  uVar24 = local_118 >> 1 & 0x7f;
  if ((local_118 & 1) != 0) {
    uVar24 = uStack_110;
  }
  if (uVar24 == 0) {
    local_130 = (WasmModule *)0x0;
    p_Stack_128 = (__shared_weak_count *)0x0;
    uStack_c8 = (uint)p_Var27;
    uStack_c4 = (uint)((ulong)p_Var27 >> 0x20);
    local_d0 = SUB87(pWVar14,0);
    uStack_c9 = (undefined1)((ulong)pWVar14 >> 0x38);
    local_98 = WasmCodeManager::EstimateNativeModuleCodeSize(pWVar14,false);
    local_150 = (byte **)CONCAT71(local_150._1_7_,1);
    DoSync<v8::internal::wasm::AsyncCompileJob::PrepareAndStartCompile,(v8::internal::wasm::AsyncCompileJob::UseExistingForegroundTask)0,std::__ndk1::shared_ptr<v8::internal::wasm::WasmModule>,bool,unsigned_long&>
              (param_1,(shared_ptr *)&local_d0,(bool *)&local_150,&local_98);
    p_Var27 = (__shared_weak_count *)CONCAT44(uStack_c4,uStack_c8);
    if (p_Var27 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var27 + 8;
      do {
        lVar20 = *(long *)p_Var1;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar9) {
          *(long *)p_Var1 = lVar20 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar20 == 0) {
        (**(code **)(*(long *)p_Var27 + 0x10))(p_Var27);
        std::__ndk1::__shared_weak_count::__release_weak(p_Var27);
      }
    }
  }
  else {
    DoSync<v8::internal::wasm::AsyncCompileJob::DecodeFail,(v8::internal::wasm::AsyncCompileJob::UseExistingForegroundTask)0,v8::internal::wasm::WasmError>
              (param_1,(WasmError *)local_120);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  p_Var27 = p_Stack_128;
  if (p_Stack_128 != (__shared_weak_count *)0x0) {
    p_Var1 = p_Stack_128 + 8;
    do {
      lVar20 = *(long *)p_Var1;
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar9) {
        *(long *)p_Var1 = lVar20 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (lVar20 == 0) {
      (**(code **)(*(long *)p_Stack_128 + 0x10))(p_Stack_128);
      std::__ndk1::__shared_weak_count::__release_weak(p_Var27);
    }
  }
  if (*(long *)(uVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
switchD_015ead60_switchD:
  do {
    pDVar29 = this;
    uVar25 = uVar6;
    switch(lVar22) {
    case 0x15eabd0:
      goto switchD_015ead60_caseD_15eabd0;
    case 0x15eac00:
      goto switchD_015ead60_caseD_15eac00;
    case 0x15eac50:
      goto switchD_015ead60_caseD_15eac50;
    case 0x15eac5c:
      goto switchD_015ead60_caseD_15eac5c;
    case 0x15eac64:
      goto switchD_015ead60_caseD_15eac64;
    case 0x15eac70:
      goto switchD_015ead60_caseD_15eac70;
    case 0x15eac74:
      goto switchD_015ead60_caseD_15eac74;
    case 0x15eac7c:
      goto switchD_015ead60_caseD_15eac7c;
    case 0x15eac84:
      goto switchD_015ead60_caseD_15eac84;
    case 0x15eac88:
      goto switchD_015ead60_caseD_15eac88;
    case 0x15eac8c:
      goto switchD_015ead60_caseD_15eac8c;
    case 0x15eac90:
      goto switchD_015ead60_caseD_15eac90;
    case 0x15eacb0:
      goto switchD_015ead60_caseD_15eacb0;
    case 0x15eacb8:
      goto switchD_015ead60_caseD_15eacb8;
    case 0x15eacd0:
      goto switchD_015ead60_caseD_15eacd0;
    case 0x15eacd4:
      goto switchD_015ead60_caseD_15eacd4;
    case 0x15eacdc:
      goto switchD_015ead60_caseD_15eacdc;
    case 0x15eace0:
      goto switchD_015ead60_caseD_15eace0;
    case 0x15eace8:
      goto switchD_015ead60_caseD_15eace8;
    case 0x15eacec:
      goto switchD_015ead60_caseD_15eacec;
    case 0x15eacf8:
      goto switchD_015ead60_caseD_15eacf8;
    case 0x15ead00:
      goto switchD_015ead60_caseD_15ead00;
    case 0x15ead0c:
      goto switchD_015ead60_caseD_15ead0c;
    case 0x15ead18:
      goto switchD_015ead60_caseD_15ead18;
    case 0x15ead1c:
      goto switchD_015ead60_caseD_15ead1c;
    case 0x15ead4c:
      goto switchD_015ead60_caseD_15ead4c;
    case 0x15ead54:
      goto switchD_015ead60_caseD_15ead54;
    case 0x15ead58:
      goto switchD_015ead60_caseD_15ead58;
    case 0x15ead5c:
switchD_015ead60_caseD_15ead5c:
      lVar22 = lVar22 + (ulong)(&switchD_015ead60::switchdataD_01a54378)[uVar24] * 4;
      break;
    case 0x15ead60:
      goto switchD_015ead60_switchD;
    case 0x15ead64:
      goto switchD_015ead60_caseD_15ead64;
    case 0x15ead68:
      goto switchD_015ead60_caseD_15ead68;
    case 0x15ead6c:
      goto switchD_015ead60_caseD_15ead6c;
    case 0x15ead70:
      goto switchD_015ead60_caseD_15ead70;
    case 0x15ead74:
      goto switchD_015ead60_caseD_15ead74;
    case 0x15ead80:
      goto switchD_015ead60_caseD_15ead80;
    case 0x15ead84:
      goto switchD_015ead60_caseD_15ead84;
    case 0x15ead88:
      goto switchD_015ead60_caseD_15ead88;
    case 0x15ead8c:
      goto switchD_015ead60_caseD_15ead8c;
    case 0x15ead90:
      goto switchD_015ead60_caseD_15ead90;
    case 0x15ead98:
      goto switchD_015ead60_caseD_15ead98;
    case 0x15ead9c:
      goto switchD_015ead60_caseD_15ead9c;
    case 0x15eada0:
      goto switchD_015ead60_caseD_15eada0;
    case 0x15eada4:
      goto switchD_015ead60_caseD_15eada4;
    case 0x15eada8:
      goto switchD_015ead60_caseD_15eada8;
    case 0x15eadac:
      goto switchD_015ead60_caseD_15eadac;
    case 0x15eadb0:
      goto switchD_015ead60_caseD_15eadb0;
    case 0x15eadb4:
      goto switchD_015ead60_caseD_15eadb4;
    case 0x15eadb8:
      goto switchD_015ead60_caseD_15eadb8;
    }
  } while( true );
switchD_015ead60_caseD_15eac64:
  auVar31._8_8_ = local_e0;
  auVar31._0_8_ = lVar17 + 0x58;
switchD_015ead60_caseD_15eac70:
  pWVar14 = (WasmModule *)local_100;
switchD_015ead60_caseD_15eac74:
  pWVar15 = (WasmFeatures *)&local_98;
  pDVar13 = (DecodeModule *)pWVar8;
switchD_015ead60_caseD_15eac7c:
  local_100[0] = 0;
  VerifyWasmCode(auVar31._0_8_,auVar31._8_8_,(WasmFeatures *)pDVar13,pWVar14,pWVar15,pFVar16);
switchD_015ead60_caseD_15eac84:
  pDVar21 = (DecodeModule *)((long)&local_c0 + 1);
switchD_015ead60_caseD_15eac88:
  pDVar23 = pDStack_b0;
  unaff_x24 = local_b8;
switchD_015ead60_caseD_15eac8c:
  pDVar11 = local_f0;
  pDVar13 = local_e8;
switchD_015ead60_caseD_15eac90:
  __dest = (DecodeModule *)(ulong)uStack_c8;
  pDVar18 = (DecodeModule *)(ulong)*(uint *)(pDVar21 + 3);
  local_d8 = *(uint *)pDVar21;
  unaff_x23 = (char *)(ulong)(byte)local_c0;
  unaff_x26 = (DecodeModule *)&local_d8;
  auVar31._8_8_ = &local_f8;
  auVar31._0_8_ = pDVar11;
  local_180 = pDVar23;
switchD_015ead60_caseD_15eacb0:
  *(int *)(unaff_x26 + 3) = (int)pDVar18;
  auVar31 = TimedHistogram::Stop(auVar31._0_8_,auVar31._8_8_,(Isolate *)pDVar13);
switchD_015ead60_caseD_15eacb8:
  pDVar21 = (DecodeModule *)(ulong)*(uint *)(unaff_x26 + 3);
  pDVar23 = (DecodeModule *)((ulong)unaff_x23 >> 1);
  if (((ulong)unaff_x23 & 1) != 0) {
    pDVar23 = unaff_x24;
  }
  local_98 = CONCAT44(local_98._4_4_,local_d8);
switchD_015ead60_caseD_15eacd0:
  *(int *)(unaff_x26 + 0x43) = (int)pDVar21;
switchD_015ead60_caseD_15eacd4:
  if (pDVar23 == (DecodeModule *)0x0) {
switchD_015ead60_caseD_15ead64:
    unaff_x24 = (DecodeModule *)0x0;
switchD_015ead60_caseD_15ead68:
switchD_015ead60_caseD_15ead6c:
    if (((ulong)unaff_x23 & 1) == 0) goto LAB_015eabcc;
switchD_015ead60_caseD_15ead70:
  }
  else {
    local_178 = SUB84(__dest,0);
switchD_015ead60_caseD_15eacdc:
    local_170 = (DecodeModule *)0x0;
    local_168 = (DecodeModule *)0x0;
switchD_015ead60_caseD_15eace0:
    local_160 = (DecodeModule *)0x0;
    if (((ulong)unaff_x23 & 1) == 0) {
switchD_015ead60_caseD_15eace8:
      pDVar23 = (DecodeModule *)&local_d8;
switchD_015ead60_caseD_15eacec:
      pDVar18 = (DecodeModule *)(ulong)*(uint *)(pDVar23 + 0x43);
      pDVar21 = (DecodeModule *)(local_98 & 0xffffffff);
      pDVar29 = (DecodeModule *)((long)&local_170 + 1);
switchD_015ead60_caseD_15eacf8:
      unaff_x26 = local_180;
switchD_015ead60_caseD_15ead00:
      *(int *)(pDVar29 + 3) = (int)pDVar18;
      *(uint *)pDVar29 = (uint)pDVar21;
      uVar25 = (ulong)unaff_x23 & 0xffffffff;
switchD_015ead60_caseD_15ead0c:
      uVar28 = (int)__dest;
      uVar30 = (char)uVar25;
    }
    else {
switchD_015ead60_caseD_15ead74:
      pDVar29 = (DecodeModule *)((long)&local_170 + 1);
      if ((DecodeModule *)0xffffffffffffffef < unaff_x24) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
switchD_015ead60_caseD_15ead80:
      bVar9 = (DecodeModule *)0x16 < unaff_x24;
switchD_015ead60_caseD_15ead84:
      if (bVar9) {
switchD_015ead60_caseD_15ead9c:
        pDVar18 = unaff_x24 + 0x10;
switchD_015ead60_caseD_15eada0:
        unaff_x26 = (DecodeModule *)((ulong)pDVar18 & 0xfffffffffffffff0);
switchD_015ead60_caseD_15eada4:
        pDVar11 = unaff_x26;
        unaff_x26 = pDVar11;
switchD_015ead60_caseD_15eada8:
        pDVar11 = operator_new((ulong)pDVar11);
switchD_015ead60_caseD_15eadac:
        pDVar18 = (DecodeModule *)((ulong)unaff_x26 | 1);
switchD_015ead60_caseD_15eadb0:
        __dest = pDVar11;
switchD_015ead60_caseD_15eadb4:
        local_170 = pDVar18;
        local_168 = unaff_x24;
switchD_015ead60_caseD_15eadb8:
        local_160 = pDVar11;
LAB_015eadbc:
        pDVar13 = unaff_x24;
        pvVar12 = memcpy(__dest,local_180,(size_t)unaff_x24);
        auVar31._8_8_ = extraout_x1_00;
        auVar31._0_8_ = pvVar12;
      }
      else {
switchD_015ead60_caseD_15ead88:
        pDVar18 = (DecodeModule *)(ulong)(uint)((int)unaff_x24 << 1);
switchD_015ead60_caseD_15ead8c:
        __dest = pDVar29;
        pDVar29 = __dest;
switchD_015ead60_caseD_15ead90:
        local_170 = (DecodeModule *)CONCAT71(local_170._1_7_,(char)pDVar18);
        if (unaff_x24 != (DecodeModule *)0x0) goto LAB_015eadbc;
switchD_015ead60_caseD_15ead98:
      }
      __dest[(long)unaff_x24] = (DecodeModule)0x0;
      pDVar23 = (DecodeModule *)&local_d8;
      unaff_x26 = local_160;
      uVar28 = local_178;
      uVar30 = (undefined1)local_170;
    }
    p_Var27 = p_Stack_128;
    uVar19 = *(undefined8 *)pDVar29;
    local_170 = (DecodeModule *)0x0;
    local_168 = (DecodeModule *)0x0;
    local_160 = (DecodeModule *)0x0;
    local_130 = (WasmModule *)0x0;
    p_Stack_128 = (__shared_weak_count *)0x0;
    *(undefined8 *)(pDVar23 + 0xf) = *(undefined8 *)(pDVar29 + 7);
    local_d0 = (undefined7)uVar19;
    uStack_c9 = (undefined1)((ulong)uVar19 >> 0x38);
    if (p_Var27 != (__shared_weak_count *)0x0) {
      p_Var1 = p_Var27 + 8;
      do {
        lVar22 = *(long *)p_Var1;
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
        if (bVar9) {
          *(long *)p_Var1 = lVar22 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (lVar22 == 0) {
        (**(code **)(*(long *)p_Var27 + 0x10))(p_Var27);
        auVar31 = std::__ndk1::__shared_weak_count::__release_weak(p_Var27);
      }
    }
    local_120[0] = uVar28;
    if ((local_118 & 1) == 0) {
      local_118 = local_118 & 0xffffffffffff0000;
    }
    else {
      *local_108 = (DecodeModule)0x0;
      uStack_110 = 0;
      if ((local_118 & 1) != 0) {
        operator_delete(local_108);
        auVar31._8_8_ = extraout_x1_01;
        auVar31._0_8_ = extraout_x0_00;
        local_118 = 0;
      }
    }
    local_118 = CONCAT71(local_118._1_7_,uVar30);
    local_d0 = 0;
    uStack_c9 = 0;
    uStack_c8 = 0;
    uStack_c4 = uStack_c4 & 0xff000000;
    local_108 = unaff_x26;
    if (((ulong)local_170 & 1) != 0) {
      operator_delete(local_160);
      auVar31._8_8_ = extraout_x1_02;
      auVar31._0_8_ = extraout_x0_01;
    }
    unaff_x24 = (DecodeModule *)&DAT_00000004;
    if (((ulong)unaff_x23 & 1) == 0) goto LAB_015eabcc;
  }
  operator_delete(local_180);
  auVar31._8_8_ = extraout_x1_03;
  auVar31._0_8_ = extraout_x0_02;
LAB_015eabcc:
  if ((int)unaff_x24 != 0) goto LAB_015eaa10;
switchD_015ead60_caseD_15eabd0:
  lVar20 = lVar20 + 1;
  if (iVar2 + iVar4 == (int)lVar20) goto LAB_015eaa10;
  goto LAB_015eabe0;
}

