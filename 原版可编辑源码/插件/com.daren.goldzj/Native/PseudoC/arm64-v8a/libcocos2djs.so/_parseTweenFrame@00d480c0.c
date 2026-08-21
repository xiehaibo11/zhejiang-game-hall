
/* dragonBones::JSONDataParser::_parseTweenFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

int __thiscall
dragonBones::JSONDataParser::_parseTweenFrame
          (JSONDataParser *this,GenericValue *param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  int *__s2;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined *__s1;
  int iVar5;
  int iVar6;
  GenericValue *pGVar7;
  char *pcVar8;
  undefined2 *puVar9;
  int *piVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  vector<float,std::__ndk1::allocator<float>> *this_00;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  long lVar22;
  ulong uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  iVar5 = (**(code **)(*(long *)this + 0x90))(this,param_1,param_2);
  piVar18 = (int *)DataParser::CURVE;
  if (param_3 == 0) {
    lVar22 = *(long *)(this + 0x168);
    if (*(long *)(this + 0x170) - lVar22 == -2) {
      *(long *)(this + 0x170) = lVar22;
    }
    else {
      std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),1);
      lVar22 = *(long *)(this + 0x168);
    }
LAB_00d484e0:
    *(undefined2 *)(lVar22 + (ulong)(iVar5 + 1) * 2) = 0;
    return iVar5;
  }
  pcVar8 = DataParser::CURVE + -1;
  do {
    pcVar8 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  piVar20 = *(int **)(param_1 + 8);
  uVar2 = *(uint *)param_1;
  uVar23 = (ulong)uVar2;
  piVar10 = piVar20 + uVar23 * 0xc;
  piVar21 = piVar20;
  if (uVar2 != 0) {
    uVar17 = (long)pcVar8 - (long)DataParser::CURVE;
    lVar22 = uVar23 * 0x30;
    piVar19 = piVar20;
    do {
      iVar6 = *piVar19;
      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar19 + 0x15);
      }
      if (iVar6 == (int)uVar17) {
        __s2 = *(int **)(piVar19 + 2);
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          __s2 = piVar19;
        }
        piVar21 = piVar19;
        if ((__s2 == piVar18) || (iVar6 = memcmp(piVar18,__s2,uVar17 & 0xffffffff), iVar6 == 0))
        break;
      }
      lVar22 = lVar22 + -0x30;
      piVar19 = piVar19 + 0xc;
      piVar21 = piVar10;
    } while (lVar22 != 0);
  }
  __s1 = DataParser::TWEEN_EASING;
  if (piVar10 == piVar21) {
    pcVar8 = DataParser::TWEEN_EASING + -1;
    do {
      pcVar8 = pcVar8 + 1;
    } while (*pcVar8 != '\0');
    piVar18 = piVar20;
    if (uVar2 != 0) {
      uVar17 = (long)pcVar8 - (long)DataParser::TWEEN_EASING;
      lVar22 = uVar23 * 0x30;
      do {
        iVar6 = *piVar20;
        if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
          iVar6 = 0x15 - *(char *)((long)piVar20 + 0x15);
        }
        if (iVar6 == (int)uVar17) {
          piVar21 = *(int **)(piVar20 + 2);
          if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
            piVar21 = piVar20;
          }
          piVar18 = piVar20;
          if ((piVar21 == (int *)__s1) ||
             (iVar6 = memcmp(__s1,piVar21,uVar17 & 0xffffffff), iVar6 == 0)) break;
        }
        lVar22 = lVar22 + -0x30;
        piVar20 = piVar20 + 0xc;
        piVar18 = piVar10;
      } while (lVar22 != 0);
    }
    if ((piVar10 == piVar18) || (fVar24 = (float)_getNumber(param_1,__s1,-2.0), fVar24 == -2.0)) {
      lVar22 = *(long *)(this + 0x168);
      if (*(long *)(this + 0x170) - lVar22 == -2) {
        *(long *)(this + 0x170) = lVar22;
      }
      else {
        std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                  ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),1);
        lVar22 = *(long *)(this + 0x168);
      }
      goto LAB_00d484e0;
    }
    if (fVar24 == 0.0) {
      lVar22 = *(long *)(this + 0x168);
      if (*(long *)(this + 0x170) - lVar22 == -2) {
        *(long *)(this + 0x170) = lVar22;
      }
      else {
        std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                  ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),1);
        lVar22 = *(long *)(this + 0x168);
      }
      *(undefined2 *)(lVar22 + (ulong)(iVar5 + 1) * 2) = 1;
      return iVar5;
    }
    if (0.0 <= fVar24) {
      lVar22 = *(long *)(this + 0x168);
      uVar23 = *(long *)(this + 0x170) - lVar22 >> 1;
      if (uVar23 < 0xfffffffffffffffe) {
        std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                  ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),2);
        lVar22 = *(long *)(this + 0x168);
      }
      else {
        *(ulong *)(this + 0x170) = lVar22 + uVar23 * 2 + 4;
      }
      if (1.0 < fVar24) {
        *(undefined2 *)(lVar22 + (ulong)(iVar5 + 1) * 2) = 5;
        fVar24 = fVar24 * 100.0 + -100.0;
        goto LAB_00d48634;
      }
      fVar25 = 100.0;
      *(undefined2 *)(lVar22 + (ulong)(iVar5 + 1) * 2) = 4;
    }
    else {
      lVar22 = *(long *)(this + 0x168);
      uVar23 = *(long *)(this + 0x170) - lVar22 >> 1;
      if (uVar23 < 0xfffffffffffffffe) {
        std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                  ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),2);
        lVar22 = *(long *)(this + 0x168);
      }
      else {
        *(ulong *)(this + 0x170) = lVar22 + uVar23 * 2 + 4;
      }
      fVar25 = -100.0;
      *(undefined2 *)(lVar22 + (ulong)(iVar5 + 1) * 2) = 3;
    }
    fVar24 = fVar24 * fVar25;
LAB_00d48634:
    *(short *)(lVar22 + (ulong)(iVar5 + 2) * 2) = (short)(int)fVar24;
    return iVar5;
  }
  this_00 = (vector<float,std::__ndk1::allocator<float>> *)(this + 0xf0);
  uVar2 = param_3 + 1;
  uVar17 = (ulong)uVar2;
  uVar23 = *(long *)(this + 0xf8) - *(long *)this_00 >> 2;
  if (uVar23 < uVar17) {
    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this_00,uVar17 - uVar23);
    piVar18 = (int *)DataParser::CURVE;
  }
  else if (uVar23 != uVar17) {
    *(ulong *)(this + 0xf8) = *(long *)this_00 + uVar17 * 4;
  }
  pcVar8 = (char *)((long)piVar18 + -1);
  do {
    pcVar8 = pcVar8 + 1;
  } while (*pcVar8 != '\0');
  uVar3 = *(uint *)param_1;
  piVar21 = *(int **)(param_1 + 8);
  piVar20 = piVar21;
  if (uVar3 == 0) {
LAB_00d48388:
    if (piVar20 != piVar21 + (ulong)uVar3 * 0xc) {
      pGVar7 = (GenericValue *)(piVar20 + 6);
      goto LAB_00d483b0;
    }
  }
  else {
    lVar22 = (ulong)uVar3 * 0x30;
    do {
      iVar6 = *piVar20;
      if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
        iVar6 = 0x15 - *(char *)((long)piVar20 + 0x15);
      }
      if (iVar6 == (int)((long)pcVar8 - (long)piVar18)) {
        piVar10 = *(int **)(piVar20 + 2);
        if ((*(ushort *)((long)piVar20 + 0x16) & 0x1000) != 0) {
          piVar10 = piVar20;
        }
        if ((piVar10 == piVar18) ||
           (iVar6 = memcmp(piVar18,piVar10,(long)pcVar8 - (long)piVar18 & 0xffffffff), iVar6 == 0))
        goto LAB_00d48388;
      }
      lVar22 = lVar22 + -0x30;
      piVar20 = piVar20 + 0xc;
    } while (lVar22 != 0);
  }
  pGVar7 = (GenericValue *)
           &rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01d38c18 = 0;
  DAT_01d38c20 = 0;
LAB_00d483b0:
  _samplingEasingCurve(this,pGVar7,(vector *)this_00);
  lVar22 = *(long *)(this + 0x168);
  uVar13 = *(long *)(this + 0x170) - lVar22 >> 1;
  uVar23 = uVar13 + (*(long *)(this + 0xf8) - *(long *)(this + 0xf0) >> 2) + 2;
  if (uVar23 < uVar13 || uVar23 - uVar13 == 0) {
    if (uVar23 < uVar13) {
      *(ulong *)(this + 0x170) = lVar22 + uVar23 * 2;
    }
  }
  else {
    std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
              ((vector<short,std::__ndk1::allocator<short>> *)(this + 0x168),uVar23 - uVar13);
    lVar22 = *(long *)(this + 0x168);
  }
  *(undefined2 *)(lVar22 + (ulong)(iVar5 + 1) * 2) = 2;
  *(short *)(lVar22 + (ulong)(iVar5 + 2) * 2) = (short)uVar2;
  if (uVar2 != 0) {
    lVar11 = *(long *)this_00;
    if (uVar2 < 8) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar17 & 0xfffffff8;
      puVar14 = (undefined8 *)(lVar11 + 0x10);
      puVar16 = (undefined8 *)(lVar22 + (ulong)(iVar5 + 3) * 2 + 8);
      uVar23 = uVar13;
      do {
        puVar1 = puVar14 + -2;
        puVar4 = puVar14 + -1;
        uVar27 = puVar14[1];
        uVar26 = *puVar14;
        puVar14 = puVar14 + 4;
        uVar23 = uVar23 - 8;
        puVar16[-1] = CONCAT26((short)(int)((float)((ulong)*puVar4 >> 0x20) * 10000.0),
                               CONCAT24((short)(int)((float)*puVar4 * 10000.0),
                                        CONCAT22((short)(int)((float)((ulong)*puVar1 >> 0x20) *
                                                             10000.0),
                                                 (short)(int)((float)*puVar1 * 10000.0))));
        *puVar16 = CONCAT26((short)(int)((float)((ulong)uVar27 >> 0x20) * 10000.0),
                            CONCAT24((short)(int)((float)uVar27 * 10000.0),
                                     CONCAT22((short)(int)((float)((ulong)uVar26 >> 0x20) * 10000.0)
                                              ,(short)(int)((float)uVar26 * 10000.0))));
        puVar16 = puVar16 + 2;
      } while (uVar23 != 0);
      if (uVar13 == uVar17) {
        return iVar5;
      }
    }
    lVar15 = uVar17 - uVar13;
    puVar9 = (undefined2 *)(lVar22 + (uVar13 + (iVar5 + 3)) * 2);
    pfVar12 = (float *)(lVar11 + uVar13 * 4);
    do {
      lVar15 = lVar15 + -1;
      *puVar9 = (short)(int)(*pfVar12 * 10000.0);
      puVar9 = puVar9 + 1;
      pfVar12 = pfVar12 + 1;
    } while (lVar15 != 0);
  }
  return iVar5;
}

