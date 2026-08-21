
/* v8::internal::Isolate::UnwindAndFindHandler() */

undefined8 __thiscall v8::internal::Isolate::UnwindAndFindHandler(Isolate *this)

{
  long lVar1;
  StackFrame *this_00;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  long lVar18;
  ulong local_648;
  ulong local_640 [6];
  StackFrameIterator aSStack_610 [1416];
  StackFrame *local_88;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar15 = *(undefined8 *)(this + 0x2bd8);
  iVar6 = *(int *)(this + 0x188);
  StackFrameIterator::StackFrameIterator(aSStack_610,this);
  do {
    this_00 = local_88;
    uVar2 = (**(code **)(*(long *)local_88 + 8))(local_88);
    iVar5 = (int)uVar15;
    switch(uVar2) {
    case 1:
    case 2:
      puVar16 = *(undefined8 **)(*(long *)(this_00 + 8) + 0x590);
      *(undefined8 *)(this + 0x2c30) = *puVar16;
      uVar11 = StackFrame::LookupCode(this_00);
      local_648 = uVar11;
      HandlerTable::HandlerTable((HandlerTable *)local_640,uVar11);
      if (*(int *)(uVar11 + 0x17) < 0) {
        lVar8 = Code::OffHeapInstructionStart((Code *)&local_648);
      }
      else {
        lVar8 = uVar11 + 0x3f;
      }
      iVar6 = HandlerTable::LookupReturn((HandlerTable *)local_640,0);
      uVar11 = Code::has_constant_pool();
      if ((uVar11 & 1) == 0) {
        lVar18 = 0;
      }
      else {
        if (*(int *)(local_648 + 0x17) < 0) {
          lVar18 = Code::OffHeapInstructionStart((Code *)&local_648);
        }
        else {
          lVar18 = local_648 + 0x3f;
        }
        lVar18 = lVar18 + *(int *)(local_648 + 0x23);
      }
      *(undefined8 *)(this + 0x2be0) = 0;
      *(long *)(this + 0x2be8) = lVar8 + iVar6;
      *(long *)(this + 0x2bf0) = lVar18;
      *(undefined8 *)(this + 0x2bf8) = 0;
      *(undefined8 **)(this + 0x2c00) = puVar16 + 2;
      *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
LAB_00f50020:
      if (*(long *)(lVar1 + 0x28) == local_70) {
        return uVar15;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    case 4:
      if (iVar5 != iVar6) {
        uVar11 = StackFrame::LookupCode(this_00);
        local_640[0] = uVar11;
        iVar5 = (**(code **)(*(long *)this_00 + 0xa8))(this_00,0,0);
        if (-1 < iVar5) {
          lVar8 = *(long *)(this_00 + 0x20) - ((ulong)(*(uint *)(uVar11 + 0x17) >> 4) & 0x7fffff8);
          uVar17 = uVar11;
          if (((*(uint *)(uVar11 + 0x17) & 0x3e) == 0) &&
             (uVar17 = local_640[0],
             (*(uint *)((uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + 0xf)) + 7) & 1) !=
             0)) {
            iVar6 = **(int **)(this_00 + 0x28);
            this[0x9578] = (Isolate)0x1;
            iVar5 = (iVar6 - (int)local_640[0]) + -0x3f;
          }
          if (*(int *)(uVar17 + 0x17) < 0) {
            lVar18 = Code::OffHeapInstructionStart((Code *)local_640);
          }
          else {
            lVar18 = uVar17 + 0x3f;
          }
          uVar11 = Code::has_constant_pool();
          if ((uVar11 & 1) == 0) {
            lVar10 = 0;
          }
          else {
            if (*(int *)(local_640[0] + 0x17) < 0) {
              lVar10 = Code::OffHeapInstructionStart((Code *)local_640);
            }
            else {
              lVar10 = local_640[0] + 0x3f;
            }
            lVar10 = lVar10 + *(int *)(local_640[0] + 0x23);
          }
          uVar13 = *(undefined8 *)(this_00 + 0x20);
          lVar18 = lVar18 + iVar5;
          *(undefined8 *)(this + 0x2be0) = 0;
          goto LAB_00f50078;
        }
      }
      break;
    case 5:
      if ((trap_handler::g_thread_in_wasm_code != 0) &&
         (trap_handler::g_is_trap_handler_enabled != '\0')) {
        trap_handler::g_thread_in_wasm_code = 0;
      }
      if (iVar5 != iVar6) {
        wasm::WasmCodeRefScope::WasmCodeRefScope((WasmCodeRefScope *)local_640);
        plVar7 = (long *)wasm::WasmCodeManager::LookupCode
                                   (*(WasmCodeManager **)(this + 0xc770),
                                    **(ulong **)(this_00 + 0x28));
        uVar3 = WasmCompiledFrame::LookupExceptionHandlerInTable((WasmCompiledFrame *)this_00);
        if (-1 < (int)uVar3) {
          lVar8 = plVar7[9];
          lVar18 = *(long *)(this_00 + 0x20);
          if (trap_handler::g_is_trap_handler_enabled != '\0') {
            trap_handler::g_thread_in_wasm_code = 1;
          }
          lVar10 = *plVar7;
          uVar13 = wasm::WasmCode::constant_pool();
          uVar14 = *(undefined8 *)(this_00 + 0x20);
          *(undefined8 *)(this + 0x2bf0) = uVar13;
          *(undefined8 *)(this + 0x2be0) = 0;
          *(ulong *)(this + 0x2c00) = (lVar18 - (ulong)(uint)((int)lVar8 << 3)) + 0x10;
          *(ulong *)(this + 0x2be8) = lVar10 + (ulong)uVar3;
          *(undefined8 *)(this + 0x2bf8) = uVar14;
          *(undefined8 *)(this + 0x2bd8) = *(undefined8 *)(this + 0xa8);
          wasm::WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)local_640);
          goto LAB_00f50020;
        }
        wasm::WasmCodeRefScope::~WasmCodeRefScope((WasmCodeRefScope *)local_640);
      }
      break;
    case 8:
      if (trap_handler::g_thread_in_wasm_code != 0) goto switchD_00f4fa40_caseD_b;
      break;
    case 9:
      *(undefined8 *)(this + 0x2c30) = **(undefined8 **)(*(long *)(this_00 + 8) + 0x590);
      uVar11 = StackFrame::LookupCode(this_00);
      local_648 = uVar11;
      HandlerTable::HandlerTable((HandlerTable *)local_640,uVar11);
      if (*(int *)(uVar11 + 0x17) < 0) {
        lVar18 = Code::OffHeapInstructionStart((Code *)&local_648);
      }
      else {
        lVar18 = uVar11 + 0x3f;
      }
      iVar6 = HandlerTable::LookupReturn
                        ((HandlerTable *)local_640,**(int **)(this_00 + 0x28) - (int)lVar18);
      lVar8 = *(long *)(this_00 + 0x20);
      uVar3 = *(uint *)(local_648 + 0x17);
      uVar11 = Code::has_constant_pool();
      if ((uVar11 & 1) == 0) {
        lVar10 = 0;
      }
      else {
        if (*(int *)(local_648 + 0x17) < 0) {
          lVar10 = Code::OffHeapInstructionStart((Code *)&local_648);
        }
        else {
          lVar10 = local_648 + 0x3f;
        }
        lVar10 = lVar10 + *(int *)(local_648 + 0x23);
      }
      uVar13 = *(undefined8 *)(this_00 + 0x20);
      *(long *)(this + 0x2bf0) = lVar10;
      uVar14 = *(undefined8 *)(this + 0xa8);
      *(undefined8 *)(this + 0x2be0) = 0;
      lVar18 = lVar18 + iVar6;
      *(ulong *)(this + 0x2c00) = (lVar8 - ((ulong)(uVar3 >> 4) & 0x7fffff8)) + 0x10;
LAB_00f4fdc8:
      *(long *)(this + 0x2be8) = lVar18;
      *(undefined8 *)(this + 0x2bf8) = uVar13;
      *(undefined8 *)(this + 0x2bd8) = uVar14;
      goto LAB_00f50020;
    case 0xb:
switchD_00f4fa40_caseD_b:
      if (trap_handler::g_is_trap_handler_enabled != '\0') {
        trap_handler::g_thread_in_wasm_code = 0;
      }
      break;
    case 0xc:
      if (iVar5 != iVar6) {
        lVar8 = InterpretedFrame::GetBytecodeArray((InterpretedFrame *)this_00);
        iVar4 = *(int *)(lVar8 + 0x13);
        iVar5 = iVar4 + 7;
        if (-1 < iVar4) {
          iVar5 = iVar4;
        }
        iVar5 = InterpreterFrameConstants::RegisterStackSlotCount(iVar5 >> 3);
        local_648 = local_648 & 0xffffffff00000000;
        iVar4 = (**(code **)(*(long *)this_00 + 0xa8))(this_00,&local_648,0);
        if (-1 < iVar4) {
          lVar8 = *(long *)(this_00 + 0x20);
          uVar9 = InterpretedFrame::ReadInterpreterRegister((int)this_00);
          InterpretedFrame::PatchBytecodeOffset((InterpretedFrame *)this_00,iVar4);
          local_640[0] = Builtins::builtin((Builtins *)(this + 0x9e00),0x40);
          if (*(int *)(local_640[0] + 0x17) < 0) {
            lVar18 = Code::OffHeapInstructionStart((Code *)local_640);
          }
          else {
            lVar18 = local_640[0] + 0x3f;
          }
          uVar11 = Code::has_constant_pool();
          if ((uVar11 & 1) == 0) {
            lVar10 = 0;
          }
          else {
            if (*(int *)(local_640[0] + 0x17) < 0) {
              lVar10 = Code::OffHeapInstructionStart((Code *)local_640);
            }
            else {
              lVar10 = local_640[0] + 0x3f;
            }
            lVar10 = lVar10 + *(int *)(local_640[0] + 0x23);
          }
          uVar13 = *(undefined8 *)(this_00 + 0x20);
          uVar14 = *(undefined8 *)(this + 0xa8);
          *(undefined8 *)(this + 0x2be0) = uVar9;
          *(long *)(this + 0x2be8) = lVar18;
          *(long *)(this + 0x2bf0) = lVar10;
          *(long *)(this + 0x2c00) = (lVar8 - (iVar5 << 3)) + -0x20;
          goto LAB_00f50018;
        }
      }
      break;
    case 0xd:
      if (((((iVar5 != iVar6) &&
            (local_640[0] = StackFrame::LookupCode(this_00),
            *(short *)((local_640[0] & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_640[0] - 1))
            == 0x9a)) && ((*(uint *)(local_640[0] + 0x17) & 0x3e) == 6)) &&
          ((uVar11 = Code::has_handler_table((Code *)local_640), (uVar11 & 1) != 0 &&
           ((*(byte *)(local_640[0] + 0x17) >> 6 & 1) != 0)))) &&
         (uVar3 = StubFrame::LookupExceptionHandlerInTable((StubFrame *)this_00), -1 < (int)uVar3))
      {
        lVar8 = *(long *)(this_00 + 0x20) -
                ((ulong)(*(uint *)(local_640[0] + 0x17) >> 4) & 0x7fffff8);
        if ((int)*(uint *)(local_640[0] + 0x17) < 0) {
          lVar18 = Code::OffHeapInstructionStart((Code *)local_640);
        }
        else {
          lVar18 = local_640[0] + 0x3f;
        }
        uVar11 = Code::has_constant_pool();
        if ((uVar11 & 1) == 0) {
          lVar10 = 0;
        }
        else {
          if (*(int *)(local_640[0] + 0x17) < 0) {
            lVar10 = Code::OffHeapInstructionStart((Code *)local_640);
          }
          else {
            lVar10 = local_640[0] + 0x3f;
          }
          lVar10 = lVar10 + *(int *)(local_640[0] + 0x23);
        }
        uVar13 = *(undefined8 *)(this_00 + 0x20);
        *(undefined8 *)(this + 0x2be0) = 0;
        lVar18 = lVar18 + (ulong)uVar3;
LAB_00f50078:
        *(long *)(this + 0x2bf0) = lVar10;
        uVar14 = *(undefined8 *)(this + 0xa8);
        *(long *)(this + 0x2c00) = lVar8 + 0x10;
        goto LAB_00f4fdc8;
      }
      break;
    case 0x10:
      if (iVar5 != iVar6) {
        JavaScriptBuiltinContinuationWithCatchFrame::SetException
                  ((JavaScriptBuiltinContinuationWithCatchFrame *)this_00,uVar15);
        lVar18 = *(long *)(this_00 + 0x20);
        lVar8 = JavaScriptBuiltinContinuationFrame::GetSPToFPDelta
                          ((JavaScriptBuiltinContinuationFrame *)this_00);
        local_640[0] = StackFrame::LookupCode(this_00);
        if (*(int *)(local_640[0] + 0x17) < 0) {
          lVar10 = Code::OffHeapInstructionStart((Code *)local_640);
        }
        else {
          lVar10 = local_640[0] + 0x3f;
        }
        uVar11 = Code::has_constant_pool();
        if ((uVar11 & 1) == 0) {
          lVar12 = 0;
        }
        else {
          if (*(int *)(local_640[0] + 0x17) < 0) {
            lVar12 = Code::OffHeapInstructionStart((Code *)local_640);
          }
          else {
            lVar12 = local_640[0] + 0x3f;
          }
          lVar12 = lVar12 + *(int *)(local_640[0] + 0x23);
        }
        uVar13 = *(undefined8 *)(this_00 + 0x20);
        uVar14 = *(undefined8 *)(this + 0xa8);
        *(undefined8 *)(this + 0x2be0) = 0;
        *(long *)(this + 0x2be8) = lVar10;
        *(long *)(this + 0x2bf0) = lVar12;
        *(long *)(this + 0x2c00) = lVar18 - lVar8;
LAB_00f50018:
        *(undefined8 *)(this + 0x2bf8) = uVar13;
        *(undefined8 *)(this + 0x2bd8) = uVar14;
        goto LAB_00f50020;
      }
      break;
    case 0x14:
      if ((iVar5 != iVar6) &&
         (iVar5 = (**(code **)(*(long *)this_00 + 0xa8))(this_00,0,0), iVar5 != -1)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.",
                 "-1 == JavaScriptFrame::cast(frame)->LookupExceptionHandlerInTable( nullptr, nullptr)"
                );
      }
    }
    iVar5 = (**(code **)(*(long *)this_00 + 8))(this_00);
    if (iVar5 == 4) {
      MaterializedObjectStore::Remove
                (*(MaterializedObjectStore **)(this + 0x9580),*(ulong *)(this_00 + 0x20));
    }
    StackFrameIterator::Advance(aSStack_610);
  } while( true );
}

