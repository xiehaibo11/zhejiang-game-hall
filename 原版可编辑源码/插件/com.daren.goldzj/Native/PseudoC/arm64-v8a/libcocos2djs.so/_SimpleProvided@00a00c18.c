
/* universe::core::SimpleProvided::~SimpleProvided() */

void __thiscall universe::core::SimpleProvided::~SimpleProvided(SimpleProvided *this)

{
  SimpleProvided *pSVar1;
  code *pcVar2;
  
                    /* try { // try from 00a00c2c to 00b00c37 has its CatchHandler @ 00a00ed8 */
  pSVar1 = *(SimpleProvided **)(this + 0x40);
                    /* try { // try from 00a00c3c to 00b00c43 has its CatchHandler @ 00a00ec8 */
  *(undefined ***)this = &PTR__SimpleProvided_01c6c7f8;
  if (this + 0x20 == pSVar1) {
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x20);
  }
  else {
    if (pSVar1 == (SimpleProvided *)0x0) goto LAB_00a00c64;
    pcVar2 = *(code **)(*(long *)pSVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00a00c64:
  operator_delete(this);
  return;
}

