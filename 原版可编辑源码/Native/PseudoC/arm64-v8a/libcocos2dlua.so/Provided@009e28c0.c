
/* universe::core::Provided::Provided() */

void __thiscall universe::core::Provided::Provided(Provided *this)

{
  int iVar1;
  
  *(undefined ***)this = &PTR__Provided_016a0360;
  iVar1 = DAT_01782290 + 2;
  if (DAT_01782290 != -2) {
    iVar1 = DAT_01782290 + 1;
  }
                    /* catch() { ... } // from try @ 009e2848 with catch @ 009e28e8 */
  DAT_01782290 = iVar1;
  *(int *)(this + 8) = iVar1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

