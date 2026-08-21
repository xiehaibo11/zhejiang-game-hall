
/* dragonBones::BinaryDataParser::_parseAnimation(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

AnimationData * dragonBones::BinaryDataParser::_parseAnimation(GenericValue *param_1)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *__src;
  int iVar5;
  undefined4 uVar6;
  AnimationData *pAVar7;
  size_t sVar8;
  undefined8 uVar9;
  long lVar10;
  TimelineData *pTVar11;
  GenericValue *in_x1;
  basic_string *in_x3;
  char *pcVar12;
  int *piVar13;
  ulong uVar14;
  ConstraintData *pCVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this;
  BoneData *pBVar16;
  SlotData *pSVar17;
  int *piVar18;
  int *piVar19;
  void *pvVar20;
  ulong uVar21;
  char *pcVar22;
  long lVar23;
  int *piVar24;
  float fVar25;
  float fVar26;
  ulong local_98;
  size_t local_90;
  void *local_88;
  ulong local_80;
  size_t sStack_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pAVar7 = BaseObject::borrowObject<dragonBones::AnimationData>();
  iVar5 = JSONDataParser::_getNumber(in_x1,DataParser::DURATION,1);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  *(int *)(pAVar7 + 0x1c) = iVar5;
  uVar6 = JSONDataParser::_getNumber(in_x1,DataParser::PLAY_TIMES,1);
  *(undefined4 *)(pAVar7 + 0x20) = uVar6;
  fVar25 = (float)NEON_ucvtf(*(undefined4 *)(pAVar7 + 0x1c));
  fVar26 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14));
  *(float *)(pAVar7 + 0x24) = fVar25 / fVar26;
  uVar6 = JSONDataParser::_getNumber(in_x1,DataParser::FADE_IN_TIME,0.0);
  *(undefined4 *)(pAVar7 + 0x2c) = uVar6;
  uVar6 = JSONDataParser::_getNumber(in_x1,DataParser::SCALE,1.0);
  *(undefined4 *)(pAVar7 + 0x28) = uVar6;
  __src = DataParser::DEFAULT_NAME;
  puVar4 = DataParser::NAME;
  local_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  sVar8 = strlen(DataParser::DEFAULT_NAME);
  if (0xffffffffffffffef < sVar8) {
LAB_00d3c1b8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar8 < 0x17) {
    pvVar20 = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_00d3b55c;
  }
  else {
    uVar21 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar20 = operator_new(uVar21);
    local_98 = uVar21 | 1;
    local_90 = sVar8;
    local_88 = pvVar20;
LAB_00d3b55c:
    memcpy(pvVar20,__src,sVar8);
  }
  *(undefined1 *)((long)pvVar20 + sVar8) = 0;
  JSONDataParser::_getString((JSONDataParser *)in_x1,(GenericValue *)puVar4,(char *)&local_98,in_x3)
  ;
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (pAVar7 + 0x38);
  if (((byte)*this & 1) == 0) {
    *(undefined2 *)this = 0;
  }
  else {
    **(undefined1 **)(pAVar7 + 0x48) = 0;
    *(undefined8 *)(pAVar7 + 0x40) = 0;
    if (((byte)pAVar7[0x38] & 1) != 0) {
      operator_delete(*(void **)(pAVar7 + 0x48));
      *(undefined8 *)(pAVar7 + 0x38) = 0;
    }
  }
  *(void **)(pAVar7 + 0x48) = local_70;
  *(size_t *)(pAVar7 + 0x40) = sStack_78;
  *(ulong *)this = local_80;
  sStack_78 = 0;
  local_70 = (void *)0x0;
  local_80 = 0;
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  puVar4 = DataParser::DEFAULT_NAME;
  if (((byte)*this & 1) == 0) {
    if ((byte)*this >> 1 == 0) {
LAB_00d3b5fc:
      sVar8 = strlen(DataParser::DEFAULT_NAME);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this,puVar4,sVar8);
    }
  }
  else if (*(long *)(pAVar7 + 0x40) == 0) goto LAB_00d3b5fc;
  puVar4 = DataParser::OFFSET;
  pcVar12 = DataParser::OFFSET + -1;
  do {
    pcVar12 = pcVar12 + 1;
  } while (*pcVar12 != '\0');
  uVar2 = *(uint *)in_x1;
  piVar18 = *(int **)(in_x1 + 8);
  piVar19 = piVar18;
  if (uVar2 == 0) goto LAB_00d3b6bc;
  uVar21 = (long)pcVar12 - (long)DataParser::OFFSET;
  lVar23 = (ulong)uVar2 * 0x30;
  do {
    iVar5 = *piVar19;
    if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
      iVar5 = 0x15 - *(char *)((long)piVar19 + 0x15);
    }
    if (iVar5 == (int)uVar21) {
      piVar13 = *(int **)(piVar19 + 2);
      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
        piVar13 = piVar19;
      }
      if (piVar13 == (int *)puVar4) goto LAB_00d3b6bc;
      iVar5 = memcmp(puVar4,piVar13,uVar21 & 0xffffffff);
      if (iVar5 == 0) goto LAB_00d3b6bc;
    }
    lVar23 = lVar23 + -0x30;
    piVar19 = piVar19 + 0xc;
  } while (lVar23 != 0);
  do {
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
    piVar19 = piVar18;
LAB_00d3b6bc:
  } while (piVar19 == piVar18 + (ulong)uVar2 * 0xc);
  *(undefined4 *)(pAVar7 + 0x10) = **(undefined4 **)(piVar19 + 8);
  *(undefined4 *)(pAVar7 + 0x14) = *(undefined4 *)(*(long *)(piVar19 + 8) + 0x18);
  *(undefined4 *)(pAVar7 + 0x18) = *(undefined4 *)(*(long *)(piVar19 + 8) + 0x30);
  *(AnimationData **)(param_1 + 0x58) = pAVar7;
  puVar4 = DataParser::ACTION;
  pcVar22 = DataParser::ACTION + -1;
  pcVar12 = pcVar22;
  do {
    pcVar12 = pcVar12 + 1;
  } while (*pcVar12 != '\0');
  piVar19 = *(int **)(in_x1 + 8);
  uVar2 = *(uint *)in_x1;
  uVar21 = (ulong)uVar2;
  piVar13 = piVar19 + uVar21 * 0xc;
  piVar18 = piVar19;
  if (uVar2 != 0) {
    uVar14 = (long)pcVar12 - (long)DataParser::ACTION;
    lVar23 = uVar21 * 0x30;
    piVar24 = piVar19;
    do {
      iVar5 = *piVar24;
      if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar24 + 0x15);
      }
      if (iVar5 == (int)uVar14) {
        piVar1 = *(int **)(piVar24 + 2);
        if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar24;
        }
        piVar18 = piVar24;
        if ((piVar1 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar23 = lVar23 + -0x30;
      piVar24 = piVar24 + 0xc;
      piVar18 = piVar13;
    } while (lVar23 != 0);
  }
  if (piVar13 != piVar18) {
    do {
      pcVar22 = pcVar22 + 1;
    } while (*pcVar22 != '\0');
    if (uVar2 == 0) {
LAB_00d3b82c:
      if (piVar19 == piVar13) goto LAB_00d3b83c;
      iVar5 = piVar19[6];
    }
    else {
      lVar23 = uVar21 * 0x30;
      do {
        iVar5 = *piVar19;
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar19 + 0x15);
        }
        if (iVar5 == (int)((long)pcVar22 - (long)puVar4)) {
          piVar18 = *(int **)(piVar19 + 2);
          if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
            piVar18 = piVar19;
          }
          if ((piVar18 == (int *)puVar4) ||
             (iVar5 = memcmp(puVar4,piVar18,(long)pcVar22 - (long)puVar4 & 0xffffffff), iVar5 == 0))
          goto LAB_00d3b82c;
        }
        lVar23 = lVar23 + -0x30;
        piVar19 = piVar19 + 0xc;
      } while (lVar23 != 0);
LAB_00d3b83c:
      iVar5 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
    }
    uVar9 = _parseBinaryTimeline((BinaryDataParser *)param_1,0,iVar5,0);
    *(undefined8 *)(pAVar7 + 0xe0) = uVar9;
  }
  puVar4 = DataParser::Z_ORDER;
  pcVar22 = DataParser::Z_ORDER + -1;
  pcVar12 = pcVar22;
  do {
    pcVar12 = pcVar12 + 1;
  } while (*pcVar12 != '\0');
  piVar19 = *(int **)(in_x1 + 8);
  uVar2 = *(uint *)in_x1;
  uVar21 = (ulong)uVar2;
  piVar13 = piVar19 + uVar21 * 0xc;
  piVar18 = piVar19;
  if (uVar2 != 0) {
    uVar14 = (long)pcVar12 - (long)DataParser::Z_ORDER;
    lVar23 = uVar21 * 0x30;
    piVar24 = piVar19;
    do {
      iVar5 = *piVar24;
      if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar24 + 0x15);
      }
      if (iVar5 == (int)uVar14) {
        piVar1 = *(int **)(piVar24 + 2);
        if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar24;
        }
        piVar18 = piVar24;
        if ((piVar1 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar23 = lVar23 + -0x30;
      piVar24 = piVar24 + 0xc;
      piVar18 = piVar13;
    } while (lVar23 != 0);
  }
  if (piVar13 != piVar18) {
    do {
      pcVar22 = pcVar22 + 1;
    } while (*pcVar22 != '\0');
    if (uVar2 == 0) {
LAB_00d3b998:
      if (piVar19 == piVar13) goto LAB_00d3b9a8;
      iVar5 = piVar19[6];
    }
    else {
      lVar23 = uVar21 * 0x30;
      do {
        iVar5 = *piVar19;
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar19 + 0x15);
        }
        if (iVar5 == (int)((long)pcVar22 - (long)puVar4)) {
          piVar18 = *(int **)(piVar19 + 2);
          if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
            piVar18 = piVar19;
          }
          if ((piVar18 == (int *)puVar4) ||
             (iVar5 = memcmp(puVar4,piVar18,(long)pcVar22 - (long)puVar4 & 0xffffffff), iVar5 == 0))
          goto LAB_00d3b998;
        }
        lVar23 = lVar23 + -0x30;
        piVar19 = piVar19 + 0xc;
      } while (lVar23 != 0);
LAB_00d3b9a8:
      iVar5 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
    }
    uVar9 = _parseBinaryTimeline((BinaryDataParser *)param_1,1,iVar5,0);
    *(undefined8 *)(pAVar7 + 0xe8) = uVar9;
  }
  puVar4 = DataParser::BONE;
  pcVar22 = DataParser::BONE + -1;
  pcVar12 = pcVar22;
  do {
    pcVar12 = pcVar12 + 1;
  } while (*pcVar12 != '\0');
  piVar19 = *(int **)(in_x1 + 8);
  uVar2 = *(uint *)in_x1;
  uVar21 = (ulong)uVar2;
  piVar13 = piVar19 + uVar21 * 0xc;
  piVar18 = piVar19;
  if (uVar2 != 0) {
    uVar14 = (long)pcVar12 - (long)DataParser::BONE;
    lVar23 = uVar21 * 0x30;
    piVar24 = piVar19;
    do {
      iVar5 = *piVar24;
      if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar24 + 0x15);
      }
      if (iVar5 == (int)uVar14) {
        piVar1 = *(int **)(piVar24 + 2);
        if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar24;
        }
        piVar18 = piVar24;
        if ((piVar1 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar23 = lVar23 + -0x30;
      piVar24 = piVar24 + 0xc;
      piVar18 = piVar13;
    } while (lVar23 != 0);
  }
  if (piVar13 != piVar18) {
    do {
      pcVar22 = pcVar22 + 1;
    } while (*pcVar22 != '\0');
    if (uVar2 == 0) {
LAB_00d3bafc:
      if (piVar19 != piVar13) {
        if (piVar19[6] != 0) {
          pcVar12 = *(char **)(piVar19 + 8);
          do {
            lVar23 = *(long *)(param_1 + 0x30);
            pcVar22 = pcVar12;
            if (((byte)pcVar12[0x17] >> 4 & 1) == 0) {
              pcVar22 = *(char **)(pcVar12 + 8);
            }
            local_80 = 0;
            sStack_78 = 0;
            local_70 = (void *)0x0;
            sVar8 = strlen(pcVar22);
            if (0xffffffffffffffef < sVar8) goto LAB_00d3c1b8;
            if (sVar8 < 0x17) {
              local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar8 << 1));
              pvVar20 = (void *)((ulong)&local_80 | 1);
              if (sVar8 != 0) goto LAB_00d3bba0;
            }
            else {
              uVar21 = sVar8 + 0x10 & 0xfffffffffffffff0;
              pvVar20 = operator_new(uVar21);
              local_80 = uVar21 | 1;
              sStack_78 = sVar8;
              local_70 = pvVar20;
LAB_00d3bba0:
              memcpy(pvVar20,pcVar22,sVar8);
            }
            *(undefined1 *)((long)pvVar20 + sVar8) = 0;
            lVar10 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                                 *)(lVar23 + 0xc0),(basic_string *)&local_80);
            if (lVar23 + 200 == lVar10) {
              pBVar16 = (BoneData *)0x0;
            }
            else {
              pBVar16 = *(BoneData **)(lVar10 + 0x38);
            }
            if ((local_80 & 1) != 0) {
              operator_delete(local_70);
            }
            if ((pBVar16 != (BoneData *)0x0) && (uVar2 = *(uint *)(pcVar12 + 0x18), uVar2 != 0)) {
              lVar23 = 0;
              uVar21 = 0;
              do {
                pTVar11 = (TimelineData *)
                          _parseBinaryTimeline
                                    ((BinaryDataParser *)param_1,
                                     *(undefined4 *)(*(long *)(pcVar12 + 0x20) + lVar23),
                                     ((undefined4 *)(*(long *)(pcVar12 + 0x20) + lVar23))[6],0);
                AnimationData::addBoneTimeline(*(AnimationData **)(param_1 + 0x58),pBVar16,pTVar11);
                uVar21 = uVar21 + 2;
                lVar23 = lVar23 + 0x30;
              } while (uVar21 < uVar2);
            }
            pcVar12 = pcVar12 + 0x30;
          } while (pcVar12 != (char *)(*(long *)(piVar19 + 8) + (ulong)(uint)piVar19[6] * 0x30));
        }
        goto LAB_00d3bc60;
      }
    }
    else {
      lVar23 = uVar21 * 0x30;
      do {
        iVar5 = *piVar19;
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar19 + 0x15);
        }
        if (iVar5 == (int)((long)pcVar22 - (long)puVar4)) {
          piVar18 = *(int **)(piVar19 + 2);
          if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
            piVar18 = piVar19;
          }
          if ((piVar18 == (int *)puVar4) ||
             (iVar5 = memcmp(puVar4,piVar18,(long)pcVar22 - (long)puVar4 & 0xffffffff), iVar5 == 0))
          goto LAB_00d3bafc;
        }
        lVar23 = lVar23 + -0x30;
        piVar19 = piVar19 + 0xc;
      } while (lVar23 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d3bc60:
  puVar4 = DataParser::SLOT;
  pcVar22 = DataParser::SLOT + -1;
  pcVar12 = pcVar22;
  do {
    pcVar12 = pcVar12 + 1;
  } while (*pcVar12 != '\0');
  piVar19 = *(int **)(in_x1 + 8);
  uVar2 = *(uint *)in_x1;
  uVar21 = (ulong)uVar2;
  piVar13 = piVar19 + uVar21 * 0xc;
  piVar18 = piVar19;
  if (uVar2 != 0) {
    uVar14 = (long)pcVar12 - (long)DataParser::SLOT;
    lVar23 = uVar21 * 0x30;
    piVar24 = piVar19;
    do {
      iVar5 = *piVar24;
      if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar24 + 0x15);
      }
      if (iVar5 == (int)uVar14) {
        piVar1 = *(int **)(piVar24 + 2);
        if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar24;
        }
        piVar18 = piVar24;
        if ((piVar1 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar23 = lVar23 + -0x30;
      piVar24 = piVar24 + 0xc;
      piVar18 = piVar13;
    } while (lVar23 != 0);
  }
  if (piVar13 != piVar18) {
    do {
      pcVar22 = pcVar22 + 1;
    } while (*pcVar22 != '\0');
    if (uVar2 == 0) {
LAB_00d3bd8c:
      if (piVar19 != piVar13) {
        if (piVar19[6] != 0) {
          pcVar12 = *(char **)(piVar19 + 8);
          do {
            lVar23 = *(long *)(param_1 + 0x30);
            pcVar22 = pcVar12;
            if (((byte)pcVar12[0x17] >> 4 & 1) == 0) {
              pcVar22 = *(char **)(pcVar12 + 8);
            }
            local_80 = 0;
            sStack_78 = 0;
            local_70 = (void *)0x0;
            sVar8 = strlen(pcVar22);
            if (0xffffffffffffffef < sVar8) goto LAB_00d3c1b8;
            if (sVar8 < 0x17) {
              local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar8 << 1));
              pvVar20 = (void *)((ulong)&local_80 | 1);
              if (sVar8 != 0) goto LAB_00d3be30;
            }
            else {
              uVar21 = sVar8 + 0x10 & 0xfffffffffffffff0;
              pvVar20 = operator_new(uVar21);
              local_80 = uVar21 | 1;
              sStack_78 = sVar8;
              local_70 = pvVar20;
LAB_00d3be30:
              memcpy(pvVar20,pcVar22,sVar8);
            }
            *(undefined1 *)((long)pvVar20 + sVar8) = 0;
            lVar10 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                                 *)(lVar23 + 0xd8),(basic_string *)&local_80);
            if (lVar23 + 0xe0 == lVar10) {
              pSVar17 = (SlotData *)0x0;
            }
            else {
              pSVar17 = *(SlotData **)(lVar10 + 0x38);
            }
            if ((local_80 & 1) != 0) {
              operator_delete(local_70);
            }
            if ((pSVar17 != (SlotData *)0x0) && (uVar2 = *(uint *)(pcVar12 + 0x18), uVar2 != 0)) {
              lVar23 = 0;
              uVar21 = 0;
              do {
                pTVar11 = (TimelineData *)
                          _parseBinaryTimeline
                                    ((BinaryDataParser *)param_1,
                                     *(undefined4 *)(*(long *)(pcVar12 + 0x20) + lVar23),
                                     ((undefined4 *)(*(long *)(pcVar12 + 0x20) + lVar23))[6],0);
                AnimationData::addSlotTimeline(*(AnimationData **)(param_1 + 0x58),pSVar17,pTVar11);
                uVar21 = uVar21 + 2;
                lVar23 = lVar23 + 0x30;
              } while (uVar21 < uVar2);
            }
            pcVar12 = pcVar12 + 0x30;
          } while (pcVar12 != (char *)(*(long *)(piVar19 + 8) + (ulong)(uint)piVar19[6] * 0x30));
        }
        goto LAB_00d3bef0;
      }
    }
    else {
      lVar23 = uVar21 * 0x30;
      do {
        iVar5 = *piVar19;
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar19 + 0x15);
        }
        if (iVar5 == (int)((long)pcVar22 - (long)puVar4)) {
          piVar18 = *(int **)(piVar19 + 2);
          if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
            piVar18 = piVar19;
          }
          if ((piVar18 == (int *)puVar4) ||
             (iVar5 = memcmp(puVar4,piVar18,(long)pcVar22 - (long)puVar4 & 0xffffffff), iVar5 == 0))
          goto LAB_00d3bd8c;
        }
        lVar23 = lVar23 + -0x30;
        piVar19 = piVar19 + 0xc;
      } while (lVar23 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d3bef0:
  puVar4 = DataParser::CONSTRAINT;
  pcVar22 = DataParser::CONSTRAINT + -1;
  pcVar12 = pcVar22;
  do {
    pcVar12 = pcVar12 + 1;
  } while (*pcVar12 != '\0');
  piVar19 = *(int **)(in_x1 + 8);
  uVar2 = *(uint *)in_x1;
  uVar21 = (ulong)uVar2;
  piVar13 = piVar19 + uVar21 * 0xc;
  piVar18 = piVar19;
  if (uVar2 != 0) {
    uVar14 = (long)pcVar12 - (long)DataParser::CONSTRAINT;
    lVar23 = uVar21 * 0x30;
    piVar24 = piVar19;
    do {
      iVar5 = *piVar24;
      if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar24 + 0x15);
      }
      if (iVar5 == (int)uVar14) {
        piVar1 = *(int **)(piVar24 + 2);
        if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar24;
        }
        piVar18 = piVar24;
        if ((piVar1 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar1,uVar14 & 0xffffffff), iVar5 == 0)) break;
      }
      lVar23 = lVar23 + -0x30;
      piVar24 = piVar24 + 0xc;
      piVar18 = piVar13;
    } while (lVar23 != 0);
  }
  if (piVar13 != piVar18) {
    do {
      pcVar22 = pcVar22 + 1;
    } while (*pcVar22 != '\0');
    if (uVar2 == 0) {
LAB_00d3c018:
      if (piVar19 != piVar13) {
        if (piVar19[6] != 0) {
          pcVar12 = *(char **)(piVar19 + 8);
          do {
            lVar23 = *(long *)(param_1 + 0x30);
            pcVar22 = pcVar12;
            if (((byte)pcVar12[0x17] >> 4 & 1) == 0) {
              pcVar22 = *(char **)(pcVar12 + 8);
            }
            local_80 = 0;
            sStack_78 = 0;
            local_70 = (void *)0x0;
            sVar8 = strlen(pcVar22);
            if (0xffffffffffffffef < sVar8) goto LAB_00d3c1b8;
            if (sVar8 < 0x17) {
              local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar8 << 1));
              pvVar20 = (void *)((ulong)&local_80 | 1);
              if (sVar8 != 0) goto LAB_00d3c0bc;
            }
            else {
              uVar21 = sVar8 + 0x10 & 0xfffffffffffffff0;
              pvVar20 = operator_new(uVar21);
              local_80 = uVar21 | 1;
              sStack_78 = sVar8;
              local_70 = pvVar20;
LAB_00d3c0bc:
              memcpy(pvVar20,pcVar22,sVar8);
            }
            *(undefined1 *)((long)pvVar20 + sVar8) = 0;
            lVar10 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>>>
                                 *)(lVar23 + 0xf0),(basic_string *)&local_80);
            if (lVar23 + 0xf8 == lVar10) {
              pCVar15 = (ConstraintData *)0x0;
            }
            else {
              pCVar15 = *(ConstraintData **)(lVar10 + 0x38);
            }
            if ((local_80 & 1) != 0) {
              operator_delete(local_70);
            }
            if ((pCVar15 != (ConstraintData *)0x0) &&
               (uVar2 = *(uint *)(pcVar12 + 0x18), uVar2 != 0)) {
              lVar23 = 0;
              uVar21 = 0;
              do {
                pTVar11 = (TimelineData *)
                          _parseBinaryTimeline
                                    ((BinaryDataParser *)param_1,
                                     *(undefined4 *)(*(long *)(pcVar12 + 0x20) + lVar23),
                                     ((undefined4 *)(*(long *)(pcVar12 + 0x20) + lVar23))[6],0);
                AnimationData::addConstraintTimeline
                          (*(AnimationData **)(param_1 + 0x58),pCVar15,pTVar11);
                uVar21 = uVar21 + 2;
                lVar23 = lVar23 + 0x30;
              } while (uVar21 < uVar2);
            }
            pcVar12 = pcVar12 + 0x30;
          } while (pcVar12 != (char *)(*(long *)(piVar19 + 8) + (ulong)(uint)piVar19[6] * 0x30));
        }
        goto LAB_00d3c17c;
      }
    }
    else {
      lVar23 = uVar21 * 0x30;
      do {
        iVar5 = *piVar19;
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          iVar5 = 0x15 - *(char *)((long)piVar19 + 0x15);
        }
        if (iVar5 == (int)((long)pcVar22 - (long)puVar4)) {
          piVar18 = *(int **)(piVar19 + 2);
          if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
            piVar18 = piVar19;
          }
          if ((piVar18 == (int *)puVar4) ||
             (iVar5 = memcmp(puVar4,piVar18,(long)pcVar22 - (long)puVar4 & 0xffffffff), iVar5 == 0))
          goto LAB_00d3c018;
        }
        lVar23 = lVar23 + -0x30;
        piVar19 = piVar19 + 0xc;
      } while (lVar23 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d3c17c:
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return pAVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

