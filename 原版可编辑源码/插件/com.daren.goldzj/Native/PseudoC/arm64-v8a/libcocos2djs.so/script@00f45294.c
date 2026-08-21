
/* v8::internal::JavaScriptFrame::script() const */

ulong __thiscall v8::internal::JavaScriptFrame::script(JavaScriptFrame *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (**(code **)(*(long *)this + 0x98))();
  uVar2 = uVar1 & 0xffffffff00000000;
  uVar1 = uVar2 | *(uint *)((uVar2 | *(uint *)(uVar1 + 0xb)) + 0xf);
  if (*(short *)((uVar2 | 7) + (ulong)*(uint *)(uVar1 - 1)) == 0x5b) {
    uVar1 = uVar2 | *(uint *)(uVar1 + 0xb);
  }
  return uVar1;
}

