
/* universe::core::Provided::Provided() */

void __thiscall universe::core::Provided::Provided(Provided *this)

{
  int iVar1;
  
                    /* try { // try from 00a00aa8 to 00b00b03 has its CatchHandler @ 00a00aa8
                       catch() { ... } // from try @ 00a00aa8 with catch @ 00a00aa8
                       catch() { ... } // from try @ 00a00d18 with catch @ 00a00aa8
                       catch() { ... } // from try @ 00a00ec0 with catch @ 00a00aa8 */
  *(undefined ***)this = &PTR__Provided_01c6c7c8;
  iVar1 = DAT_01d38a50 + 2;
  if (DAT_01d38a50 != -2) {
    iVar1 = DAT_01d38a50 + 1;
  }
  DAT_01d38a50 = iVar1;
  *(int *)(this + 8) = iVar1;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

