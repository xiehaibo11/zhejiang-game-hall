
/* cocostudio::stExpCocoObjectDesc::GetAttribDescArray(cocostudio::CocoLoader*) */

long __thiscall
cocostudio::stExpCocoObjectDesc::GetAttribDescArray(stExpCocoObjectDesc *this,CocoLoader *param_1)

{
  return *(long *)(param_1 + 0x18) + (ulong)*(uint *)(*(long *)param_1 + 0x4c) +
         (ulong)*(uint *)(this + 8);
}

