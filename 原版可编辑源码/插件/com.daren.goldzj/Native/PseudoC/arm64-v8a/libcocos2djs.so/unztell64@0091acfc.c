
/* cocos2d::unztell64(void*) */

undefined8 cocos2d::unztell64(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return 0xffffffffffffffff;
  }
  if (*(long *)((long)param_1 + 0x140) != 0) {
    return *(undefined8 *)(*(long *)((long)param_1 + 0x140) + 0xa0);
  }
  return 0xffffffffffffffff;
}

