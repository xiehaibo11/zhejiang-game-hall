
/* v8::internal::compiler::JSCallReducerAssembler::TypeGuardUnsignedSmall(v8::internal::TNode<v8::internal::Object>)
    */

void __thiscall
v8::internal::compiler::JSCallReducerAssembler::TypeGuardUnsignedSmall
          (JSCallReducerAssembler *this,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = BitsetType::UnsignedSmall();
  GraphAssembler::TypeGuard((GraphAssembler *)this,uVar1 | 1,param_2);
  return;
}

