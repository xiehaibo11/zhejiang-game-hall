
void FUN_00a3b3a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* catch() { ... } // from try @ 00a3b258 with catch @ 00a3b3b4 */
                    /* catch() { ... } // from try @ 00a3b24c with catch @ 00a3b3b8 */
                    /* catch() { ... } // from try @ 00a3b22c with catch @ 00a3b3bc */
    FUN_00a3ae90(param_1,"AUTHENTICATE %s %s",param_2,param_3);
    return;
  }
                    /* catch() { ... } // from try @ 00a3b264 with catch @ 00a3b3cc */
  FUN_00a3ae90(param_1,"AUTHENTICATE %s",param_2);
  return;
}

