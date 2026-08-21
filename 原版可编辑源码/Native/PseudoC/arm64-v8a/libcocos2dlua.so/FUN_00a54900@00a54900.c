
void FUN_00a54900(long param_1,undefined8 *param_2)

{
  char *__s;
  char cVar1;
  size_t sVar2;
  undefined1 *puVar3;
  long lVar4;
  
  for (lVar4 = 0; (cVar1 = *(char *)(param_1 + 4 + lVar4), cVar1 == ' ' || (cVar1 == '\t'));
      lVar4 = lVar4 + 1) {
  }
  __s = (char *)(param_1 + 4 + lVar4);
  sVar2 = strlen(__s);
  if (sVar2 != 0) {
    puVar3 = (undefined1 *)(lVar4 + param_1 + sVar2 + 4);
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

