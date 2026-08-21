
/* v8::internal::PatchingAssembler::~PatchingAssembler() */

void __thiscall v8::internal::PatchingAssembler::~PatchingAssembler(PatchingAssembler *this)

{
  *(undefined ***)this = &PTR__PatchingAssembler_01cbcf38;
  *(int *)(*(long *)(this + 0x178) + 0xd0) = *(int *)(*(long *)(this + 0x178) + 0xd0) + -1;
  ConstantPool::BlockScope::~BlockScope((BlockScope *)(this + 0x180));
  Assembler::~Assembler((Assembler *)this);
  return;
}

