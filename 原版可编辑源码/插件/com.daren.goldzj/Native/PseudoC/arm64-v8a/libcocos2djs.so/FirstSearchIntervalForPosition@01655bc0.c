
/* v8::internal::compiler::LiveRange::FirstSearchIntervalForPosition(v8::internal::compiler::LifetimePosition)
   const */

undefined8 __thiscall
v8::internal::compiler::LiveRange::FirstSearchIntervalForPosition(LiveRange *this,int param_2)

{
  LiveRange *pLVar1;
  
  pLVar1 = this + 0x30;
  if (*(int **)pLVar1 != (int *)0x0) {
    if (**(int **)pLVar1 <= param_2) goto LAB_01655be0;
    *(undefined8 *)(this + 0x30) = 0;
  }
  pLVar1 = this + 0x10;
LAB_01655be0:
  return *(undefined8 *)pLVar1;
}

