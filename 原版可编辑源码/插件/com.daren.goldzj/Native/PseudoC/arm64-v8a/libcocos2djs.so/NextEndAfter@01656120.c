
/* v8::internal::compiler::LiveRange::NextEndAfter(v8::internal::compiler::LifetimePosition) const
    */

void __thiscall v8::internal::compiler::LiveRange::NextEndAfter(LiveRange *this,int param_2)

{
  LiveRange *pLVar1;
  long lVar2;
  
  pLVar1 = this + 0x30;
  if (*(int **)pLVar1 != (int *)0x0) {
    if (**(int **)pLVar1 <= param_2) goto LAB_01656140;
    *(undefined8 *)(this + 0x30) = 0;
  }
  pLVar1 = this + 0x10;
LAB_01656140:
  do {
    lVar2 = *(long *)pLVar1;
    pLVar1 = (LiveRange *)(lVar2 + 8);
  } while (*(int *)(lVar2 + 4) < param_2);
  return;
}

