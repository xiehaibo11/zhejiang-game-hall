
/* dragonBones::Slot::_updateDisplayData() */

void __thiscall dragonBones::Slot::_updateDisplayData(Slot *this)

{
  Slot *pSVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  DeformVertices *this_00;
  long *plVar8;
  undefined8 uVar9;
  ulong uVar10;
  VerticesData *pVVar11;
  long lVar12;
  VerticesData *pVVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
                    /* catch() { ... } // from try @ 00d7f148 with catch @ 00d7f188 */
                    /* catch() { ... } // from try @ 00d7f1dc with catch @ 00d7f1a4 */
  lVar17 = *(long *)(this + 0xd0);
  if (*(long *)(this + 0xd8) == 0) {
    pVVar13 = (VerticesData *)0x0;
  }
  else {
    pVVar13 = *(VerticesData **)(*(long *)(this + 0xd8) + 0x40);
  }
  lVar12 = *(long *)(this + 0x168);
  uVar4 = *(uint *)(this + 0x100);
  uVar10 = (ulong)uVar4;
  pSVar1 = this + 0x160;
  *(undefined8 *)(this + 0xd0) = 0;
                    /* try { // try from 00d7f1d4 to 00e7f1db has its CatchHandler @ 00d7f214 */
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  if ((int)uVar4 < 0) {
    pVVar11 = (VerticesData *)0x0;
    lVar15 = 0;
    lVar16 = 0;
    lVar14 = 0;
    bVar7 = true;
  }
  else {
                    /* try { // try from 00d7f1dc to 00e7f22f has its CatchHandler @ 00d7f1a4 */
    plVar8 = *(long **)(this + 0x158);
    if (((plVar8 == (long *)0x0) || ((ulong)(plVar8[1] - *plVar8 >> 3) <= uVar10)) ||
       (lVar14 = *(long *)(*plVar8 + (long)(int)uVar4 * 8), lVar14 == 0)) {
      lVar15 = *(long *)(*(long *)(*(long *)(this + 0x68) + 0x20) + 0x138);
      lVar14 = 0;
      if (lVar15 != 0) {
                    /* catch() { ... } // from try @ 00d7f1d4 with catch @ 00d7f214 */
        lVar14 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::DisplayData*,std::__ndk1::allocator<dragonBones::DisplayData*>>>>>
                             *)(lVar15 + 0x28),(basic_string *)(*(long *)(this + 200) + 0x20));
        if ((lVar15 + 0x30 == lVar14) ||
           ((ulong)(*(long *)(lVar14 + 0x40) - *(long *)(lVar14 + 0x38) >> 3) <= uVar10)) {
          lVar14 = 0;
        }
        else {
          lVar14 = *(long *)(*(long *)(lVar14 + 0x38) + uVar10 * 8);
        }
      }
    }
    if ((ulong)*(uint *)(this + 0x100) <
        (ulong)(*(long *)(this + 0x130) - *(long *)(this + 0x128) >> 3)) {
      lVar15 = *(long *)(*(long *)(this + 0x128) + (long)(int)*(uint *)(this + 0x100) * 8);
      *(long *)(this + 0xd0) = lVar15;
      if (lVar15 == 0) goto LAB_00d7f2a8;
LAB_00d7f288:
      iVar5 = *(int *)(lVar15 + 0x10);
      lVar16 = lVar15;
      if (iVar5 == 2) {
        pVVar11 = (VerticesData *)(lVar15 + 0x68);
joined_r0x00d7f298:
        if ((lVar14 != 0) && (*(int *)(lVar14 + 0x10) == 3)) {
          *(undefined8 *)pSVar1 = *(undefined8 *)(lVar14 + 0x68);
        }
        if (iVar5 == 2) {
                    /* try { // try from 00d7f330 to 00e7f443 has its CatchHandler @ 00d7f330
                       catch() { ... } // from try @ 00d7f330 with catch @ 00d7f330
                       catch() { ... } // from try @ 00d800ec with catch @ 00d7f330
                       catch() { ... } // from try @ 00d80e68 with catch @ 00d7f330
                       catch() { ... } // from try @ 00d811e4 with catch @ 00d7f330 */
          uVar9 = *(undefined8 *)(lVar15 + 0x80);
LAB_00d7f338:
          *(undefined8 *)(this + 0x168) = uVar9;
        }
        else if (iVar5 == 0) {
          uVar9 = *(undefined8 *)(lVar15 + 0x70);
          goto LAB_00d7f338;
        }
        bVar7 = false;
        if (lVar14 == 0) goto LAB_00d7f378;
        goto LAB_00d7f344;
      }
      pVVar11 = (VerticesData *)0x0;
      if ((lVar14 != 0) && (iVar5 != 4)) {
        if (*(int *)(lVar14 + 0x10) == 2) {
          pVVar11 = (VerticesData *)(lVar14 + 0x68);
        }
        else {
          pVVar11 = (VerticesData *)0x0;
        }
      }
      if (iVar5 != 3) goto joined_r0x00d7f298;
      uVar9 = *(undefined8 *)(lVar15 + 0x68);
      bVar7 = false;
LAB_00d7f354:
      *(undefined8 *)pSVar1 = uVar9;
      goto joined_r0x00d7f380;
    }
    lVar15 = *(long *)(this + 0xd0);
    if (lVar15 != 0) goto LAB_00d7f288;
