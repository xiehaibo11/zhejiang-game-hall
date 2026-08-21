
/* v8::internal::compiler::FrameStateDescriptor::GetFrameCount() const */

long __thiscall
v8::internal::compiler::FrameStateDescriptor::GetFrameCount(FrameStateDescriptor *this)

{
  long lVar1;
  
  lVar1 = 0;
  for (; this != (FrameStateDescriptor *)0x0; this = *(FrameStateDescriptor **)(this + 0x78)) {
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}

