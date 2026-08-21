
/* v8::internal::compiler::OperandGenerator::DefineAsLocation(v8::internal::compiler::Node*,
   v8::internal::compiler::LinkageLocation) */

ulong __thiscall
v8::internal::compiler::OperandGenerator::DefineAsLocation
          (OperandGenerator *this,long param_1,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)this;
  uVar5 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
  uVar2 = *(uint *)(*(long *)(lVar4 + 0x118) + uVar5 * 4);
  if (uVar2 == 0xffffffff) {
    uVar2 = InstructionSequence::NextVirtualRegister(*(InstructionSequence **)(lVar4 + 0x10));
    *(uint *)(*(long *)(lVar4 + 0x118) + uVar5 * 4) = uVar2;
  }
  if (((uint)param_3 < 0xfffffffe) || ((param_3 & 1) != 0)) {
    uVar1 = (uint)param_3 & 0x80000001;
    if ((uVar1 == 1) || (uVar1 == 0x80000001)) {
      uVar5 = (param_3 & 0x1ffffffe) << 0x23 | (ulong)uVar2 << 3 | 1;
    }
    else {
      if (((uint)(param_3 >> 0x20) & 0xff) < 0xb) {
        uVar5 = 0xb800000001;
      }
      else {
        uVar5 = 0xc800000001;
      }
      uVar5 = (param_3 & 0xfffffe) << 0x28 | (ulong)uVar2 << 3 | uVar5;
    }
  }
  else {
    uVar5 = (ulong)uVar2 << 3 | 0xd800000001;
  }
  uVar3 = ((ulong)*(uint *)(param_1 + 0x14) & 0xffffc0) >> 3;
  *(ulong *)(*(long *)(*(long *)this + 0xb8) + uVar3) =
       1L << ((ulong)*(uint *)(param_1 + 0x14) & 0x3f) |
       *(ulong *)(*(long *)(*(long *)this + 0xb8) + uVar3);
  return uVar5;
}

