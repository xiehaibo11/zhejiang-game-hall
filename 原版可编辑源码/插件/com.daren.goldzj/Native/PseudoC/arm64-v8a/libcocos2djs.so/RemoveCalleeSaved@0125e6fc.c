
/* v8::internal::CPURegList::RemoveCalleeSaved() */

void __thiscall v8::internal::CPURegList::RemoveCalleeSaved(CPURegList *this)

{
  ulong uVar1;
  
  if (*(int *)(this + 0xc) == 0) {
    uVar1 = 0xffffffffc007ffff;
  }
  else {
    if (*(int *)(this + 0xc) != 1) {
      return;
    }
    uVar1 = 0xffffffffffff00ff;
  }
  *(ulong *)this = *(ulong *)this & uVar1;
  return;
}

