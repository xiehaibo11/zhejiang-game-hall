
/* universe::TanGaoXiong::~TanGaoXiong() */

void __thiscall universe::TanGaoXiong::~TanGaoXiong(TanGaoXiong *this)

{
  TanGaoXiong *pTVar1;
  code *pcVar2;
  
  pTVar1 = *(TanGaoXiong **)(this + 0x40);
  *(undefined ***)this = &PTR__TanGaoXiong_016a0090;
  if (this + 0x20 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (TanGaoXiong *)0x0) goto LAB_009dbd20;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_009dbd20:
  if (((byte)this[8] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}

