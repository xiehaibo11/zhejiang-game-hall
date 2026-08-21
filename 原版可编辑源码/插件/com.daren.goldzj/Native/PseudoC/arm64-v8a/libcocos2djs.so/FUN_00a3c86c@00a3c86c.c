
void FUN_00a3c86c(long param_1,undefined8 *param_2)

{
  char *__s;
  char cVar1;
  size_t sVar2;
  undefined1 *puVar3;
  long lVar4;
  
                    /* try { // try from 00a3c86c to 00b3c8bb has its CatchHandler @ 00a3c86c
                       catch() { ... } // from try @ 00a3c86c with catch @ 00a3c86c
                       catch() { ... } // from try @ 00a3c97c with catch @ 00a3c86c */
  for (lVar4 = 0; (cVar1 = *(char *)(param_1 + 2 + lVar4), cVar1 == ' ' || (cVar1 == '\t'));
      lVar4 = lVar4 + 1) {
  }
  __s = (char *)(param_1 + 2 + lVar4);
  sVar2 = strlen(__s);
  if (sVar2 != 0) {
                    /* try { // try from 00a3c8bc to 00b3c8d3 has its CatchHandler @ 00a3ca2c */
    puVar3 = (undefined1 *)(lVar4 + param_1 + sVar2 + 2);
    do {
      if ((0x20 < (byte)puVar3[-1]) ||
         ((1L << ((ulong)(byte)puVar3[-1] & 0x3f) & 0x100002600U) == 0)) {
        *puVar3 = 0;
        break;
      }
                    /* try { // try from 00a3c8e8 to 00b3c8fb has its CatchHandler @ 00a3ca28 */
      sVar2 = sVar2 - 1;
      puVar3 = puVar3 + -1;
    } while (sVar2 != 0);
  }
                    /* try { // try from 00a3c8fc to 00b3c90b has its CatchHandler @ 00a3ca14 */
  *param_2 = __s;
  return;
}

