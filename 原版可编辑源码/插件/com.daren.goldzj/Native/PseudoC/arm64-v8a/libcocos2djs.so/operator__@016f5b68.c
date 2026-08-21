
/* std::__ndk1::__function::__func<v8::internal::compiler::JSCallReducerAssembler::ForSmiZeroUntil(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,
   v8::internal::HeapNumber> >)::{lambda(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,
   v8::internal::HeapNumber> >)#2},
   std::__ndk1::allocator<v8::internal::compiler::JSCallReducerAssembler::ForSmiZeroUntil(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,
   v8::internal::HeapNumber> >)::{lambda(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,
   v8::internal::HeapNumber> >)#2}>, v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,
   v8::internal::HeapNumber> > (v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,
   v8::internal::HeapNumber>
   >)>::TEMPNAMEPLACEHOLDERVALUE(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,
   v8::internal::HeapNumber> >&&) */

void __thiscall
std::__ndk1::__function::
__func<v8::internal::compiler::JSCallReducerAssembler::ForSmiZeroUntil(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>)::{lambda(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>)#2},std::__ndk1::allocator<v8::internal::compiler::JSCallReducerAssembler::ForSmiZeroUntil(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>)::{lambda(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>)#2}>,v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>)>
::operator()(__func<v8::internal::compiler::JSCallReducerAssembler::ForSmiZeroUntil(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>)::_lambda(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>)_2_,std::__ndk1::allocator<v8::internal::compiler::JSCallReducerAssembler::ForSmiZeroUntil(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>)::_lambda(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>)_2_>,v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>(v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>)>
             *this,TNode *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  GraphAssembler *this_00;
  
  this_00 = *(GraphAssembler **)(this + 8);
  uVar2 = *(undefined8 *)param_1;
  uVar1 = v8::internal::compiler::GraphAssembler::OneConstant(this_00);
  v8::internal::compiler::GraphAssembler::NumberAdd(this_00,uVar2,uVar1);
  return;
}

