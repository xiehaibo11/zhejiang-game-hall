
/* universe::Unzipper::~Unzipper() */

void __thiscall universe::Unzipper::~Unzipper(Unzipper *this)

{
  Unzipper *pUVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__Unzipper_016a0a18;
  if (((byte)this[0x60] & 1) != 0) {
    operator_delete(*(void **)(this + 0x70));
  }
  pUVar1 = *(Unzipper **)(this + 0x50);
  if (this + 0x30 == pUVar1) {
    pcVar2 = *(code **)(*(long *)pUVar1 + 0x20);
  }
  else {
    if (pUVar1 == (Unzipper *)0x0) goto LAB_009e7228;
    pcVar2 = *(code **)(*(long *)pUVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009e7228:
  Example::~Example((Example *)this);
  return;
}

