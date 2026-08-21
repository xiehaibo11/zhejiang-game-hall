
/* v8::internal::ConstantPool::EmitPrologue(v8::internal::Alignment) */

void __thiscall v8::internal::ConstantPool::EmitPrologue(ConstantPool *this,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ComputeSize(this,0,param_2);
  iVar1 = iVar2 + 3;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  if ((iVar1 >> 2) + 0x3ffffU < 0x80000) {
    Assembler::Emit(*(Assembler **)this,(iVar1 >> 2) * 0x20 + 0xffffe0U & 0xffffe0 | 0x5800001f);
    Assembler::Emit(*(Assembler **)this,0xd63f03e0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int19(imm19)");
}

