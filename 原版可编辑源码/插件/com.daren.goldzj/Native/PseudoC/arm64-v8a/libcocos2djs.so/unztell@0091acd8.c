
/* cocos2d::unztell(void*) */

undefined8 cocos2d::unztell(void *param_1)

{
  if (param_1 == (void *)0x0) {
    return 0xffffffffffffff9a;
  }
  if (*(long *)((long)param_1 + 0x140) != 0) {
    return *(undefined8 *)(*(long *)((long)param_1 + 0x140) + 0x30);
  }
  return 0xffffffffffffff9a;
}

