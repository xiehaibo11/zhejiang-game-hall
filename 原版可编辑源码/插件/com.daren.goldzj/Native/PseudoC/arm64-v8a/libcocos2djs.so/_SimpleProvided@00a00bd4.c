
/* universe::core::SimpleProvided::~SimpleProvided() */

void __thiscall universe::core::SimpleProvided::~SimpleProvided(SimpleProvided *this)

{
  SimpleProvided *pSVar1;
  
  pSVar1 = *(SimpleProvided **)(this + 0x40);
                    /* try { // try from 00a00be0 to 00b00beb has its CatchHandler @ 00a00f20 */
                    /* try { // try from 00a00bec to 00b00bfb has its CatchHandler @ 00a00f08 */
  *(undefined ***)this = &PTR__SimpleProvided_01c6c7f8;
  if (this + 0x20 == pSVar1) {
                    /* WARNING: Could not recover jumptable at 0x00a00c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00a00c10 to 00b00c17 has its CatchHandler @ 00a00ee8 */
    (**(code **)(*(long *)pSVar1 + 0x20))();
    return;
  }
  if (pSVar1 != (SimpleProvided *)0x0) {
                    /* try { // try from 00a00c00 to 00b00c0b has its CatchHandler @ 00a00ef8 */
                    /* WARNING: Could not recover jumptable at 0x00a00c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pSVar1 + 0x28))();
    return;
  }
  return;
}

