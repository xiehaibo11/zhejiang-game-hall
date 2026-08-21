
/* cocos2d::experimental::UrlAudioPlayer::UrlAudioPlayer(SLEngineItf_ const* const*, SLObjectItf_
   const* const*, cocos2d::experimental::ICallerThreadUtils*) */

void __thiscall
cocos2d::experimental::UrlAudioPlayer::UrlAudioPlayer
          (UrlAudioPlayer *this,SLEngineItf_ **param_1,SLObjectItf_ **param_2,
          ICallerThreadUtils *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  void *__src;
  undefined8 *puVar3;
  void *__dest;
  undefined8 uVar4;
  ulong uVar5;
  size_t __n;
  ulong uVar6;
  undefined8 *puVar7;
  undefined1 auStack_80 [8];
  undefined1 **local_78;
  undefined1 *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *(undefined ***)this = &PTR__UrlAudioPlayer_016f3f80;
  *(SLEngineItf_ ***)(this + 8) = param_1;
  *(SLObjectItf_ ***)(this + 0x10) = param_2;
  *(ICallerThreadUtils **)(this + 0x18) = param_3;
  *(undefined4 *)(this + 0x20) = 0xffffffff;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined2 *)(this + 0x78) = 0x100;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  puVar3 = operator_new(0x20);
  puVar3[2] = 0;
  *puVar3 = &PTR____shared_weak_count_016f3b08;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  *(undefined8 **)(this + 0xb8) = puVar3 + 3;
  *(undefined8 **)(this + 0xc0) = puVar3;
  if (DAT_0178f3c0 != -1) {
    local_78 = &local_70;
    local_70 = auStack_80;
    std::__ndk1::__call_once((ulong *)&DAT_0178f3c0,&local_78,FUN_00e71ce8);
  }
  std::__ndk1::mutex::lock((mutex *)&DAT_0178f380);
  __src = DAT_0178f3a8;
  if (DAT_0178f3b0 < DAT_0178f3b8) {
    *DAT_0178f3b0 = this;
    DAT_0178f3b0 = DAT_0178f3b0 + 1;
    goto LAB_00e70c20;
  }
  __n = (long)DAT_0178f3b0 - (long)DAT_0178f3a8;
  uVar6 = ((long)__n >> 3) + 1;
  if (uVar6 >> 0x3d != 0) {
LAB_00e70bcc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((ulong)((long)DAT_0178f3b8 - (long)DAT_0178f3a8 >> 3) < 0xfffffffffffffff) {
    uVar5 = (long)DAT_0178f3b8 - (long)DAT_0178f3a8 >> 2;
    if (uVar6 <= uVar5) {
      uVar6 = uVar5;
    }
    if (uVar6 != 0) {
      if (uVar6 >> 0x3d != 0) goto LAB_00e70bcc;
      goto LAB_00e70bd4;
    }
    __dest = (void *)0x0;
  }
  else {
    uVar6 = 0x1fffffffffffffff;
LAB_00e70bd4:
    __dest = operator_new(uVar6 << 3);
  }
  puVar3 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
  puVar1 = (undefined8 *)((long)__dest + uVar6 * 8);
  puVar7 = puVar3 + 1;
  *puVar3 = this;
  if (0 < (long)__n) {
    memcpy(__dest,__src,__n);
  }
  DAT_0178f3a8 = __dest;
  DAT_0178f3b0 = puVar7;
  DAT_0178f3b8 = puVar1;
  if (__src != (void *)0x0) {
    operator_delete(__src);
  }
LAB_00e70c20:
  std::__ndk1::mutex::unlock((mutex *)&DAT_0178f380);
  uVar4 = (**(code **)(*(long *)param_3 + 0x18))(param_3);
  *(undefined8 *)(this + 0xb0) = uVar4;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

