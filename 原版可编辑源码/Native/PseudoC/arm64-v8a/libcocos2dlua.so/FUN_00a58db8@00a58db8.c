
undefined8 FUN_00a58db8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  long lVar5;
  char *local_28;
  
                    /* try { // try from 00a58db8 to 00b58dbf has its CatchHandler @ 00a58e48 */
                    /* try { // try from 00a58dc4 to 00b58dcb has its CatchHandler @ 00a58e44 */
                    /* try { // try from 00a58dd0 to 00b58dd7 has its CatchHandler @ 00a58e40 */
                    /* try { // try from 00a58ddc to 00b58de3 has its CatchHandler @ 00a58e50 */
  lVar1 = (*(code *)PTR_calloc_01769a18)(1,0x20);
  lVar5 = *param_1;
                    /* try { // try from 00a58de8 to 00b58def has its CatchHandler @ 00a58e3c */
  *(long *)(lVar5 + 0x218) = lVar1;
  if (lVar1 != 0) {
                    /* try { // try from 00a58e00 to 00b58e07 has its CatchHandler @ 00a58e4c */
                    /* try { // try from 00a58e08 to 00b58e9f has its CatchHandler @ 00a58718 */
    uVar2 = FUN_00a45500(lVar5,*(undefined8 *)(lVar5 + 0x8cc0),0,&local_28,0,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
                    /* catch() { ... } // from try @ 00a58b34 with catch @ 00a58e1c */
                    /* catch() { ... } // from try @ 00a58b20 with catch @ 00a58e20 */
                    /* catch() { ... } // from try @ 00a58a80 with catch @ 00a58e24 */
                    /* catch() { ... } // from try @ 00a58a6c with catch @ 00a58e28 */
                    /* catch() { ... } // from try @ 00a58988 with catch @ 00a58e2c */
                    /* catch() { ... } // from try @ 00a58974 with catch @ 00a58e30 */
                    /* catch() { ... } // from try @ 00a587b8 with catch @ 00a58e34 */
                    /* catch() { ... } // from try @ 00a587a8 with catch @ 00a58e38 */
    if ((*local_28 == '\\') || (pcVar3 = local_28, *local_28 == '/')) {
                    /* catch() { ... } // from try @ 00a58ab4 with catch @ 00a58e3c
                       catch() { ... } // from try @ 00a58de8 with catch @ 00a58e3c */
      pcVar3 = local_28 + 1;
    }
                    /* catch() { ... } // from try @ 00a589bc with catch @ 00a58e40
                       catch() { ... } // from try @ 00a58dd0 with catch @ 00a58e40 */
    pcVar3 = (char *)(*(code *)PTR_strdup_01769a10)(pcVar3);
                    /* catch() { ... } // from try @ 00a58b68 with catch @ 00a58e44
                       catch() { ... } // from try @ 00a58dc4 with catch @ 00a58e44 */
                    /* catch() { ... } // from try @ 00a587f0 with catch @ 00a58e48
                       catch() { ... } // from try @ 00a58db8 with catch @ 00a58e48 */
    *(char **)(lVar1 + 8) = pcVar3;
                    /* catch() { ... } // from try @ 00a58c64 with catch @ 00a58e4c
                       catch() { ... } // from try @ 00a58e00 with catch @ 00a58e4c */
    if (pcVar3 != (char *)0x0) {
                    /* catch() { ... } // from try @ 00a588c8 with catch @ 00a58e50
                       catch() { ... } // from try @ 00a58ddc with catch @ 00a58e50 */
                    /* catch() { ... } // from try @ 00a5878c with catch @ 00a58e54
                       catch() { ... } // from try @ 00a58cc8 with catch @ 00a58e54 */
                    /* catch() { ... } // from try @ 00a58ae0 with catch @ 00a58e58
                       catch() { ... } // from try @ 00a58ce0 with catch @ 00a58e58 */
      pcVar4 = strchr(pcVar3,0x2f);
                    /* catch() { ... } // from try @ 00a58910 with catch @ 00a58e5c
                       catch() { ... } // from try @ 00a58cf8 with catch @ 00a58e5c */
                    /* catch() { ... } // from try @ 00a589e8 with catch @ 00a58e60
                       catch() { ... } // from try @ 00a58d10 with catch @ 00a58e60 */
      if ((pcVar4 == (char *)0x0) && (pcVar4 = strchr(pcVar3,0x5c), pcVar4 == (char *)0x0)) {
        (*(code *)PTR_free_01769a00)(local_28);
        return 3;
      }
                    /* catch() { ... } // from try @ 00a58820 with catch @ 00a58e70
                       catch() { ... } // from try @ 00a58d34 with catch @ 00a58e70 */
      pcVar3 = pcVar4 + 1;
      *pcVar4 = '\0';
                    /* catch() { ... } // from try @ 00a58b98 with catch @ 00a58e74
                       catch() { ... } // from try @ 00a58d4c with catch @ 00a58e74 */
      *(char **)(lVar1 + 0x10) = pcVar3;
      do {
        if (*pcVar3 == '/') {
          *pcVar3 = '\\';
        }
        else if (*pcVar3 == '\0') {
          (*(code *)PTR_free_01769a00)(local_28);
          return 0;
        }
        pcVar3 = pcVar3 + 1;
      } while( true );
    }
    (*(code *)PTR_free_01769a00)(local_28);
  }
  return 0x1b;
}

