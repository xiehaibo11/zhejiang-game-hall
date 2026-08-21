
uint _TIFFMultiply32(long param_1,uint param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_3 * param_2;
  if (param_3 != 0) {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = uVar2 / param_3;
    }
    if (uVar1 != param_2) {
                    /* try { // try from 0112c4bc to 0122c4c3 has its CatchHandler @ 0112c4c4 */
                    /* catch() { ... } // from try @ 0112c474 with catch @ 0112c4c4
                       catch() { ... } // from try @ 0112c4bc with catch @ 0112c4c4
                       try { // try from 0112c4c4 to 0122c4e3 has its CatchHandler @ 0112c43c */
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),param_4,"Integer overflow in %s");
      uVar2 = 0;
    }
  }
  return uVar2;
}

