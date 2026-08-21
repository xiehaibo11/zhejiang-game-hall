
/* cocos2d::experimental::AudioEngineImpl::stopAll() */

void __thiscall cocos2d::experimental::AudioEngineImpl::stopAll(AudioEngineImpl *this)

{
  long *__dest;
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  ulong uVar4;
  size_t __n;
  long *plVar5;
  long *plVar6;
  
  uVar4 = *(ulong *)(this + 0x58);
  if (uVar4 != 0) {
    if (uVar4 >> 0x3d != 0) {
LAB_00e65ed8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    __dest = operator_new(uVar4 << 3);
    plVar5 = *(long **)(this + 0x50);
    plVar3 = __dest;
    plVar2 = __dest;
    if (plVar5 != (long *)0x0) {
      plVar6 = __dest + uVar4;
      if (__dest == plVar6) goto LAB_00e65de8;
      do {
        *plVar3 = plVar5[3];
        while( true ) {
          plVar3 = plVar3 + 1;
          plVar5 = (long *)*plVar5;
          plVar2 = __dest;
          if (plVar5 == (long *)0x0) goto joined_r0x00e65e80;
          if (plVar3 != plVar6) break;
LAB_00e65de8:
          __n = (long)plVar3 - (long)plVar2;
          uVar4 = ((long)__n >> 3) + 1;
          if (uVar4 >> 0x3d != 0) goto LAB_00e65ed8;
          if ((ulong)((long)plVar6 - (long)plVar2 >> 3) < 0xfffffffffffffff) {
            uVar1 = (long)plVar6 - (long)plVar2 >> 2;
            if (uVar4 <= uVar1) {
              uVar4 = uVar1;
            }
            if (uVar4 != 0) {
              if (uVar4 >> 0x3d == 0) goto LAB_00e65e28;
              goto LAB_00e65ed8;
            }
            __dest = (long *)0x0;
          }
          else {
            uVar4 = 0x1fffffffffffffff;
LAB_00e65e28:
            __dest = operator_new(uVar4 << 3);
          }
          plVar3 = __dest + ((long)__n >> 3);
          plVar6 = __dest + uVar4;
          *plVar3 = plVar5[3];
          if (0 < (long)__n) {
            memcpy(__dest,plVar2,__n);
          }
          if (plVar2 != (long *)0x0) {
            operator_delete(plVar2);
          }
        }
      } while( true );
    }
joined_r0x00e65e80:
    for (; __dest != plVar3; __dest = __dest + 1) {
      (**(code **)(*(long *)*__dest + 0x48))();
    }
    if (plVar2 != (long *)0x0) {
      operator_delete(plVar2);
      return;
    }
  }
  return;
}

