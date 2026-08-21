
/* v8::internal::compiler::SparseInputMask::InputIterator::InputIterator(unsigned int,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::SparseInputMask::InputIterator::InputIterator
          (InputIterator *this,uint param_1,Node *param_2)

{
  *(uint *)this = param_1;
  *(Node **)(this + 8) = param_2;
  *(undefined4 *)(this + 0x10) = 0;
  return;
}

