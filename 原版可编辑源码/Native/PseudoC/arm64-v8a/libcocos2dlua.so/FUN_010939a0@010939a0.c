
undefined8 FUN_010939a0(long *param_1)

{
  *(int *)(param_1 + 3) = (int)*(undefined8 *)(*param_1 + 0x218);
  param_1[4] = *(long *)(*param_1 + 0x220);
                    /* catch() { ... } // from try @ 01093c1c with catch @ 010939b4 */
  return 0;
}

