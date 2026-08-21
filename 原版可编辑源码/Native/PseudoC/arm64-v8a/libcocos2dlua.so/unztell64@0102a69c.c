
/* cocos2d::unztell64(void*) */

undefined8 cocos2d::unztell64(void *param_1)

{
                    /* try { // try from 0102a6a0 to 0112a6a7 has its CatchHandler @ 0102a6fc */
  if ((param_1 != (void *)0x0) && (*(long *)((long)param_1 + 0x140) != 0)) {
                    /* try { // try from 0102a6a8 to 0112a6e3 has its CatchHandler @ 0102a44c */
    return *(undefined8 *)(*(long *)((long)param_1 + 0x140) + 0xa0);
  }
  return 0xffffffffffffffff;
}

