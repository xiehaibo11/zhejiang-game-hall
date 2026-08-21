
/* dragonBones::JSONDataParser::_parseAnimation(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&) */

AnimationData * dragonBones::JSONDataParser::_parseAnimation(GenericValue *param_1)

{
  undefined8 *puVar1;
  JSONDataParser *this;
  undefined2 *puVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  short sVar10;
  int iVar11;
  undefined4 uVar12;
  AnimationData *pAVar13;
  size_t sVar14;
  undefined8 uVar15;
  TimelineData *pTVar16;
  GenericValue *in_x1;
  basic_string *in_x3;
  char *pcVar17;
  long lVar18;
  code *pcVar19;
  uint *puVar20;
  int *piVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  int *piVar24;
  ulong uVar25;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar26;
  vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this_01;
  char *pcVar27;
  long lVar28;
  ConstraintData *pCVar29;
  uint uVar30;
  long lVar31;
  ulong uVar32;
  void *pvVar33;
  ulong uVar34;
  undefined4 *puVar35;
  ulong uVar36;
  ulong uVar37;
  ulong uVar38;
  long lVar39;
  int *piVar40;
  int *piVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  basic_string local_e8 [16];
  void *local_d8;
  basic_string local_d0 [16];
  void *local_c0;
  ulong local_b8;
  size_t local_b0;
  void *local_a8;
  undefined **local_a0;
  size_t sStack_98;
  void *local_90;
  GenericValue *local_88;
  undefined ***local_80;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  pAVar13 = BaseObject::borrowObject<dragonBones::AnimationData>();
                    /* try { // try from 00d9436c to 00e94613 has its CatchHandler @ 00d95390 */
  iVar11 = _getNumber(in_x1,DataParser::DURATION,1);
  if (iVar11 == 0) {
    iVar11 = 1;
  }
  *(int *)(pAVar13 + 0x1c) = iVar11;
  uVar12 = _getNumber(in_x1,DataParser::PLAY_TIMES,1);
  *(undefined4 *)(pAVar13 + 0x20) = uVar12;
  fVar42 = (float)NEON_ucvtf(*(undefined4 *)(pAVar13 + 0x1c));
  fVar43 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x30) + 0x14));
  *(float *)(pAVar13 + 0x24) = fVar42 / fVar43;
  uVar12 = _getNumber(in_x1,DataParser::FADE_IN_TIME,0.0);
  *(undefined4 *)(pAVar13 + 0x2c) = uVar12;
  uVar12 = _getNumber(in_x1,DataParser::SCALE,1.0);
  *(undefined4 *)(pAVar13 + 0x28) = uVar12;
  puVar9 = DataParser::DEFAULT_NAME;
  puVar8 = DataParser::NAME;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = (void *)0x0;
  sVar14 = strlen(DataParser::DEFAULT_NAME);
  if (0xffffffffffffffef < sVar14) {
LAB_00d955f0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar14 < 0x17) {
    pvVar33 = (void *)((ulong)&local_b8 | 1);
    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)sVar14 << 1));
    if (sVar14 != 0) goto LAB_00d9446c;
  }
  else {
    uVar34 = sVar14 + 0x10 & 0xfffffffffffffff0;
    pvVar33 = operator_new(uVar34);
    local_b8 = uVar34 | 1;
    local_b0 = sVar14;
    local_a8 = pvVar33;
LAB_00d9446c:
    memcpy(pvVar33,puVar9,sVar14);
  }
  *(undefined1 *)((long)pvVar33 + sVar14) = 0;
  _getString((JSONDataParser *)in_x1,(GenericValue *)puVar8,(char *)&local_b8,in_x3);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (pAVar13 + 0x38);
  if (((byte)*this_00 & 1) == 0) {
    *(undefined2 *)this_00 = 0;
  }
  else {
    **(undefined1 **)(pAVar13 + 0x48) = 0;
    *(undefined8 *)(pAVar13 + 0x40) = 0;
    if (((byte)pAVar13[0x38] & 1) != 0) {
      operator_delete(*(void **)(pAVar13 + 0x48));
      *(undefined8 *)(pAVar13 + 0x38) = 0;
    }
  }
  *(void **)(pAVar13 + 0x48) = local_90;
  *(size_t *)(pAVar13 + 0x40) = sStack_98;
  *(undefined ***)this_00 = local_a0;
  sStack_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = (undefined **)0x0;
  if ((local_b8 & 1) != 0) {
    operator_delete(local_a8);
  }
  puVar8 = DataParser::DEFAULT_NAME;
  if (((byte)*this_00 & 1) == 0) {
    if ((byte)*this_00 >> 1 == 0) {
LAB_00d9450c:
      sVar14 = strlen(DataParser::DEFAULT_NAME);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,puVar8,sVar14);
    }
  }
  else if (*(long *)(pAVar13 + 0x40) == 0) goto LAB_00d9450c;
  *(int *)(pAVar13 + 0x10) =
       (int)((ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138)) >> 1);
  *(int *)(pAVar13 + 0x14) =
       (int)((ulong)(*(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150)) >> 2);
  *(int *)(pAVar13 + 0x18) =
       (int)((ulong)(*(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168)) >> 1);
  *(AnimationData **)(param_1 + 0x58) = pAVar13;
  puVar8 = DataParser::FRAME;
  pcVar27 = DataParser::FRAME + -1;
  pcVar17 = pcVar27;
  do {
    pcVar17 = pcVar17 + 1;
  } while (*pcVar17 != '\0');
  piVar24 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar34 = (ulong)uVar5;
  piVar21 = piVar24 + uVar34 * 0xc;
  piVar41 = piVar24;
  if (uVar5 != 0) {
    uVar37 = (long)pcVar17 - (long)DataParser::FRAME;
    lVar39 = uVar34 * 0x30;
    piVar40 = piVar24;
    do {
      iVar11 = *piVar40;
      if ((*(ushort *)((long)piVar40 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar40 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar4 = *(int **)(piVar40 + 2);
        if ((*(ushort *)((long)piVar40 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar40;
        }
        piVar41 = piVar40;
        if ((piVar4 == (int *)puVar8) ||
           (iVar11 = memcmp(puVar8,piVar4,uVar37 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar39 = lVar39 + -0x30;
      piVar40 = piVar40 + 0xc;
      piVar41 = piVar21;
    } while (lVar39 != 0);
  }
                    /* try { // try from 00d94624 to 00e94633 has its CatchHandler @ 00d9531c */
  if (piVar21 != piVar41) {
    do {
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d946a8:
      if (piVar24 != piVar21) {
        uVar5 = piVar24[6];
        if (uVar5 != 0) {
          lVar39 = 0;
                    /* try { // try from 00d946c0 to 00e946c7 has its CatchHandler @ 00d9531c */
          uVar30 = 0;
          do {
                    /* try { // try from 00d946c8 to 00e946f3 has its CatchHandler @ 00d939ec */
            lVar18 = *(long *)(piVar24 + 8);
            in_x3 = (basic_string *)0x0;
            _parseActionDataInFrame
                      ((JSONDataParser *)param_1,(GenericValue *)(lVar18 + lVar39),uVar30,
                       (BoneData *)0x0,(SlotData *)0x0);
                    /* try { // try from 00d946f4 to 00e946ff has its CatchHandler @ 00d95320 */
            iVar11 = _getNumber((GenericValue *)(lVar18 + lVar39),DataParser::DURATION,1);
            lVar39 = lVar39 + 0x18;
            uVar30 = uVar30 + iVar11;
          } while ((ulong)uVar5 * 0x18 - lVar39 != 0);
        }
        goto LAB_00d9471c;
      }
    }
    else {
      lVar39 = uVar34 * 0x30;
      do {
                    /* try { // try from 00d94670 to 00e946b3 has its CatchHandler @ 00d95390 */
        iVar11 = *piVar24;
        if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
          iVar11 = 0x15 - *(char *)((long)piVar24 + 0x15);
        }
        if (iVar11 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar41 = *(int **)(piVar24 + 2);
          if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
            piVar41 = piVar24;
          }
          if ((piVar41 == (int *)puVar8) ||
             (iVar11 = memcmp(puVar8,piVar41,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar11 == 0
             )) goto LAB_00d946a8;
        }
        lVar39 = lVar39 + -0x30;
        piVar24 = piVar24 + 0xc;
      } while (lVar39 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
LAB_00d9471c:
  puVar8 = DataParser::Z_ORDER;
  pcVar27 = DataParser::Z_ORDER + -1;
                    /* try { // try from 00d9472c to 00e947a3 has its CatchHandler @ 00d95390 */
  pcVar17 = pcVar27;
  do {
    pcVar17 = pcVar17 + 1;
  } while (*pcVar17 != '\0');
  piVar24 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar34 = (ulong)uVar5;
  piVar21 = piVar24 + uVar34 * 0xc;
  piVar41 = piVar24;
  if (uVar5 != 0) {
    uVar37 = (long)pcVar17 - (long)DataParser::Z_ORDER;
    lVar39 = uVar34 * 0x30;
    piVar40 = piVar24;
    do {
      iVar11 = *piVar40;
      if ((*(ushort *)((long)piVar40 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar40 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar4 = *(int **)(piVar40 + 2);
                    /* try { // try from 00d947a8 to 00e947b3 has its CatchHandler @ 00d95308 */
        if ((*(ushort *)((long)piVar40 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar40;
        }
        piVar41 = piVar40;
                    /* try { // try from 00d947b8 to 00e947bf has its CatchHandler @ 00d9530c */
                    /* try { // try from 00d947c0 to 00e947c7 has its CatchHandler @ 00d95310 */
        if ((piVar4 == (int *)puVar8) ||
           (iVar11 = memcmp(puVar8,piVar4,uVar37 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar39 = lVar39 + -0x30;
      piVar40 = piVar40 + 0xc;
      piVar41 = piVar21;
    } while (lVar39 != 0);
  }
  if (piVar21 != piVar41) {
    do {
                    /* try { // try from 00d947e4 to 00e947eb has its CatchHandler @ 00d95330 */
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d94858:
      if (piVar24 == piVar21) goto LAB_00d94868;
      piVar24 = piVar24 + 6;
    }
    else {
                    /* try { // try from 00d947f4 to 00e9480b has its CatchHandler @ 00d95384 */
      lVar39 = uVar34 * 0x30;
      do {
        iVar11 = *piVar24;
        if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
          iVar11 = 0x15 - *(char *)((long)piVar24 + 0x15);
        }
        if (iVar11 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar41 = *(int **)(piVar24 + 2);
          if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
            piVar41 = piVar24;
          }
          if ((piVar41 == (int *)puVar8) ||
             (iVar11 = memcmp(puVar8,piVar41,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar11 == 0
             )) goto LAB_00d94858;
        }
        lVar39 = lVar39 + -0x30;
                    /* try { // try from 00d9480c to 00e9482f has its CatchHandler @ 00d95354 */
        piVar24 = piVar24 + 0xc;
      } while (lVar39 != 0);
LAB_00d94868:
      piVar24 = (int *)&rapidjson::
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
    }
    local_a0 = &PTR_FUN_016d6ef8;
    local_90 = (void *)0x1;
    sStack_98 = 0xa8;
    in_x3 = (basic_string *)0x1;
    local_88 = param_1;
    local_80 = &local_a0;
    uVar15 = (**(code **)(*(long *)param_1 + 0x78))
                       (param_1,piVar24,DataParser::FRAME,1,0,0,0,&local_a0);
    *(undefined8 *)(*(long *)(param_1 + 0x58) + 0xe8) = uVar15;
    if (&local_a0 == local_80) {
      pcVar19 = (code *)(*local_80)[4];
    }
    else {
      if (local_80 == (undefined ***)0x0) goto LAB_00d948f4;
      pcVar19 = (code *)(*local_80)[5];
    }
    (*pcVar19)();
  }
LAB_00d948f4:
  puVar8 = DataParser::BONE;
  pcVar27 = DataParser::BONE + -1;
  pcVar17 = pcVar27;
  do {
    pcVar17 = pcVar17 + 1;
  } while (*pcVar17 != '\0');
  piVar24 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar34 = (ulong)uVar5;
  piVar21 = piVar24 + uVar34 * 0xc;
  piVar41 = piVar24;
  if (uVar5 != 0) {
    uVar37 = (long)pcVar17 - (long)DataParser::BONE;
    lVar39 = uVar34 * 0x30;
    piVar40 = piVar24;
    do {
      iVar11 = *piVar40;
      if ((*(ushort *)((long)piVar40 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar40 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar4 = *(int **)(piVar40 + 2);
        if ((*(ushort *)((long)piVar40 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar40;
        }
        piVar41 = piVar40;
        if ((piVar4 == (int *)puVar8) ||
           (iVar11 = memcmp(puVar8,piVar4,uVar37 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar39 = lVar39 + -0x30;
      piVar40 = piVar40 + 0xc;
      piVar41 = piVar21;
    } while (lVar39 != 0);
  }
  if (piVar21 != piVar41) {
    do {
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d94a24:
      if (piVar24 != piVar21) {
        uVar5 = piVar24[6];
        if (uVar5 != 0) {
          lVar39 = 0;
          do {
            (**(code **)(*(long *)param_1 + 0x80))(param_1,*(long *)(piVar24 + 8) + lVar39);
            lVar39 = lVar39 + 0x18;
          } while ((ulong)uVar5 * 0x18 - lVar39 != 0);
        }
        goto LAB_00d94a78;
      }
    }
    else {
      lVar39 = uVar34 * 0x30;
      do {
        iVar11 = *piVar24;
        if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
          iVar11 = 0x15 - *(char *)((long)piVar24 + 0x15);
        }
        if (iVar11 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar41 = *(int **)(piVar24 + 2);
          if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
            piVar41 = piVar24;
          }
          if ((piVar41 == (int *)puVar8) ||
             (iVar11 = memcmp(puVar8,piVar41,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar11 == 0
             )) goto LAB_00d94a24;
        }
        lVar39 = lVar39 + -0x30;
        piVar24 = piVar24 + 0xc;
      } while (lVar39 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
LAB_00d94a78:
  puVar8 = DataParser::SLOT;
  pcVar27 = DataParser::SLOT + -1;
  pcVar17 = pcVar27;
  do {
    pcVar17 = pcVar17 + 1;
  } while (*pcVar17 != '\0');
  piVar24 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar34 = (ulong)uVar5;
  piVar21 = piVar24 + uVar34 * 0xc;
  piVar41 = piVar24;
  if (uVar5 != 0) {
    uVar37 = (long)pcVar17 - (long)DataParser::SLOT;
    lVar39 = uVar34 * 0x30;
    piVar40 = piVar24;
    do {
                    /* try { // try from 00d94ae8 to 00e94c7b has its CatchHandler @ 00d95334 */
      iVar11 = *piVar40;
      if ((*(ushort *)((long)piVar40 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar40 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar4 = *(int **)(piVar40 + 2);
        if ((*(ushort *)((long)piVar40 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar40;
        }
        piVar41 = piVar40;
        if ((piVar4 == (int *)puVar8) ||
           (iVar11 = memcmp(puVar8,piVar4,uVar37 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar39 = lVar39 + -0x30;
      piVar40 = piVar40 + 0xc;
      piVar41 = piVar21;
    } while (lVar39 != 0);
  }
  if (piVar21 != piVar41) {
    do {
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d94ba8:
      if (piVar24 != piVar21) {
        uVar5 = piVar24[6];
        if (uVar5 != 0) {
          lVar39 = 0;
          do {
            (**(code **)(*(long *)param_1 + 0x88))(param_1,*(long *)(piVar24 + 8) + lVar39);
            lVar39 = lVar39 + 0x18;
          } while ((ulong)uVar5 * 0x18 - lVar39 != 0);
        }
        goto LAB_00d94bfc;
      }
    }
    else {
      lVar39 = uVar34 * 0x30;
      do {
        iVar11 = *piVar24;
        if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
          iVar11 = 0x15 - *(char *)((long)piVar24 + 0x15);
        }
        if (iVar11 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar41 = *(int **)(piVar24 + 2);
          if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
            piVar41 = piVar24;
          }
          if ((piVar41 == (int *)puVar8) ||
             (iVar11 = memcmp(puVar8,piVar41,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar11 == 0
             )) goto LAB_00d94ba8;
        }
        lVar39 = lVar39 + -0x30;
        piVar24 = piVar24 + 0xc;
      } while (lVar39 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
LAB_00d94bfc:
  puVar8 = DataParser::FFD;
  pcVar27 = DataParser::FFD + -1;
  pcVar17 = pcVar27;
  do {
    pcVar17 = pcVar17 + 1;
  } while (*pcVar17 != '\0');
  piVar24 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar34 = (ulong)uVar5;
  piVar21 = piVar24 + uVar34 * 0xc;
  piVar41 = piVar24;
  if (uVar5 != 0) {
    uVar37 = (long)pcVar17 - (long)DataParser::FFD;
    lVar39 = uVar34 * 0x30;
    piVar40 = piVar24;
    do {
      iVar11 = *piVar40;
      if ((*(ushort *)((long)piVar40 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar40 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar4 = *(int **)(piVar40 + 2);
        if ((*(ushort *)((long)piVar40 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar40;
        }
        piVar41 = piVar40;
                    /* try { // try from 00d94c98 to 00e94ccb has its CatchHandler @ 00d95318 */
        if ((piVar4 == (int *)puVar8) ||
           (iVar11 = memcmp(puVar8,piVar4,uVar37 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar39 = lVar39 + -0x30;
      piVar40 = piVar40 + 0xc;
      piVar41 = piVar21;
    } while (lVar39 != 0);
  }
  if (piVar21 != piVar41) {
    do {
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d94d34:
      if (piVar24 != piVar21) {
        uVar5 = piVar24[6];
                    /* try { // try from 00d94d40 to 00e94f0f has its CatchHandler @ 00d95390 */
        if (uVar5 != 0) {
          lVar39 = 0;
          do {
            puVar9 = DataParser::DEFAULT_NAME;
            puVar8 = DataParser::SKIN;
            lVar18 = *(long *)(piVar24 + 8);
            local_a0 = (undefined **)0x0;
            sStack_98 = 0;
            local_90 = (void *)0x0;
            sVar14 = strlen(DataParser::DEFAULT_NAME);
            if (0xffffffffffffffef < sVar14) goto LAB_00d955f0;
            this = (JSONDataParser *)(lVar18 + lVar39);
            if (sVar14 < 0x17) {
              local_a0 = (undefined **)CONCAT71(local_a0._1_7_,(char)((int)sVar14 << 1));
              pvVar33 = (void *)((ulong)&local_a0 | 1);
              if (sVar14 != 0) goto LAB_00d94e08;
            }
            else {
              uVar34 = sVar14 + 0x10 & 0xfffffffffffffff0;
              pvVar33 = operator_new(uVar34);
              local_a0 = (undefined **)(uVar34 | 1);
              sStack_98 = sVar14;
              local_90 = pvVar33;
LAB_00d94e08:
              memcpy(pvVar33,puVar9,sVar14);
            }
            *(undefined1 *)((long)pvVar33 + sVar14) = 0;
            _getString(this,(GenericValue *)puVar8,(char *)&local_a0,in_x3);
            if (((ulong)local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            sStack_98 = 0;
            local_90 = (void *)0x0;
            local_a0 = (undefined **)0x0;
            _getString(this,(GenericValue *)DataParser::SLOT,(char *)&local_a0,in_x3);
            if (((ulong)local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            sStack_98 = 0;
            local_90 = (void *)0x0;
            local_a0 = (undefined **)0x0;
            _getString(this,(GenericValue *)DataParser::NAME,(char *)&local_a0,in_x3);
            if (((ulong)local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            puVar8 = DataParser::DEFAULT_NAME;
            sVar14 = local_b8 >> 1 & 0x7f;
            if ((local_b8 & 1) != 0) {
              sVar14 = local_b0;
            }
            if (sVar14 == 0) {
              sVar14 = strlen(DataParser::DEFAULT_NAME);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_b8,puVar8,sVar14);
            }
            lVar31 = *(long *)(param_1 + 0x30);
            lVar18 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                                 *)(lVar31 + 0xd8),local_d0);
            if (lVar31 + 0xe0 == lVar18) {
              uVar15 = 0;
            }
            else {
              uVar15 = *(undefined8 *)(lVar18 + 0x38);
            }
            in_x3 = local_e8;
            *(undefined8 *)(param_1 + 0x40) = uVar15;
            lVar18 = ArmatureData::getMesh
                               (*(ArmatureData **)(param_1 + 0x30),(basic_string *)&local_b8,
                                local_d0,in_x3);
            *(long *)(param_1 + 0x50) = lVar18;
            if ((lVar18 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
                    /* try { // try from 00d94f38 to 00e94f43 has its CatchHandler @ 00d952f4 */
              local_a0 = &PTR_FUN_016d6ef8;
              local_90 = (void *)0x1;
              sStack_98 = 0xe0;
                    /* try { // try from 00d94f48 to 00e94f5b has its CatchHandler @ 00d952f8 */
              in_x3 = (basic_string *)0x16;
              local_88 = param_1;
              local_80 = &local_a0;
                    /* try { // try from 00d94f6c to 00e94f77 has its CatchHandler @ 00d952fc */
              pTVar16 = (TimelineData *)
                        (**(code **)(*(long *)param_1 + 0x78))
                                  (param_1,this,DataParser::FRAME,0x16,0,1,0,&local_a0);
                    /* try { // try from 00d94f78 to 00e94f8f has its CatchHandler @ 00d95304 */
              if (&local_a0 == local_80) {
                pcVar19 = (code *)(*local_80)[4];
LAB_00d94fa0:
                (*pcVar19)(local_80);
              }
              else if (local_80 != (undefined ***)0x0) {
                pcVar19 = (code *)(*local_80)[5];
                goto LAB_00d94fa0;
              }
              if (pTVar16 != (TimelineData *)0x0) {
                    /* try { // try from 00d94fac to 00e94fb3 has its CatchHandler @ 00d95300 */
                AnimationData::addSlotTimeline
                          (*(AnimationData **)(param_1 + 0x58),*(SlotData **)(param_1 + 0x40),
                           pTVar16);
              }
              *(undefined8 *)(param_1 + 0x40) = 0;
              *(undefined8 *)(param_1 + 0x50) = 0;
            }
            if (((byte)local_e8[0] & 1) != 0) {
                    /* try { // try from 00d94fe0 to 00e94fff has its CatchHandler @ 00d95388 */
              operator_delete(local_d8);
            }
            if (((byte)local_d0[0] & 1) != 0) {
              operator_delete(local_c0);
            }
            if ((local_b8 & 1) != 0) {
              operator_delete(local_a8);
            }
            lVar39 = lVar39 + 0x18;
          } while ((ulong)uVar5 * 0x18 - lVar39 != 0);
        }
        goto LAB_00d9501c;
      }
    }
    else {
      lVar39 = uVar34 * 0x30;
                    /* try { // try from 00d94ce0 to 00e94d0f has its CatchHandler @ 00d95390 */
      do {
        iVar11 = *piVar24;
        if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
          iVar11 = 0x15 - *(char *)((long)piVar24 + 0x15);
        }
        if (iVar11 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar41 = *(int **)(piVar24 + 2);
          if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
            piVar41 = piVar24;
          }
                    /* try { // try from 00d94d20 to 00e94d2b has its CatchHandler @ 00d95318 */
          if ((piVar41 == (int *)puVar8) ||
             (iVar11 = memcmp(puVar8,piVar41,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar11 == 0
             )) goto LAB_00d94d34;
        }
        lVar39 = lVar39 + -0x30;
        piVar24 = piVar24 + 0xc;
      } while (lVar39 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
LAB_00d9501c:
  puVar8 = DataParser::IK;
  pcVar27 = DataParser::IK + -1;
  pcVar17 = pcVar27;
  do {
    pcVar17 = pcVar17 + 1;
  } while (*pcVar17 != '\0');
  piVar24 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar34 = (ulong)uVar5;
  piVar21 = piVar24 + uVar34 * 0xc;
  piVar41 = piVar24;
  if (uVar5 != 0) {
    uVar37 = (long)pcVar17 - (long)DataParser::IK;
    lVar39 = uVar34 * 0x30;
    piVar40 = piVar24;
    do {
                    /* try { // try from 00d95084 to 00e9508b has its CatchHandler @ 00d952e4 */
                    /* try { // try from 00d9508c to 00e95093 has its CatchHandler @ 00d952f0 */
      iVar11 = *piVar40;
                    /* try { // try from 00d95094 to 00e9509b has its CatchHandler @ 00d952e0 */
      if ((*(ushort *)((long)piVar40 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar40 + 0x15);
      }
                    /* try { // try from 00d9509c to 00e950a3 has its CatchHandler @ 00d952f0 */
      if (iVar11 == (int)uVar37) {
                    /* try { // try from 00d950a4 to 00e950ab has its CatchHandler @ 00d952dc */
        piVar4 = *(int **)(piVar40 + 2);
        if ((*(ushort *)((long)piVar40 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar40;
        }
                    /* try { // try from 00d950ac to 00e950b3 has its CatchHandler @ 00d952d8 */
        piVar41 = piVar40;
                    /* try { // try from 00d950b4 to 00e950bb has its CatchHandler @ 00d952d4 */
                    /* try { // try from 00d950bc to 00e950c3 has its CatchHandler @ 00d952d0 */
        if ((piVar4 == (int *)puVar8) ||
           (iVar11 = memcmp(puVar8,piVar4,uVar37 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar39 = lVar39 + -0x30;
      piVar40 = piVar40 + 0xc;
      piVar41 = piVar21;
                    /* try { // try from 00d9507c to 00e95083 has its CatchHandler @ 00d952ec */
    } while (lVar39 != 0);
  }
                    /* try { // try from 00d950d0 to 00e950d7 has its CatchHandler @ 00d952cc */
                    /* try { // try from 00d950d8 to 00e950df has its CatchHandler @ 00d952f0 */
                    /* try { // try from 00d950e0 to 00e950e7 has its CatchHandler @ 00d952c8 */
  if (piVar21 != piVar41) {
    do {
      pcVar27 = pcVar27 + 1;
                    /* try { // try from 00d950e8 to 00e950ef has its CatchHandler @ 00d952e8 */
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d95158:
                    /* try { // try from 00d95158 to 00e9515f has its CatchHandler @ 00d952a0 */
      if (piVar24 != piVar21) {
                    /* try { // try from 00d95160 to 00e95163 has its CatchHandler @ 00d952e8 */
        uVar5 = piVar24[6];
                    /* try { // try from 00d95164 to 00e9516b has its CatchHandler @ 00d9529c */
        if (uVar5 != 0) {
                    /* try { // try from 00d9516c to 00e9517b has its CatchHandler @ 00d952f0 */
                    /* try { // try from 00d9517c to 00e95183 has its CatchHandler @ 00d95298 */
                    /* try { // try from 00d95184 to 00e9518b has its CatchHandler @ 00d95294 */
          lVar39 = 0;
                    /* try { // try from 00d9518c to 00e95193 has its CatchHandler @ 00d952f0 */
          do {
                    /* try { // try from 00d951a0 to 00e951a7 has its CatchHandler @ 00d9528c */
            lVar18 = *(long *)(piVar24 + 8);
                    /* try { // try from 00d951a8 to 00e951af has its CatchHandler @ 00d95288 */
            sStack_98 = 0;
            local_90 = (void *)0x0;
                    /* try { // try from 00d951b0 to 00e951b3 has its CatchHandler @ 00d952f0 */
                    /* try { // try from 00d951b4 to 00e951b7 has its CatchHandler @ 00d952e8 */
                    /* try { // try from 00d951b8 to 00e951bb has its CatchHandler @ 00d952f0 */
                    /* try { // try from 00d951bc to 00e951c3 has its CatchHandler @ 00d95284 */
            local_a0 = (undefined **)0x0;
            _getString((JSONDataParser *)(lVar18 + lVar39),(GenericValue *)DataParser::NAME,
                       (char *)&local_a0,in_x3);
                    /* try { // try from 00d951c4 to 00e951cb has its CatchHandler @ 00d95280 */
            if (((ulong)local_a0 & 1) != 0) {
                    /* try { // try from 00d951cc to 00e951d3 has its CatchHandler @ 00d952f0 */
              operator_delete(local_90);
            }
                    /* try { // try from 00d951d4 to 00e951db has its CatchHandler @ 00d9527c */
            lVar28 = *(long *)(param_1 + 0x30);
                    /* try { // try from 00d951dc to 00e951e3 has its CatchHandler @ 00d95278 */
            lVar31 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>>>
                                 *)(lVar28 + 0xf0),(basic_string *)&local_b8);
                    /* try { // try from 00d951e4 to 00e951eb has its CatchHandler @ 00d95274 */
                    /* try { // try from 00d951ec to 00e951ef has its CatchHandler @ 00d952f0 */
                    /* try { // try from 00d951f0 to 00e951f7 has its CatchHandler @ 00d95270 */
            if ((lVar28 + 0xf8 != lVar31) &&
               (pCVar29 = *(ConstraintData **)(lVar31 + 0x38), pCVar29 != (ConstraintData *)0x0)) {
                    /* try { // try from 00d951f8 to 00e951fb has its CatchHandler @ 00d952e8 */
                    /* try { // try from 00d951fc to 00e95203 has its CatchHandler @ 00d9526c */
                    /* try { // try from 00d95204 to 00e9520b has its CatchHandler @ 00d95268 */
              local_90 = (void *)0x1;
              sStack_98 = 0xe8;
                    /* try { // try from 00d9520c to 00e95213 has its CatchHandler @ 00d95264 */
                    /* try { // try from 00d95214 to 00e9521b has its CatchHandler @ 00d95260 */
              in_x3 = (basic_string *)0x1e;
                    /* try { // try from 00d9521c to 00e95223 has its CatchHandler @ 00d9525c */
              local_a0 = &PTR_FUN_016d6ef8;
              local_88 = param_1;
              local_80 = &local_a0;
                    /* try { // try from 00d95224 to 00e9522b has its CatchHandler @ 00d95258 */
                    /* try { // try from 00d9522c to 00e95233 has its CatchHandler @ 00d95254 */
                    /* try { // try from 00d95234 to 00e95237 has its CatchHandler @ 00d952f0 */
                    /* try { // try from 00d95238 to 00e9523f has its CatchHandler @ 00d95250 */
              pTVar16 = (TimelineData *)
                        (**(code **)(*(long *)param_1 + 0x78))
                                  (param_1,(JSONDataParser *)(lVar18 + lVar39),DataParser::FRAME,
                                   0x1e,1,0,2,&local_a0);
                    /* try { // try from 00d95240 to 00e95247 has its CatchHandler @ 00d9524c */
                    /* try { // try from 00d95248 to 00e9541f has its CatchHandler @ 00d939ec */
              if (&local_a0 == local_80) {
                    /* catch() { ... } // from try @ 00d9521c with catch @ 00d9525c */
                    /* catch() { ... } // from try @ 00d95214 with catch @ 00d95260 */
                pcVar19 = (code *)(*local_80)[4];
LAB_00d95264:
                    /* catch() { ... } // from try @ 00d9520c with catch @ 00d95264 */
                    /* catch() { ... } // from try @ 00d95204 with catch @ 00d95268 */
                (*pcVar19)(local_80);
              }
              else {
                    /* catch() { ... } // from try @ 00d95240 with catch @ 00d9524c */
                if (local_80 != (undefined ***)0x0) {
                    /* catch() { ... } // from try @ 00d95238 with catch @ 00d95250 */
                    /* catch() { ... } // from try @ 00d9522c with catch @ 00d95254 */
                  pcVar19 = (code *)(*local_80)[5];
                    /* catch() { ... } // from try @ 00d95224 with catch @ 00d95258 */
                  goto LAB_00d95264;
                }
              }
                    /* catch() { ... } // from try @ 00d951fc with catch @ 00d9526c */
              if (pTVar16 != (TimelineData *)0x0) {
                    /* catch() { ... } // from try @ 00d951f0 with catch @ 00d95270 */
                    /* catch() { ... } // from try @ 00d951e4 with catch @ 00d95274 */
                    /* catch() { ... } // from try @ 00d951dc with catch @ 00d95278 */
                    /* catch() { ... } // from try @ 00d951d4 with catch @ 00d9527c */
                AnimationData::addConstraintTimeline
                          (*(AnimationData **)(param_1 + 0x58),pCVar29,pTVar16);
              }
            }
                    /* catch() { ... } // from try @ 00d951c4 with catch @ 00d95280 */
                    /* catch() { ... } // from try @ 00d951bc with catch @ 00d95284 */
            if ((local_b8 & 1) != 0) {
                    /* catch() { ... } // from try @ 00d951a8 with catch @ 00d95288 */
                    /* catch() { ... } // from try @ 00d951a0 with catch @ 00d9528c */
              operator_delete(local_a8);
                    /* catch() { ... } // from try @ 00d95194 with catch @ 00d95290 */
            }
                    /* try { // try from 00d95194 to 00e95197 has its CatchHandler @ 00d95290 */
            lVar39 = lVar39 + 0x18;
                    /* try { // try from 00d95198 to 00e9519f has its CatchHandler @ 00d952f0 */
          } while ((ulong)uVar5 * 0x18 - lVar39 != 0);
        }
        goto LAB_00d952a4;
      }
    }
    else {
                    /* try { // try from 00d950f0 to 00e950f7 has its CatchHandler @ 00d952c4 */
                    /* try { // try from 00d950f8 to 00e950fb has its CatchHandler @ 00d952f0 */
                    /* try { // try from 00d950fc to 00e95103 has its CatchHandler @ 00d952c0 */
      lVar39 = uVar34 * 0x30;
                    /* try { // try from 00d95104 to 00e9510f has its CatchHandler @ 00d952f0 */
      do {
                    /* try { // try from 00d95118 to 00e9511b has its CatchHandler @ 00d952f0 */
                    /* try { // try from 00d9511c to 00e9511f has its CatchHandler @ 00d952e8 */
                    /* try { // try from 00d95120 to 00e95127 has its CatchHandler @ 00d952b8 */
        iVar11 = *piVar24;
                    /* try { // try from 00d95128 to 00e9512f has its CatchHandler @ 00d952b4 */
        if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
          iVar11 = 0x15 - *(char *)((long)piVar24 + 0x15);
        }
                    /* try { // try from 00d95130 to 00e95133 has its CatchHandler @ 00d952f0 */
        if (iVar11 == (int)((long)pcVar27 - (long)puVar8)) {
                    /* try { // try from 00d95134 to 00e9513b has its CatchHandler @ 00d952b0 */
          piVar41 = *(int **)(piVar24 + 2);
                    /* try { // try from 00d9513c to 00e95143 has its CatchHandler @ 00d952ac */
          if ((*(ushort *)((long)piVar24 + 0x16) & 0x1000) != 0) {
            piVar41 = piVar24;
          }
                    /* try { // try from 00d95144 to 00e9514b has its CatchHandler @ 00d952a8 */
                    /* try { // try from 00d9514c to 00e9514f has its CatchHandler @ 00d952f0 */
                    /* try { // try from 00d95150 to 00e95157 has its CatchHandler @ 00d952a4 */
          if ((piVar41 == (int *)puVar8) ||
             (iVar11 = memcmp(puVar8,piVar41,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar11 == 0
             )) goto LAB_00d95158;
        }
        lVar39 = lVar39 + -0x30;
        piVar24 = piVar24 + 0xc;
                    /* try { // try from 00d95110 to 00e95117 has its CatchHandler @ 00d952bc */
      } while (lVar39 != 0);
    }
                    /* catch() { ... } // from try @ 00d95184 with catch @ 00d95294 */
                    /* catch() { ... } // from try @ 00d9517c with catch @ 00d95298 */
                    /* catch() { ... } // from try @ 00d95164 with catch @ 00d9529c */
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
                    /* catch() { ... } // from try @ 00d95158 with catch @ 00d952a0 */
    DAT_01785a60 = 0;
  }
LAB_00d952a4:
                    /* catch() { ... } // from try @ 00d95150 with catch @ 00d952a4 */
                    /* catch() { ... } // from try @ 00d95144 with catch @ 00d952a8 */
                    /* catch() { ... } // from try @ 00d9513c with catch @ 00d952ac */
  if (*(ActionFrame **)(param_1 + 0x1d0) == *(ActionFrame **)(param_1 + 0x1c8)) goto LAB_00d955b4;
                    /* catch() { ... } // from try @ 00d95134 with catch @ 00d952b0 */
                    /* catch() { ... } // from try @ 00d95128 with catch @ 00d952b4 */
  std::__ndk1::
  __sort<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
            (*(ActionFrame **)(param_1 + 0x1c8),*(ActionFrame **)(param_1 + 0x1d0),
             (__less *)&local_a0);
                    /* catch() { ... } // from try @ 00d95120 with catch @ 00d952b8 */
  pTVar16 = BaseObject::borrowObject<dragonBones::TimelineData>();
                    /* catch() { ... } // from try @ 00d95110 with catch @ 00d952bc */
                    /* catch() { ... } // from try @ 00d950fc with catch @ 00d952c0 */
                    /* catch() { ... } // from try @ 00d950f0 with catch @ 00d952c4 */
  *(TimelineData **)(*(long *)(param_1 + 0x58) + 0xe0) = pTVar16;
                    /* catch() { ... } // from try @ 00d950e0 with catch @ 00d952c8 */
  lVar39 = *(long *)(param_1 + 0x1c8);
  lVar31 = *(long *)(param_1 + 0x1d0);
                    /* catch() { ... } // from try @ 00d950d0 with catch @ 00d952cc */
  *(undefined4 *)(pTVar16 + 0x10) = 0;
                    /* catch() { ... } // from try @ 00d950bc with catch @ 00d952d0 */
  lVar18 = *(long *)(param_1 + 0x180);
                    /* catch() { ... } // from try @ 00d950b4 with catch @ 00d952d4 */
  uVar26 = lVar31 - lVar39;
                    /* catch() { ... } // from try @ 00d950ac with catch @ 00d952d8 */
  uVar25 = (long)uVar26 >> 5;
                    /* catch() { ... } // from try @ 00d950a4 with catch @ 00d952dc */
                    /* catch() { ... } // from try @ 00d95094 with catch @ 00d952e0 */
  uVar37 = *(long *)(param_1 + 0x188) - lVar18 >> 1;
                    /* catch() { ... } // from try @ 00d95084 with catch @ 00d952e4 */
                    /* catch() { ... } // from try @ 00d950c4 with catch @ 00d952e8
                       catch() { ... } // from try @ 00d950e8 with catch @ 00d952e8
                       catch() { ... } // from try @ 00d9511c with catch @ 00d952e8
                       catch() { ... } // from try @ 00d95160 with catch @ 00d952e8
                       catch() { ... } // from try @ 00d951b4 with catch @ 00d952e8
                       catch() { ... } // from try @ 00d951f8 with catch @ 00d952e8 */
  uVar34 = uVar25 + 5 + uVar37;
                    /* catch() { ... } // from try @ 00d9507c with catch @ 00d952ec */
                    /* catch() { ... } // from try @ 00d9508c with catch @ 00d952f0
                       catch() { ... } // from try @ 00d9509c with catch @ 00d952f0
                       catch() { ... } // from try @ 00d950c8 with catch @ 00d952f0
                       catch() { ... } // from try @ 00d950d8 with catch @ 00d952f0
                       catch() { ... } // from try @ 00d950f8 with catch @ 00d952f0
                       catch() { ... } // from try @ 00d95104 with catch @ 00d952f0
                       catch() { ... } // from try @ 00d95118 with catch @ 00d952f0
                       catch() { ... } // from try @ 00d95130 with catch @ 00d952f0
                       catch() { ... } // from try @ 00d9514c with catch @ 00d952f0
                       catch() { ... } // from try @ 00d9516c with catch @ 00d952f0
                       catch() { ... } // from try @ 00d9518c with catch @ 00d952f0
                       catch() { ... } // from try @ 00d95198 with catch @ 00d952f0
                       catch() { ... } // from try @ 00d951b0 with catch @ 00d952f0
                       catch() { ... } // from try @ 00d951b8 with catch @ 00d952f0
                       catch() { ... } // from try @ 00d951cc with catch @ 00d952f0
                       catch() { ... } // from try @ 00d951ec with catch @ 00d952f0
                       catch() { ... } // from try @ 00d95234 with catch @ 00d952f0 */
  *(int *)(pTVar16 + 0x14) = (int)uVar37;
                    /* catch() { ... } // from try @ 00d94f38 with catch @ 00d952f4 */
  if (uVar37 < uVar34) {
                    /* catch() { ... } // from try @ 00d94f48 with catch @ 00d952f8 */
                    /* catch() { ... } // from try @ 00d94f6c with catch @ 00d952fc */
                    /* catch() { ... } // from try @ 00d94fac with catch @ 00d95300 */
    std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
              ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(param_1 + 0x180),
               uVar25 + 5);
                    /* catch() { ... } // from try @ 00d94f78 with catch @ 00d95304 */
    uVar37 = (ulong)*(uint *)(pTVar16 + 0x14);
                    /* catch() { ... } // from try @ 00d947a8 with catch @ 00d95308 */
    lVar18 = *(long *)(param_1 + 0x180);
                    /* catch() { ... } // from try @ 00d947b8 with catch @ 00d9530c */
  }
  else {
                    /* catch() { ... } // from try @ 00d947c0 with catch @ 00d95310 */
    if (uVar34 < uVar37) {
                    /* catch() { ... } // from try @ 00d947c8 with catch @ 00d95314 */
                    /* catch() { ... } // from try @ 00d94c98 with catch @ 00d95318
                       catch() { ... } // from try @ 00d94d20 with catch @ 00d95318 */
      *(ulong *)(param_1 + 0x188) = lVar18 + uVar34 * 2;
    }
  }
                    /* catch() { ... } // from try @ 00d94624 with catch @ 00d9531c
                       catch() { ... } // from try @ 00d946c0 with catch @ 00d9531c */
  iVar11 = (int)uVar37;
                    /* catch() { ... } // from try @ 00d946f4 with catch @ 00d95320 */
                    /* catch() { ... } // from try @ 00d947e4 with catch @ 00d95330 */
                    /* catch() { ... } // from try @ 00d94ae8 with catch @ 00d95334 */
  *(undefined2 *)(lVar18 + (uVar37 & 0xffffffff) * 2) = 100;
  *(undefined2 *)(lVar18 + (ulong)(iVar11 + 1) * 2) = 0;
  *(short *)(lVar18 + (ulong)(iVar11 + 2) * 2) = (short)(uVar26 >> 5);
  *(undefined2 *)(lVar18 + (ulong)(iVar11 + 3) * 2) = 0;
  *(undefined2 *)(lVar18 + (ulong)(iVar11 + 4) * 2) = 0;
  *(TimelineData **)(param_1 + 0x60) = pTVar16;
  if (uVar26 == 0x20) {
                    /* catch() { ... } // from try @ 00d9480c with catch @ 00d95354 */
    *(undefined4 *)(pTVar16 + 0x18) = 0xffffffff;
    puVar35 = *(undefined4 **)(param_1 + 0x1c8);
    lVar39 = *(long *)(param_1 + 0x168);
    uVar37 = *(long *)(param_1 + 0x170) - lVar39;
    uVar26 = (long)uVar37 >> 1;
    uVar38 = *(long *)(puVar35 + 4) - *(long *)(puVar35 + 2);
    uVar25 = (long)uVar38 >> 2;
    uVar34 = uVar25 + uVar26 + 2;
                    /* catch() { ... } // from try @ 00d947f4 with catch @ 00d95384 */
    if (uVar34 < uVar26 || uVar34 - uVar26 == 0) {
                    /* catch() { ... } // from try @ 00d93aa8 with catch @ 00d953e4 */
      if (uVar34 < uVar26) {
        *(ulong *)(param_1 + 0x170) = lVar39 + uVar34 * 2;
      }
    }
    else {
                    /* catch() { ... } // from try @ 00d94fe0 with catch @ 00d95388 */
                    /* catch() { ... } // from try @ 00d93a90 with catch @ 00d9538c */
                    /* catch() { ... } // from try @ 00d9436c with catch @ 00d95390
                       catch() { ... } // from try @ 00d94670 with catch @ 00d95390
                       catch() { ... } // from try @ 00d9472c with catch @ 00d95390
                       catch() { ... } // from try @ 00d94ce0 with catch @ 00d95390
                       catch() { ... } // from try @ 00d94d40 with catch @ 00d95390 */
      std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x168),uVar34 - uVar26);
      lVar39 = *(long *)(param_1 + 0x168);
    }
    uVar12 = *puVar35;
    puVar2 = (undefined2 *)(lVar39 + uVar26 * 2);
    puVar2[1] = (short)(uVar38 >> 2);
    *puVar2 = (short)uVar12;
    if (uVar38 != 0) {
      lVar18 = *(long *)(puVar35 + 2);
      uVar34 = uVar25;
      if (uVar25 < 2) {
        uVar34 = 1;
      }
      if (uVar34 < 8) {
        uVar38 = 0;
      }
      else {
        uVar38 = uVar34 & 0xfffffffffffffff8;
        puVar22 = (undefined8 *)(lVar18 + 0x10);
        puVar23 = (undefined8 *)(lVar39 + uVar26 * 2 + 0xc);
        uVar32 = uVar38;
        do {
          puVar1 = puVar22 + -2;
          puVar7 = puVar22 + -1;
          uVar44 = puVar22[1];
          uVar15 = *puVar22;
          puVar22 = puVar22 + 4;
          uVar32 = uVar32 - 8;
          puVar23[-1] = CONCAT26((short)((ulong)*puVar7 >> 0x20),
                                 CONCAT24((short)*puVar7,
                                          CONCAT22((short)((ulong)*puVar1 >> 0x20),(short)*puVar1)))
          ;
          *puVar23 = CONCAT26((short)((ulong)uVar44 >> 0x20),
                              CONCAT24((short)uVar44,
                                       CONCAT22((short)((ulong)uVar15 >> 0x20),(short)uVar15)));
          puVar23 = puVar23 + 2;
        } while (uVar32 != 0);
        if (uVar34 == uVar38) goto LAB_00d95554;
      }
      do {
        *(short *)(lVar39 + (uVar26 + 2) * 2 + uVar38 * 2) =
             (short)*(undefined4 *)(lVar18 + uVar38 * 4);
        uVar38 = uVar38 + 1;
      } while (uVar38 < uVar25);
    }
LAB_00d95554:
    *(short *)(*(long *)(param_1 + 0x180) + (ulong)(*(int *)(pTVar16 + 0x14) + 5) * 2) =
         (short)(uVar37 >> 1) - (short)*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
  }
  else {
    lVar39 = *(long *)(param_1 + 0x28);
    this_01 = (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(lVar39 + 0x48);
    lVar18 = *(long *)this_01;
    uVar5 = *(int *)(*(long *)(param_1 + 0x58) + 0x1c) + 1;
    uVar26 = (ulong)uVar5;
    uVar37 = *(long *)(lVar39 + 0x50) - lVar18 >> 2;
    uVar34 = uVar37 + uVar26;
                    /* catch() { ... } // from try @ 00d93ac0 with catch @ 00d953c4 */
    *(int *)(pTVar16 + 0x18) = (int)uVar37;
    if (uVar37 < uVar34) {
      std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
                (this_01,uVar26);
    }
    else if (uVar37 != uVar34) {
      *(ulong *)(lVar39 + 0x50) = lVar18 + uVar34 * 4;
    }
    if (uVar5 != 0) {
      uVar36 = 0;
      uVar32 = 0;
      uVar37 = 0;
      uVar34 = 0;
      uVar38 = uVar37;
      if (uVar25 != 0) goto LAB_00d954cc;
      while( true ) {
        lVar39 = uVar34 + (long)*(int *)(pTVar16 + 0x18);
        uVar34 = uVar34 + 1;
        *(int *)(*(long *)this_01 + lVar39 * 4) = (int)uVar37 + -1;
        if (uVar26 == uVar34) break;
        uVar38 = uVar37;
        if (uVar37 < uVar25) {
LAB_00d954cc:
          uVar37 = uVar38;
          if (uVar36 + uVar32 <= uVar34) {
            puVar3 = (uint *)(*(long *)(param_1 + 0x1c8) + uVar38 * 0x20);
            uVar32 = (ulong)*puVar3;
            if (uVar38 == uVar25 - 1) {
              puVar20 = (uint *)(*(long *)(param_1 + 0x58) + 0x1c);
            }
            else {
              puVar20 = (uint *)(*(long *)(param_1 + 0x1c8) + (uVar38 + 1) * 0x20);
            }
            uVar37 = uVar38 + 1;
            uVar36 = *puVar20 - uVar32;
            sVar10 = (**(code **)(*(long *)param_1 + 0xa0))
                               (param_1,puVar3,uVar32,uVar36 & 0xffffffff);
            *(short *)(*(long *)(param_1 + 0x180) + (uVar38 + (*(int *)(pTVar16 + 0x14) + 5)) * 2) =
                 sVar10 - (short)*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
          }
        }
      }
    }
  }
  lVar39 = *(long *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x60) = 0;
  lVar18 = *(long *)(param_1 + 0x1d0);
  while (lVar31 = lVar18, lVar31 != lVar39) {
    pvVar33 = *(void **)(lVar31 + -0x18);
    lVar18 = lVar31 + -0x20;
    if (pvVar33 != (void *)0x0) {
      *(void **)(lVar31 + -0x10) = pvVar33;
      operator_delete(pvVar33);
    }
  }
  *(long *)(param_1 + 0x1d0) = lVar39;
LAB_00d955b4:
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pAVar13;
}

