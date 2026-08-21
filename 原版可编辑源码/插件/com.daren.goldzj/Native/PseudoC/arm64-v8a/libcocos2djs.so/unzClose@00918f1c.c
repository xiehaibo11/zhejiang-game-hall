
/* cocos2d::unzClose(void*) */

undefined8 cocos2d::unzClose(void *param_1)

{
  undefined8 *__ptr;
  
  if (param_1 != (void *)0x0) {
    __ptr = *(undefined8 **)((long)param_1 + 0x140);
    if (__ptr != (undefined8 *)0x0) {
      if ((void *)*__ptr != (void *)0x0) {
        free((void *)*__ptr);
      }
      *__ptr = 0;
      if (__ptr[0x10] == 8) {
        inflateEnd(__ptr + 1);
      }
      free(__ptr);
      *(undefined8 *)((long)param_1 + 0x140) = 0;
    }
    (**(code **)((long)param_1 + 0x28))
              (*(undefined8 *)((long)param_1 + 0x38),*(undefined8 *)((long)param_1 + 0x60));
    free(param_1);
    return 0;
  }
  return 0xffffff9a;
}

