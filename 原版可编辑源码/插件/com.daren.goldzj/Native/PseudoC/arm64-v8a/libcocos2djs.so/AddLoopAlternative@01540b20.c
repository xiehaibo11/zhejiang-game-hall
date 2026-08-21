
/* v8::internal::LoopChoiceNode::AddLoopAlternative(v8::internal::GuardedAlternative) */

void __thiscall
v8::internal::LoopChoiceNode::AddLoopAlternative(LoopChoiceNode *this,undefined8 param_2)

{
  ChoiceNode::AddAlternative();
  *(undefined8 *)(this + 0x48) = param_2;
  return;
}

