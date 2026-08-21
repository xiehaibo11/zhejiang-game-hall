
/* cocostudio::CocoLoader::GetMemoryAddr_String() */

long __thiscall cocostudio::CocoLoader::GetMemoryAddr_String(CocoLoader *this)

{
  return *(long *)(this + 0x18) + (ulong)*(uint *)(*(long *)this + 0x54);
}

