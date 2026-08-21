
/* cocos2d::experimental::AudioMixerController::addTrack(cocos2d::experimental::Track*) */

undefined4 __thiscall
cocos2d::experimental::AudioMixerController::addTrack(AudioMixerController *this,Track *param_1)

{
  undefined8 *puVar1;
  undefined8 *__src;
  undefined8 *puVar2;
  void *__dest;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  size_t __n;
  ulong uVar7;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0x18));
  __src = *(undefined8 **)(this + 0x40);
  puVar2 = *(undefined8 **)(this + 0x48);
  puVar5 = __src;
  if ((__src != puVar2) && ((Track *)*__src != param_1)) {
    do {
      if (puVar2 + -1 == puVar5) goto LAB_00e72800;
      puVar1 = puVar5 + 1;
      puVar5 = puVar5 + 1;
    } while ((Track *)*puVar1 != param_1);
  }
  if (puVar5 != puVar2) {
    uVar6 = 0;
    goto LAB_00e728a4;
  }
LAB_00e72800:
  if (*(undefined8 **)(this + 0x50) == puVar2) {
    __n = (long)puVar2 - (long)__src;
    uVar7 = ((long)__n >> 3) + 1;
    if (uVar7 >> 0x3d != 0) {
LAB_00e72854:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = (long)*(undefined8 **)(this + 0x50) - (long)__src;
    if ((ulong)(lVar3 >> 3) < 0xfffffffffffffff) {
      uVar4 = lVar3 >> 2;
      if (uVar7 <= uVar4) {
        uVar7 = uVar4;
      }
      if (uVar7 != 0) {
        if (uVar7 >> 0x3d != 0) goto LAB_00e72854;
        goto LAB_00e7285c;
      }
      __dest = (void *)0x0;
    }
    else {
      uVar7 = 0x1fffffffffffffff;
LAB_00e7285c:
      __dest = operator_new(uVar7 << 3);
    }
    puVar5 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
    *puVar5 = param_1;
    if (0 < (long)__n) {
      memcpy(__dest,__src,__n);
    }
    *(void **)(this + 0x40) = __dest;
    *(undefined8 **)(this + 0x48) = puVar5 + 1;
    *(void **)(this + 0x50) = (void *)((long)__dest + uVar7 * 8);
    if (__src != (undefined8 *)0x0) {
      operator_delete(__src);
    }
  }
  else {
    *puVar2 = param_1;
    *(undefined8 **)(this + 0x48) = puVar2 + 1;
  }
  uVar6 = 1;
LAB_00e728a4:
  std::__ndk1::mutex::unlock((mutex *)(this + 0x18));
  return uVar6;
}