LAB_00d7f2a8:
    lVar16 = 0;
    pVVar11 = (VerticesData *)0x0;
    bVar7 = true;
    if (lVar14 != 0) {
LAB_00d7f344:
      if (*(int *)(lVar14 + 0x10) == 3) {
        uVar9 = *(undefined8 *)(lVar14 + 0x68);
        goto LAB_00d7f354;
      }
    }
  }
LAB_00d7f378:
  *(undefined8 *)pSVar1 = 0;
joined_r0x00d7f380:
  if (((lVar16 != lVar17) || (pVVar11 != pVVar13)) || (*(long *)(this + 0x168) != lVar12)) {
    if ((pVVar11 == (VerticesData *)0x0) && (lVar17 = *(long *)(this + 0x168), lVar17 != 0)) {
      cVar6 = *(char *)(lVar17 + 0xd);
      pfVar3 = *(float **)(lVar17 + 0x38);
      pfVar2 = pfVar3;
      if (pfVar3 == (float *)0x0) {
        pfVar2 = (float *)(lVar17 + 0x28);
      }
      fVar25 = pfVar2[2];
      fVar22 = pfVar2[3];
                    /* try { // try from 00d7f444 to 00e7f45b has its CatchHandler @ 00d81344 */
      if (pfVar3 != (float *)0x0 || cVar6 == '\0') {
        fVar25 = pfVar2[3];
        fVar22 = pfVar2[2];
      }
      fVar21 = *(float *)(*(long *)(lVar17 + 0x40) + 0x1c) *
               *(float *)(*(long *)(*(long *)(this + 0x68) + 0x20) + 0x1c);
      fVar23 = fVar21 * fVar22 * *(float *)(lVar15 + 0x68);
      fVar22 = fVar21 * fVar25 * *(float *)(lVar15 + 0x6c);
      *(float *)(this + 0x9c) = fVar23;
      *(float *)(this + 0xa0) = fVar22;
      if (pfVar3 != (float *)0x0) {
        fVar23 = fVar23 + fVar21 * *pfVar3;
        *(float *)(this + 0x9c) = fVar23;
        fVar22 = fVar22 + fVar21 * pfVar3[1];
        *(float *)(this + 0xa0) = fVar22;
      }
      if ((lVar16 != lVar14) && (!bVar7 && lVar14 != 0)) {
        fVar20 = *(float *)(lVar14 + 0x54);
        sincosf(fVar20,&fStack_a4,&local_a8);
        fVar25 = 1.0;
        if (fVar20 != 0.0) {
          fVar25 = local_a8;
        }
        fVar24 = 0.0;
        if (fVar20 != 0.0) {
          fVar24 = fStack_a4;
        }
        fVar18 = fVar25;
        fVar19 = fVar24;
        TransformObject::_helpMatrix = fVar25;
        DAT_01777090 = fVar24;
        if (*(float *)(lVar14 + 0x50) != 0.0) {
          sincosf(fVar20 + *(float *)(lVar14 + 0x50),&fStack_ac,&local_b0);
          fVar18 = local_b0;
          fVar19 = fStack_ac;
        }
        fVar19 = -fVar19;
        fVar20 = *(float *)(lVar14 + 0x58);
        if (fVar20 != 1.0) {
          fVar25 = fVar25 * fVar20;
          fVar24 = fVar24 * fVar20;
          TransformObject::_helpMatrix = fVar25;
          DAT_01777090 = fVar24;
        }
        fVar20 = *(float *)(lVar14 + 0x5c);
        if (fVar20 != 1.0) {
          fVar19 = fVar20 * fVar19;
          fVar18 = fVar18 * fVar20;
        }
        fVar20 = fVar25 * fVar18 - fVar24 * fVar19;
        DAT_01777094 = -fVar19 / fVar20;
        DAT_01777098 = fVar25 / fVar20;
        DAT_0177709c = (fVar19 * *(float *)(lVar14 + 0x4c) - fVar18 * *(float *)(lVar14 + 0x48)) /
                       fVar20;
        DAT_017770a0 = -(fVar25 * *(float *)(lVar14 + 0x4c) - fVar24 * *(float *)(lVar14 + 0x48)) /
                       fVar20;
        TransformObject::_helpPoint = DAT_0177709c + (fVar18 / fVar20) * 0.0 + DAT_01777094 * 0.0;
        DAT_0178775c = DAT_017770a0 + (DAT_01777098 * 0.0 - (fVar24 / fVar20) * 0.0);
        fVar23 = fVar23 - TransformObject::_helpPoint;
        fVar22 = fVar22 - DAT_0178775c;
        *(float *)(this + 0x9c) = fVar23;
        *(float *)(this + 0xa0) = fVar22;
        fVar24 = *(float *)(lVar16 + 0x54);
        sincosf(fVar24,&fStack_b4,&local_b8);
        fVar25 = 0.0;
        fVar20 = 1.0;
        if (fVar24 != 0.0) {
          fVar25 = fStack_b4;
          fVar20 = local_b8;
        }
        fVar18 = fVar20;
        fVar19 = fVar25;
        if (*(float *)(lVar16 + 0x50) != 0.0) {
          TransformObject::_helpMatrix = fVar20;
          DAT_01777090 = fVar25;
          sincosf(fVar24 + *(float *)(lVar16 + 0x50),&fStack_bc,&local_c0);
          fVar18 = local_c0;
          fVar19 = fStack_bc;
        }
        fVar19 = -fVar19;
        fVar24 = *(float *)(lVar16 + 0x58);
        if (fVar24 != 1.0) {
          fVar20 = fVar20 * fVar24;
          fVar25 = fVar25 * fVar24;
        }
        fVar24 = *(float *)(lVar16 + 0x5c);
        if (fVar24 != 1.0) {
          fVar19 = fVar24 * fVar19;
          fVar18 = fVar18 * fVar24;
        }
        fVar24 = fVar20 * fVar18 - fVar25 * fVar19;
        TransformObject::_helpMatrix = fVar18 / fVar24;
        DAT_01777090 = -fVar25 / fVar24;
        DAT_01777094 = -fVar19 / fVar24;
        DAT_01777098 = fVar20 / fVar24;
        DAT_0177709c = (fVar19 * *(float *)(lVar16 + 0x4c) - fVar18 * *(float *)(lVar16 + 0x48)) /
                       fVar24;
        DAT_017770a0 = -(fVar20 * *(float *)(lVar16 + 0x4c) - fVar25 * *(float *)(lVar16 + 0x48)) /
                       fVar24;
        TransformObject::_helpPoint =
             DAT_0177709c + TransformObject::_helpMatrix * 0.0 + DAT_01777094 * 0.0;
        DAT_0178775c = DAT_017770a0 + DAT_01777090 * 0.0 + DAT_01777098 * 0.0;
        fVar22 = fVar22 + DAT_0178775c;
        *(float *)(this + 0x9c) = fVar23 + TransformObject::_helpPoint;
        *(float *)(this + 0xa0) = fVar22;
      }
      if (DragonBones::yDown == '\0') {
        lVar15 = 0x34;
        if (cVar6 != '\0') {
          lVar15 = 0x30;
        }
        *(float *)(this + 0xa0) = fVar21 * *(float *)(lVar17 + lVar15) - fVar22;
      }
    }
    else {
      *(undefined4 *)(this + 0x9c) = 0;
      *(undefined4 *)(this + 0xa0) = 0;
    }
    this_00 = *(DeformVertices **)(this + 0xd8);
    lVar17 = 0;
    if (!bVar7) {
      lVar17 = lVar16 + 0x48;
    }
    if (lVar14 != 0) {
      lVar17 = lVar14 + 0x48;
    }
    *(long *)(this + 0x58) = lVar17;
    if (pVVar11 == pVVar13) {
      if ((this_00 != (DeformVertices *)0x0) && (*(long *)(this + 0x168) != lVar12)) {
        this_00[0xd] = (DeformVertices)0x1;
      }
    }
    else {
      if (this_00 == (DeformVertices *)0x0) {
        this_00 = BaseObject::borrowObject<dragonBones::DeformVertices>();
        *(DeformVertices **)(this + 0xd8) = this_00;
      }
      DeformVertices::init(this_00,pVVar11,*(Armature **)(this + 0x68));
    }
    this[0xf8] = (Slot)0x1;
    this[0xfc] = (Slot)0x1;
  }
  return;
}

