
/* v8::internal::wasm::LiftoffAssembler::SpillLocals() */

void __thiscall v8::internal::wasm::LiftoffAssembler::SpillLocals(LiftoffAssembler *this)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(this + 0x1b8) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      Spill(this,(VarState *)(*(long *)(this + 0x1c8) + lVar1));
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0xc;
    } while (uVar2 < *(uint *)(this + 0x1b8));
  }
  return;
}

