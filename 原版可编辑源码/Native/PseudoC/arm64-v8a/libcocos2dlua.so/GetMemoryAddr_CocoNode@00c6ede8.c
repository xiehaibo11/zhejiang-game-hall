
/* cocostudio::CocoLoader::GetMemoryAddr_CocoNode() */

long __thiscall cocostudio::CocoLoader::GetMemoryAddr_CocoNode(CocoLoader *this)

{
  return *(long *)(this + 0x18) + (ulong)*(uint *)(*(long *)this + 0x50);
}

