
/* cocos2d::AudioMixer::setParameter(int, int, int, void*) */

void __thiscall
cocos2d::AudioMixer::setParameter
          (AudioMixer *this,int param_1,int param_2,int param_3,void *param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long *plVar8;
  ulong uVar9;
  AudioMixer *pAVar10;
  void *pvVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  
                    /* try { // try from 00a7bb78 to 00b7bb7f has its CatchHandler @ 00a7bbe8 */
                    /* try { // try from 00a7bb80 to 00b7bb9f has its CatchHandler @ 00a7ba88 */
  if (4 < param_2 - 0x3000U) {
                    /* WARNING: Subroutine does not return */
    __android_log_assert(0,"AudioMixer","setParameter: bad target %d",param_2);
  }
                    /* try { // try from 00a7bba0 to 00b7bbab has its CatchHandler @ 00a7bbe8 */
                    /* try { // try from 00a7bbac to 00b7bbef has its CatchHandler @ 00a7ba88 */
  lVar13 = (long)param_1 + -0x1000;
  uVar12 = (uint)lVar13;
  uVar14 = (uint)param_4;
  switch(param_2) {
  case 0x3000:
    break;
  case 0x3001:
    if (param_3 == 0x4102) {
      plVar8 = *(long **)(this + lVar13 * 0xd0 + 0xb8);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
      }
      *(undefined8 *)(this + lVar13 * 0xd0 + 0xb8) = 0;
      *(undefined4 *)(this + lVar13 * 0xd0 + 0xc0) = *(undefined4 *)(this + 8);
    }
    else if (param_3 == 0x4101) {
                    /* try { // try from 00a7bdf4 to 00b7be2b has its CatchHandler @ 00a7bfdc */
      if (*(long **)(this + lVar13 * 0xd0 + 0xb8) != (long *)0x0) {
        (**(code **)(**(long **)(this + lVar13 * 0xd0 + 0xb8) + 0x40))();
      }
    }
    else {
      if (param_3 != 0x4100) {
                    /* try { // try from 00a7bf7c to 00b7bf83 has its CatchHandler @ 00a7bf8c */
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00a7bf84 to 00b7c02b has its CatchHandler @ 00a7bd9c */
        __android_log_assert(0,"AudioMixer","setParameter resample: bad param %d");
      }
                    /* try { // try from 00a7bc90 to 00b7bc97 has its CatchHandler @ 00a7bcc8 */
      uVar1 = *(uint *)(this + 8);
                    /* try { // try from 00a7bca0 to 00b7bca3 has its CatchHandler @ 00a7bcb8 */
                    /* try { // try from 00a7bca4 to 00b7bcdb has its CatchHandler @ 00a7bc5c */
      if ((uVar1 == uVar14) && (*(long *)(this + lVar13 * 0xd0 + 0xb8) == 0)) {
        return;
      }
                    /* catch() { ... } // from try @ 00a7bca0 with catch @ 00a7bcb8 */
      if (*(uint *)(this + lVar13 * 0xd0 + 0xc0) == uVar14) {
        return;
      }
      *(uint *)(this + lVar13 * 0xd0 + 0xc0) = uVar14;
                    /* catch() { ... } // from try @ 00a7bc90 with catch @ 00a7bcc8 */
      if (*(long *)(this + lVar13 * 0xd0 + 0xb8) == 0) {
                    /* try { // try from 00a7bcdc to 00b7bd13 has its CatchHandler @ 00a7bcdc
                       catch() { ... } // from try @ 00a7bcdc with catch @ 00a7bcdc
                       catch() { ... } // from try @ 00a7bd1c with catch @ 00a7bcdc */
        plVar8 = (long *)AudioResampler::create
                                   (*(undefined4 *)(this + lVar13 * 0xd0 + 0xec),
                                    this[lVar13 * 0xd0 + 0x84],uVar1,0);
        *(long **)(this + lVar13 * 0xd0 + 0xb8) = plVar8;
        (**(code **)(*plVar8 + 0x28))(plVar8,sLocalTimeFreq);
      }
    }
    goto LAB_00a7beb0;
  default:
    if (param_3 == 0x4210) {
      uVar15 = *(undefined4 *)param_4;
      if (param_2 == 0x3002) {
        uVar7 = *(undefined4 *)(this + 0x28);
      }
      else {
        uVar7 = 0;
      }
      lVar2 = lVar13 * 0xd0 + 0x80;
      lVar3 = lVar13 * 0xd0 + 0x7c;
      lVar4 = lVar13 * 0xd0 + 0x78;
      lVar5 = lVar13 * 0xd0 + 0x10c;
      lVar6 = lVar13 * 0xd0 + 0x110;
      lVar13 = lVar13 * 0xd0 + 0x114;
                    /* try { // try from 00a7bd9c to 00b7bdf3 has its CatchHandler @ 00a7bd9c
                       catch() { ... } // from try @ 00a7bd9c with catch @ 00a7bd9c
                       catch() { ... } // from try @ 00a7be78 with catch @ 00a7bd9c
                       catch() { ... } // from try @ 00a7bf84 with catch @ 00a7bd9c */
    }
    else {
                    /* try { // try from 00a7bd14 to 00b7bd1b has its CatchHandler @ 00a7bd2c */
      if ((uint)param_3 >> 1 != 0x2100) {
                    /* catch() { ... } // from try @ 00a7bed4 with catch @ 00a7bf88 */
                    /* catch() { ... } // from try @ 00a7be70 with catch @ 00a7bf8c
                       catch() { ... } // from try @ 00a7bf7c with catch @ 00a7bf8c */
                    /* catch() { ... } // from try @ 00a7bee8 with catch @ 00a7bf90 */
                    /* catch() { ... } // from try @ 00a7bebc with catch @ 00a7bf94 */
                    /* WARNING: Subroutine does not return */
        __android_log_assert(0,"AudioMixer","setParameter volume: bad param %d");
      }
      uVar15 = *(undefined4 *)param_4;
                    /* try { // try from 00a7bd1c to 00b7bd3f has its CatchHandler @ 00a7bcdc */
      if (param_2 == 0x3002) {
        uVar7 = *(undefined4 *)(this + 0x28);
                    /* catch() { ... } // from try @ 00a7bd14 with catch @ 00a7bd2c */
      }
      else {
        uVar7 = 0;
      }
      lVar2 = lVar13 * 0xd0 + 0x60;
      lVar13 = ((long)param_3 + -0x4200) * 4 + lVar2;
      lVar2 = ((long)param_3 + -0x4200) * 2 + lVar2 + 4;
      lVar3 = lVar13 + 8;
      lVar4 = lVar13 + 0x10;
      lVar5 = lVar13 + 0x94;
      lVar6 = lVar13 + 0x9c;
      lVar13 = lVar13 + 0xa4;
    }
    uVar9 = FUN_00a7bfa0(uVar15,uVar7,this + lVar2,this + lVar3,this + lVar4,this + lVar5,
                         this + lVar6,this + lVar13);
    goto joined_r0x00a7bde4;
  case 0x3004:
    if (param_3 != 0x4300) {
                    /* WARNING: Subroutine does not return */
      __android_log_assert(0,"AudioMixer","setParameter timestretch: bad param %d");
    }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7bb50 with catch @ 00a7bbe8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7bb78 with catch @ 00a7bbe8
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7bba0 with catch @ 00a7bbe8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a7baf0 with catch @ 00a7bbec
                       catch(type#1 @ 00000000) { ... } // from try @ 00a7bb1c with catch @ 00a7bbec
                        */
    if ((*(int *)((long)param_4 + 0xc) == 2) && (*(uint *)((long)param_4 + 8) < 2)) {
      fVar16 = *(float *)param_4;
      if ((0.1 <= fVar16) && (fVar16 <= 6.0)) {
LAB_00a7bd50:
        if ((0.25 <= *(float *)((long)param_4 + 4)) && (*(float *)((long)param_4 + 4) <= 4.0))
        goto LAB_00a7bd6c;
      }
    }
    else {
      fVar16 = *(float *)param_4;
      if ((0.01 <= fVar16) && (fVar16 <= 20.0)) goto LAB_00a7bd50;
    }
    __android_log_print((double)fVar16,(double)*(float *)((long)param_4 + 4),5,"AudioMixer",
                        "bad parameters speed %f, pitch %f");
LAB_00a7bd6c:
    uVar17 = *(undefined8 *)param_4;
    *(undefined8 *)(this + lVar13 * 0xd0 + 0x128) = *(undefined8 *)((long)param_4 + 8);
    *(undefined8 *)(this + lVar13 * 0xd0 + 0x120) = uVar17;
    return;
  }
  switch(param_3) {
  case 0x4000:
                    /* try { // try from 00a7bc5c to 00b7bc8f has its CatchHandler @ 00a7bc5c
                       catch() { ... } // from try @ 00a7bc5c with catch @ 00a7bc5c
                       catch() { ... } // from try @ 00a7bca4 with catch @ 00a7bc5c */
    uVar9 = setChannelMasks(this,uVar12,uVar14,*(uint *)(this + lVar13 * 0xd0 + 0x118));
    break;
  case 0x4001:
    if (*(uint *)(this + lVar13 * 0xd0 + 0xe8) == uVar14) {
      return;
    }
    *(uint *)(this + lVar13 * 0xd0 + 0xe8) = uVar14;
                    /* try { // try from 00a7be70 to 00b7be77 has its CatchHandler @ 00a7bf8c */
    goto LAB_00a7beb0;
  case 0x4002:
                    /* try { // try from 00a7be78 to 00b7bea3 has its CatchHandler @ 00a7bd9c */
    pAVar10 = this + lVar13 * 0xd0 + 200;
    pvVar11 = *(void **)pAVar10;
    goto joined_r0x00a7be50;
  case 0x4003:
    pAVar10 = this + lVar13 * 0xd0 + 0xd0;
    pvVar11 = *(void **)pAVar10;
joined_r0x00a7be50:
    if (pvVar11 == param_4) {
      return;
    }
    *(void **)pAVar10 = param_4;
    goto LAB_00a7beb0;
  default:
                    /* WARNING: Subroutine does not return */
    __android_log_assert(0,"AudioMixer","setParameter track: bad param %d");
  case 0x4005:
                    /* try { // try from 00a7bee8 to 00b7beeb has its CatchHandler @ 00a7bf90 */
                    /* try { // try from 00a7beec to 00b7bf07 has its CatchHandler @ 00a7bfc4 */
    if (*(uint *)(this + lVar13 * 0xd0 + 0xe4) == uVar14) {
      return;
    }
    *(uint *)(this + lVar13 * 0xd0 + 0xe4) = uVar14;
    return;
  case 0x4006:
                    /* try { // try from 00a7bea4 to 00b7beab has its CatchHandler @ 00a7bfa4 */
    uVar9 = setChannelMasks(this,uVar12,*(uint *)(this + lVar13 * 0xd0 + 0x88),uVar14);
  }
joined_r0x00a7bde4:
  if ((uVar9 & 1) != 0) {
LAB_00a7beb0:
                    /* try { // try from 00a7bebc to 00b7bec3 has its CatchHandler @ 00a7bf94 */
    *(uint *)(this + 0x24) = *(uint *)(this + 0x24) | 1 << (ulong)(uVar12 & 0x1f);
    *(code **)(this + 0x30) = process__validate;
  }
                    /* try { // try from 00a7bed4 to 00b7bed7 has its CatchHandler @ 00a7bf88 */
  return;
}

