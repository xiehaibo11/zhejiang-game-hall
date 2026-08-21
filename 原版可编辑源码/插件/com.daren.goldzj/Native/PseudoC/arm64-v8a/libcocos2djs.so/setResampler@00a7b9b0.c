
/* cocos2d::AudioMixer::track_t::setResampler(unsigned int, unsigned int) */

undefined8 __thiscall
cocos2d::AudioMixer::track_t::setResampler(track_t *this,uint param_1,uint param_2)

{
  undefined8 uVar1;
  long *plVar2;
  
                    /* try { // try from 00a7b9b0 to 00b7b9b7 has its CatchHandler @ 00a7b9c0 */
                    /* try { // try from 00a7b9b8 to 00b7ba5f has its CatchHandler @ 00a7b7d0 */
                    /* catch() { ... } // from try @ 00a7b908 with catch @ 00a7b9bc */
                    /* catch() { ... } // from try @ 00a7b8a4 with catch @ 00a7b9c0
                       catch() { ... } // from try @ 00a7b9b0 with catch @ 00a7b9c0 */
                    /* catch() { ... } // from try @ 00a7b91c with catch @ 00a7b9c4 */
                    /* catch() { ... } // from try @ 00a7b8f0 with catch @ 00a7b9c8 */
                    /* catch() { ... } // from try @ 00a7b8d8 with catch @ 00a7b9d8 */
  if (((param_1 == param_2) && (*(long *)(this + 0x58) == 0)) || (*(uint *)(this + 0x60) == param_1)
     ) {
    uVar1 = 0;
  }
  else {
    *(uint *)(this + 0x60) = param_1;
    if (*(long *)(this + 0x58) == 0) {
                    /* catch() { ... } // from try @ 00a7b920 with catch @ 00a7b9f8 */
      plVar2 = (long *)AudioResampler::create(*(undefined4 *)(this + 0x8c),this[0x24],param_2,0);
      *(long **)(this + 0x58) = plVar2;
                    /* catch() { ... } // from try @ 00a7b828 with catch @ 00a7ba10 */
      (**(code **)(*plVar2 + 0x28))(plVar2,sLocalTimeFreq);
    }
    uVar1 = 1;
  }
  return uVar1;
}

