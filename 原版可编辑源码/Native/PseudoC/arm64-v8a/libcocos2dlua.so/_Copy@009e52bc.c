
/* universe::Copy::~Copy() */

void __thiscall universe::Copy::~Copy(Copy *this)

{
  Copy *pCVar1;
  code *pcVar2;
  
  pCVar1 = *(Copy **)(this + 0x50);
  *(undefined ***)this = &PTR__Copy_016a0540;
  if (this + 0x30 == pCVar1) {
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x20);
  }
  else {
    if (pCVar1 == (Copy *)0x0) goto LAB_009e5308;
    pcVar2 = *(code **)(*(long *)pCVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009e5308:
  Example::~Example((Example *)this);
  return;
}

