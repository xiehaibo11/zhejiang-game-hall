
undefined8 FUN_00a39aac(long *param_1)

{
  long lVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 00a39a78 with catch @ 00a39ab0 */
                    /* try { // try from 00a39ac4 to 00b39c0b has its CatchHandler @ 00a39ac4
                       catch() { ... } // from try @ 00a39ac4 with catch @ 00a39ac4
                       catch() { ... } // from try @ 00a39c8c with catch @ 00a39ac4 */
  lVar1 = (*(code *)PTR_calloc_01769a18)(1,0x8e68);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x8e60) = 0xc0dedbad;
    lVar2 = (*(code *)PTR_malloc_017699f8)(0x100);
    *(long *)(lVar1 + 0xaf8) = lVar2;
    if (lVar2 != 0) {
      *(code **)(lVar1 + 0x2b0) = fwrite;
      *(undefined **)(lVar1 + 0x248) = &__sF;
      *(code **)(lVar1 + 0x240) = glUniformMatrix2fv;
      *(undefined8 *)(lVar1 + 0x2d0) = 0;
      *(undefined8 *)(lVar1 + 0x298) = 0;
      *(code **)(lVar1 + 0x2c8) = fread;
      *(code **)(lVar1 + 0x220) = pthread_rwlock_tryrdlock;
      *(undefined8 *)(lVar1 + 0x340) = 0;
      *(undefined8 *)(lVar1 + 0x338) = 0;
      *(undefined8 *)(lVar1 + 0x330) = 0;
      *(undefined8 *)(lVar1 + 0x328) = 0;
      *(undefined2 *)(lVar1 + 0x62c) = 0x101;
      *(undefined8 *)(lVar1 + 0x388) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0x2a0) = 0xffffffffffffffff;
      *(undefined8 *)(lVar1 + 0x280) = 0xffffffffffffffff;
      *(undefined4 *)(lVar1 + 0x430) = 1;
      *(undefined4 *)(lVar1 + 0x87c) = 1;
      *(undefined1 *)(lVar1 + 0x62e) = 0;
      *(undefined4 *)(lVar1 + 0x5f8) = 1;
      *(undefined8 *)(lVar1 + 0x5c8) = 0x3c;
      *(undefined8 *)(lVar1 + 0x5b8) = 5;
      *(undefined8 *)(lVar1 + 0x238) = 0;
      *(undefined4 *)(lVar1 + 0x5c0) = 0;
      *(undefined8 *)(lVar1 + 0x270) = 1;
      *(undefined8 *)(lVar1 + 0x268) = 1;
      *(undefined1 *)(lVar1 + 0x617) = 1;
      *(undefined1 *)(lVar1 + 0x448) = 1;
      *(undefined1 *)(lVar1 + 0x449) = 1;
      *(undefined4 *)(lVar1 + 0x4f0) = 0;
      *(undefined8 *)(lVar1 + 0x648) = 0xffffffffffffffff;
      *(undefined1 *)(lVar1 + 0x5b0) = 1;
      memcpy((void *)(lVar1 + 0x4f8),(void *)(lVar1 + 0x440),0xb8);
      *(undefined8 *)(lVar1 + 0x660) = 0x1ed;
      *(undefined8 *)(lVar1 + 0x658) = 0x1a4;
      *(undefined8 *)(lVar1 + 0x860) = 0xffffffffffffffff;
                    /* try { // try from 00a39c0c to 00b39c3f has its CatchHandler @ 00a39d0c */
      *(undefined8 *)(lVar1 + 0x868) = 0xfffffffff3fffbef;
      *(undefined1 *)(lVar1 + 0x888) = 0;
      *(undefined1 *)(lVar1 + 0x8b8) = 0;
      *(undefined8 *)(lVar1 + 0x898) = 0;
      *(undefined8 *)(lVar1 + 0x890) = 0;
      *(undefined8 *)(lVar1 + 0x8c8) = 0x3c;
      *(undefined8 *)(lVar1 + 0x8c0) = 0x3c;
      *(undefined1 *)(lVar1 + 0x8d0) = 0;
      *(undefined1 *)(lVar1 + 0x63e) = 1;
      *(undefined1 *)(lVar1 + 0x8e0) = 1;
      *(undefined1 *)(lVar1 + 0x8e1) = 1;
      *(undefined8 *)(lVar1 + 0x8e8) = 1000;
      *(undefined1 *)(lVar1 + 0x3d0) = 1;
      *(undefined8 *)(lVar1 + 0xb00) = 0x100;
      FUN_00a47c70(lVar1);
                    /* try { // try from 00a39c40 to 00b39c53 has its CatchHandler @ 00a39cd8 */
                    /* try { // try from 00a39c58 to 00b39c8b has its CatchHandler @ 00a39cdc */
      *(undefined8 *)(lVar1 + 0xaf0) = 0;
      *(uint *)(lVar1 + 0x978) = *(uint *)(lVar1 + 0x978) | 0x10;
      *(undefined8 *)(lVar1 + 0x8b10) = 0xffffffffffffffff;
      *(undefined4 *)(lVar1 + 0x8d30) = 0;
      *(undefined8 *)(lVar1 + 0x8d48) = 0;
      *(undefined8 *)(lVar1 + 0x8a0) = 0;
      *(undefined8 *)(lVar1 + 0x8d8) = 5;
      *param_1 = lVar1;
      return 0;
    }
    (*(code *)PTR_free_01769a00)();
                    /* try { // try from 00a39c8c to 00b39d27 has its CatchHandler @ 00a39ac4 */
    lVar2 = 0x670;
    do {
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar1 + lVar2));
      *(undefined8 *)(lVar1 + lVar2) = 0;
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x858);
    if (*(char *)(lVar1 + 0x920) != '\0') {
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar1 + 0x918));
      *(undefined8 *)(lVar1 + 0x918) = 0;
      *(undefined1 *)(lVar1 + 0x920) = 0;
    }
    *(undefined8 *)(lVar1 + 0x918) = 0;
    if (*(char *)(lVar1 + 0x910) != '\0') {
                    /* catch() { ... } // from try @ 00a39c40 with catch @ 00a39cd8 */
                    /* catch() { ... } // from try @ 00a39c58 with catch @ 00a39cdc */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(lVar1 + 0x908));
      *(undefined8 *)(lVar1 + 0x908) = 0;
      *(undefined1 *)(lVar1 + 0x910) = 0;
    }
    *(undefined8 *)(lVar1 + 0x908) = 0;
    (*(code *)PTR_free_01769a00)(lVar1);
  }
                    /* catch() { ... } // from try @ 00a39c0c with catch @ 00a39d0c */
  return 0x1b;
}

