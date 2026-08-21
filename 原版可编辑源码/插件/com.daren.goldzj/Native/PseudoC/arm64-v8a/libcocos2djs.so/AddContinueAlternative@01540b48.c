
/* v8::internal::LoopChoiceNode::AddContinueAlternative(v8::internal::GuardedAlternative) */

void __thiscall
v8::internal::LoopChoiceNode::AddContinueAlternative(LoopChoiceNode *this,undefined8 param_2)

{
  ChoiceNode::AddAlternative();
  *(undefined8 *)(this + 0x50) = param_2;
  return;
}

