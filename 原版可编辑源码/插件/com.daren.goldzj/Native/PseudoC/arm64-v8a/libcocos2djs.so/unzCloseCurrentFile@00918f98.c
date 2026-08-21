
/* cocos2d::unzCloseCurrentFile(void*) */

undefined4 cocos2d::unzCloseCurrentFile(void *param_1)

{
  void *__ptr;
  undefined4 uVar1;
  undefined8 *__ptr_00;
  
  if ((param_1 == (void *)0x0) ||
     (__ptr_00 = *(undefined8 **)((long)param_1 + 0x140), __ptr_00 == (undefined8 *)0x0)) {
    uVar1 = 0xffffff9a;
  }
  else {
    if ((__ptr_00[0x18] == 0) && (*(int *)(__ptr_00 + 0x27) == 0)) {
      uVar1 = 0;
      if (__ptr_00[0x15] != __ptr_00[0x16]) {
        uVar1 = 0xffffff97;
      }
      __ptr = (void *)*__ptr_00;
    }
    else {
      uVar1 = 0;
      __ptr = (void *)*__ptr_00;
    }
    if (__ptr != (void *)0x0) {
      free(__ptr);
    }
    *__ptr_00 = 0;
    if (__ptr_00[0x10] == 8) {
      inflateEnd(__ptr_00 + 1);
    }
    free(__ptr_00);
    *(undefined8 *)((long)param_1 + 0x140) = 0;
  }
  return uVar1;
}

