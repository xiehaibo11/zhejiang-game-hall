
/* v8::internal::Assembler::near_call(int, v8::internal::RelocInfo::Mode) */

void __thiscall v8::internal::Assembler::near_call(Assembler *this,uint param_1,char param_3)

{
  BlockScope aBStack_70 [8];
  undefined8 local_68;
  char local_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  ConstantPool::BlockScope::BlockScope(aBStack_70,this,0);
  if ((*(long *)(this + 0x128) != 0) && (*(int *)(this + 0xd0) < 1)) {
    if (*(long *)(this + 0x128) * 4 + (long)(*(int *)(this + 0x20) - *(int *)(this + 0x10)) + 8 <
        (long)*(int *)(*(long *)(this + 0x118) + 0x20)) {
      *(int *)(this + 0x130) = *(int *)(*(long *)(this + 0x118) + 0x20) + -0x800;
    }
    else {
      EmitVeneers(this,false,true,0);
    }
  }
  *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + 1;
  if (((param_3 != '\x13') && (this[0xa1] == (Assembler)0x0)) &&
     (((param_3 != '\n' && (param_3 != '\a')) ||
      ((this[0xa0] != (Assembler)0x0 || (this[0xc0] != (Assembler)0x0)))))) {
    local_68 = *(undefined8 *)(this + 0x20);
    uStack_50 = 0;
    local_48 = 0;
    local_60 = param_3;
    local_58 = (long)(int)param_1;
    RelocInfoWriter::Write((RelocInfoWriter *)(this + 0xd8),(RelocInfo *)&local_68);
  }
  if ((long)(int)param_1 + 0x2000000U >> 0x1a == 0) {
    Emit(this,param_1 & 0x3ffffff | 0x94000000);
    *(int *)(this + 0xd0) = *(int *)(this + 0xd0) + -1;
    ConstantPool::BlockScope::~BlockScope(aBStack_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","is_int26(imm26)");
}

