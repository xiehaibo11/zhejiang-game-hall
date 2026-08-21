
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
  size_t sStack_90;
  void *local_88;
  ulong local_80;
  size_t sStack_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pAVar7 = BaseObject::borrowObject<dragonBones::AnimationData>();
                    /* try { // try from 00d89b5c to 00e89b77 has its CatchHandler @ 00d8a4e0 */
  iVar5 = JSONDataParser::_getNumber(in_x1,DataParser::DURATION,1);
  if (iVar5 < 2) {
    iVar5 = 1;
  }
  *(int *)(pAVar7 + 0x1c) = iVar5;
                    /* try { // try from 00d89b7c to 00e89b8b has its CatchHandler @ 00d8a4e8 */
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
  local_98 = 0;
  sStack_90 = 0;
  local_88 = (void *)0x0;
  sVar8 = strlen(DataParser::DEFAULT_NAME);
  if (0xffffffffffffffef < sVar8) goto LAB_00d8a90c;
  if (sVar8 < 0x17) {
    pvVar20 = (void *)((ulong)&local_98 | 1);
    local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar8 << 1));
    if (sVar8 != 0) goto LAB_00d89c6c;
  }
  else {
    uVar21 = sVar8 + 0x10 & 0xfffffffffffffff0;
    pvVar20 = operator_new(uVar21);
    local_98 = uVar21 | 1;
    sStack_90 = sVar8;
    local_88 = pvVar20;
LAB_00d89c6c:
    memcpy(pvVar20,__src,sVar8);
  }
                    /* try { // try from 00d89c7c to 00e89c87 has its CatchHandler @ 00d8a3cc */
                    /* try { // try from 00d89c88 to 00e89c93 has its CatchHandler @ 00d8a3bc */
  *(undefined1 *)((long)pvVar20 + sVar8) = 0;
  JSONDataParser::_getString((JSONDataParser *)in_x1,(GenericValue *)puVar4,(char *)&local_98,in_x3)
  ;
  this = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (pAVar7 + 0x38);
  if (((byte)*this & 1) == 0) {
    *(undefined2 *)this = 0;
  }
  else {
                    /* try { // try from 00d89ca8 to 00e89cc3 has its CatchHandler @ 00d8a460 */
    **(undefined1 **)(pAVar7 + 0x48) = 0;
    *(undefined8 *)(pAVar7 + 0x40) = 0;
    if (((byte)pAVar7[0x38] & 1) != 0) {
      operator_delete(*(void **)(pAVar7 + 0x48));
      *(undefined8 *)(pAVar7 + 0x38) = 0;
    }
  }
                    /* try { // try from 00d89cc8 to 00e89cd7 has its CatchHandler @ 00d8a45c */
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
LAB_00d89d0c:
      sVar8 = strlen(DataParser::DEFAULT_NAME);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this,puVar4,sVar8);
    }
  }
  else if (*(long *)(pAVar7 + 0x40) == 0) goto LAB_00d89d0c;
  puVar4 = DataParser::OFFSET;
  pcVar12 = DataParser::OFFSET + -1;
  do {
    pcVar12 = pcVar12 + 1;
  } while (*pcVar12 != '\0');
  uVar2 = *(uint *)in_x1;
  piVar18 = *(int **)(in_x1 + 8);
  piVar19 = piVar18;
  if (uVar2 == 0) {
LAB_00d89dc8:
    if (piVar19 != piVar18 + (ulong)uVar2 * 0xc) {
      *(undefined4 *)(pAVar7 + 0x10) = **(undefined4 **)(piVar19 + 8);
      *(undefined4 *)(pAVar7 + 0x14) = *(undefined4 *)(*(long *)(piVar19 + 8) + 0x18);
      *(undefined4 *)(pAVar7 + 0x18) = *(undefined4 *)(*(long *)(piVar19 + 8) + 0x30);
      *(AnimationData **)(param_1 + 0x58) = pAVar7;
      puVar4 = DataParser::ACTION;
      pcVar22 = DataParser::ACTION + -1;
      pcVar12 = pcVar22;
      do {
                    /* try { // try from 00d89e18 to 00e89e3b has its CatchHandler @ 00d895c0 */
        pcVar12 = pcVar12 + 1;
      } while (*pcVar12 != '\0');
      piVar19 = *(int **)(in_x1 + 8);
      uVar2 = *(uint *)in_x1;
      uVar21 = (ulong)uVar2;
      piVar13 = piVar19 + uVar21 * 0xc;
                    /* try { // try from 00d89e3c to 00e89e43 has its CatchHandler @ 00d8a3f8 */
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
          if (piVar19 == piVar13) goto LAB_00d89f58;
LAB_00d89f44:
          iVar5 = piVar19[6];
        }
        else {
                    /* try { // try from 00d89ee0 to 00e89eef has its CatchHandler @ 00d8a490 */
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
                 (iVar5 = memcmp(puVar4,piVar18,(long)pcVar22 - (long)puVar4 & 0xffffffff),
                 iVar5 == 0)) {
                if (piVar19 != piVar13) goto LAB_00d89f44;
                break;
              }
            }
            lVar23 = lVar23 + -0x30;
            piVar19 = piVar19 + 0xc;
          } while (lVar23 != 0);
