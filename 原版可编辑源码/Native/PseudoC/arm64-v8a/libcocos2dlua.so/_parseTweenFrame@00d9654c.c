
/* dragonBones::JSONDataParser::_parseTweenFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

int __thiscall
dragonBones::JSONDataParser::_parseTweenFrame
          (JSONDataParser *this,GenericValue *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined *__s1;
  int iVar6;
  int iVar7;
  GenericValue *pGVar8;
  char *pcVar9;
  undefined2 *puVar10;
  int *piVar11;
  long lVar12;
  float *pfVar13;
  float fVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  vector<float,std::__ndk1::allocator<float>> *this_00;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  long lVar23;
  ulong uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
                    /* try { // try from 00d9655c to 00e96567 has its CatchHandler @ 00d96738 */
                    /* try { // try from 00d96578 to 00e9659f has its CatchHandler @ 00d96744 */
  iVar6 = (**(code **)(*(long *)this + 0x90))(this,param_1,param_2);
  piVar20 = (int *)DataParser::CURVE;
  if (param_3 == 0) {
    lVar23 = *(long *)(this + 0x168);
    if (*(long *)(this + 0x170) - lVar23 == -2) {
                    /* try { // try from 00d9664c to 00e9665b has its CatchHandler @ 00d96798 */
      *(long *)(this + 0x170) = lVar23;
    }
    else {
      std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),1);
      lVar23 = *(long *)(this + 0x168);
    }
LAB_00d96984:
    *(undefined2 *)(lVar23 + (ulong)(iVar6 + 1) * 2) = 0;
    return iVar6;
  }
                    /* try { // try from 00d965a0 to 00e965ab has its CatchHandler @ 00d96728 */
  pcVar9 = DataParser::CURVE + -1;
  do {
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
                    /* try { // try from 00d965ac to 00e965df has its CatchHandler @ 00d96764 */
  piVar21 = *(int **)(param_1 + 8);
  uVar3 = *(uint *)param_1;
  uVar24 = (ulong)uVar3;
  piVar11 = piVar21 + uVar24 * 0xc;
  piVar22 = piVar21;
  if (uVar3 != 0) {
    uVar19 = (long)pcVar9 - (long)DataParser::CURVE;
    lVar23 = uVar24 * 0x30;
    piVar2 = piVar21;
                    /* try { // try from 00d965e4 to 00e96607 has its CatchHandler @ 00d96740 */
    do {
      piVar22 = piVar2;
      iVar7 = *piVar22;
                    /* try { // try from 00d96608 to 00e96623 has its CatchHandler @ 00d966e0 */
      if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
        iVar7 = 0x15 - *(char *)((long)piVar22 + 0x15);
      }
      if (iVar7 == (int)uVar19) {
        piVar2 = *(int **)(piVar22 + 2);
        if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
          piVar2 = piVar22;
        }
        if ((piVar2 == piVar20) || (iVar7 = memcmp(piVar20,piVar2,uVar19 & 0xffffffff), iVar7 == 0))
        break;
      }
      lVar23 = lVar23 + -0x30;
      piVar2 = piVar22 + 0xc;
      piVar22 = piVar11;
    } while (lVar23 != 0);
  }
  __s1 = DataParser::TWEEN_EASING;
                    /* try { // try from 00d9665c to 00e966d3 has its CatchHandler @ 00d96428 */
  if (piVar11 == piVar22) {
    pcVar9 = DataParser::TWEEN_EASING + -1;
    do {
      pcVar9 = pcVar9 + 1;
    } while (*pcVar9 != '\0');
    piVar20 = piVar21;
    if (uVar3 != 0) {
      uVar19 = (long)pcVar9 - (long)DataParser::TWEEN_EASING;
      lVar23 = uVar24 * 0x30;
                    /* try { // try from 00d966d4 to 00e966db has its CatchHandler @ 00d966dc */
      do {
        iVar7 = *piVar21;
        if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
          iVar7 = 0x15 - *(char *)((long)piVar21 + 0x15);
        }
        if (iVar7 == (int)uVar19) {
          piVar22 = *(int **)(piVar21 + 2);
          if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
            piVar22 = piVar21;
          }
          piVar20 = piVar21;
                    /* catch() { ... } // from try @ 00d965a0 with catch @ 00d96728 */
          if ((piVar22 == (int *)__s1) ||
             (iVar7 = memcmp(__s1,piVar22,uVar19 & 0xffffffff), iVar7 == 0)) break;
        }
                    /* catch() { ... } // from try @ 00d96508 with catch @ 00d966dc
                       catch() { ... } // from try @ 00d966d4 with catch @ 00d966dc
                       try { // try from 00d966dc to 00e967b3 has its CatchHandler @ 00d96428 */
        lVar23 = lVar23 + -0x30;
                    /* catch() { ... } // from try @ 00d96608 with catch @ 00d966e0 */
        piVar21 = piVar21 + 0xc;
        piVar20 = piVar11;
      } while (lVar23 != 0);
    }
                    /* try { // try from 00d96940 to 00e969a3 has its CatchHandler @ 00d96db0 */
    if ((piVar11 == piVar20) || (fVar25 = (float)_getNumber(param_1,__s1,-2.0), fVar25 == -2.0)) {
      lVar23 = *(long *)(this + 0x168);
      if (*(long *)(this + 0x170) - lVar23 == -2) {
        *(long *)(this + 0x170) = lVar23;
      }
      else {
        std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                  ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),1);
        lVar23 = *(long *)(this + 0x168);
      }
      goto LAB_00d96984;
    }
    if (fVar25 == 0.0) {
      lVar23 = *(long *)(this + 0x168);
      if (*(long *)(this + 0x170) - lVar23 == -2) {
        *(long *)(this + 0x170) = lVar23;
      }
      else {
        std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                  ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),1);
        lVar23 = *(long *)(this + 0x168);
      }
      *(undefined2 *)(lVar23 + (ulong)(iVar6 + 1) * 2) = 1;
      return iVar6;
    }
    if (0.0 <= fVar25) {
      lVar23 = *(long *)(this + 0x168);
      uVar24 = *(long *)(this + 0x170) - lVar23 >> 1;
                    /* try { // try from 00d96a48 to 00e96a57 has its CatchHandler @ 00d96df4 */
      if (uVar24 < 0xfffffffffffffffe) {
        std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                  ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),2);
        lVar23 = *(long *)(this + 0x168);
      }
      else {
        *(ulong *)(this + 0x170) = lVar23 + uVar24 * 2 + 4;
      }
                    /* try { // try from 00d96a90 to 00e96a9b has its CatchHandler @ 00d96dc8 */
                    /* try { // try from 00d96a9c to 00e96aa7 has its CatchHandler @ 00d96dc0 */
      if (1.0 < fVar25) {
        *(undefined2 *)(lVar23 + (ulong)(iVar6 + 1) * 2) = 5;
        fVar25 = fVar25 * 100.0 + -100.0;
        goto LAB_00d96ad8;
      }
      fVar14 = 100.0;
      *(undefined2 *)(lVar23 + (ulong)(iVar6 + 1) * 2) = 4;
    }
    else {
      lVar23 = *(long *)(this + 0x168);
      uVar24 = *(long *)(this + 0x170) - lVar23 >> 1;
      if (uVar24 < 0xfffffffffffffffe) {
                    /* try { // try from 00d969f8 to 00e96a03 has its CatchHandler @ 00d96d7c */
        std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                  ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),2);
        lVar23 = *(long *)(this + 0x168);
      }
      else {
        *(ulong *)(this + 0x170) = lVar23 + uVar24 * 2 + 4;
      }
      fVar14 = -100.0;
      *(undefined2 *)(lVar23 + (ulong)(iVar6 + 1) * 2) = 3;
    }
                    /* try { // try from 00d96ad0 to 00e96adb has its CatchHandler @ 00d96dd0 */
    fVar25 = fVar25 * fVar14;
