
/* universe::core::SimpleProvided::~SimpleProvided() */

void __thiscall universe::core::SimpleProvided::~SimpleProvided(SimpleProvided *this)

{
  SimpleProvided *pSVar1;
  code *pcVar2;
  
  pSVar1 = *(SimpleProvided **)(this + 0x40);
  *(undefined ***)this = &PTR__SimpleProvided_016a0390;
  if (this + 0x20 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
  }
  else {
    if (pSVar1 == (SimpleProvided *)0x0) goto LAB_009e2a80;
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009e2a80:
  operator_delete(this);
  return;
}

