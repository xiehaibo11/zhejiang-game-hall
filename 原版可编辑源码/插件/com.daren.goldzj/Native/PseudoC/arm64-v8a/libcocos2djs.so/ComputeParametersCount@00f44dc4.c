
/* v8::internal::JavaScriptFrame::ComputeParametersCount() const */

undefined2 __thiscall v8::internal::JavaScriptFrame::ComputeParametersCount(JavaScriptFrame *this)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*(long *)this + 0x98))();
  return *(undefined2 *)((uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 0xb)) + 0x15);
}