LAB_00d89f58:
          iVar5 = 0;
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01785a58 = 0;
          DAT_01785a60 = 0;
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
                    /* try { // try from 00d89fa8 to 00e89fc3 has its CatchHandler @ 00d8a4e4 */
      piVar13 = piVar19 + uVar21 * 0xc;
      piVar18 = piVar19;
      if (uVar2 != 0) {
        uVar14 = (long)pcVar12 - (long)DataParser::Z_ORDER;
                    /* try { // try from 00d89fc8 to 00e89fd7 has its CatchHandler @ 00d8a4ec */
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
          if (piVar19 == piVar13) goto LAB_00d8a0d4;
LAB_00d8a0c0:
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
                    /* try { // try from 00d8a098 to 00e8a0b3 has its CatchHandler @ 00d8a4d8 */
              piVar18 = *(int **)(piVar19 + 2);
              if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
                piVar18 = piVar19;
              }
              if ((piVar18 == (int *)puVar4) ||
                 (iVar5 = memcmp(puVar4,piVar18,(long)pcVar22 - (long)puVar4 & 0xffffffff),
                 iVar5 == 0)) {
                    /* try { // try from 00d8a0b8 to 00e8a0c7 has its CatchHandler @ 00d8a4dc */
                if (piVar19 != piVar13) goto LAB_00d8a0c0;
                break;
              }
            }
            lVar23 = lVar23 + -0x30;
            piVar19 = piVar19 + 0xc;
          } while (lVar23 != 0);
