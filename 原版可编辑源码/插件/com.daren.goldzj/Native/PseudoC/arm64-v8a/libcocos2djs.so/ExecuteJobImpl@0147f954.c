
/* v8::internal::AsmJsCompilationJob::ExecuteJobImpl() */

undefined4 __thiscall v8::internal::AsmJsCompilationJob::ExecuteJobImpl(AsmJsCompilationJob *this)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ZoneBuffer *pZVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  Zone *this_00;
  Utf16CharacterStream *pUVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  long local_360;
  AsmJsParser aAStack_358 [240];
  WasmModuleBuilder *local_268;
  undefined8 local_248;
  undefined8 local_170;
  undefined4 local_168;
  long local_98 [2];
  long local_88;
  long local_70;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar7 = *(long **)(*(long *)(this + 0x28) + 8);
  if (plVar7[5] == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = (plVar7[5] - plVar7[2]) + 0x18;
  }
  lVar15 = *plVar7;
  lVar5 = base::TimeTicks::HighResolutionNow();
  this_00 = *(Zone **)(*(long *)(this + 0x28) + 8);
  Zone::Zone((Zone *)local_98,*(AccountingAllocator **)(this + 0x40),"../../src/asmjs/asm-js.cc:235"
            );
  pUVar12 = *(Utf16CharacterStream **)(*(long *)(this + 0x20) + 0x60);
  (**(code **)(*(long *)pUVar12 + 0x20))(pUVar12);
  iVar3 = FunctionLiteral::start_position(*(FunctionLiteral **)(*(long *)(this + 0x28) + 0x10));
  uVar10 = *(ulong *)(pUVar12 + 0x20);
  uVar8 = (ulong)iVar3;
  if (uVar8 < uVar10) {
    lVar9 = *(long *)(pUVar12 + 8);
  }
  else {
    lVar9 = *(long *)(pUVar12 + 8);
    if (uVar8 < uVar10 + (*(long *)(pUVar12 + 0x18) - lVar9 >> 1)) {
      *(ulong *)(pUVar12 + 0x10) = lVar9 + (uVar8 - uVar10) * 2;
      goto LAB_0147fa24;
    }
  }
  *(ulong *)(pUVar12 + 0x20) = uVar8;
  *(long *)(pUVar12 + 0x10) = lVar9;
  if (pUVar12[0x30] == (Utf16CharacterStream)0x0) {
    (**(code **)(*(long *)pUVar12 + 0x28))(pUVar12);
  }
LAB_0147fa24:
  wasm::AsmJsParser::AsmJsParser(aAStack_358,(Zone *)local_98,*(ulong *)(this + 0x18),pUVar12);
  uVar8 = wasm::AsmJsParser::Run(aAStack_358);
  if ((uVar8 & 1) == 0) {
    if (FLAG_suppress_asm_messages == '\0') {
      PendingCompilationErrorHandler::ReportWarningAt
                ((PendingCompilationErrorHandler *)(*(long *)(this + 0x20) + 0xb0),local_168,
                 local_168,0x164,local_170);
    }
    uVar11 = 1;
  }
  else {
    pZVar6 = *(ZoneBuffer **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pZVar6) < 0x20) {
      pZVar6 = (ZoneBuffer *)Zone::NewExpand(this_00,0x20);
    }
    else {
      *(ZoneBuffer **)(this_00 + 0x10) = pZVar6 + 0x20;
    }
    *(Zone **)pZVar6 = this_00;
    lVar9 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar9) < 0x400) {
      lVar9 = Zone::NewExpand(this_00,0x400);
    }
    else {
      *(long *)(this_00 + 0x10) = lVar9 + 0x400;
    }
    *(long *)(pZVar6 + 8) = lVar9;
    *(long *)(pZVar6 + 0x10) = lVar9;
    *(long *)(pZVar6 + 0x18) = lVar9 + 0x400;
    *(ZoneBuffer **)(this + 0xe8) = pZVar6;
    wasm::WasmModuleBuilder::WriteTo(local_268,pZVar6);
    pZVar6 = *(ZoneBuffer **)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - (long)pZVar6) < 0x20) {
      pZVar6 = (ZoneBuffer *)Zone::NewExpand(this_00,0x20);
    }
    else {
      *(ZoneBuffer **)(this_00 + 0x10) = pZVar6 + 0x20;
    }
    *(Zone **)pZVar6 = this_00;
    lVar9 = *(long *)(this_00 + 0x10);
    if ((ulong)(*(long *)(this_00 + 0x18) - lVar9) < 0x400) {
      lVar9 = Zone::NewExpand(this_00,0x400);
    }
    else {
      *(long *)(this_00 + 0x10) = lVar9 + 0x400;
    }
    *(long *)(pZVar6 + 8) = lVar9;
    *(long *)(pZVar6 + 0x10) = lVar9;
    *(long *)(pZVar6 + 0x18) = lVar9 + 0x400;
    *(ZoneBuffer **)(this + 0xf0) = pZVar6;
    wasm::WasmModuleBuilder::WriteAsmJsOffsetTable(local_268,pZVar6);
    *(undefined8 *)(this + 0xf8) = local_248;
    plVar7 = *(long **)(*(long *)(this + 0x28) + 8);
    if (plVar7[5] == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = (plVar7[2] - plVar7[5]) + -0x18;
    }
    lVar13 = *plVar7;
    lVar1 = 0;
    if (local_70 != 0) {
      lVar1 = (local_88 - local_70) + -0x18;
    }
    *(long *)(this + 0x120) = lVar1 + local_98[0];
    local_360 = base::TimeTicks::HighResolutionNow();
    local_360 = local_360 - lVar5;
    uVar16 = base::TimeDelta::InMillisecondsF((TimeDelta *)&local_360);
    *(undefined8 *)(this + 0x100) = uVar16;
    local_360 = base::TimeTicks::HighResolutionNow();
    local_360 = local_360 - lVar5;
    uVar16 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_360);
    *(undefined8 *)(this + 0x118) = uVar16;
    iVar3 = FunctionLiteral::end_position(*(FunctionLiteral **)(*(long *)(this + 0x28) + 0x10));
    iVar4 = FunctionLiteral::start_position(*(FunctionLiteral **)(*(long *)(this + 0x28) + 0x10));
    *(int *)(this + 0x110) = iVar3 - iVar4;
    if (FLAG_trace_asm_parser != '\0') {
      PrintF("[asm.js translation successful: time=%0.3fms, translate_zone=%zuKB, compile_zone+=%zuKB]\n"
             ,*(undefined8 *)(this + 0x100),*(ulong *)(this + 0x120) >> 10,
             (ulong)((lVar14 - lVar15) + lVar9 + lVar13) >> 10);
    }
    uVar11 = 0;
  }
  wasm::AsmJsParser::~AsmJsParser(aAStack_358);
  Zone::~Zone((Zone *)local_98);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

