
/* v8::internal::JavaScriptFrame::unchecked_code() const */

ulong __thiscall v8::internal::JavaScriptFrame::unchecked_code(JavaScriptFrame *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x98))();
  return uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0x17);
}

