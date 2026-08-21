
void FUN_017e0b78(LiftoffAssembler *param_1,long param_2,uint param_3)

{
  long lVar1;
  uint *puVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  undefined1 local_90 [8];
  undefined1 local_88;
  ulong local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined4 local_58;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  if ((int)((ulong)(*(long *)(param_2 + 0x4e0) - *(long *)(param_2 + 0x4d8)) >> 5) * -0x11111111 -
      1U == param_3) {
    uVar5 = *(ulong *)*(Signature **)(param_2 + 0x60);
    if (1 < uVar5) {
      if (param_1[0x370] == (LiftoffAssembler)0x0) {
        param_1[0x370] = (LiftoffAssembler)0x8;
        if (v8::internal::FLAG_trace_liftoff != '\0') {
          v8::internal::PrintF("[liftoff] unsupported: %s\n","multi-return");
        }
        v8::internal::wasm::Decoder::errorf
                  ((uint)param_2,
                   (char *)(ulong)(uint)(*(int *)(param_2 + 0x20) +
                                        (*(int *)(param_2 + 0x10) - *(int *)(param_2 + 8))),
                   "unsupported liftoff operation: %s","multi-return");
      }
      goto LAB_017e0d58;
    }
    if (uVar5 == 1) {
      v8::internal::wasm::LiftoffAssembler::MoveToReturnRegisters
                (param_1,*(Signature **)(param_2 + 0x60));
    }
    v8::internal::TurboAssembler::LeaveFrame(param_1,5);
    uVar5 = (*(ulong *)(*(long *)(param_1 + 0x358) + 0x18) & 0xffffffff) * 8 + 8 & 0xffffffff0;
    if (uVar5 != 0) {
      local_90[0] = 0;
      local_88 = 0;
      local_68 = 0x13;
      local_60 = 0xffffffff;
      local_58 = 2;
      local_70 = uVar5;
      v8::internal::TurboAssembler::AddSubMacro
                ((TurboAssembler *)param_1,&DAT_01a63d04,&DAT_01a63d04,local_90,0,0);
    }
    v8::internal::Assembler::ret((Assembler *)param_1,(Register *)&DAT_01a63d50);
  }
  else {
    lVar1 = *(long *)(param_2 + 0x4e0) + (ulong)param_3 * -0x1e0;
    cVar3 = *(char *)(lVar1 + -0x1e0);
    puVar2 = (uint *)(lVar1 + -0x1c8);
    if (cVar3 != '\x03') {
      puVar2 = (uint *)(lVar1 + -0x1a8);
    }
    if ((char)puVar2[6] == '\0') {
      v8::internal::wasm::LiftoffAssembler::CacheState::InitMerge
                ((CacheState *)(lVar1 + -0x180),(int)param_1 + 0x1c8,*(uint *)(param_1 + 0x1b8),
                 *puVar2);
      cVar3 = *(char *)(lVar1 + -0x1e0);
    }
    puVar2 = (uint *)(lVar1 + -0x1c8);
    if (cVar3 != '\x03') {
      puVar2 = (uint *)(lVar1 + -0x1a8);
    }
    v8::internal::wasm::LiftoffAssembler::MergeStackWith
              (param_1,(CacheState *)(lVar1 + -0x180),*puVar2);
    v8::internal::Assembler::b((Assembler *)param_1,*(Label **)(lVar1 + -8));
  }
  v8::internal::Assembler::CheckVeneerPool((Assembler *)param_1,false,false,0x400);
LAB_017e0d58:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

