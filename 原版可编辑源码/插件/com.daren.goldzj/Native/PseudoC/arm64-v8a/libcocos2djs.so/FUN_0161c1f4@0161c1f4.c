
void FUN_0161c1f4(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  Zone *pZVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong *puVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  Assembler *this;
  undefined1 local_d8 [8];
  undefined1 local_d0;
  ulong local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  ulong local_90;
  ulong uStack_88;
  long local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar1 = *(uint *)(*(long *)(param_1 + 0x30) + 4);
  uVar10 = *(ulong *)(*(long *)(param_1 + 0x30) +
                      (((ulong)uVar1 & 0xff) + (ulong)(ushort)(uVar1 >> 8)) * 8 + 0x20);
  lVar8 = *(long *)(*(long *)(param_1 + 0x38) + 0x28);
  if ((uVar10 & 7) == 3) {
    if (((uint)uVar10 >> 3 & 1) == 0) {
      v8::internal::compiler::Constant::Constant((Constant *)&local_90,(int)(uVar10 >> 0x20));
    }
    else {
      puVar7 = (ulong *)(*(long *)(lVar8 + 0x60) + ((long)uVar10 >> 0x20) * 0x10);
      uStack_88 = puVar7[1];
      local_90 = *puVar7;
    }
    iVar12 = (int)uStack_88;
  }
  else {
    plVar9 = (long *)(lVar8 + 0x48);
    plVar13 = (long *)*plVar9;
    if (plVar13 == (long *)0x0) {
LAB_0161c298:
      plVar11 = plVar9;
    }
    else {
      plVar11 = plVar9;
      do {
        iVar12 = (int)(uVar10 >> 3);
        if (iVar12 <= (int)plVar13[4]) {
          plVar11 = plVar13;
        }
        plVar13 = (long *)plVar13[(int)plVar13[4] < iVar12];
      } while (plVar13 != (long *)0x0);
      if ((plVar11 == plVar9) || (iVar12 < (int)plVar11[4])) goto LAB_0161c298;
    }
    iVar12 = (int)plVar11[6];
  }
  if (iVar12 != 0xc) {
    v8::internal::compiler::CodeGenerator::AssembleSourcePosition
              (*(CodeGenerator **)(param_1 + 0x38),*(Instruction **)(param_1 + 0x30));
    v8::internal::TurboAssembler::Call(*(TurboAssembler **)(param_1 + 0x20),iVar12,5);
    pZVar4 = *(Zone **)(*(long *)(param_1 + 0x38) + 8);
    puVar5 = *(undefined8 **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar5) < 0x28) {
      puVar5 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar4,0x28);
    }
    else {
      *(undefined8 **)(pZVar4 + 0x10) = puVar5 + 5;
    }
    pZVar4 = *(Zone **)(*(long *)(param_1 + 0x38) + 8);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = pZVar4;
    puVar6 = *(undefined8 **)(pZVar4 + 0x10);
    if ((ulong)(*(long *)(pZVar4 + 0x18) - (long)puVar6) < 0x40) {
      puVar6 = (undefined8 *)v8::internal::Zone::NewExpand(pZVar4,0x40);
    }
    else {
      *(undefined8 **)(pZVar4 + 0x10) = puVar6 + 8;
    }
    *puVar5 = puVar6;
    puVar5[1] = puVar6;
    puVar5[2] = puVar6 + 8;
    *puVar6 = 0;
    lVar8 = puVar5[1];
    puVar5[1] = lVar8 + 8;
    *(undefined8 *)(lVar8 + 8) = 0;
    lVar8 = puVar5[1];
    puVar5[1] = lVar8 + 8;
    *(undefined8 *)(lVar8 + 8) = 0;
    lVar8 = puVar5[1];
    puVar5[1] = lVar8 + 8;
    *(undefined8 *)(lVar8 + 8) = 0;
    lVar8 = puVar5[1];
    puVar5[1] = lVar8 + 8;
    *(undefined8 *)(lVar8 + 8) = 0;
    lVar8 = puVar5[1];
    puVar5[1] = lVar8 + 8;
    *(undefined8 *)(lVar8 + 8) = 0;
    lVar8 = puVar5[1];
    puVar5[1] = lVar8 + 8;
    *(undefined8 *)(lVar8 + 8) = 0;
    lVar8 = puVar5[1];
    puVar5[1] = lVar8 + 8;
    *(undefined8 *)(lVar8 + 8) = 0;
    *(undefined4 *)(puVar5 + 4) = 0xffffffff;
    puVar5[1] = puVar5[1] + 8;
    v8::internal::compiler::CodeGenerator::RecordSafepoint(*(undefined8 *)(param_1 + 0x38),puVar5,0)
    ;
    if (v8::internal::FLAG_debug_code != '\0') {
      v8::internal::Assembler::brk((int)*(undefined8 *)(param_1 + 0x20));
    }
    goto LAB_0161c4f8;
  }
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = v8::internal::ExternalReference::wasm_call_trap_callback_for_testing();
  v8::internal::TurboAssembler::CallCFunction(uVar14,uVar3,0);
  v8::internal::TurboAssembler::LeaveFrame(*(undefined8 *)(param_1 + 0x20),5);
  this = *(Assembler **)(param_1 + 0x20);
  uVar1 = *(uint *)(**(long **)(*(long *)(param_1 + 0x38) + 0x20) + 0x18);
  uVar1 = (uVar1 & 1) + uVar1;
  if ((ulong)uVar1 != 0) {
    local_b8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
    local_d8[0] = 0;
    local_d0 = 0;
    local_b0 = 0x13;
    local_a8 = 0xffffffff;
    local_a0 = 2;
    if ((int)uVar1 < 0) {
      lVar8 = -local_b8;
      uVar10 = v8::internal::Assembler::IsImmAddSub(lVar8);
      if ((uVar10 & 1) == 0) goto LAB_0161c370;
      local_90 = local_90 & 0xffffffffffffff00;
      uStack_88 = uStack_88 & 0xffffffffffffff00;
      local_60 = 0xffffffff;
      local_68 = 0x13;
      local_58 = 2;
      puVar7 = &local_90;
      uVar3 = 0x40000000;
      local_70 = lVar8;
    }
    else {
LAB_0161c370:
      puVar7 = (ulong *)local_d8;
      uVar3 = 0;
    }
    v8::internal::TurboAssembler::AddSubMacro
              ((TurboAssembler *)this,&DAT_01a56370,&DAT_01a56370,puVar7,0,uVar3);
    this = *(Assembler **)(param_1 + 0x20);
  }
  v8::internal::Assembler::ret(this,(Register *)&DAT_01a56388);
  v8::internal::Assembler::CheckVeneerPool(this,false,false,0x400);
LAB_0161c4f8:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

