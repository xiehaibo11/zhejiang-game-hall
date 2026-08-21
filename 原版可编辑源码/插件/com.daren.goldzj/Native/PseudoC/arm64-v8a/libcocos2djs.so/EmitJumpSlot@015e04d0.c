
/* v8::internal::wasm::JumpTableAssembler::EmitJumpSlot(unsigned long) */

bool __thiscall
v8::internal::wasm::JumpTableAssembler::EmitJumpSlot(JumpTableAssembler *this,ulong param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = param_1 - *(long *)(this + 0x20);
  lVar2 = lVar4 + 3;
  if (-1 < lVar4) {
    lVar2 = lVar4;
  }
  uVar3 = TurboAssembler::IsNearCallOffset(lVar2 >> 2);
  bVar1 = (uVar3 & 1) != 0;
  if (bVar1) {
    TurboAssembler::Jump(this,param_1,0x13,0xe);
  }
  return bVar1;
}

