
/* v8::internal::compiler::InstructionSelector::VisitUnsafePointerAdd(v8::internal::compiler::Node*)
    */

void v8::internal::compiler::InstructionSelector::VisitUnsafePointerAdd(Node *param_1)

{
  Node *in_x1;
  
  VisitInt64Add((InstructionSelector *)param_1,in_x1);
  return;
}

