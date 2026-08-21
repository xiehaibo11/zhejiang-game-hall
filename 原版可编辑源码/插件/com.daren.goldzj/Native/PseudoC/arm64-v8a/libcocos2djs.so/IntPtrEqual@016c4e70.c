
/* v8::internal::compiler::GraphAssembler::IntPtrEqual(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void v8::internal::compiler::GraphAssembler::IntPtrEqual(Node *param_1,Node *param_2)

{
  Node *in_x2;
  
  WordEqual((GraphAssembler *)param_1,param_2,in_x2);
  return;
}

