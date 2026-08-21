
/* v8::internal::FrameArrayIterator::Frame() */

WasmStackFrame * __thiscall v8::internal::FrameArrayIterator::Frame(FrameArrayIterator *this)

{
  long lVar1;
  uint uVar2;
  WasmStackFrame *pWVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 8);
  lVar1 = (long)(int)((*(int *)(this + 0x10) * 0x18 | 4U) + 0x10) + 7;
  uVar2 = *(uint *)(lVar1 + *plVar4) >> 1 & 7;
  if (uVar2 - 1 < 2) {
    pWVar3 = (WasmStackFrame *)(this + 0x18);
    WasmStackFrame::FromFrameArray(pWVar3,*(undefined8 *)this,plVar4);
  }
  else if (uVar2 == 4) {
    pWVar3 = (WasmStackFrame *)(this + 0x48);
    WasmStackFrame::FromFrameArray(pWVar3,*(undefined8 *)this,plVar4);
    this[0x74] = (FrameArrayIterator)((byte)(*(uint *)(*plVar4 + lVar1) >> 6) & 1);
  }
  else {
    if (uVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    pWVar3 = (WasmStackFrame *)(this + 0x78);
    JSStackFrame::FromFrameArray((JSStackFrame *)pWVar3,*(undefined8 *)this,plVar4);
  }
  return pWVar3;
}

