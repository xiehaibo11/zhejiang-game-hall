
/* universe::core::SimpleProvided::~SimpleProvided() */

void __thiscall universe::core::SimpleProvided::~SimpleProvided(SimpleProvided *this)

{
  SimpleProvided *pSVar1;
  
  pSVar1 = *(SimpleProvided **)(this + 0x40);
  *(undefined ***)this = &PTR__SimpleProvided_016a0390;
  if (this + 0x20 == pSVar1) {
                    /* WARNING: Could not recover jumptable at 0x009e2a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pSVar1 + 0x20))();
    return;
  }
  if (pSVar1 != (SimpleProvided *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x009e2a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pSVar1 + 0x28))();
    return;
  }
  return;
}

