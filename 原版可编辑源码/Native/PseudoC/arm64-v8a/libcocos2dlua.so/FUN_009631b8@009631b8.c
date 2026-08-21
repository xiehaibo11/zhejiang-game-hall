
long FUN_009631b8(long param_1,long param_2)

{
  param_1 = param_1 + 8;
                    /* catch() { ... } // from try @ 00963184 with catch @ 009631cc */
  if (*(undefined **)(param_2 + 8) != &DAT_012d57a1) {
    param_1 = 0;
  }
  return param_1;
}