LAB_00d8a0d4:
          iVar5 = 0;
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01785a58 = 0;
          DAT_01785a60 = 0;
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
                    /* try { // try from 00d8a17c to 00e8a187 has its CatchHandler @ 00d8a458 */
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
                    /* try { // try from 00d8a1b0 to 00e8a1b3 has its CatchHandler @ 00d8a3b4 */
      if (piVar13 != piVar18) {
        do {
          pcVar22 = pcVar22 + 1;
        } while (*pcVar22 != '\0');
        if (uVar2 == 0) {
LAB_00d8a230:
          if (piVar19 != piVar13) {
            if (piVar19[6] != 0) {
              pcVar12 = *(char **)(piVar19 + 8);
              do {
                lVar23 = *(long *)(param_1 + 0x30);
                pcVar22 = pcVar12;
                if (((byte)pcVar12[0x17] >> 4 & 1) == 0) {
                  pcVar22 = *(char **)(pcVar12 + 8);
                }
                sStack_78 = 0;
                local_70 = (void *)0x0;
                local_80 = 0;
                sVar8 = strlen(pcVar22);
                if (0xffffffffffffffef < sVar8) goto LAB_00d8a90c;
                if (sVar8 < 0x17) {
                    /* try { // try from 00d8a2a8 to 00e8a343 has its CatchHandler @ 00d8a434 */
                  local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar8 << 1));
                  pvVar20 = (void *)((ulong)&local_80 | 1);
                  if (sVar8 != 0) goto LAB_00d8a2dc;
                }
                else {
                  uVar21 = sVar8 + 0x10 & 0xfffffffffffffff0;
                  pvVar20 = operator_new(uVar21);
                  local_80 = uVar21 | 1;
                  sStack_78 = sVar8;
                  local_70 = pvVar20;
LAB_00d8a2dc:
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
                if ((pBVar16 != (BoneData *)0x0) && (uVar2 = *(uint *)(pcVar12 + 0x18), uVar2 != 0))
                {
                  lVar23 = 0;
                  uVar21 = 0;
                  do {
                    pTVar11 = (TimelineData *)
                              _parseBinaryTimeline
                                        ((BinaryDataParser *)param_1,
                                         *(undefined4 *)(*(long *)(pcVar12 + 0x20) + lVar23),
                                         ((undefined4 *)(*(long *)(pcVar12 + 0x20) + lVar23))[6],0);
                    AnimationData::addBoneTimeline
                              (*(AnimationData **)(param_1 + 0x58),pBVar16,pTVar11);
                    uVar21 = uVar21 + 2;
                    lVar23 = lVar23 + 0x30;
                  } while (uVar21 < uVar2);
                }
                pcVar12 = pcVar12 + 0x30;
              } while (pcVar12 != (char *)(*(long *)(piVar19 + 8) + (ulong)(uint)piVar19[6] * 0x30))
              ;
            }
            goto LAB_00d8a394;
          }
        }
        else {
                    /* try { // try from 00d8a1d0 to 00e8a207 has its CatchHandler @ 00d8a3b8 */
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
                 (iVar5 = memcmp(puVar4,piVar18,(long)pcVar22 - (long)puVar4 & 0xffffffff),
                 iVar5 == 0)) goto LAB_00d8a230;
            }
            lVar23 = lVar23 + -0x30;
            piVar19 = piVar19 + 0xc;
          } while (lVar23 != 0);
        }
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
      }
