
bool FUN_00a6a7b8(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  size_t sVar3;
  
  bVar1 = false;
  if (param_1 != (char *)0x0) {
                    /* try { // try from 00a6a7cc to 00b6a81f has its CatchHandler @ 00a6a7cc
                       catch() { ... } // from try @ 00a6a7cc with catch @ 00a6a7cc
                       catch() { ... } // from try @ 00a6a8c4 with catch @ 00a6a7cc
                       catch() { ... } // from try @ 00a6a924 with catch @ 00a6a7cc */
    if (*param_1 == '\0') {
      bVar1 = false;
    }
    else {
      pcVar2 = strpbrk(param_1,"\\/@");
      bVar1 = false;
      if ((pcVar2 != (char *)0x0) && (param_1 < pcVar2)) {
        sVar3 = strlen(param_1);
        bVar1 = pcVar2 < param_1 + (sVar3 - 1);
      }
    }
  }
                    /* try { // try from 00a6a820 to 00b6a85b has its CatchHandler @ 00a6a964 */
  return bVar1;
}

