
undefined8 FUN_00a52fa8(long *param_1)

{
  (**(code **)(*param_1 + 8))(param_1[1]);
                    /* try { // try from 00a52fbc to 00b5300f has its CatchHandler @ 00a52fbc
                       catch() { ... } // from try @ 00a52fbc with catch @ 00a52fbc
                       catch() { ... } // from try @ 00a53124 with catch @ 00a52fbc */
  return 0;
}

