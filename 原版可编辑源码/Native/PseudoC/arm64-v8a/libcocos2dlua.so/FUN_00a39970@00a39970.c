
undefined8 FUN_00a39970(undefined8 *param_1)

{
                    /* try { // try from 00a3997c to 00b399a3 has its CatchHandler @ 00a39900 */
                    /* try { // try from 00a399a4 to 00b399b7 has its CatchHandler @ 00a39a10 */
  param_1[0x12] = fwrite;
  param_1[5] = &__sF;
  param_1[4] = glUniformMatrix2fv;
  param_1[0xf] = 0;
  *param_1 = pthread_rwlock_tryrdlock;
  param_1[0x15] = fread;
  param_1[0x16] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
                    /* try { // try from 00a399f0 to 00b399f7 has its CatchHandler @ 00a39a0c */
                    /* try { // try from 00a399f8 to 00b39a2b has its CatchHandler @ 00a39900 */
  param_1[0x73] = 5;
  param_1[0x2d] = 0xffffffffffffffff;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x42) = 1;
                    /* catch() { ... } // from try @ 00a39954 with catch @ 00a39a0c
                       catch() { ... } // from try @ 00a399f0 with catch @ 00a39a0c */
  *(undefined4 *)((long)param_1 + 0x65c) = 1;
                    /* catch() { ... } // from try @ 00a39938 with catch @ 00a39a10
                       catch() { ... } // from try @ 00a399a4 with catch @ 00a39a10 */
  *(undefined2 *)((long)param_1 + 0x40c) = 0x101;
  *(undefined1 *)((long)param_1 + 0x40e) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 1;
  param_1[0x75] = 0x3c;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[10] = 1;
  param_1[9] = 1;
                    /* try { // try from 00a39a2c to 00b39a77 has its CatchHandler @ 00a39a2c
                       catch() { ... } // from try @ 00a39a2c with catch @ 00a39a2c
                       catch() { ... } // from try @ 00a39a7c with catch @ 00a39a2c */
  *(undefined1 *)((long)param_1 + 0x3f7) = 1;
  *(undefined2 *)(param_1 + 0x45) = 0x101;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x85] = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x72) = 1;
  memcpy(param_1 + 0x5b,param_1 + 0x44,0xb8);
  param_1[0x88] = 0x1ed;
  param_1[0x87] = 0x1a4;
  param_1[200] = 0xffffffffffffffff;
  param_1[0xc9] = 0xfffffffff3fffbef;
  *(undefined1 *)(param_1 + 0xcd) = 0;
  *(undefined1 *)(param_1 + 0xd3) = 0;
                    /* try { // try from 00a39a78 to 00b39a7b has its CatchHandler @ 00a39ab0 */
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
                    /* try { // try from 00a39a7c to 00b39ac3 has its CatchHandler @ 00a39a2c */
  param_1[0xd5] = 0x3c;
  param_1[0xd4] = 0x3c;
  *(undefined1 *)(param_1 + 0xd6) = 0;
  *(undefined1 *)((long)param_1 + 0x41e) = 1;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  *(undefined1 *)((long)param_1 + 0x6c1) = 1;
  param_1[0xd9] = 1000;
  *(undefined1 *)(param_1 + 0x36) = 1;
  return 0;
}

