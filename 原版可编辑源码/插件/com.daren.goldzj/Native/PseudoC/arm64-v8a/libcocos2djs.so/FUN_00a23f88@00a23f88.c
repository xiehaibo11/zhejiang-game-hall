
undefined8 FUN_00a23f88(undefined8 *param_1)

{
  param_1[0x12] = fwrite;
  param_1[5] = &__sF;
  param_1[4] = waitpid;
  param_1[0xf] = 0;
  *param_1 = __cxa_thread_atexit_impl;
  param_1[0x15] = fread;
  param_1[0x16] = 0;
  param_1[0x24] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x73] = 5;
  param_1[0x2d] = 0xffffffffffffffff;
  param_1[0x10] = 0xffffffffffffffff;
  param_1[0xc] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x42) = 1;
  *(undefined4 *)((long)param_1 + 0x65c) = 1;
  *(undefined2 *)((long)param_1 + 0x40c) = 0x101;
  *(undefined1 *)((long)param_1 + 0x40e) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 1;
  param_1[0x75] = 0x3c;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[10] = 1;
  param_1[9] = 1;
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
  param_1[0xcf] = 0;
  param_1[0xce] = 0;
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

