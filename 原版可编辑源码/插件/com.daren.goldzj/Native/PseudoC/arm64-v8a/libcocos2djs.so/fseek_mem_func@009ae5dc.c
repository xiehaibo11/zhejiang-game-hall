
/* cocos2d::fseek_mem_func(void*, void*, unsigned long, int) */

undefined8 cocos2d::fseek_mem_func(void *param_1,void *param_2,ulong param_3,int param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
                    /* catch() { ... } // from try @ 009ae068 with catch @ 009ae5ec */
  if (param_4 != 0) {
    if (param_4 == 1) {
                    /* catch() { ... } // from try @ 009ae2ec with catch @ 009ae60c */
      lVar2 = 0x18;
    }
    else {
      if (param_4 != 2) {
        return 0xffffffffffffffff;
      }
                    /* catch() { ... } // from try @ 009ae2e4 with catch @ 009ae604 */
      lVar2 = 0x10;
                    /* catch() { ... } // from try @ 009ae024 with catch @ 009ae608 */
    }
    param_3 = *(long *)((long)param_2 + lVar2) + param_3;
  }
                    /* catch() { ... } // from try @ 009ae010 with catch @ 009ae61c */
                    /* catch() { ... } // from try @ 009adfe4 with catch @ 009ae620 */
  if (*(ulong *)((long)param_2 + 8) < param_3) {
    uVar1 = 1;
  }
  else {
    uVar3 = *(ulong *)((long)param_2 + 0x10);
                    /* catch() { ... } // from try @ 009ae034 with catch @ 009ae630
                       catch() { ... } // from try @ 009ae2a0 with catch @ 009ae630 */
    if (uVar3 <= param_3 && param_3 - uVar3 != 0) {
      memset((void *)(*(long *)param_2 + uVar3),0,param_3 - uVar3);
    }
    uVar1 = 0;
    *(ulong *)((long)param_2 + 0x18) = param_3;
  }
  return uVar1;
}

