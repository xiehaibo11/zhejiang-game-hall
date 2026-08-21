
/* v8::internal::FrameInspector::IsJavaScript() */

uint __thiscall v8::internal::FrameInspector::IsJavaScript(FrameInspector *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)this + 8))();
  if (iVar1 - 4U < 0x11) {
    return 0x11901U >> (ulong)(iVar1 - 4U & 0x1f) & 1;
  }
  return 0;
}

