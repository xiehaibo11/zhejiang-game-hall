
/* cocos2d::AudioDecoderSLES::queryAudioInfo() */

void __thiscall cocos2d::AudioDecoderSLES::queryAudioInfo(AudioDecoderSLES *this)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  uint local_4c;
  undefined1 auStack_48 [24];
  undefined4 local_30;
  long local_28;
  
                    /* try { // try from 00a9b790 to 00b9b79b has its CatchHandler @ 00a9b7c0 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00a9b79c to 00b9b7c3 has its CatchHandler @ 00a9b754 */
  if (this[0x88] == (AudioDecoderSLES)0x0) {
    local_4c = 0xffffffff;
                    /* catch() { ... } // from try @ 00a9b790 with catch @ 00a9b7c0 */
                    /* catch() { ... } // from try @ 00a9b80c with catch @ 00a9b7c4 */
    iVar2 = (**(code **)(**(long **)(this + 0x108) + 0x10))(*(long **)(this + 0x108),&local_4c);
    if (iVar2 == 0) {
      if (local_4c != 0xffffffff) {
                    /* try { // try from 00a9b804 to 00b9b80b has its CatchHandler @ 00a9b830 */
        *(float *)(this + 0x4c) = (float)local_4c / 1000.0;
      }
                    /* try { // try from 00a9b80c to 00b9b833 has its CatchHandler @ 00a9b7c4 */
      iVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                        (*(long **)(this + 0x110),*(undefined4 *)(this + 0x94),0x20,auStack_48);
      if (iVar2 == 0) {
        *(undefined4 *)(this + 0x34) = local_30;
        iVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                          (*(long **)(this + 0x110),*(undefined4 *)(this + 0x90),0x20,auStack_48);
        if (iVar2 == 0) {
                    /* try { // try from 00a9b878 to 00b9b883 has its CatchHandler @ 00a9b8a8 */
                    /* try { // try from 00a9b884 to 00b9b8ab has its CatchHandler @ 00a9b834 */
          *(undefined4 *)(this + 0x30) = local_30;
          iVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                            (*(long **)(this + 0x110),*(undefined4 *)(this + 0x98),0x20,auStack_48);
          if (iVar2 == 0) {
            *(undefined4 *)(this + 0x38) = local_30;
            iVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                              (*(long **)(this + 0x110),*(undefined4 *)(this + 0x9c),0x20,auStack_48
                              );
            if (iVar2 == 0) {
                    /* try { // try from 00a9b8f0 to 00b9b8f7 has its CatchHandler @ 00a9b91c */
                    /* try { // try from 00a9b8f8 to 00b9b91f has its CatchHandler @ 00a9b8ac */
              *(undefined4 *)(this + 0x3c) = local_30;
              iVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                                (*(long **)(this + 0x110),*(undefined4 *)(this + 0xa0),0x20,
                                 auStack_48);
              if (iVar2 == 0) {
                *(undefined4 *)(this + 0x40) = local_30;
                iVar2 = (**(code **)(**(long **)(this + 0x110) + 0x20))
                                  (*(long **)(this + 0x110),*(undefined4 *)(this + 0xa4),0x20,
                                   auStack_48);
                if (iVar2 == 0) {
                  this[0x88] = (AudioDecoderSLES)0x1;
                  *(undefined4 *)(this + 0x44) = local_30;
                  goto LAB_00a9b974;
                }
                pcVar3 = "%s GetValue _endiannessKeyIndex failed";
              }
              else {
                    /* catch() { ... } // from try @ 00a9b8f0 with catch @ 00a9b91c */
                pcVar3 = "%s GetValue _channelMaskKeyIndex failed";
              }
            }
            else {
              pcVar3 = "%s GetValue _containerSizeKeyIndex failed";
            }
          }
          else {
                    /* catch() { ... } // from try @ 00a9b878 with catch @ 00a9b8a8 */
                    /* catch() { ... } // from try @ 00a9b8f8 with catch @ 00a9b8ac */
            pcVar3 = "%s GetValue _bitsPerSampleKeyIndex failed";
          }
        }
        else {
          pcVar3 = "%s GetValue _numChannelsKeyIndex failed";
        }
      }
      else {
                    /* catch() { ... } // from try @ 00a9b804 with catch @ 00a9b830 */
                    /* catch() { ... } // from try @ 00a9b884 with catch @ 00a9b834 */
        pcVar3 = "%s GetValue _sampleRateKeyIndex failed";
      }
      __android_log_print(6,"AudioDecoderSLES",pcVar3,"queryAudioInfo");
    }
    else {
      __android_log_print(6,"AudioDecoderSLES","decodeProgressCallback,GetDuration failed");
    }
  }
LAB_00a9b974:
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

