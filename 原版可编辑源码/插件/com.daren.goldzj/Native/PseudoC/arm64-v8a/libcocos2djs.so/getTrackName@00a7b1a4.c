
/* cocos2d::AudioMixer::getTrackName(unsigned int, audio_format_t, int) */

uint __thiscall
cocos2d::AudioMixer::getTrackName(AudioMixer *this,ulong param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  AudioMixer AVar6;
  undefined2 uVar7;
  undefined1 auVar8 [16];
  
                    /* try { // try from 00a7b1ac to 00b7b1df has its CatchHandler @ 00a7b1ac
                       catch() { ... } // from try @ 00a7b1ac with catch @ 00a7b1ac
                       catch() { ... } // from try @ 00a7b1f4 with catch @ 00a7b1ac */
  if ((6 < param_3) || ((1 << (ulong)(param_3 & 0x1f) & 0x6eU) == 0)) {
                    /* try { // try from 00a7b264 to 00b7b26b has its CatchHandler @ 00a7b27c */
                    /* try { // try from 00a7b26c to 00b7b28f has its CatchHandler @ 00a7b22c */
    __android_log_print(6,"AudioMixer","AudioMixer::getTrackName invalid format (%#x)",param_3);
                    /* catch() { ... } // from try @ 00a7b264 with catch @ 00a7b27c */
    return 0xffffffff;
  }
  uVar2 = *(uint *)this;
  uVar4 = *(uint *)(this + 4) & (uVar2 ^ 0xffffffff);
  if (uVar4 == 0) {
    __android_log_print(6,"AudioMixer","AudioMixer::getTrackName out of available tracks");
    return 0xffffffff;
  }
  uVar4 = (uVar4 & 0xaaaaaaaa) >> 1 | (uVar4 & 0x55555555) << 1;
  uVar4 = (uVar4 & 0xcccccccc) >> 2 | (uVar4 & 0x33333333) << 2;
  uVar4 = (uVar4 & 0xf0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f) << 4;
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
                    /* try { // try from 00a7b1e0 to 00b7b1e7 has its CatchHandler @ 00a7b218 */
  lVar5 = LZCOUNT(uVar4 >> 0x10 | uVar4 << 0x10);
                    /* try { // try from 00a7b1f0 to 00b7b1f3 has its CatchHandler @ 00a7b208 */
                    /* try { // try from 00a7b1f4 to 00b7b22b has its CatchHandler @ 00a7b1ac */
  *(undefined8 *)(this + lVar5 * 0xd0 + 0x68) = 0x1000000010000000;
  auVar8 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + lVar5 * 0xd0 + 0x60) = 0x1000100000000000;
                    /* catch() { ... } // from try @ 00a7b1f0 with catch @ 00a7b208 */
  *(undefined8 *)(this + lVar5 * 0xd0 + 0x70) = 0;
  *(undefined8 *)(this + lVar5 * 0xd0 + 0x78) = 0;
  *(undefined2 *)(this + lVar5 * 0xd0 + 0x80) = 0;
  *(long *)(this + lVar5 * 0xd0 + 0xfc) = auVar8._8_8_;
  *(long *)(this + lVar5 * 0xd0 + 0xf4) = auVar8._0_8_;
                    /* catch() { ... } // from try @ 00a7b1e0 with catch @ 00a7b218 */
  *(undefined4 *)(this + lVar5 * 0xd0 + 0x114) = 0;
  *(undefined8 *)(this + lVar5 * 0xd0 + 0x10c) = 0;
  *(undefined8 *)(this + lVar5 * 0xd0 + 0x104) = 0;
  uVar4 = (uint)param_2;
  if (((uint)(param_2 >> 0x1e) & 3) == 2) {
    uVar1 = uVar4 & 0x3fffffff;
  }
  else {
                    /* try { // try from 00a7b22c to 00b7b263 has its CatchHandler @ 00a7b22c
                       catch() { ... } // from try @ 00a7b22c with catch @ 00a7b22c
                       catch() { ... } // from try @ 00a7b26c with catch @ 00a7b22c */
    AVar6 = (AudioMixer)0x0;
    if ((param_2 >> 0x1e & 3) != 0) goto LAB_00a7b294;
    uVar1 = uVar4 & 0x3ffff;
  }
  uVar7 = NEON_uaddlv((ulong)CONCAT13(POPCOUNT((char)(uVar1 >> 0x18)),
                                      CONCAT12(POPCOUNT((char)(uVar1 >> 0x10)),
                                               CONCAT11(POPCOUNT((char)(uVar1 >> 8)),
                                                        POPCOUNT((char)uVar1)))),1);
  AVar6 = SUB21(uVar7,0);
LAB_00a7b294:
  this[lVar5 * 0xd0 + 0x84] = AVar6;
  *(undefined2 *)(this + lVar5 * 0xd0 + 0x86) = 0;
  *(uint *)(this + lVar5 * 0xd0 + 0x88) = uVar4;
  *(undefined4 *)(this + lVar5 * 0xd0 + 0xe0) = param_4;
  *(undefined8 *)(this + lVar5 * 0xd0 + 0x90) = 0;
  *(undefined8 *)(this + lVar5 * 0xd0 + 0x98) = 0;
  *(undefined8 *)(this + lVar5 * 0xd0 + 0xb0) = 0;
  *(undefined8 *)(this + lVar5 * 0xd0 + 0xb8) = 0;
  *(undefined8 *)(this + lVar5 * 0xd0 + 0xa8) = 0;
  uVar3 = *(undefined4 *)(this + 8);
  *(undefined8 *)(this + lVar5 * 0xd0 + 0xec) = 0xffffffff00000001;
  *(undefined8 *)(this + lVar5 * 0xd0 + 0x118) = 0x200000003;
                    /* try { // try from 00a7b2ec to 00b7b337 has its CatchHandler @ 00a7b2ec
                       catch() { ... } // from try @ 00a7b2ec with catch @ 00a7b2ec
                       catch() { ... } // from try @ 00a7b3ac with catch @ 00a7b2ec */
  *(undefined8 *)(this + lVar5 * 0xd0 + 0xd0) = 0;
  *(undefined8 *)(this + lVar5 * 0xd0 + 0xd8) = 0;
  *(undefined8 *)(this + lVar5 * 0xd0 + 200) = 0;
  *(undefined4 *)(this + lVar5 * 0xd0 + 0xe4) = 1;
  *(uint *)(this + lVar5 * 0xd0 + 0xe8) = param_3;
  *(undefined8 *)(this + lVar5 * 0xd0 + 0x128) = 0;
  *(undefined8 *)(this + lVar5 * 0xd0 + 0x120) = 0x3f8000003f800000;
  *(undefined4 *)(this + lVar5 * 0xd0 + 0xf0) = 0xffffffff;
  *(undefined4 *)(this + lVar5 * 0xd0 + 0xc0) = uVar3;
  *(uint *)this = 1 << (ulong)((uint)lVar5 & 0x1f) | uVar2;
  return (uint)lVar5 | 0x1000;
}

