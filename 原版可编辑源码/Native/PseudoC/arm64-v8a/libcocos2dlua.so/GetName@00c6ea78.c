
/* cocostudio::stExpCocoAttribDesc::GetName(cocostudio::CocoLoader*) */

long __thiscall
cocostudio::stExpCocoAttribDesc::GetName(stExpCocoAttribDesc *this,CocoLoader *param_1)

{
  return *(long *)(param_1 + 0x18) + (ulong)*(uint *)(*(long *)param_1 + 0x54) +
         (ulong)*(uint *)(this + 4);
}

