
long FUN_009fc884(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  char *__s;
  size_t __n;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar2 = lua_tointeger(param_1,2);
                    /* try { // try from 009fc8b4 to 00afc8f3 has its CatchHandler @ 009fc8b4
                       catch() { ... } // from try @ 009fc8b4 with catch @ 009fc8b4
                       catch() { ... } // from try @ 009fc904 with catch @ 009fc8b4 */
  if ((lVar2 != 0) || (iVar1 = lua_type(param_1,2), iVar1 == 3)) {
    if (param_2 == 0) {
      return 0;
    }
    if (*(long *)(param_2 + 0x10) == 0) {
      return 0;
    }
    iVar1 = (int)lVar2;
    if (iVar1 == 0) {
      if (-1 < *(int *)(param_2 + 0x20)) {
        return 0;
      }
      plVar5 = *(long **)(param_2 + 0x28);
    }
    else {
      uVar4 = *(long *)(param_2 + 0x10) - 1;
      uVar6 = (long)iVar1 * 0x9e3779b1;
      uVar7 = uVar4 & uVar6;
                    /* try { // try from 009fc8f4 to 00afc903 has its CatchHandler @ 009fc97c */
      if ((uVar4 & uVar6) == 0) {
        uVar7 = 1;
      }
                    /* try { // try from 009fc904 to 00afc997 has its CatchHandler @ 009fc8b4 */
      for (plVar5 = (long *)(*(long *)(param_2 + 0x28) +
                            uVar7 * ((ulong)*(uint *)(param_2 + 0x20) & 0x7fffffff));
          plVar5[1] != (long)iVar1; plVar5 = (long *)((long)plVar5 + *plVar5)) {
        if (*plVar5 == 0) {
          return 0;
        }
      }
    }
    goto LAB_009fca6c;
  }
  lVar2 = FUN_009f9a54(param_1);
  __s = (char *)luaL_checklstring(param_1,2,0);
  if (__s == (char *)0x0) {
    return 0;
  }
  __n = strlen(__s);
  uVar7 = __n >> 5;
  if (uVar7 < __n) {
    uVar4 = __n & 0xffffffff;
    uVar6 = __n;
    do {
      lVar3 = uVar6 - 1;
      uVar8 = (uint)uVar4;
      uVar6 = uVar6 + ~uVar7;
                    /* catch() { ... } // from try @ 009fc8f4 with catch @ 009fc97c */
      uVar4 = (ulong)(uVar8 * 0x20 + (uVar8 >> 2) + (uint)(byte)__s[lVar3] ^ uVar8);
    } while (uVar7 < uVar6);
    lVar3 = *(long *)(lVar2 + 0x30);
    if (lVar3 != 0) goto LAB_009fc990;
LAB_009fca00:
                    /* try { // try from 009fca00 to 00afca17 has its CatchHandler @ 009fcc68 */
    plVar5 = (long *)0x0;
  }
  else {
    uVar4 = __n & 0xffffffff;
    lVar3 = *(long *)(lVar2 + 0x30);
    if (lVar3 == 0) goto LAB_009fca00;
LAB_009fc990:
                    /* try { // try from 009fc998 to 00afc9db has its CatchHandler @ 009fc998
                       catch() { ... } // from try @ 009fc998 with catch @ 009fc998
                       catch() { ... } // from try @ 009fcad8 with catch @ 009fc998
                       catch() { ... } // from try @ 009fcb40 with catch @ 009fc998
                       catch() { ... } // from try @ 009fcb70 with catch @ 009fc998 */
    plVar5 = *(long **)(lVar3 + (*(int *)(lVar2 + 0x20) - 1 & uVar4) * 8);
                    /* try { // try from 009fc9dc to 00afc9f3 has its CatchHandler @ 009fcc90 */
    while ((plVar5 != (long *)0x0 &&
           ((((int)uVar4 != (int)plVar5[1] || (__n != ((ulong)plVar5[1] >> 0x20 & 0xffff))) ||
            (iVar1 = memcmp(__s,plVar5 + 2,__n), iVar1 != 0))))) {
      plVar5 = (long *)*plVar5;
    }
  }
  lVar2 = 0;
  if (plVar5 != (long *)0x0) {
    lVar2 = (long)plVar5 + 0x10;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (lVar2 == 0) {
    return 0;
  }
                    /* try { // try from 009fca1c to 00afca2b has its CatchHandler @ 009fcc28 */
  if (*(long *)(param_2 + 0x30) == 0) {
    return 0;
  }
  uVar4 = *(long *)(param_2 + 0x30) - 1;
  uVar7 = uVar4 & lVar2 * 0x9e3779b1;
  if ((uVar4 & lVar2 * 0x9e3779b1) == 0) {
    uVar7 = 1;
  }
                    /* try { // try from 009fca48 to 00afca5b has its CatchHandler @ 009fcbec */
  for (plVar5 = (long *)(*(long *)(param_2 + 0x48) +
                        uVar7 * ((ulong)*(uint *)(param_2 + 0x40) & 0x7fffffff)); plVar5[1] != lVar2
      ; plVar5 = (long *)((long)plVar5 + *plVar5)) {
    if (*plVar5 == 0) {
      return 0;
    }
  }
LAB_009fca6c:
  if (plVar5 == (long *)0x0) {
                    /* try { // try from 009fca80 to 00afca97 has its CatchHandler @ 009fcc8c */
    return 0;
  }
  return plVar5[2];
}

