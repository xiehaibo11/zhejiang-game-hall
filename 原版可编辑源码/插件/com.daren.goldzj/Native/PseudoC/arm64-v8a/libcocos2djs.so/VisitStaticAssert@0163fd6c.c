
/* v8::internal::compiler::InstructionSelector::VisitStaticAssert(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitStaticAssert
          (InstructionSelector *this,Node *param_1)

{
  Node *this_00;
  
  this_00 = (Node *)Node::InputAt(param_1,0);
  Node::Print(this_00);
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Expected turbofan static assert to hold, but got non-true input!\n");
}

