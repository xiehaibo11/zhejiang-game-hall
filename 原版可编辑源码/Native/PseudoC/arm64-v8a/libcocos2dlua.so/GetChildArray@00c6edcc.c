
/* cocostudio::stExpCocoNode::GetChildArray(cocostudio::CocoLoader*) */

long __thiscall cocostudio::stExpCocoNode::GetChildArray(stExpCocoNode *this,CocoLoader *param_1)

{
  return *(long *)(param_1 + 0x18) + (ulong)*(uint *)(*(long *)param_1 + 0x50) +
         (ulong)*(uint *)(this + 0xc);
}

