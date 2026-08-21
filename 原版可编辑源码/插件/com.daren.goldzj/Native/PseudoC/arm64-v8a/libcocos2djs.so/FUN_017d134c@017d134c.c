
void FUN_017d134c(long param_1)

{
  LiftoffAssembler *this;
  long lVar1;
  ulong uVar2;
  undefined1 local_80 [8];
  undefined1 local_78;
  ulong local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = *(ulong *)*(Signature **)(param_1 + 0x60);
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    if (*(byte *)(param_1 + 0x30) >> 1 != 0) goto LAB_017d14b8;
  }
  else if (*(long *)(param_1 + 0x38) != 0) goto LAB_017d14b8;
  if (*(char *)(*(long *)(param_1 + 0x4e0) + -0x1d0) == '\0') {
    if (uVar2 < 2) {
      this = (LiftoffAssembler *)(param_1 + 0x78);
      if (uVar2 == 1) {
        v8::internal::wasm::LiftoffAssembler::MoveToReturnRegisters
                  (this,*(Signature **)(param_1 + 0x60));
      }
      v8::internal::TurboAssembler::LeaveFrame(this,5);
      uVar2 = (*(ulong *)(*(long *)(param_1 + 0x3d0) + 0x18) & 0xffffffff) * 8 + 8 & 0xffffffff0;
      if (uVar2 != 0) {
        local_80[0] = 0;
        local_78 = 0;
        local_58 = 0x13;
        local_50 = 0xffffffff;
        local_48 = 2;
        local_60 = uVar2;
        v8::internal::TurboAssembler::AddSubMacro
                  ((TurboAssembler *)this,&DAT_01a63d04,&DAT_01a63d04,local_80,0,0);
      }
      v8::internal::Assembler::ret((Assembler *)this,(Register *)&DAT_01a63d50);
      v8::internal::Assembler::CheckVeneerPool((Assembler *)this,false,false,0x400);
    }
    else if (*(char *)(param_1 + 1000) == '\0') {
      *(undefined1 *)(param_1 + 1000) = 8;
      if (v8::internal::FLAG_trace_liftoff != '\0') {
        v8::internal::PrintF("[liftoff] unsupported: %s\n","multi-return");
      }
      v8::internal::wasm::Decoder::errorf
                ((uint)param_1,
                 (char *)(ulong)(uint)(*(int *)(param_1 + 0x20) +
                                      (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 8))),
                 "unsupported liftoff operation: %s","multi-return");
    }
  }
LAB_017d14b8:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

