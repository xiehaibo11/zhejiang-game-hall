
/* v8::internal::wasm::LiftoffAssembler::Spill(v8::internal::wasm::LiftoffAssembler::VarState*) */

void __thiscall
v8::internal::wasm::LiftoffAssembler::Spill(LiftoffAssembler *this,VarState *param_1)

{
  int iVar1;
  VarState VVar2;
  long lVar3;
  ulong uVar4;
  undefined1 local_50;
  int local_4f;
  int iStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  VVar2 = *param_1;
  if (VVar2 != (VarState)0x0) {
    if (VVar2 == (VarState)0x2) {
      local_4f = *(int *)(param_1 + 4);
      if (param_1[1] == (VarState)0x1) {
        iStack_4b = 0;
        local_50 = 1;
      }
      else {
        iStack_4b = local_4f >> 0x1f;
        local_50 = 2;
      }
      uStack_43 = 0;
      uStack_47 = 0;
      Spill(this,*(undefined4 *)(param_1 + 8),&local_50);
    }
    else if (VVar2 == (VarState)0x1) {
      Spill(this,*(undefined4 *)(param_1 + 8),param_1[4],param_1[1]);
      uVar4 = (ulong)(byte)param_1[4];
      iVar1 = *(int *)(this + uVar4 * 4 + 0x248);
      *(int *)(this + uVar4 * 4 + 0x248) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        *(ulong *)(this + 0x240) =
             *(ulong *)(this + 0x240) & (1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
      }
    }
    *param_1 = (VarState)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

