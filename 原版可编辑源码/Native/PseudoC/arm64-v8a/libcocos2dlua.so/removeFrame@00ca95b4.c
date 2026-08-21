
/* cocostudio::timeline::Timeline::removeFrame(cocostudio::timeline::Frame*) */

void __thiscall cocostudio::timeline::Timeline::removeFrame(Timeline *this,Frame *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t __n;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 0x28);
  puVar2 = *(undefined8 **)(this + 0x30);
  if (__dest != puVar2) {
    if ((Frame *)*__dest != param_1) {
      do {
        if (puVar2 + -1 == __dest) goto LAB_00ca9638;
        puVar1 = __dest + 1;
        __dest = __dest + 1;
      } while ((Frame *)*puVar1 != param_1);
    }
    if (__dest != puVar2) {
      __n = (long)puVar2 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(undefined8 **)(this + 0x30) = __dest + ((long)__n >> 3);
      cocos2d::Ref::release((Ref *)param_1);
    }
  }
LAB_00ca9638:
                    /* WARNING: Could not recover jumptable at 0x00ca9654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x20))(param_1,0);
  return;
}

