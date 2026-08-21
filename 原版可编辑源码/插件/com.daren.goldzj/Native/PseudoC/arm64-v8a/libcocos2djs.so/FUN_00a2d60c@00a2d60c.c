
int FUN_00a2d60c(char *param_1,size_t param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  void *__dest;
  int iVar3;
  size_t __n;
  char *pcVar4;
  char *pcVar5;
  void *__dest_00;
  void *__dest_01;
  
                    /* try { // try from 00a2d610 to 00b2d66b has its CatchHandler @ 00a2d610
                       catch() { ... } // from try @ 00a2d610 with catch @ 00a2d610
                       catch() { ... } // from try @ 00a2d904 with catch @ 00a2d610 */
  if (param_4 == (undefined8 *)0x0) {
    pcVar4 = (char *)0x0;
    if (param_5 != (undefined8 *)0x0) goto LAB_00a2d660;
LAB_00a2d6c8:
    pcVar1 = (char *)0x0;
    if (pcVar4 != (char *)0x0) goto LAB_00a2d67c;
LAB_00a2d6d0:
    if (pcVar1 != (char *)0x0) {
      pcVar2 = (char *)0x0;
      __n = (long)pcVar1 - (long)param_1;
      goto LAB_00a2d6e0;
    }
    pcVar2 = (char *)0x0;
    pcVar5 = (char *)0x0;
    __n = param_2;
  }
  else {
    pcVar1 = strchr(param_1,0x3a);
    pcVar4 = (char *)0x0;
    if (pcVar1 < param_1 + param_2) {
      pcVar4 = pcVar1;
    }
    if (param_5 == (undefined8 *)0x0) goto LAB_00a2d6c8;
LAB_00a2d660:
    pcVar2 = strchr(param_1,0x3b);
                    /* try { // try from 00a2d66c to 00b2d683 has its CatchHandler @ 00a2d988 */
    pcVar1 = (char *)0x0;
    if (pcVar2 < param_1 + param_2) {
      pcVar1 = pcVar2;
    }
    if (pcVar4 == (char *)0x0) goto LAB_00a2d6d0;
LAB_00a2d67c:
    pcVar5 = pcVar1;
                    /* try { // try from 00a2d68c to 00b2d697 has its CatchHandler @ 00a2d984 */
    if (pcVar1 == (char *)0x0 || pcVar4 <= pcVar1) {
      pcVar5 = pcVar4;
    }
                    /* try { // try from 00a2d698 to 00b2d6a3 has its CatchHandler @ 00a2d980 */
    pcVar2 = pcVar1;
                    /* try { // try from 00a2d6a4 to 00b2d903 has its CatchHandler @ 00a2d998 */
    if (pcVar1 == (char *)0x0 || pcVar1 <= pcVar4) {
      pcVar2 = param_1 + param_2;
    }
    __n = (long)pcVar5 - (long)param_1;
    pcVar2 = pcVar2 + (-1 - (long)pcVar4);
    if (pcVar1 == (char *)0x0) {
      pcVar5 = (char *)0x0;
    }
    else {
LAB_00a2d6e0:
      pcVar5 = pcVar4;
      if (pcVar4 <= pcVar1 || pcVar4 == (char *)0x0) {
        pcVar5 = param_1 + param_2;
      }
      pcVar5 = pcVar5 + ~(ulong)pcVar1;
    }
  }
  iVar3 = 0;
  __dest_00 = (void *)0x0;
  if ((param_3 != (undefined8 *)0x0) && (__n != 0)) {
    __dest_00 = (void *)(*(code *)PTR_malloc_01d1b740)(__n + 1);
    iVar3 = 0x1b;
    if (__dest_00 != (void *)0x0) {
      iVar3 = 0;
    }
  }
  __dest_01 = (void *)0x0;
  if (((pcVar2 == (char *)0x0) || (param_4 == (undefined8 *)0x0)) || (iVar3 != 0)) {
LAB_00a2d760:
    if (((pcVar5 == (char *)0x0) || (param_5 == (undefined8 *)0x0)) || (iVar3 != 0)) {
      if (iVar3 != 0) {
        return iVar3;
      }
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)(*(code *)PTR_malloc_01d1b740)(pcVar5 + 1);
      if (__dest == (void *)0x0) {
        (*(code *)PTR_free_01d1b748)(__dest_01);
        goto LAB_00a2d860;
      }
    }
    if (__dest_00 != (void *)0x0) {
      memcpy(__dest_00,param_1,__n);
      *(undefined1 *)((long)__dest_00 + __n) = 0;
      (*(code *)PTR_free_01d1b748)(*param_3);
      *param_3 = __dest_00;
    }
    if (__dest_01 != (void *)0x0) {
      memcpy(__dest_01,pcVar4 + 1,(size_t)pcVar2);
      *(char *)((long)__dest_01 + (long)pcVar2) = '\0';
      (*(code *)PTR_free_01d1b748)(*param_4);
      *param_4 = __dest_01;
    }
    if (__dest == (void *)0x0) {
      iVar3 = 0;
    }
    else {
      memcpy(__dest,pcVar1 + 1,(size_t)pcVar5);
      *(char *)((long)__dest + (long)pcVar5) = '\0';
      (*(code *)PTR_free_01d1b748)(*param_5);
      iVar3 = 0;
      *param_5 = __dest;
    }
  }
  else {
    __dest_01 = (void *)(*(code *)PTR_malloc_01d1b740)(pcVar2 + 1);
    if (__dest_01 != (void *)0x0) {
      iVar3 = 0;
      goto LAB_00a2d760;
    }
LAB_00a2d860:
    (*(code *)PTR_free_01d1b748)(__dest_00);
    iVar3 = 0x1b;
  }
  return iVar3;
}

