
/* v8::internal::compiler::SparseInputMask::CountReal() const */

int __thiscall v8::internal::compiler::SparseInputMask::CountReal(SparseInputMask *this)

{
  undefined4 uVar1;
  undefined2 uVar2;
  uint uVar3;
  
  uVar1 = *(undefined4 *)this;
  uVar3 = CONCAT13(POPCOUNT((char)((uint)uVar1 >> 0x18)),
                   CONCAT12(POPCOUNT((char)((uint)uVar1 >> 0x10)),
                            CONCAT11(POPCOUNT((char)((uint)uVar1 >> 8)),POPCOUNT((char)uVar1))));
  uVar2 = NEON_uaddlv((ulong)uVar3,1);
  return CONCAT22((short)(uVar3 >> 0x10),uVar2) + -1;
}

