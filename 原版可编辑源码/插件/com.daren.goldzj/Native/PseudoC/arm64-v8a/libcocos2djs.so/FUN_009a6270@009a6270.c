
void FUN_009a6270(long param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_01c6a770;
                    /* try { // try from 009a627c to 00aa62d3 has its CatchHandler @ 009a627c
                       catch() { ... } // from try @ 009a627c with catch @ 009a627c
                       catch() { ... } // from try @ 009a643c with catch @ 009a627c */
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return;
}

