
/* v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::~IteratingArrayBuiltinReducerAssembler()
    */

void __thiscall
v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::
~IteratingArrayBuiltinReducerAssembler(IteratingArrayBuiltinReducerAssembler *this)

{
  *(undefined ***)this = &PTR__JSCallReducerAssembler_01ccd380;
  if (*(long *)(this + 0x50) != 0) {
    *(long *)(this + 0x58) = *(long *)(this + 0x50);
  }
  GraphAssembler::~GraphAssembler((GraphAssembler *)this);
  operator_delete(this);
  return;
}

