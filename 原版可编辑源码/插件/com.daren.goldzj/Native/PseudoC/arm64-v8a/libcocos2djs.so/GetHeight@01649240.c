
/* v8::internal::compiler::FrameStateDescriptor::GetHeight() const */

undefined8 __thiscall
v8::internal::compiler::FrameStateDescriptor::GetHeight(FrameStateDescriptor *this)

{
  uint uVar1;
  FrameStateDescriptor *pFVar2;
  
  uVar1 = *(uint *)this;
  if (uVar1 < 6) {
    if (((1 << (ulong)(uVar1 & 0x1f) & 0x36U) == 0) && (uVar1 == 0)) {
      pFVar2 = this + 0x18;
    }
    else {
      pFVar2 = this + 0x10;
    }
    return *(undefined8 *)pFVar2;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

