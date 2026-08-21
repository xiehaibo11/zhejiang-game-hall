
/* v8::internal::compiler::GraphAssembler::TaggedEqual(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::GraphAssembler::TaggedEqual
          (GraphAssembler *this,Node *param_1,Node *param_2)

{
  Node *pNVar1;
  Node *pNVar2;
  
  pNVar1 = (Node *)ChangeTaggedToCompressed(this,param_1);
  pNVar2 = (Node *)ChangeTaggedToCompressed(this,param_2);
  Word32Equal(this,pNVar1,pNVar2);
  return;
}

