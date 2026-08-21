
ulong FUN_010b8f4c(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  char *__s2;
  char *__s1;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
                    /* try { // try from 010b8f68 to 011b8f6f has its CatchHandler @ 010b90a8 */
  if (*param_2 + 1U < 0x100) {
    uVar4 = (ulong)(*param_2 + 1U);
    do {
      __s2 = (char *)(**(code **)(param_1 + 0x20))
                               (*(undefined2 *)(*(long *)(param_1 + 0x18) + uVar4 * 2));
                    /* try { // try from 010b8f8c to 011b8fd3 has its CatchHandler @ 010b90b8 */
      uVar1 = *(uint *)(param_1 + 0x28);
      if (uVar1 != 0) {
        lVar5 = *(long *)(param_1 + 0x30);
        uVar3 = 0;
        do {
          __s1 = *(char **)(lVar5 + uVar3 * 8);
          if (((__s1 != (char *)0x0) && (*__s1 == *__s2)) && (iVar2 = strcmp(__s1,__s2), iVar2 == 0)
             ) {
            if ((int)uVar3 != 0) goto LAB_010b8fec;
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
      }
      uVar4 = uVar4 + 1;
    } while ((uint)uVar4 < 0x100);
  }
  uVar3 = 0;
  uVar4 = 0;
LAB_010b8fec:
  *param_2 = (int)uVar4;
  return uVar3 & 0xffffffff;
}

