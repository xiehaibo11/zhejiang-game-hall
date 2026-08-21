
/* dragonBones::AnimationState::init(dragonBones::Armature*, dragonBones::AnimationData*,
   dragonBones::AnimationConfig*) */

void __thiscall
dragonBones::AnimationState::init
          (AnimationState *this,Armature *param_1,AnimationData *param_2,AnimationConfig *param_3)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  ulong uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar3;
  AnimationConfig *pAVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  byte *pbVar6;
  bool bVar7;
  ActionTimelineState *pAVar8;
  ZOrderTimelineState *pZVar9;
  undefined4 uVar10;
  ulong uVar11;
  byte *pbVar12;
  long lVar13;
  long lVar14;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  byte *pbVar15;
  long lVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  undefined1 auVar21 [16];
  float fVar22;
  
  if (*(long *)(this + 0x130) != 0) {
    return;
  }
  *(Armature **)(this + 0x130) = param_1;
  *(AnimationData **)(this + 0x80) = param_2;
  this[0x10] = *(AnimationState *)(param_3 + 0x20);
  this[0xe] = *(AnimationState *)(param_3 + 0x1d);
  this[0xf] = *(AnimationState *)(param_3 + 0x1e);
  this[0xd] = *(AnimationState *)(param_3 + 0x1c);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_3 + 0x2c);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_3 + 0x28);
  auVar19 = *(undefined1 (*) [16])(param_3 + 0x38);
  auVar21 = NEON_ext(auVar19,auVar19,4,1);
  auVar18._4_4_ = auVar19._12_4_;
  auVar18._0_4_ = auVar19._4_4_;
  auVar18._8_4_ = auVar21._4_4_;
  auVar18._12_4_ = auVar21._12_4_;
  auVar19 = NEON_ext(auVar21,auVar18,0xc,1);
  *(long *)(this + 0x24) = auVar19._8_8_;
  *(long *)(this + 0x1c) = auVar19._0_8_;
  bVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_3 + 0x48);
  if (((byte)bVar5 & 1) == 0) {
    uVar11 = (ulong)((byte)bVar5 >> 1);
  }
  else {
    uVar11 = *(ulong *)(param_3 + 0x50);
  }
  pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_3 + 0x60);
  if (uVar11 != 0) {
    pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_3 + 0x48);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x30) != pbVar1) {
    uVar11 = *(ulong *)(pbVar1 + 8);
    pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar1 + 0x10);
    if (((byte)*pbVar1 & 1) == 0) {
      pbVar3 = pbVar1 + 1;
      uVar11 = (ulong)((byte)*pbVar1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),(char *)pbVar3,uVar11);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x48) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (param_3 + 0x78)) {
    uVar11 = *(ulong *)(param_3 + 0x80);
    pAVar4 = *(AnimationConfig **)(param_3 + 0x88);
    if (((byte)param_3[0x78] & 1) == 0) {
      pAVar4 = param_3 + 0x79;
      uVar11 = (ulong)((byte)param_3[0x78] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x48),(char *)pAVar4,uVar11);
  }
  uVar10 = 2;
  if (param_3[0x1f] == (AnimationConfig)0x0) {
    uVar10 = 3;
  }
  *(undefined4 *)(this + 0x60) = uVar10;
  if (0.0 <= *(float *)(param_3 + 0x34)) {
    uVar10 = *(undefined4 *)(param_3 + 0x30);
    *(float *)(this + 0x70) = *(float *)(param_3 + 0x34);
    *(undefined4 *)(this + 0x6c) = uVar10;
LAB_00d203f8:
    fVar17 = 0.0;
  }
  else {
    *(undefined4 *)(this + 0x6c) = 0;
    fVar22 = *(float *)(*(long *)(this + 0x80) + 0x24);
    *(float *)(this + 0x70) = fVar22;
    fVar17 = *(float *)(param_3 + 0x30);
    if (fVar17 == 0.0) goto LAB_00d203f8;
    fVar20 = *(float *)(this + 0x1c);
    if (0.0 <= fVar20) goto LAB_00d20400;
    fVar17 = fVar17 - fVar22;
  }
  fVar20 = *(float *)(this + 0x1c);
