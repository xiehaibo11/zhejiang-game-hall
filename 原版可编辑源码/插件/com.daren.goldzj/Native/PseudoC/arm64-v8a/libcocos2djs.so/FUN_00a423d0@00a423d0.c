
undefined8 FUN_00a423d0(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  char *local_28;
  
                    /* try { // try from 00a423e0 to 00b424c3 has its CatchHandler @ 00a4221c */
  lVar1 = (*(code *)PTR_calloc_01d1b760)(1,0x20);
  lVar5 = *param_1;
  *(long *)(lVar5 + 0x218) = lVar1;
  if (lVar1 != 0) {
    uVar2 = FUN_00a2eb18(lVar5,*(undefined8 *)(lVar5 + 0x8cc0),0,&local_28,0,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if ((*local_28 == '\\') || (pcVar3 = local_28, *local_28 == '/')) {
                    /* catch() { ... } // from try @ 00a4229c with catch @ 00a42454 */
      pcVar3 = local_28 + 1;
    }
                    /* catch() { ... } // from try @ 00a42290 with catch @ 00a42458 */
    pcVar3 = (char *)(*(code *)PTR_strdup_01d1b758)(pcVar3);
                    /* catch() { ... } // from try @ 00a42270 with catch @ 00a4245c */
    *(char **)(lVar1 + 8) = pcVar3;
    if (pcVar3 != (char *)0x0) {
                    /* catch() { ... } // from try @ 00a422a8 with catch @ 00a4246c */
      pcVar4 = strchr(pcVar3,0x2f);
      if ((pcVar4 == (char *)0x0) && (pcVar4 = strchr(pcVar3,0x5c), pcVar4 == (char *)0x0)) {
        (*(code *)PTR_free_01d1b748)(local_28);
        return 3;
      }
      pcVar3 = pcVar4 + 1;
      *pcVar4 = '\0';
      *(char **)(lVar1 + 0x10) = pcVar3;
      do {
        if (*pcVar3 == '/') {
          *pcVar3 = '\\';
        }
        else if (*pcVar3 == '\0') {
                    /* try { // try from 00a424c4 to 00b4251b has its CatchHandler @ 00a424c4
                       catch() { ... } // from try @ 00a424c4 with catch @ 00a424c4
                       catch() { ... } // from try @ 00a4267c with catch @ 00a424c4 */
          (*(code *)PTR_free_01d1b748)(local_28);
          return 0;
        }
        pcVar3 = pcVar3 + 1;
      } while( true );
    }
    (*(code *)PTR_free_01d1b748)(local_28);
  }
  return 0x1b;
}