LAB_00d96ad8:
    *(short *)(lVar23 + (ulong)(iVar6 + 2) * 2) = (short)(int)fVar25;
    return iVar6;
  }
  this_00 = (vector<float,std::__ndk1::allocator<float>> *)(this + 0xf0);
  uVar3 = param_3 + 1;
  uVar19 = (ulong)uVar3;
  uVar24 = *(long *)(this + 0xf8) - *(long *)this_00 >> 2;
  if (uVar24 < uVar19) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this_00,uVar19 - uVar24);
    piVar20 = (int *)DataParser::CURVE;
  }
  else if (uVar24 != uVar19) {
                    /* catch() { ... } // from try @ 00d9655c with catch @ 00d96738 */
    *(ulong *)(this + 0xf8) = *(long *)this_00 + uVar19 * 4;
  }
                    /* catch() { ... } // from try @ 00d96534 with catch @ 00d9673c */
                    /* catch() { ... } // from try @ 00d965e4 with catch @ 00d96740 */
  pcVar9 = (char *)((long)piVar20 + -1);
  do {
                    /* catch() { ... } // from try @ 00d96578 with catch @ 00d96744 */
    pcVar9 = pcVar9 + 1;
  } while (*pcVar9 != '\0');
  uVar4 = *(uint *)param_1;
  piVar22 = *(int **)(param_1 + 8);
  piVar21 = piVar22;
  if (uVar4 == 0) {
LAB_00d967e4:
    if (piVar21 != piVar22 + (ulong)uVar4 * 0xc) {
      pGVar8 = (GenericValue *)(piVar21 + 6);
      goto LAB_00d9680c;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00d965ac with catch @ 00d96764 */
    lVar23 = (ulong)uVar4 * 0x30;
    do {
      iVar7 = *piVar21;
                    /* catch() { ... } // from try @ 00d96474 with catch @ 00d96794 */
      if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
        iVar7 = 0x15 - *(char *)((long)piVar21 + 0x15);
      }
                    /* catch() { ... } // from try @ 00d9648c with catch @ 00d96798
                       catch() { ... } // from try @ 00d9664c with catch @ 00d96798 */
      if (iVar7 == (int)((long)pcVar9 - (long)piVar20)) {
        piVar11 = *(int **)(piVar21 + 2);
        if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
          piVar11 = piVar21;
        }
                    /* try { // try from 00d967bc to 00e9681f has its CatchHandler @ 00d967bc
                       catch() { ... } // from try @ 00d967bc with catch @ 00d967bc
                       catch() { ... } // from try @ 00d96ce0 with catch @ 00d967bc */
        if ((piVar11 == piVar20) ||
           (iVar7 = memcmp(piVar20,piVar11,(long)pcVar9 - (long)piVar20 & 0xffffffff), iVar7 == 0))
        goto LAB_00d967e4;
      }
      lVar23 = lVar23 + -0x30;
      piVar21 = piVar21 + 0xc;
    } while (lVar23 != 0);
  }
  pGVar8 = (GenericValue *)
           &rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00d9680c:
  _samplingEasingCurve(this,pGVar8,(vector *)this_00);
  lVar23 = *(long *)(this + 0x168);
                    /* try { // try from 00d96820 to 00e9682b has its CatchHandler @ 00d96da0 */
  uVar15 = *(long *)(this + 0x170) - lVar23 >> 1;
                    /* try { // try from 00d9682c to 00e9683b has its CatchHandler @ 00d96d90 */
  uVar24 = uVar15 + (*(long *)(this + 0xf8) - *(long *)(this + 0xf0) >> 2) + 2;
                    /* try { // try from 00d9683c to 00e9684b has its CatchHandler @ 00d96d80 */
  if (uVar24 < uVar15 || uVar24 - uVar15 == 0) {
    if (uVar24 < uVar15) {
      *(ulong *)(this + 0x170) = lVar23 + uVar24 * 2;
    }
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),uVar24 - uVar15);
    lVar23 = *(long *)(this + 0x168);
  }
  *(undefined2 *)(lVar23 + (ulong)(iVar6 + 1) * 2) = 2;
  *(short *)(lVar23 + (ulong)(iVar6 + 2) * 2) = (short)uVar3;
  if (uVar3 != 0) {
    lVar12 = *(long *)this_00;
    if (uVar3 < 8) {
      uVar15 = 0;
    }
    else {
                    /* try { // try from 00d96898 to 00e968a7 has its CatchHandler @ 00d96e08 */
      uVar15 = uVar19 & 0xfffffff8;
      puVar16 = (undefined8 *)(lVar12 + 0x10);
                    /* try { // try from 00d968ac to 00e968bb has its CatchHandler @ 00d96df8 */
      puVar18 = (undefined8 *)(lVar23 + (ulong)(iVar6 + 3) * 2 + 8);
      uVar24 = uVar15;
      do {
        puVar1 = puVar16 + -2;
        puVar5 = puVar16 + -1;
        uVar27 = puVar16[1];
        uVar26 = *puVar16;
        puVar16 = puVar16 + 4;
        uVar24 = uVar24 - 8;
        puVar18[-1] = CONCAT26((short)(int)((float)((ulong)*puVar5 >> 0x20) * 10000.0),
                               CONCAT24((short)(int)((float)*puVar5 * 10000.0),
                                        CONCAT22((short)(int)((float)((ulong)*puVar1 >> 0x20) *
                                                             10000.0),
                                                 (short)(int)((float)*puVar1 * 10000.0))));
        *puVar18 = CONCAT26((short)(int)((float)((ulong)uVar27 >> 0x20) * 10000.0),
                            CONCAT24((short)(int)((float)uVar27 * 10000.0),
                                     CONCAT22((short)(int)((float)((ulong)uVar26 >> 0x20) * 10000.0)
                                              ,(short)(int)((float)uVar26 * 10000.0))));
        puVar18 = puVar18 + 2;
      } while (uVar24 != 0);
      if (uVar15 == uVar19) {
        return iVar6;
      }
    }
    lVar17 = uVar19 - uVar15;
    puVar10 = (undefined2 *)(lVar23 + (uVar15 + (iVar6 + 3)) * 2);
    pfVar13 = (float *)(lVar12 + uVar15 * 4);
    do {
      lVar17 = lVar17 + -1;
      *puVar10 = (short)(int)(*pfVar13 * 10000.0);
      puVar10 = puVar10 + 1;
      pfVar13 = pfVar13 + 1;
    } while (lVar17 != 0);
  }
  return iVar6;
}

