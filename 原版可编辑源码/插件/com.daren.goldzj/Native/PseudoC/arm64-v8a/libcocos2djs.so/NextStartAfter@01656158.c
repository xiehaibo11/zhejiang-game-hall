
/* v8::internal::compiler::LiveRange::NextStartAfter(v8::internal::compiler::LifetimePosition) */

int __thiscall v8::internal::compiler::LiveRange::NextStartAfter(LiveRange *this,int param_2)

{
  int iVar1;
  LiveRange *pLVar2;
  int *piVar3;
  
  pLVar2 = this + 0x30;
  if (*(int **)pLVar2 != (int *)0x0) {
    if (**(int **)pLVar2 <= param_2) goto LAB_01656178;
    *(undefined8 *)(this + 0x30) = 0;
  }
  pLVar2 = this + 0x10;
LAB_01656178:
  do {
    piVar3 = *(int **)pLVar2;
    pLVar2 = (LiveRange *)(piVar3 + 2);
    iVar1 = *piVar3;
  } while (iVar1 < param_2);
  *(int *)(this + 0x58) = iVar1;
  return iVar1;
}

