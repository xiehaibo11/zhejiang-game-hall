
/* v8::internal::PatchingAssembler::~PatchingAssembler() */

void __thiscall v8::internal::PatchingAssembler::~PatchingAssembler(PatchingAssembler *this)

{
  void *extraout_x1;
  
  *(undefined ***)this = &PTR__PatchingAssembler_01cbcf38;
  *(int *)(*(long *)(this + 0x178) + 0xd0) = *(int *)(*(long *)(this + 0x178) + 0xd0) + -1;
  ConstantPool::BlockScope::~BlockScope((BlockScope *)(this + 0x180));
  Assembler::~Assembler((Assembler *)this);
  Malloced::operator_delete((Malloced *)this,extraout_x1);
  return;
}

