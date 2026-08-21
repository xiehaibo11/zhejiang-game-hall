
/* cocos2d::AudioDecoderSLES::decodeToPcmCallback(SLAndroidSimpleBufferQueueItf_ const* const*) */

void __thiscall
cocos2d::AudioDecoderSLES::decodeToPcmCallback
          (AudioDecoderSLES *this,SLAndroidSimpleBufferQueueItf_ **param_1)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = *(int *)(this + 0x8c);
  this[0x170] = (AudioDecoderSLES)0x1;
  *(int *)(this + 0x8c) = iVar3 + 1;
  if (((iVar3 + 1) % 1000 == 0) &&
     (iVar3 = (**(code **)(**(long **)(this + 0x108) + 0x18))(*(long **)(this + 0x108),auStack_3c),
     iVar3 != 0)) {
    pcVar4 = "%s, GetPosition failed";
  }
  else {
    std::__ndk1::vector<char,std::__ndk1::allocator<char>>::insert<signed_char*>
              (*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20),
               *(undefined8 *)(*(vector<char,std::__ndk1::allocator<char>> **)(this + 0x20) + 8),
               *(long *)(this + 0x128),*(long *)(this + 0x128) + (long)DAT_01d38e38);
    iVar3 = (**(code **)*param_1)(param_1,*(undefined8 *)(this + 0x128),DAT_01d38e38);
    if (iVar3 == 0) {
      uVar1 = *(long *)(this + 0x128) + (long)DAT_01d38e38;
      if (*(ulong *)(this + 0x120) + (long)DAT_01d38e38 * 4 <= uVar1) {
        uVar1 = *(ulong *)(this + 0x120);
      }
      *(ulong *)(this + 0x128) = uVar1;
      queryAudioInfo(this);
      goto LAB_00a9bf74;
    }
    pcVar4 = "%s, Enqueue failed";
  }
  __android_log_print(6,"AudioDecoderSLES",pcVar4,"decodeToPcmCallback");
LAB_00a9bf74:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

