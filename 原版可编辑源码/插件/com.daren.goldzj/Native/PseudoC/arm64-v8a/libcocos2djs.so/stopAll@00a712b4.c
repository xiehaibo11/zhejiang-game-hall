
/* cocos2d::AudioEngineImpl::stopAll() */

void __thiscall cocos2d::AudioEngineImpl::stopAll(AudioEngineImpl *this)

{
  long *__dest;
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  size_t __n;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  
                    /* try { // try from 00a712c0 to 00b712db has its CatchHandler @ 00a71578 */
  uVar3 = *(ulong *)(this + 0x40);
  if (uVar3 != 0) {
    if (uVar3 >> 0x3d != 0) {
LAB_00a71418:
                    /* WARNING: Subroutine does not return */
      abort();
    }
                    /* try { // try from 00a712dc to 00b71313 has its CatchHandler @ 00a710f0 */
    __dest = operator_new(uVar3 << 3);
    plVar4 = *(long **)(this + 0x38);
    if (plVar4 != (long *)0x0) {
      plVar6 = __dest + uVar3;
      plVar2 = __dest;
      plVar5 = __dest;
      do {
        if (plVar5 == plVar6) {
                    /* try { // try from 00a71320 to 00b71367 has its CatchHandler @ 00a710f0 */
          __n = (long)plVar5 - (long)plVar2;
          uVar3 = ((long)__n >> 3) + 1;
          if (uVar3 >> 0x3d != 0) goto LAB_00a71418;
          if ((ulong)((long)plVar6 - (long)plVar2 >> 3) < 0xfffffffffffffff) {
            uVar1 = (long)plVar6 - (long)plVar2 >> 2;
            if (uVar3 <= uVar1) {
              uVar3 = uVar1;
            }
            if (uVar3 != 0) {
              if (uVar3 >> 0x3d == 0) goto LAB_00a71360;
              goto LAB_00a71418;
            }
            __dest = (long *)0x0;
          }
          else {
            uVar3 = 0x1fffffffffffffff;
LAB_00a71360:
            __dest = operator_new(uVar3 << 3);
                    /* try { // try from 00a71368 to 00b713ab has its CatchHandler @ 00a71530 */
          }
          plVar5 = __dest + ((long)__n >> 3);
          plVar6 = __dest + uVar3;
          *plVar5 = plVar4[3];
          if (0 < (long)__n) {
            memcpy(__dest,plVar2,__n);
          }
          if (plVar2 != (long *)0x0) {
            operator_delete(plVar2);
          }
        }
        else {
                    /* try { // try from 00a71314 to 00b7131f has its CatchHandler @ 00a71530 */
          *plVar5 = plVar4[3];
          __dest = plVar2;
        }
        plVar5 = plVar5 + 1;
        plVar4 = (long *)*plVar4;
        plVar2 = __dest;
      } while (plVar4 != (long *)0x0);
                    /* try { // try from 00a713ac to 00b713df has its CatchHandler @ 00a710f0 */
      for (; plVar2 != plVar5; plVar2 = plVar2 + 1) {
        (**(code **)(*(long *)*plVar2 + 0x48))();
      }
    }
                    /* try { // try from 00a713e0 to 00b7141b has its CatchHandler @ 00a71578 */
    if (__dest != (long *)0x0) {
      operator_delete(__dest);
      return;
    }
  }
  return;
}

