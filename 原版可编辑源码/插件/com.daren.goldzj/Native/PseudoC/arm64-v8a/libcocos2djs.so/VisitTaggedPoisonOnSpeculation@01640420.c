
/* v8::internal::compiler::InstructionSelector::VisitTaggedPoisonOnSpeculation(v8::internal::compiler::Node*)
    */

void v8::internal::compiler::InstructionSelector::VisitTaggedPoisonOnSpeculation(Node *param_1)

{
  Node *in_x1;
  
  EmitWordPoisonOnSpeculation((InstructionSelector *)param_1,in_x1);
  return;
}

