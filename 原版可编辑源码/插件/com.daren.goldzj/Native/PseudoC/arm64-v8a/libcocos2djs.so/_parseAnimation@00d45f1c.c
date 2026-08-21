
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
  long lVar16;
  TimelineData *pTVar17;
  GenericValue *in_x1;
  basic_string *in_x3;
  char *pcVar18;
  code *pcVar19;
  long lVar20;
  uint *puVar21;
  int *piVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int *piVar25;
  ulong uVar26;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar27;
  vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *this_01;
  char *pcVar28;
  long lVar29;
  ConstraintData *pCVar30;
  uint uVar31;
  undefined4 *puVar32;
  void *pvVar33;
  ulong uVar34;
  ulong uVar35;
  ulong uVar36;
  ulong uVar37;
  long lVar38;
  int *piVar39;
  int *piVar40;
  ulong uVar41;
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
  local_b0 = 0;
  local_a8 = (void *)0x0;
  local_b8 = 0;
  sVar14 = strlen(DataParser::DEFAULT_NAME);
  if (0xffffffffffffffef < sVar14) {
LAB_00d471ac:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (sVar14 < 0x17) {
    pvVar33 = (void *)((ulong)&local_b8 | 1);
    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)sVar14 << 1));
    if (sVar14 != 0) goto LAB_00d46064;
  }
  else {
    uVar34 = sVar14 + 0x10 & 0xfffffffffffffff0;
    pvVar33 = operator_new(uVar34);
    local_b8 = uVar34 | 1;
    local_b0 = sVar14;
    local_a8 = pvVar33;
LAB_00d46064:
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
LAB_00d46104:
      sVar14 = strlen(DataParser::DEFAULT_NAME);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,puVar8,sVar14);
    }
  }
  else if (*(long *)(pAVar13 + 0x40) == 0) goto LAB_00d46104;
  *(int *)(pAVar13 + 0x10) =
       (int)((ulong)(*(long *)(param_1 + 0x140) - *(long *)(param_1 + 0x138)) >> 1);
  *(int *)(pAVar13 + 0x14) =
       (int)((ulong)(*(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150)) >> 2);
  *(int *)(pAVar13 + 0x18) =
       (int)((ulong)(*(long *)(param_1 + 0x170) - *(long *)(param_1 + 0x168)) >> 1);
  *(AnimationData **)(param_1 + 0x58) = pAVar13;
  puVar8 = DataParser::FRAME;
  pcVar28 = DataParser::FRAME + -1;
  pcVar18 = pcVar28;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar25 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar34 = (ulong)uVar5;
  piVar22 = piVar25 + uVar34 * 0xc;
  piVar40 = piVar25;
  if (uVar5 != 0) {
    uVar37 = (long)pcVar18 - (long)DataParser::FRAME;
    lVar38 = uVar34 * 0x30;
    piVar39 = piVar25;
    do {
      iVar11 = *piVar39;
      if ((*(ushort *)((long)piVar39 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar39 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar4 = *(int **)(piVar39 + 2);
        if ((*(ushort *)((long)piVar39 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar39;
        }
        piVar40 = piVar39;
        if ((piVar4 == (int *)puVar8) ||
           (iVar11 = memcmp(puVar8,piVar4,uVar37 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar39 = piVar39 + 0xc;
      piVar40 = piVar22;
    } while (lVar38 != 0);
  }
  if (piVar22 != piVar40) {
    do {
      pcVar28 = pcVar28 + 1;
    } while (*pcVar28 != '\0');
    if (uVar5 == 0) {
LAB_00d46298:
      if (piVar25 != piVar22) {
        uVar5 = piVar25[6];
        if (uVar5 != 0) {
          lVar38 = 0;
          uVar31 = 0;
          do {
            lVar20 = *(long *)(piVar25 + 8);
            in_x3 = (basic_string *)0x0;
            _parseActionDataInFrame
                      ((JSONDataParser *)param_1,(GenericValue *)(lVar20 + lVar38),uVar31,
                       (BoneData *)0x0,(SlotData *)0x0);
            iVar11 = _getNumber((GenericValue *)(lVar20 + lVar38),DataParser::DURATION,1);
            lVar38 = lVar38 + 0x18;
            uVar31 = uVar31 + iVar11;
          } while ((ulong)uVar5 * 0x18 - lVar38 != 0);
        }
        goto LAB_00d4630c;
      }
    }
    else {
      lVar38 = uVar34 * 0x30;
      do {
        iVar11 = *piVar25;
        if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
          iVar11 = 0x15 - *(char *)((long)piVar25 + 0x15);
        }
        if (iVar11 == (int)((long)pcVar28 - (long)puVar8)) {
          piVar40 = *(int **)(piVar25 + 2);
          if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
            piVar40 = piVar25;
          }
          if ((piVar40 == (int *)puVar8) ||
             (iVar11 = memcmp(puVar8,piVar40,(long)pcVar28 - (long)puVar8 & 0xffffffff), iVar11 == 0
             )) goto LAB_00d46298;
        }
        lVar38 = lVar38 + -0x30;
        piVar25 = piVar25 + 0xc;
      } while (lVar38 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d4630c:
  puVar8 = DataParser::Z_ORDER;
  pcVar28 = DataParser::Z_ORDER + -1;
  pcVar18 = pcVar28;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar25 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar34 = (ulong)uVar5;
  piVar22 = piVar25 + uVar34 * 0xc;
  piVar40 = piVar25;
  if (uVar5 != 0) {
    uVar37 = (long)pcVar18 - (long)DataParser::Z_ORDER;
    lVar38 = uVar34 * 0x30;
    piVar39 = piVar25;
    do {
      iVar11 = *piVar39;
      if ((*(ushort *)((long)piVar39 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar39 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar4 = *(int **)(piVar39 + 2);
        if ((*(ushort *)((long)piVar39 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar39;
        }
        piVar40 = piVar39;
        if ((piVar4 == (int *)puVar8) ||
           (iVar11 = memcmp(puVar8,piVar4,uVar37 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar39 = piVar39 + 0xc;
      piVar40 = piVar22;
    } while (lVar38 != 0);
  }
  if (piVar22 != piVar40) {
    do {
      pcVar28 = pcVar28 + 1;
    } while (*pcVar28 != '\0');
    if (uVar5 == 0) {
LAB_00d46434:
      if (piVar25 == piVar22) goto LAB_00d46444;
      piVar25 = piVar25 + 6;
    }
    else {
      lVar38 = uVar34 * 0x30;
      do {
        iVar11 = *piVar25;
        if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
          iVar11 = 0x15 - *(char *)((long)piVar25 + 0x15);
        }
        if (iVar11 == (int)((long)pcVar28 - (long)puVar8)) {
          piVar40 = *(int **)(piVar25 + 2);
          if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
            piVar40 = piVar25;
          }
          if ((piVar40 == (int *)puVar8) ||
             (iVar11 = memcmp(puVar8,piVar40,(long)pcVar28 - (long)puVar8 & 0xffffffff), iVar11 == 0
             )) goto LAB_00d46434;
        }
        lVar38 = lVar38 + -0x30;
        piVar25 = piVar25 + 0xc;
      } while (lVar38 != 0);
LAB_00d46444:
      piVar25 = (int *)&rapidjson::
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
    }
    local_a0 = &PTR_FUN_01c914f0;
    local_90 = (void *)0x1;
    sStack_98 = 0xa8;
    in_x3 = (basic_string *)0x1;
    local_88 = param_1;
    local_80 = &local_a0;
    uVar15 = (**(code **)(*(long *)param_1 + 0x78))
                       (param_1,piVar25,DataParser::FRAME,1,0,0,0,&local_a0);
    *(undefined8 *)(*(long *)(param_1 + 0x58) + 0xe8) = uVar15;
    if (&local_a0 == local_80) {
      pcVar19 = (code *)(*local_80)[4];
    }
    else {
      if (local_80 == (undefined ***)0x0) goto LAB_00d464d8;
      pcVar19 = (code *)(*local_80)[5];
    }
    (*pcVar19)();
  }
LAB_00d464d8:
  puVar8 = DataParser::BONE;
  pcVar28 = DataParser::BONE + -1;
  pcVar18 = pcVar28;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar25 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar34 = (ulong)uVar5;
  piVar22 = piVar25 + uVar34 * 0xc;
  piVar40 = piVar25;
  if (uVar5 != 0) {
    uVar37 = (long)pcVar18 - (long)DataParser::BONE;
    lVar38 = uVar34 * 0x30;
    piVar39 = piVar25;
    do {
      iVar11 = *piVar39;
      if ((*(ushort *)((long)piVar39 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar39 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar4 = *(int **)(piVar39 + 2);
        if ((*(ushort *)((long)piVar39 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar39;
        }
        piVar40 = piVar39;
        if ((piVar4 == (int *)puVar8) ||
           (iVar11 = memcmp(puVar8,piVar4,uVar37 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar39 = piVar39 + 0xc;
      piVar40 = piVar22;
    } while (lVar38 != 0);
  }
  if (piVar22 != piVar40) {
    do {
      pcVar28 = pcVar28 + 1;
    } while (*pcVar28 != '\0');
    if (uVar5 == 0) {
LAB_00d46600:
      if (piVar25 != piVar22) {
        uVar5 = piVar25[6];
        if (uVar5 != 0) {
          lVar38 = 0;
          do {
            (**(code **)(*(long *)param_1 + 0x80))(param_1,*(long *)(piVar25 + 8) + lVar38);
            lVar38 = lVar38 + 0x18;
          } while ((ulong)uVar5 * 0x18 - lVar38 != 0);
        }
        goto LAB_00d46654;
      }
    }
    else {
      lVar38 = uVar34 * 0x30;
      do {
        iVar11 = *piVar25;
        if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
          iVar11 = 0x15 - *(char *)((long)piVar25 + 0x15);
        }
        if (iVar11 == (int)((long)pcVar28 - (long)puVar8)) {
          piVar40 = *(int **)(piVar25 + 2);
          if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
            piVar40 = piVar25;
          }
          if ((piVar40 == (int *)puVar8) ||
             (iVar11 = memcmp(puVar8,piVar40,(long)pcVar28 - (long)puVar8 & 0xffffffff), iVar11 == 0
             )) goto LAB_00d46600;
        }
        lVar38 = lVar38 + -0x30;
        piVar25 = piVar25 + 0xc;
      } while (lVar38 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d46654:
  puVar8 = DataParser::SLOT;
  pcVar28 = DataParser::SLOT + -1;
  pcVar18 = pcVar28;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar25 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar34 = (ulong)uVar5;
  piVar22 = piVar25 + uVar34 * 0xc;
  piVar40 = piVar25;
  if (uVar5 != 0) {
    uVar37 = (long)pcVar18 - (long)DataParser::SLOT;
    lVar38 = uVar34 * 0x30;
    piVar39 = piVar25;
    do {
      iVar11 = *piVar39;
      if ((*(ushort *)((long)piVar39 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar39 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar4 = *(int **)(piVar39 + 2);
        if ((*(ushort *)((long)piVar39 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar39;
        }
        piVar40 = piVar39;
        if ((piVar4 == (int *)puVar8) ||
           (iVar11 = memcmp(puVar8,piVar4,uVar37 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar39 = piVar39 + 0xc;
      piVar40 = piVar22;
    } while (lVar38 != 0);
  }
  if (piVar22 != piVar40) {
    do {
      pcVar28 = pcVar28 + 1;
    } while (*pcVar28 != '\0');
    if (uVar5 == 0) {
LAB_00d4677c:
      if (piVar25 != piVar22) {
        uVar5 = piVar25[6];
        if (uVar5 != 0) {
          lVar38 = 0;
          do {
            (**(code **)(*(long *)param_1 + 0x88))(param_1,*(long *)(piVar25 + 8) + lVar38);
            lVar38 = lVar38 + 0x18;
          } while ((ulong)uVar5 * 0x18 - lVar38 != 0);
        }
        goto LAB_00d467d0;
      }
    }
    else {
      lVar38 = uVar34 * 0x30;
      do {
        iVar11 = *piVar25;
        if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
          iVar11 = 0x15 - *(char *)((long)piVar25 + 0x15);
        }
        if (iVar11 == (int)((long)pcVar28 - (long)puVar8)) {
          piVar40 = *(int **)(piVar25 + 2);
          if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
            piVar40 = piVar25;
          }
          if ((piVar40 == (int *)puVar8) ||
             (iVar11 = memcmp(puVar8,piVar40,(long)pcVar28 - (long)puVar8 & 0xffffffff), iVar11 == 0
             )) goto LAB_00d4677c;
        }
        lVar38 = lVar38 + -0x30;
        piVar25 = piVar25 + 0xc;
      } while (lVar38 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d467d0:
  puVar8 = DataParser::FFD;
  pcVar28 = DataParser::FFD + -1;
  pcVar18 = pcVar28;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar25 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar34 = (ulong)uVar5;
  piVar22 = piVar25 + uVar34 * 0xc;
  piVar40 = piVar25;
  if (uVar5 != 0) {
    uVar37 = (long)pcVar18 - (long)DataParser::FFD;
    lVar38 = uVar34 * 0x30;
    piVar39 = piVar25;
    do {
      iVar11 = *piVar39;
      if ((*(ushort *)((long)piVar39 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar39 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar4 = *(int **)(piVar39 + 2);
        if ((*(ushort *)((long)piVar39 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar39;
        }
        piVar40 = piVar39;
        if ((piVar4 == (int *)puVar8) ||
           (iVar11 = memcmp(puVar8,piVar4,uVar37 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar39 = piVar39 + 0xc;
      piVar40 = piVar22;
    } while (lVar38 != 0);
  }
  if (piVar22 != piVar40) {
    do {
      pcVar28 = pcVar28 + 1;
    } while (*pcVar28 != '\0');
    if (uVar5 == 0) {
LAB_00d46900:
      if (piVar25 != piVar22) {
        uVar5 = piVar25[6];
        if (uVar5 != 0) {
          lVar38 = 0;
          uVar34 = 0;
          do {
            puVar9 = DataParser::DEFAULT_NAME;
            puVar8 = DataParser::SKIN;
            lVar20 = *(long *)(piVar25 + 8);
            sStack_98 = 0;
            local_90 = (void *)0x0;
            local_a0 = (undefined **)0x0;
            sVar14 = strlen(DataParser::DEFAULT_NAME);
            if (0xffffffffffffffef < sVar14) goto LAB_00d471ac;
            this = (JSONDataParser *)(lVar20 + lVar38);
            if (sVar14 < 0x17) {
              local_a0 = (undefined **)CONCAT71(local_a0._1_7_,(char)((int)sVar14 << 1));
              pvVar33 = (void *)((ulong)&local_a0 | 1);
              if (sVar14 != 0) goto LAB_00d469ec;
            }
            else {
              uVar37 = sVar14 + 0x10 & 0xfffffffffffffff0;
              pvVar33 = operator_new(uVar37);
              local_a0 = (undefined **)(uVar37 | 1);
              sStack_98 = sVar14;
              local_90 = pvVar33;
LAB_00d469ec:
              memcpy(pvVar33,puVar9,sVar14);
            }
            *(undefined1 *)((long)pvVar33 + sVar14) = 0;
            _getString(this,(GenericValue *)puVar8,(char *)&local_a0,in_x3);
            if (((ulong)local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            local_a0 = (undefined **)0x0;
            sStack_98 = 0;
            local_90 = (void *)0x0;
            _getString(this,(GenericValue *)DataParser::SLOT,(char *)&local_a0,in_x3);
            if (((ulong)local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            local_a0 = (undefined **)0x0;
            sStack_98 = 0;
            local_90 = (void *)0x0;
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
            lVar16 = *(long *)(param_1 + 0x30);
            lVar20 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                                 *)(lVar16 + 0xd8),local_d0);
            if (lVar16 + 0xe0 == lVar20) {
              uVar15 = 0;
            }
            else {
              uVar15 = *(undefined8 *)(lVar20 + 0x38);
            }
            in_x3 = local_e8;
            *(undefined8 *)(param_1 + 0x40) = uVar15;
            lVar20 = ArmatureData::getMesh
                               (*(ArmatureData **)(param_1 + 0x30),(basic_string *)&local_b8,
                                local_d0,in_x3);
            *(long *)(param_1 + 0x50) = lVar20;
            if ((lVar20 != 0) && (*(long *)(param_1 + 0x40) != 0)) {
              local_a0 = &PTR_FUN_01c914f0;
              local_90 = (void *)0x1;
              sStack_98 = 0xe0;
              in_x3 = (basic_string *)0x16;
              local_88 = param_1;
              local_80 = &local_a0;
              pTVar17 = (TimelineData *)
                        (**(code **)(*(long *)param_1 + 0x78))
                                  (param_1,this,DataParser::FRAME,0x16,0,1,0,&local_a0);
              if (&local_a0 == local_80) {
                pcVar19 = (code *)(*local_80)[4];
LAB_00d46b84:
                (*pcVar19)(local_80);
              }
              else if (local_80 != (undefined ***)0x0) {
                pcVar19 = (code *)(*local_80)[5];
                goto LAB_00d46b84;
              }
              if (pTVar17 != (TimelineData *)0x0) {
                AnimationData::addSlotTimeline
                          (*(AnimationData **)(param_1 + 0x58),*(SlotData **)(param_1 + 0x40),
                           pTVar17);
              }
              *(undefined8 *)(param_1 + 0x40) = 0;
              *(undefined8 *)(param_1 + 0x50) = 0;
            }
            if (((byte)local_e8[0] & 1) != 0) {
              operator_delete(local_d8);
            }
            if (((byte)local_d0[0] & 1) != 0) {
              operator_delete(local_c0);
            }
            if ((local_b8 & 1) != 0) {
              operator_delete(local_a8);
            }
            uVar34 = uVar34 + 1;
            lVar38 = lVar38 + 0x18;
          } while (uVar34 < uVar5);
        }
        goto LAB_00d46bf0;
      }
    }
    else {
      lVar38 = uVar34 * 0x30;
      do {
        iVar11 = *piVar25;
        if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
          iVar11 = 0x15 - *(char *)((long)piVar25 + 0x15);
        }
        if (iVar11 == (int)((long)pcVar28 - (long)puVar8)) {
          piVar40 = *(int **)(piVar25 + 2);
          if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
            piVar40 = piVar25;
          }
          if ((piVar40 == (int *)puVar8) ||
             (iVar11 = memcmp(puVar8,piVar40,(long)pcVar28 - (long)puVar8 & 0xffffffff), iVar11 == 0
             )) goto LAB_00d46900;
        }
        lVar38 = lVar38 + -0x30;
        piVar25 = piVar25 + 0xc;
      } while (lVar38 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d46bf0:
  puVar8 = DataParser::IK;
  pcVar28 = DataParser::IK + -1;
  pcVar18 = pcVar28;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar25 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar34 = (ulong)uVar5;
  piVar22 = piVar25 + uVar34 * 0xc;
  piVar40 = piVar25;
  if (uVar5 != 0) {
    uVar37 = (long)pcVar18 - (long)DataParser::IK;
    lVar38 = uVar34 * 0x30;
    piVar39 = piVar25;
    do {
      iVar11 = *piVar39;
      if ((*(ushort *)((long)piVar39 + 0x16) & 0x1000) != 0) {
        iVar11 = 0x15 - *(char *)((long)piVar39 + 0x15);
      }
      if (iVar11 == (int)uVar37) {
        piVar4 = *(int **)(piVar39 + 2);
        if ((*(ushort *)((long)piVar39 + 0x16) & 0x1000) != 0) {
          piVar4 = piVar39;
        }
        piVar40 = piVar39;
        if ((piVar4 == (int *)puVar8) ||
           (iVar11 = memcmp(puVar8,piVar4,uVar37 & 0xffffffff), iVar11 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar39 = piVar39 + 0xc;
      piVar40 = piVar22;
    } while (lVar38 != 0);
  }
  if (piVar22 != piVar40) {
    do {
      pcVar28 = pcVar28 + 1;
    } while (*pcVar28 != '\0');
    if (uVar5 == 0) {
LAB_00d46d24:
      if (piVar25 != piVar22) {
        uVar5 = piVar25[6];
        if (uVar5 != 0) {
          lVar38 = 0;
          do {
            lVar20 = *(long *)(piVar25 + 8);
            local_a0 = (undefined **)0x0;
            sStack_98 = 0;
            local_90 = (void *)0x0;
            _getString((JSONDataParser *)(lVar20 + lVar38),(GenericValue *)DataParser::NAME,
                       (char *)&local_a0,in_x3);
            if (((ulong)local_a0 & 1) != 0) {
              operator_delete(local_90);
            }
            lVar29 = *(long *)(param_1 + 0x30);
            lVar16 = std::__ndk1::
                     __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>>>
                     ::
                     find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                               ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::ConstraintData*>>>
                                 *)(lVar29 + 0xf0),(basic_string *)&local_b8);
            if ((lVar29 + 0xf8 != lVar16) &&
               (pCVar30 = *(ConstraintData **)(lVar16 + 0x38), pCVar30 != (ConstraintData *)0x0)) {
              local_90 = (void *)0x1;
              sStack_98 = 0xe8;
              in_x3 = (basic_string *)0x1e;
              local_a0 = &PTR_FUN_01c914f0;
              local_88 = param_1;
              local_80 = &local_a0;
              pTVar17 = (TimelineData *)
                        (**(code **)(*(long *)param_1 + 0x78))
                                  (param_1,(JSONDataParser *)(lVar20 + lVar38),DataParser::FRAME,
                                   0x1e,1,0,2,&local_a0);
              if (&local_a0 == local_80) {
                pcVar19 = (code *)(*local_80)[4];
LAB_00d46e20:
                (*pcVar19)(local_80);
              }
              else if (local_80 != (undefined ***)0x0) {
                pcVar19 = (code *)(*local_80)[5];
                goto LAB_00d46e20;
              }
              if (pTVar17 != (TimelineData *)0x0) {
                AnimationData::addConstraintTimeline
                          (*(AnimationData **)(param_1 + 0x58),pCVar30,pTVar17);
              }
            }
            if ((local_b8 & 1) != 0) {
              operator_delete(local_a8);
            }
            lVar38 = lVar38 + 0x18;
          } while ((ulong)uVar5 * 0x18 - lVar38 != 0);
        }
        goto LAB_00d46e6c;
      }
    }
    else {
      lVar38 = uVar34 * 0x30;
      do {
        iVar11 = *piVar25;
        if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
          iVar11 = 0x15 - *(char *)((long)piVar25 + 0x15);
        }
        if (iVar11 == (int)((long)pcVar28 - (long)puVar8)) {
          piVar40 = *(int **)(piVar25 + 2);
          if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
            piVar40 = piVar25;
          }
          if ((piVar40 == (int *)puVar8) ||
             (iVar11 = memcmp(puVar8,piVar40,(long)pcVar28 - (long)puVar8 & 0xffffffff), iVar11 == 0
             )) goto LAB_00d46d24;
        }
        lVar38 = lVar38 + -0x30;
        piVar25 = piVar25 + 0xc;
      } while (lVar38 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d46e6c:
  if (*(ActionFrame **)(param_1 + 0x1d0) == *(ActionFrame **)(param_1 + 0x1c8)) goto LAB_00d47170;
  std::__ndk1::
  __sort<std::__ndk1::__less<dragonBones::ActionFrame,dragonBones::ActionFrame>&,dragonBones::ActionFrame*>
            (*(ActionFrame **)(param_1 + 0x1c8),*(ActionFrame **)(param_1 + 0x1d0),
             (__less *)&local_a0);
  pTVar17 = BaseObject::borrowObject<dragonBones::TimelineData>();
  *(TimelineData **)(*(long *)(param_1 + 0x58) + 0xe0) = pTVar17;
  lVar38 = *(long *)(param_1 + 0x1c8);
  lVar16 = *(long *)(param_1 + 0x1d0);
  *(undefined4 *)(pTVar17 + 0x10) = 0;
  lVar20 = *(long *)(param_1 + 0x180);
  uVar27 = lVar16 - lVar38;
  uVar26 = (long)uVar27 >> 5;
  uVar37 = *(long *)(param_1 + 0x188) - lVar20 >> 1;
  uVar34 = uVar26 + 5 + uVar37;
  *(int *)(pTVar17 + 0x14) = (int)uVar37;
  if (uVar37 < uVar34) {
    std::__ndk1::vector<unsigned_short,std::__ndk1::allocator<unsigned_short>>::__append
              ((vector<unsigned_short,std::__ndk1::allocator<unsigned_short>> *)(param_1 + 0x180),
               uVar26 + 5);
    uVar37 = (ulong)*(uint *)(pTVar17 + 0x14);
    lVar20 = *(long *)(param_1 + 0x180);
  }
  else if (uVar34 < uVar37) {
    *(ulong *)(param_1 + 0x188) = lVar20 + uVar34 * 2;
  }
  iVar11 = (int)uVar37;
  *(undefined2 *)(lVar20 + (uVar37 & 0xffffffff) * 2) = 100;
  *(undefined2 *)(lVar20 + (ulong)(iVar11 + 1) * 2) = 0;
  *(short *)(lVar20 + (ulong)(iVar11 + 2) * 2) = (short)(uVar27 >> 5);
  *(undefined2 *)(lVar20 + (ulong)(iVar11 + 3) * 2) = 0;
  *(undefined2 *)(lVar20 + (ulong)(iVar11 + 4) * 2) = 0;
  *(TimelineData **)(param_1 + 0x60) = pTVar17;
  if (uVar27 == 0x20) {
    *(undefined4 *)(pTVar17 + 0x18) = 0xffffffff;
    puVar32 = *(undefined4 **)(param_1 + 0x1c8);
    lVar38 = *(long *)(param_1 + 0x168);
    uVar37 = *(long *)(param_1 + 0x170) - lVar38;
    uVar27 = (long)uVar37 >> 1;
    uVar35 = *(long *)(puVar32 + 4) - *(long *)(puVar32 + 2);
    uVar26 = (long)uVar35 >> 2;
    uVar34 = uVar26 + uVar27 + 2;
    if (uVar34 < uVar27 || uVar34 - uVar27 == 0) {
      if (uVar34 < uVar27) {
        *(ulong *)(param_1 + 0x170) = lVar38 + uVar34 * 2;
      }
    }
    else {
      std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x168),uVar34 - uVar27);
      lVar38 = *(long *)(param_1 + 0x168);
    }
    uVar12 = *puVar32;
    puVar2 = (undefined2 *)(lVar38 + uVar27 * 2);
    puVar2[1] = (short)(uVar35 >> 2);
    *puVar2 = (short)uVar12;
    if (uVar35 != 0) {
      lVar20 = *(long *)(puVar32 + 2);
      uVar34 = uVar26;
      if (uVar26 < 2) {
        uVar34 = 1;
      }
      if (uVar34 < 8) {
        uVar35 = 0;
      }
      else {
        uVar35 = uVar34 & 0xfffffffffffffff8;
        puVar23 = (undefined8 *)(lVar20 + 0x10);
        puVar24 = (undefined8 *)(lVar38 + uVar27 * 2 + 0xc);
        uVar36 = uVar35;
        do {
          puVar1 = puVar23 + -2;
          puVar7 = puVar23 + -1;
          uVar44 = puVar23[1];
          uVar15 = *puVar23;
          puVar23 = puVar23 + 4;
          uVar36 = uVar36 - 8;
          puVar24[-1] = CONCAT26((short)((ulong)*puVar7 >> 0x20),
                                 CONCAT24((short)*puVar7,
                                          CONCAT22((short)((ulong)*puVar1 >> 0x20),(short)*puVar1)))
          ;
          *puVar24 = CONCAT26((short)((ulong)uVar44 >> 0x20),
                              CONCAT24((short)uVar44,
                                       CONCAT22((short)((ulong)uVar15 >> 0x20),(short)uVar15)));
          puVar24 = puVar24 + 2;
        } while (uVar36 != 0);
        if (uVar34 == uVar35) goto LAB_00d47118;
      }
      do {
        lVar29 = uVar35 * 4;
        lVar16 = uVar35 * 2;
        uVar35 = uVar35 + 1;
        *(short *)(lVar38 + uVar27 * 2 + lVar16 + 4) = (short)*(undefined4 *)(lVar20 + lVar29);
      } while (uVar35 < uVar26);
    }
LAB_00d47118:
    *(short *)(*(long *)(param_1 + 0x180) + (ulong)(*(int *)(pTVar17 + 0x14) + 5) * 2) =
         (short)(uVar37 >> 1) - (short)*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
  }
  else {
    lVar38 = *(long *)(param_1 + 0x28);
    this_01 = (vector<unsigned_int,std::__ndk1::allocator<unsigned_int>> *)(lVar38 + 0x48);
    lVar20 = *(long *)this_01;
    uVar5 = *(int *)(*(long *)(param_1 + 0x58) + 0x1c) + 1;
    uVar27 = (ulong)uVar5;
    uVar37 = *(long *)(lVar38 + 0x50) - lVar20 >> 2;
    uVar34 = uVar37 + uVar27;
    *(int *)(pTVar17 + 0x18) = (int)uVar37;
    if (uVar37 < uVar34) {
      std::__ndk1::vector<unsigned_int,std::__ndk1::allocator<unsigned_int>>::__append
                (this_01,uVar27);
    }
    else if (uVar37 != uVar34) {
      *(ulong *)(lVar38 + 0x50) = lVar20 + uVar34 * 4;
    }
    if (uVar5 != 0) {
      uVar36 = 0;
      uVar35 = 0;
      uVar34 = 0;
      uVar37 = 0;
      do {
        uVar41 = uVar37;
        if ((uVar37 < uVar26) && (uVar36 + uVar35 <= uVar34)) {
          puVar3 = (uint *)(*(long *)(param_1 + 0x1c8) + uVar37 * 0x20);
          uVar35 = (ulong)*puVar3;
          if (uVar37 == uVar26 - 1) {
            puVar21 = (uint *)(*(long *)(param_1 + 0x58) + 0x1c);
          }
          else {
            puVar21 = (uint *)(*(long *)(param_1 + 0x1c8) + (uVar37 + 1) * 0x20);
          }
          uVar41 = uVar37 + 1;
          uVar36 = *puVar21 - uVar35;
          sVar10 = (**(code **)(*(long *)param_1 + 0xa0))(param_1,puVar3,uVar35,uVar36 & 0xffffffff)
          ;
          *(short *)(*(long *)(param_1 + 0x180) + (uVar37 + (*(int *)(pTVar17 + 0x14) + 5)) * 2) =
               sVar10 - (short)*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x18);
        }
        lVar38 = uVar34 + (long)*(int *)(pTVar17 + 0x18);
        uVar34 = uVar34 + 1;
        *(int *)(*(long *)this_01 + lVar38 * 4) = (int)uVar41 + -1;
        uVar37 = uVar41;
      } while (uVar27 != uVar34);
    }
  }
  lVar38 = *(long *)(param_1 + 0x1c8);
  *(undefined8 *)(param_1 + 0x60) = 0;
  lVar20 = *(long *)(param_1 + 0x1d0);
  while (lVar16 = lVar20, lVar16 != lVar38) {
    pvVar33 = *(void **)(lVar16 + -0x18);
    lVar20 = lVar16 + -0x20;
    if (pvVar33 != (void *)0x0) {
      *(void **)(lVar16 + -0x10) = pvVar33;
      operator_delete(pvVar33);
    }
  }
  *(long *)(param_1 + 0x1d0) = lVar38;
LAB_00d47170:
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return pAVar13;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

