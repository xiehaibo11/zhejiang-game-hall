
/* cocos2d::AudioMixer::setChannelMasks(int, unsigned int, unsigned int) */

undefined4 __thiscall
cocos2d::AudioMixer::setChannelMasks(AudioMixer *this,int param_1,uint param_2,uint param_3)

{
  int iVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  AudioMixer *pAVar5;
  AudioMixer *pAVar6;
  AudioMixer AVar7;
  uint uVar9;
  undefined2 uVar8;
  
  lVar4 = (long)param_1;
  if ((*(uint *)(this + (long)param_1 * 0xd0 + 0x88) == param_2) &&
     (*(uint *)(this + lVar4 * 0xd0 + 0x118) == param_3)) {
    return 0;
  }
  if (param_2 >> 0x1e == 2) {
    uVar9 = param_2 & 0x3fffffff;
LAB_00a7b8a0:
                    /* try { // try from 00a7b8a4 to 00b7b8ab has its CatchHandler @ 00a7b9c0 */
    uVar8 = NEON_uaddlv((ulong)CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                                        CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                                                 CONCAT11(POPCOUNT((char)(uVar9 >> 8)),
                                                          POPCOUNT((char)uVar9)))),1);
    AVar7 = SUB21(uVar8,0);
                    /* try { // try from 00a7b8ac to 00b7b8d7 has its CatchHandler @ 00a7b7d0 */
  }
  else {
    if (param_2 >> 0x1e == 0) {
      uVar9 = param_2 & 0x3ffff;
      goto LAB_00a7b8a0;
    }
    AVar7 = (AudioMixer)0x0;
  }
  if (param_3 >> 0x1e == 2) {
    uVar9 = param_3 & 0x3fffffff;
  }
  else {
    if (param_3 >> 0x1e != 0) {
      iVar3 = 0;
      goto LAB_00a7b8ec;
    }
    uVar9 = param_3 & 0x3ffff;
  }
                    /* try { // try from 00a7b8d8 to 00b7b8df has its CatchHandler @ 00a7b9d8 */
  uVar9 = CONCAT13(POPCOUNT((char)(uVar9 >> 0x18)),
                   CONCAT12(POPCOUNT((char)(uVar9 >> 0x10)),
                            CONCAT11(POPCOUNT((char)(uVar9 >> 8)),POPCOUNT((char)uVar9))));
  uVar8 = NEON_uaddlv((ulong)uVar9,1);
  iVar3 = CONCAT22((short)(uVar9 >> 0x10),uVar8);
LAB_00a7b8ec:
                    /* try { // try from 00a7b8f0 to 00b7b8f7 has its CatchHandler @ 00a7b9c8 */
  iVar1 = *(int *)(this + lVar4 * 0xd0 + 0x11c);
  *(uint *)(this + (long)param_1 * 0xd0 + 0x88) = param_2;
  pAVar5 = this + lVar4 * 0xd0 + 0xb8;
                    /* try { // try from 00a7b908 to 00b7b90b has its CatchHandler @ 00a7b9bc */
  this[lVar4 * 0xd0 + 0x84] = AVar7;
  *(uint *)(this + lVar4 * 0xd0 + 0x118) = param_3;
  *(int *)(this + lVar4 * 0xd0 + 0x11c) = iVar3;
                    /* try { // try from 00a7b91c to 00b7b91f has its CatchHandler @ 00a7b9c4 */
  *(undefined4 *)(this + lVar4 * 0xd0 + 0xf0) = 0xffffffff;
                    /* try { // try from 00a7b920 to 00b7b93b has its CatchHandler @ 00a7b9f8 */
  if ((iVar1 != iVar3) && (*(long **)pAVar5 != (long *)0x0)) {
    pAVar6 = this + lVar4 * 0xd0 + 0xc0;
    iVar1 = *(int *)pAVar6;
    (**(code **)(**(long **)pAVar5 + 8))();
    *(undefined8 *)pAVar5 = 0;
    iVar3 = *(int *)(this + 8);
    *(int *)pAVar6 = iVar3;
    if (iVar1 != iVar3) {
      *(int *)pAVar6 = iVar1;
      plVar2 = (long *)AudioResampler::create
                                 (*(undefined4 *)(this + lVar4 * 0xd0 + 0xec),
                                  this[lVar4 * 0xd0 + 0x84],iVar3,0);
      *(long **)pAVar5 = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2,sLocalTimeFreq);
    }
  }
  return 1;
}

