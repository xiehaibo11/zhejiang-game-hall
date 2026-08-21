
/* cocos2d::unzeof(void*) */

ulong cocos2d::unzeof(void *param_1)

{
  if ((param_1 != (void *)0x0) && (*(long *)((long)param_1 + 0x140) != 0)) {
    return (ulong)(*(long *)(*(long *)((long)param_1 + 0x140) + 0xc0) == 0);
  }
  return 0xffffff9a;
}