LAB_00d8a394:
      puVar4 = DataParser::SLOT;
      pcVar22 = DataParser::SLOT + -1;
                    /* try { // try from 00d8a3a4 to 00e8a3ab has its CatchHandler @ 00d8a3b0 */
      pcVar12 = pcVar22;
      do {
        pcVar12 = pcVar12 + 1;
                    /* try { // try from 00d8a3ac to 00e8a51f has its CatchHandler @ 00d895c0 */
      } while (*pcVar12 != '\0');
                    /* catch() { ... } // from try @ 00d8a3a4 with catch @ 00d8a3b0 */
                    /* catch() { ... } // from try @ 00d8a1b0 with catch @ 00d8a3b4 */
      piVar19 = *(int **)(in_x1 + 8);
                    /* catch() { ... } // from try @ 00d8a1d0 with catch @ 00d8a3b8 */
      uVar2 = *(uint *)in_x1;
      uVar21 = (ulong)uVar2;
                    /* catch() { ... } // from try @ 00d89c88 with catch @ 00d8a3bc */
      piVar13 = piVar19 + uVar21 * 0xc;
                    /* catch() { ... } // from try @ 00d89c7c with catch @ 00d8a3cc */
      piVar18 = piVar19;
      if (uVar2 != 0) {
                    /* catch() { ... } // from try @ 00d8997c with catch @ 00d8a3d0 */
        uVar14 = (long)pcVar12 - (long)DataParser::SLOT;
                    /* catch() { ... } // from try @ 00d89654 with catch @ 00d8a3d4 */
                    /* catch() { ... } // from try @ 00d8964c with catch @ 00d8a3d8 */
                    /* catch() { ... } // from try @ 00d89644 with catch @ 00d8a3dc */
        lVar23 = uVar21 * 0x30;
        piVar24 = piVar19;
                    /* catch() { ... } // from try @ 00d8963c with catch @ 00d8a3e0 */
                    /* catch() { ... } // from try @ 00d89634 with catch @ 00d8a3e4 */
                    /* catch() { ... } // from try @ 00d89628 with catch @ 00d8a3e8 */
        do {
                    /* catch() { ... } // from try @ 00d89e3c with catch @ 00d8a3f8 */
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
                    /* catch() { ... } // from try @ 00d8a2a8 with catch @ 00d8a434 */
                    /* catch() { ... } // from try @ 00d89d8c with catch @ 00d8a438 */
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
                    /* catch() { ... } // from try @ 00d8a17c with catch @ 00d8a458 */
        } while (*pcVar22 != '\0');
                    /* catch() { ... } // from try @ 00d89cc8 with catch @ 00d8a45c */
        if (uVar2 == 0) {
LAB_00d8a4c8:
                    /* catch() { ... } // from try @ 00d896c8 with catch @ 00d8a4c8 */
          if (piVar19 != piVar13) {
            if (piVar19[6] != 0) {
                    /* catch() { ... } // from try @ 00d8a098 with catch @ 00d8a4d8 */
              pcVar12 = *(char **)(piVar19 + 8);
                    /* catch() { ... } // from try @ 00d8a0b8 with catch @ 00d8a4dc */
                    /* catch() { ... } // from try @ 00d89b5c with catch @ 00d8a4e0 */
                    /* catch() { ... } // from try @ 00d89fa8 with catch @ 00d8a4e4 */
                    /* catch() { ... } // from try @ 00d89b7c with catch @ 00d8a4e8 */
              do {
                lVar23 = *(long *)(param_1 + 0x30);
                pcVar22 = pcVar12;
                if (((byte)pcVar12[0x17] >> 4 & 1) == 0) {
                  pcVar22 = *(char **)(pcVar12 + 8);
                }
                sStack_78 = 0;
                local_70 = (void *)0x0;
                local_80 = 0;
                sVar8 = strlen(pcVar22);
                if (0xffffffffffffffef < sVar8) goto LAB_00d8a90c;
                if (sVar8 < 0x17) {
                  local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar8 << 1));
                  pvVar20 = (void *)((ulong)&local_80 | 1);
                  if (sVar8 != 0) goto LAB_00d8a574;
                }
                else {
                  uVar21 = sVar8 + 0x10 & 0xfffffffffffffff0;
                  pvVar20 = operator_new(uVar21);
                  local_80 = uVar21 | 1;
                  sStack_78 = sVar8;
                  local_70 = pvVar20;
LAB_00d8a574:
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
                if ((pSVar17 != (SlotData *)0x0) && (uVar2 = *(uint *)(pcVar12 + 0x18), uVar2 != 0))
                {
                  lVar23 = 0;
                  uVar21 = 0;
                  do {
                    pTVar11 = (TimelineData *)
                              _parseBinaryTimeline
                                        ((BinaryDataParser *)param_1,
                                         *(undefined4 *)(*(long *)(pcVar12 + 0x20) + lVar23),
                                         ((undefined4 *)(*(long *)(pcVar12 + 0x20) + lVar23))[6],0);
                    AnimationData::addSlotTimeline
                              (*(AnimationData **)(param_1 + 0x58),pSVar17,pTVar11);
                    uVar21 = uVar21 + 2;
                    lVar23 = lVar23 + 0x30;
                  } while (uVar21 < uVar2);
                }
                    /* catch() { ... } // from try @ 00d89fc8 with catch @ 00d8a4ec */
                    /* catch() { ... } // from try @ 00d89a68 with catch @ 00d8a4f0 */
                    /* catch() { ... } // from try @ 00d89a88 with catch @ 00d8a4f4 */
                pcVar12 = pcVar12 + 0x30;
              } while (pcVar12 != (char *)(*(long *)(piVar19 + 8) + (ulong)(uint)piVar19[6] * 0x30))
              ;
            }
            goto LAB_00d8a62c;
          }
        }
        else {
                    /* catch() { ... } // from try @ 00d89ca8 with catch @ 00d8a460 */
          lVar23 = uVar21 * 0x30;
          do {
                    /* catch() { ... } // from try @ 00d89ee0 with catch @ 00d8a490 */
                    /* catch() { ... } // from try @ 00d89ec0 with catch @ 00d8a494 */
            iVar5 = *piVar19;
                    /* catch() { ... } // from try @ 00d899e8 with catch @ 00d8a498 */
            if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
              iVar5 = 0x15 - *(char *)((long)piVar19 + 0x15);
            }
                    /* catch() { ... } // from try @ 00d896b4 with catch @ 00d8a49c */
            if (iVar5 == (int)((long)pcVar22 - (long)puVar4)) {
              piVar18 = *(int **)(piVar19 + 2);
              if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
                piVar18 = piVar19;
              }
              if ((piVar18 == (int *)puVar4) ||
                 (iVar5 = memcmp(puVar4,piVar18,(long)pcVar22 - (long)puVar4 & 0xffffffff),
                 iVar5 == 0)) goto LAB_00d8a4c8;
            }
            lVar23 = lVar23 + -0x30;
            piVar19 = piVar19 + 0xc;
          } while (lVar23 != 0);
        }
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
      }
