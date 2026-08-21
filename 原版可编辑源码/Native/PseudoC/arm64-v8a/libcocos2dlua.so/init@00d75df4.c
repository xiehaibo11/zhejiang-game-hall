
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
  byte bVar6;
  byte *pbVar7;
  bool bVar8;
  ActionTimelineState *pAVar9;
  ZOrderTimelineState *pZVar10;
  undefined4 uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  *this_00;
  byte *pbVar16;
  long lVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  
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
  auVar20 = *(undefined1 (*) [16])(param_3 + 0x38);
  auVar22 = NEON_ext(auVar20,auVar20,4,1);
  auVar19._4_4_ = auVar20._12_4_;
  auVar19._0_4_ = auVar20._4_4_;
  auVar19._8_4_ = auVar22._4_4_;
  auVar19._12_4_ = auVar22._12_4_;
  auVar20 = NEON_ext(auVar22,auVar19,0xc,1);
  *(long *)(this + 0x24) = auVar20._8_8_;
  *(long *)(this + 0x1c) = auVar20._0_8_;
  bVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_3 + 0x48);
  if (((byte)bVar5 & 1) == 0) {
    uVar12 = (ulong)((byte)bVar5 >> 1);
  }
  else {
    uVar12 = *(ulong *)(param_3 + 0x50);
  }
  pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (param_3 + 0x60);
  if (uVar12 != 0) {
    pbVar1 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (param_3 + 0x48);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x30) != pbVar1) {
    uVar12 = *(ulong *)(pbVar1 + 8);
    pbVar3 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar1 + 0x10);
    if (((byte)*pbVar1 & 1) == 0) {
      pbVar3 = pbVar1 + 1;
      uVar12 = (ulong)((byte)*pbVar1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x30),(char *)pbVar3,uVar12);
  }
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x48) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (param_3 + 0x78)) {
    uVar12 = *(ulong *)(param_3 + 0x80);
    pAVar4 = *(AnimationConfig **)(param_3 + 0x88);
    if (((byte)param_3[0x78] & 1) == 0) {
      pAVar4 = param_3 + 0x79;
      uVar12 = (ulong)((byte)param_3[0x78] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x48),(char *)pAVar4,uVar12);
  }
  uVar11 = 2;
  if (param_3[0x1f] == (AnimationConfig)0x0) {
    uVar11 = 3;
  }
  *(undefined4 *)(this + 0x60) = uVar11;
  if (0.0 <= *(float *)(param_3 + 0x34)) {
    uVar11 = *(undefined4 *)(param_3 + 0x30);
    *(float *)(this + 0x70) = *(float *)(param_3 + 0x34);
    *(undefined4 *)(this + 0x6c) = uVar11;
LAB_00d75f4c:
    fVar18 = 0.0;
  }
  else {
    *(undefined4 *)(this + 0x6c) = 0;
    fVar23 = *(float *)(*(long *)(this + 0x80) + 0x24);
    *(float *)(this + 0x70) = fVar23;
    fVar18 = *(float *)(param_3 + 0x30);
    if (fVar18 == 0.0) goto LAB_00d75f4c;
    fVar21 = *(float *)(this + 0x1c);
    if (0.0 <= fVar21) goto LAB_00d75f54;
    fVar18 = fVar18 - fVar23;
  }
  fVar21 = *(float *)(this + 0x1c);
LAB_00d75f54:
  *(float *)(this + 0x98) = fVar18;
  if ((fVar21 < 0.0) && (fVar18 == 0.0)) {
    *(undefined4 *)(this + 0x98) = 0xb58637bd;
  }
  if (*(float *)(this + 0x28) <= 0.0) {
    *(undefined4 *)(this + 0x74) = 0x3f7fffef;
  }
  if (*(long *)(param_3 + 0x90) != *(long *)(param_3 + 0x98)) {
    this_00 = (vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
               *)(this + 0xa0);
    lVar14 = *(long *)(param_3 + 0x98) - *(long *)(param_3 + 0x90) >> 3;
    pbVar13 = *(byte **)(this + 0xa8);
    uVar12 = lVar14 * -0x5555555555555555;
    lVar15 = (long)pbVar13 - *(long *)this_00 >> 3;
    bVar8 = uVar12 < (ulong)(lVar15 * -0x5555555555555555);
    uVar12 = uVar12 + lVar15 * 0x5555555555555555;
    if (bVar8 || uVar12 == 0) {
      pbVar16 = pbVar13;
      if (bVar8) {
        pbVar16 = (byte *)(*(long *)this_00 + lVar14 * 8);
        if (pbVar16 != pbVar13) {
          bVar6 = pbVar13[-0x18];
          pbVar7 = pbVar13 + -0x18;
          while( true ) {
            if ((bVar6 & 1) != 0) {
              operator_delete(*(void **)(pbVar13 + -8));
            }
            if (pbVar16 == pbVar7) break;
            bVar6 = pbVar7[-0x18];
            pbVar13 = pbVar7;
            pbVar7 = pbVar7 + -0x18;
          }
        }
        *(byte **)(this + 0xa8) = pbVar16;
      }
    }
    else {
      std::__ndk1::
      vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
      ::__append(this_00,uVar12);
      pbVar16 = *(byte **)(this + 0xa8);
    }
    lVar15 = *(long *)this_00;
    lVar14 = (long)pbVar16 - lVar15;
    if (lVar14 != 0) {
      lVar17 = 0;
      uVar12 = 1;
      while( true ) {
        if (lVar15 != *(long *)(param_3 + 0x90)) {
          pbVar13 = (byte *)(*(long *)(param_3 + 0x90) + lVar17);
          uVar2 = *(ulong *)(pbVar13 + 8);
          pbVar16 = *(byte **)(pbVar13 + 0x10);
          if ((*pbVar13 & 1) == 0) {
            pbVar16 = pbVar13 + 1;
            uVar2 = (ulong)(*pbVar13 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)(lVar15 + lVar17),(char *)pbVar16,uVar2);
        }
        if ((ulong)((lVar14 >> 3) * -0x5555555555555555) <= uVar12) break;
        lVar15 = *(long *)this_00;
        uVar12 = uVar12 + 1;
        lVar17 = lVar17 + 0x18;
      }
    }
  }
  pAVar9 = BaseObject::borrowObject<dragonBones::ActionTimelineState>();
  *(ActionTimelineState **)(this + 0x88) = pAVar9;
  (**(code **)(*(long *)pAVar9 + 0x30))
            (pAVar9,*(undefined8 *)(this + 0x130),this,
             *(undefined8 *)(*(long *)(this + 0x80) + 0xe0));
  fVar18 = *(float *)(this + 0x98);
  lVar14 = *(long *)(this + 0x88);
  *(float *)(lVar14 + 0x18) = fVar18;
  if (fVar18 < 0.0) {
    *(float *)(lVar14 + 0x18) = *(float *)(this + 0x70) - fVar18;
  }
  if (*(long *)(*(long *)(this + 0x80) + 0xe8) == 0) {
    return;
  }
  pZVar10 = BaseObject::borrowObject<dragonBones::ZOrderTimelineState>();
  *(ZOrderTimelineState **)(this + 0x138) = pZVar10;
                    /* WARNING: Could not recover jumptable at 0x00d76114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)pZVar10 + 0x30))
            (pZVar10,*(undefined8 *)(this + 0x130),this,
             *(undefined8 *)(*(long *)(this + 0x80) + 0xe8));
  return;
}

