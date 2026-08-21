
/* cocos2d::renderer::RenderFlow::removeNodeLevel(unsigned long, cocos2d::Mat4*) */

void __thiscall
cocos2d::renderer::RenderFlow::removeNodeLevel(RenderFlow *this,ulong param_1,Mat4 *param_2)

{
  long lVar1;
  size_t __n;
  void *pvVar2;
  ulong uVar3;
  Mat4 *pMVar4;
  void *__dest;
  long *plVar5;
  
  lVar1 = *(long *)(this + 0x28);
  uVar3 = (*(long *)(this + 0x30) - lVar1 >> 3) * -0x5555555555555555;
  if (param_1 <= uVar3 && uVar3 - param_1 != 0) {
    __dest = *(void **)(lVar1 + param_1 * 0x18);
    plVar5 = (long *)(lVar1 + param_1 * 0x18 + 8);
    pvVar2 = (void *)*plVar5;
    if (__dest != pvVar2) {
      pMVar4 = *(Mat4 **)((long)__dest + 0x28);
      while (pMVar4 != param_2) {
        if (pvVar2 == (void *)((long)__dest + 0x40)) {
          return;
        }
        pMVar4 = *(Mat4 **)((long)__dest + 0x68);
        __dest = (void *)((long)__dest + 0x40);
      }
      __n = (long)pvVar2 - ((long)__dest + 0x40);
      if (__n != 0) {
        memmove(__dest,(void *)((long)__dest + 0x40),__n);
      }
      *plVar5 = (long)((long)__dest + ((long)__n >> 6) * 0x40);
    }
  }
  return;
}

