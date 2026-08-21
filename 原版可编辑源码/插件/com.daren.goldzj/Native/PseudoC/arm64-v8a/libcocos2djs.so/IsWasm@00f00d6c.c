
/* v8::internal::FrameInspector::IsWasm() */

bool __thiscall v8::internal::FrameInspector::IsWasm(FrameInspector *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(long **)this + 8))();
  return iVar1 == 5 || iVar1 == 8;
}

