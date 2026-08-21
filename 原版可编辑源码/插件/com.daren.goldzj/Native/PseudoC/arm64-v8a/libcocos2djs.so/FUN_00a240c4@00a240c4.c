
undefined8 FUN_00a240c4(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (*(code *)PTR_calloc_01d1b760)(1,0x8e68);
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x8e60) = 0xc0dedbad;
    lVar2 = (*(code *)PTR_malloc_01d1b740)(0x100);
    *(long *)(lVar1 + 0xaf8) = lVar2;
    if (lVar2 != 0) {
      *(code **)(lVar1 + 0x2b0) = fwrite;
      *(undefined **)(lVar1 + 0x248) = &__sF;
      *(code **)(lVar1 + 0x240) = waitpid;
      *(undefined8 *)(lVar1 + 0x2d0) = 0;
      *(undefined8 *)(lVar1 + 0x298) = 0;
      *(code **)(lVar1 + 0x2c8) = fread;
      *(code **)(lVar1 + 0x220) = __cxa_thread_atexit_impl;
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
      FUN_00a31288(lVar1);
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
    (*(code *)PTR_free_01d1b748)();
    lVar2 = 0x670;
    do {
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar1 + lVar2));
      *(undefined8 *)(lVar1 + lVar2) = 0;
      lVar2 = lVar2 + 8;
    } while (lVar2 != 0x858);
    if (*(char *)(lVar1 + 0x920) != '\0') {
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar1 + 0x918));
      *(undefined8 *)(lVar1 + 0x918) = 0;
      *(undefined1 *)(lVar1 + 0x920) = 0;
    }
    *(undefined8 *)(lVar1 + 0x918) = 0;
    if (*(char *)(lVar1 + 0x910) != '\0') {
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(lVar1 + 0x908));
      *(undefined8 *)(lVar1 + 0x908) = 0;
      *(undefined1 *)(lVar1 + 0x910) = 0;
    }
    *(undefined8 *)(lVar1 + 0x908) = 0;
    (*(code *)PTR_free_01d1b748)(lVar1);
  }
  return 0x1b;
}