LAB_00d20400:
  *(float *)(this + 0x98) = fVar17;
  if ((fVar20 < 0.0) && (fVar17 == 0.0)) {
    *(undefined4 *)(this + 0x98) = 0xb58637bd;
  }
  if (*(float *)(this + 0x28) <= 0.0) {
    *(undefined4 *)(this + 0x74) = 0x3f7fffef;
  }
  if (*(long *)(param_3 + 0x90) != *(long *)(param_3 + 0x98)) {
    this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
               *)(this + 0xa0);
    lVar13 = *(long *)(param_3 + 0x98) - *(long *)(param_3 + 0x90) >> 3;
    pbVar12 = *(byte **)(this + 0xa8);
    uVar11 = lVar13 * -0x5555555555555555;
    lVar14 = (long)pbVar12 - *(long *)this_00 >> 3;
    bVar7 = uVar11 < (ulong)(lVar14 * -0x5555555555555555);
    uVar11 = uVar11 + lVar14 * 0x5555555555555555;
    if (bVar7 || uVar11 == 0) {
      pbVar15 = pbVar12;
      if (bVar7) {
        pbVar15 = (byte *)(*(long *)this_00 + lVar13 * 8);
        while (pbVar6 = pbVar12, pbVar15 != pbVar6) {
          pbVar12 = pbVar6 + -0x18;
          if ((*pbVar12 & 1) != 0) {
            operator_delete(*(void **)(pbVar6 + -8));
          }
        }
        *(byte **)(this + 0xa8) = pbVar15;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::__append(this_00,uVar11);
      pbVar15 = *(byte **)(this + 0xa8);
    }
    lVar14 = *(long *)this_00;
    lVar13 = (long)pbVar15 - lVar14;
    if (lVar13 != 0) {
      lVar16 = 0;
      uVar11 = 1;
      while( true ) {
        if (lVar14 != *(long *)(param_3 + 0x90)) {
          pbVar12 = (byte *)(*(long *)(param_3 + 0x90) + lVar16);
          uVar2 = *(ulong *)(pbVar12 + 8);
          pbVar15 = *(byte **)(pbVar12 + 0x10);
          if ((*pbVar12 & 1) == 0) {
            pbVar15 = pbVar12 + 1;
            uVar2 = (ulong)(*pbVar12 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(lVar14 + lVar16),(char *)pbVar15,uVar2);
        }
        if ((ulong)((lVar13 >> 3) * -0x5555555555555555) <= uVar11) break;
        lVar14 = *(long *)this_00;
        uVar11 = uVar11 + 1;
        lVar16 = lVar16 + 0x18;
      }
    }
  }
  pAVar8 = BaseObject::borrowObject<dragonBones::ActionTimelineState>();
  *(ActionTimelineState **)(this + 0x88) = pAVar8;
  (**(code **)(*(long *)pAVar8 + 0x30))
            (pAVar8,*(undefined8 *)(this + 0x130),this,
             *(undefined8 *)(*(long *)(this + 0x80) + 0xe0));
  fVar17 = *(float *)(this + 0x98);
  lVar13 = *(long *)(this + 0x88);
  *(float *)(lVar13 + 0x18) = fVar17;
  if (fVar17 < 0.0) {
    *(float *)(lVar13 + 0x18) = *(float *)(this + 0x70) - fVar17;
  }
  if (*(long *)(*(long *)(this + 0x80) + 0xe8) == 0) {
    return;
  }
  pZVar9 = BaseObject::borrowObject<dragonBones::ZOrderTimelineState>();
  *(ZOrderTimelineState **)(this + 0x138) = pZVar9;
                    /* WARNING: Could not recover jumptable at 0x00d205b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pZVar9 + 0x30))
            (pZVar9,*(undefined8 *)(this + 0x130),this,
             *(undefined8 *)(*(long *)(this + 0x80) + 0xe8));
  return;
}

