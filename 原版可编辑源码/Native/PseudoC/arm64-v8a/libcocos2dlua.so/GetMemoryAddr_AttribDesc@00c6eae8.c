
/* cocostudio::CocoLoader::GetMemoryAddr_AttribDesc() */

long __thiscall cocostudio::CocoLoader::GetMemoryAddr_AttribDesc(CocoLoader *this)

{
  return *(long *)(this + 0x18) + (ulong)*(uint *)(*(long *)this + 0x4c);
}

