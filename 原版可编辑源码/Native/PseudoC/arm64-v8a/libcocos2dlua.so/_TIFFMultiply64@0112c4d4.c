
ulong _TIFFMultiply64(long param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_3 * param_2;
  if (param_3 != 0) {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = uVar2 / param_3;
    }
                    /* try { // try from 0112c4e4 to 0122c523 has its CatchHandler @ 0112c4e4
                       catch() { ... } // from try @ 0112c4e4 with catch @ 0112c4e4
                       catch() { ... } // from try @ 0112c52c with catch @ 0112c4e4 */
    if (uVar1 != param_2) {
      TIFFErrorExt(*(undefined8 *)(param_1 + 0x3b8),param_4,"Integer overflow in %s");
      uVar2 = 0;
    }
  }
  return uVar2;
}

