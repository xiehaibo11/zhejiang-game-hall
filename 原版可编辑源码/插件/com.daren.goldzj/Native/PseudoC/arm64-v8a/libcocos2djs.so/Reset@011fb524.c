
/* v8::internal::VirtualMemory::Reset() */

void __thiscall v8::internal::VirtualMemory::Reset(VirtualMemory *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}

