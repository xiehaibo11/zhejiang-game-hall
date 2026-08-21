
bool ossl_statem_in_error(long param_1)

{
                    /* try { // try from 00ace894 to 00bce8eb has its CatchHandler @ 00ace894
                       catch() { ... } // from try @ 00ace894 with catch @ 00ace894
                       catch() { ... } // from try @ 00ace8f0 with catch @ 00ace894 */
  return *(int *)(param_1 + 0x48) == 1;
}

