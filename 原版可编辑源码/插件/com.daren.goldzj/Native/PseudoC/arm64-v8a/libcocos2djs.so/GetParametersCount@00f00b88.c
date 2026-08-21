
/* v8::internal::FrameInspector::GetParametersCount() */

ulong __thiscall v8::internal::FrameInspector::GetParametersCount(FrameInspector *this)

{
  ulong uVar1;
  
  if (this[0x4c] != (FrameInspector)0x0) {
    return (ulong)(*(long *)(*(long *)(this + 0x10) + 0x18) -
                  *(long *)(*(long *)(this + 0x10) + 0x10)) >> 3;
  }
  if (*(InterpretedFrame **)(this + 0x18) != (InterpretedFrame *)0x0) {
    uVar1 = wasm::InterpretedFrame::GetParameterCount(*(InterpretedFrame **)(this + 0x18));
    return uVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00f00bc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(**(long **)this + 0x78))();
  return uVar1;
}

