
void FUN_00a3b3f0(long param_1,undefined8 *param_2)

{
  char *__s;
  char cVar1;
  size_t sVar2;
  undefined1 *puVar3;
  long lVar4;
  
                    /* try { // try from 00a3b424 to 00b3b477 has its CatchHandler @ 00a3b424
                       catch() { ... } // from try @ 00a3b424 with catch @ 00a3b424
                       catch() { ... } // from try @ 00a3b5e4 with catch @ 00a3b424 */
  for (lVar4 = 0; (cVar1 = *(char *)(param_1 + 2 + lVar4), cVar1 == ' ' || (cVar1 == '\t'));
      lVar4 = lVar4 + 1) {
  }
  __s = (char *)(param_1 + 2 + lVar4);
  sVar2 = strlen(__s);
  if (sVar2 != 0) {
    puVar3 = (undefined1 *)(lVar4 + param_1 + sVar2 + 2);
    do {
      if ((0x20 < (byte)puVar3[-1]) ||
         ((1L << ((ulong)(byte)puVar3[-1] & 0x3f) & 0x100002600U) == 0)) {
        *puVar3 = 0;
        break;
      }
      sVar2 = sVar2 - 1;
      puVar3 = puVar3 + -1;
    } while (sVar2 != 0);
  }
  *param_2 = __s;
  return;
}

