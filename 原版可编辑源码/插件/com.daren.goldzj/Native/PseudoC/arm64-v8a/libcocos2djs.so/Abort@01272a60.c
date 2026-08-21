
/* v8::internal::TurboAssembler::Abort(v8::internal::AbortReason) */

void __thiscall v8::internal::TurboAssembler::Abort(TurboAssembler *this,ulong param_2)

{
  TurboAssembler TVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 local_80 [8];
  undefined1 local_78;
  long local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (this[0x189] == (TurboAssembler)0x0) {
    uVar4 = *(ulong *)(this + 0x198);
    *(ulong *)(this + 0x198) = uVar4 | 0x30000;
    if (this[0x18a] == (TurboAssembler)0x0) {
      local_60 = (param_2 & 0xff) << 1;
      this[0x18a] = (TurboAssembler)0x1;
      local_80[0] = 0;
      local_78 = 0;
      local_58 = 0x13;
      local_50 = 0xffffffff;
      local_48 = 2;
      Mov(this,&DAT_019f415c,local_80,0);
      if (this[400] == (TurboAssembler)0x0) {
        this[400] = (TurboAssembler)0x1;
        uVar3 = Builtins::builtin_handle((Builtins *)(*(long *)(this + 0x178) + 0x9e00),0x94);
        Call(this,uVar3,0);
        this[400] = (TurboAssembler)0x0;
      }
      else {
        uVar3 = Builtins::builtin_handle((Builtins *)(*(long *)(this + 0x178) + 0x9e00),0x94);
        Call(this,uVar3,0);
      }
      *(ulong *)(this + 0x198) = uVar4;
      this[0x18a] = (TurboAssembler)0x0;
    }
    else {
      TVar1 = this[400];
      this[400] = (TurboAssembler)0x1;
      Mov(this,(Register *)&DAT_019f41c8,param_2 & 0xff);
      uVar3 = ExternalReference::abort_with_reason();
      Call(this,uVar3);
      this[400] = TVar1;
    }
  }
  else {
    Assembler::brk((int)this);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

