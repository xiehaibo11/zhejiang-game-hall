
/* v8::internal::Assembler::b(int) */

void __thiscall v8::internal::Assembler::b(Assembler *this,int param_1)

{
  long lVar1;
  
  if ((long)param_1 + 0x2000000U >> 0x1a == 0) {
    **(uint **)(this + 0x20) = param_1 & 0x3ffffffU | 0x14000000;
    lVar1 = *(long *)(this + 0x20) + 4;
    *(long *)(this + 0x20) = lVar1;
    if (*(int *)(this + 0xd8) - (int)lVar1 < 0x40) {
      GrowBuffer(this);
      lVar1 = *(long *)(this + 0x20);
    }
    if (((*(int *)(this + 0x130) <= (int)lVar1 - (int)*(undefined8 *)(this + 0x10)) &&
        (*(long *)(this + 0x128) != 0)) && (*(int *)(this + 0xd0) < 1)) {
      if (*(long *)(this + 0x128) * 4 + (long)((int)lVar1 - (int)*(undefined8 *)(this + 0x10)) +
          0x408 < (long)*(int *)(*(long *)(this + 0x118) + 0x20)) {
        *(int *)(this + 0x130) = *(int *)(*(long *)(this + 0x118) + 0x20) + -0x800;
      }
      else {
        EmitVeneers(this,false,true,0x400);
      }
    }
    ConstantPool::MaybeCheck((ConstantPool *)(this + 0x138));
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int26(imm26)");
}

