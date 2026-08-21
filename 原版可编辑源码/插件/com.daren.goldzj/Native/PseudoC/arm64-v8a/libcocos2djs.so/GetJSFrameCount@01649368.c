
/* v8::internal::compiler::FrameStateDescriptor::GetJSFrameCount() const */

long __thiscall
v8::internal::compiler::FrameStateDescriptor::GetJSFrameCount(FrameStateDescriptor *this)

{
  long lVar1;
  
  lVar1 = 0;
  for (; this != (FrameStateDescriptor *)0x0; this = *(FrameStateDescriptor **)(this + 0x78)) {
    lVar1 = lVar1 + (ulong)(*(uint *)this == 5 || (*(uint *)this & 0xfffffffb) == 0);
  }
  return lVar1;
}