LAB_00d8a62c:
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
LAB_00d8a75c:
          if (piVar19 != piVar13) {
            if (piVar19[6] != 0) {
              pcVar12 = *(char **)(piVar19 + 8);
              do {
                lVar23 = *(long *)(param_1 + 0x30);
                pcVar22 = pcVar12;
                if (((byte)pcVar12[0x17] >> 4 & 1) == 0) {
                  pcVar22 = *(char **)(pcVar12 + 8);
                }
                sStack_78 = 0;
                local_70 = (void *)0x0;
                local_80 = 0;
                sVar8 = strlen(pcVar22);
                if (0xffffffffffffffef < sVar8) goto LAB_00d8a90c;
                if (sVar8 < 0x17) {
                  local_80 = CONCAT71(local_80._1_7_,(char)((int)sVar8 << 1));
                  pvVar20 = (void *)((ulong)&local_80 | 1);
                  if (sVar8 != 0) goto LAB_00d8a808;
                }
                else {
                  uVar21 = sVar8 + 0x10 & 0xfffffffffffffff0;
                  pvVar20 = operator_new(uVar21);
                  local_80 = uVar21 | 1;
                  sStack_78 = sVar8;
                  local_70 = pvVar20;
LAB_00d8a808:
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
                    /* try { // try from 00d8a86c to 00e8ab27 has its CatchHandler @ 00d8a86c
                       catch() { ... } // from try @ 00d8a86c with catch @ 00d8a86c
                       catch() { ... } // from try @ 00d8afa8 with catch @ 00d8a86c */
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
              } while (pcVar12 != (char *)(*(long *)(piVar19 + 8) + (ulong)(uint)piVar19[6] * 0x30))
              ;
            }
            goto LAB_00d8a8c0;
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
                 (iVar5 = memcmp(puVar4,piVar18,(long)pcVar22 - (long)puVar4 & 0xffffffff),
                 iVar5 == 0)) goto LAB_00d8a75c;
            }
            lVar23 = lVar23 + -0x30;
            piVar19 = piVar19 + 0xc;
          } while (lVar23 != 0);
        }
        rapidjson::
        GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
        ::
        operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
        ::buffer = 0;
        DAT_01785a58 = 0;
        DAT_01785a60 = 0;
      }
LAB_00d8a8c0:
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return pAVar7;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  else {
    uVar21 = (long)pcVar12 - (long)DataParser::OFFSET;
    lVar23 = (ulong)uVar2 * 0x30;
    do {
                    /* try { // try from 00d89d8c to 00e89e17 has its CatchHandler @ 00d8a438 */
      iVar5 = *piVar19;
      if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
        iVar5 = 0x15 - *(char *)((long)piVar19 + 0x15);
      }
      if (iVar5 == (int)uVar21) {
        piVar13 = *(int **)(piVar19 + 2);
        if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
          piVar13 = piVar19;
        }
        if ((piVar13 == (int *)puVar4) ||
           (iVar5 = memcmp(puVar4,piVar13,uVar21 & 0xffffffff), iVar5 == 0)) goto LAB_00d89dc8;
      }
      lVar23 = lVar23 + -0x30;
      piVar19 = piVar19 + 0xc;
    } while (lVar23 != 0);
  }
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
  ::buffer = 0;
  DAT_01785a58 = 0;
  DAT_01785a60 = 0;
LAB_00d8a90c:
                    /* WARNING: Subroutine does not return */
  abort();
}

