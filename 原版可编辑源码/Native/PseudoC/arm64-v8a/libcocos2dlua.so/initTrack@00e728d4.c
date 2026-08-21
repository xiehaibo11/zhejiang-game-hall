
/* cocos2d::experimental::AudioMixerController::initTrack(cocos2d::experimental::Track*,
   std::__ndk1::vector<cocos2d::experimental::Track*,
   std::__ndk1::allocator<cocos2d::experimental::Track*> >&) */

void __thiscall
cocos2d::experimental::AudioMixerController::initTrack
          (AudioMixerController *this,Track *param_1,vector *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  void *__dest;
  long lVar5;
  ulong uVar6;
  void *__src;
  size_t __n;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (param_1[0x105] != (Track)0x0) goto LAB_00e72ae8;
  iVar3 = AudioMixer::getTrackName(*(AudioMixer **)(this + 0x10),3,1,0);
  if (-1 < iVar3) {
    AudioMixer::setBufferProvider
              (*(AudioMixer **)(this + 0x10),iVar3,(AudioBufferProvider *)param_1);
    AudioMixer::setParameter
              (*(AudioMixer **)(this + 0x10),iVar3,0x3000,0x4002,*(void **)(this + 0x58));
    AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar3,0x3000,0x4005,(void *)0x1);
    AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar3,0x3000,0x4001,(void *)0x1);
    AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar3,0x3000,0x4006,(void *)0x3);
    AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar3,0x3000,0x4000,(void *)0x3);
    *(int *)(param_1 + 0xd0) = iVar3;
    AudioMixer::enable(*(AudioMixer **)(this + 0x10),iVar3);
    std::__ndk1::mutex::lock((mutex *)(param_1 + 0xdc));
    uVar4 = (**(code **)(*(long *)param_1 + 0x20))(param_1);
    local_6c = float_from_gain();
    local_70 = float_from_gain((uVar4 & 0xffffffff) >> 0x10);
    AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar3,0x3003,0x4200,&local_6c);
    AudioMixer::setParameter(*(AudioMixer **)(this + 0x10),iVar3,0x3003,0x4201,&local_70);
    param_1[0xd8] = (Track)0x0;
    param_1[0x105] = (Track)0x1;
    std::__ndk1::mutex::unlock((mutex *)(param_1 + 0xdc));
    goto LAB_00e72ae8;
  }
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != *(undefined8 **)(param_2 + 0x10)) {
    *puVar1 = param_1;
    *(undefined8 **)(param_2 + 8) = puVar1 + 1;
    goto LAB_00e72ae8;
  }
  __src = *(void **)param_2;
  __n = (long)puVar1 - (long)__src;
  uVar4 = ((long)__n >> 3) + 1;
  if (uVar4 >> 0x3d != 0) {
LAB_00e72a9c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar5 = (long)*(undefined8 **)(param_2 + 0x10) - (long)__src;
  if ((ulong)(lVar5 >> 3) < 0xfffffffffffffff) {
    uVar6 = lVar5 >> 2;
    if (uVar4 <= uVar6) {
      uVar4 = uVar6;
    }
    if (uVar4 != 0) {
      if (uVar4 >> 0x3d != 0) goto LAB_00e72a9c;
      goto LAB_00e72aa4;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar4 = 0x1fffffffffffffff;
LAB_00e72aa4:
    __dest = operator_new(uVar4 << 3);
  }
  puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  *puVar1 = param_1;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  *(void **)param_2 = __dest;
  *(undefined8 **)(param_2 + 8) = puVar1 + 1;
  *(void **)(param_2 + 0x10) = (void *)((long)__dest + uVar4 * 8);
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_00e72ae8:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

