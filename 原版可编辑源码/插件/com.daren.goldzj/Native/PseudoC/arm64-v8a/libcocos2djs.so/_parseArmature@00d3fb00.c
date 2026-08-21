
/* dragonBones::JSONDataParser::_parseArmature(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, float) */

ArmatureData * dragonBones::JSONDataParser::_parseArmature(GenericValue *param_1,float param_2)

{
  basic_string *this;
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *__src;
  undefined4 uVar8;
  int iVar9;
  ArmatureData *this_00;
  CanvasData *pCVar10;
  ConstraintData *pCVar11;
  SlotData *pSVar12;
  SkinData *pSVar13;
  size_t sVar14;
  void *pvVar15;
  AnimationData *pAVar16;
  long *plVar17;
  JSONDataParser *in_x1;
  tuple *in_x3;
  char *pcVar18;
  int *piVar19;
  ArmatureData *pAVar20;
  char *pcVar21;
  undefined8 *puVar22;
  int *piVar23;
  GenericValue *pGVar24;
  JSONDataParser *pJVar25;
  ActionData *pAVar26;
  int *piVar27;
  ulong uVar28;
  ulong uVar29;
  int *piVar30;
  long lVar31;
  float fVar32;
  BoneData *local_c8;
  size_t local_c0;
  void *local_b8;
  piecewise_construct_t *local_b0;
  ulong local_a8;
  void *local_a0;
  ulong local_98;
  size_t sStack_90;
  void *local_88;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  this_00 = BaseObject::borrowObject<dragonBones::ArmatureData>();
  local_b0 = (piecewise_construct_t *)0x0;
  local_a8 = 0;
  local_a0 = (void *)0x0;
  _getString(in_x1,(GenericValue *)DataParser::NAME,(char *)&local_b0,(basic_string *)in_x3);
  pAVar20 = this_00 + 0x20;
  if (((byte)*pAVar20 & 1) == 0) {
    *(undefined2 *)pAVar20 = 0;
  }
  else {
    **(undefined1 **)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    if (((byte)this_00[0x20] & 1) != 0) {
      operator_delete(*(void **)(this_00 + 0x30));
      *(undefined8 *)(this_00 + 0x20) = 0;
    }
  }
  *(void **)(this_00 + 0x30) = local_88;
  *(size_t *)(this_00 + 0x28) = sStack_90;
  *(ulong *)pAVar20 = local_98;
  sStack_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  uVar8 = _getNumber((GenericValue *)in_x1,DataParser::FRAME_RATE,
                     *(uint *)(*(long *)(param_1 + 0x28) + 0x10));
  *(undefined4 *)(this_00 + 0x14) = uVar8;
  *(float *)(this_00 + 0x1c) = param_2;
  puVar7 = DataParser::TYPE;
  pcVar21 = DataParser::TYPE + -1;
  pcVar18 = pcVar21;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar23 = *(int **)(in_x1 + 8);
  uVar4 = *(uint *)in_x1;
  uVar28 = (ulong)uVar4;
  piVar19 = piVar23 + uVar28 * 0xc;
  piVar27 = piVar23;
  if (uVar4 != 0) {
    uVar29 = (long)pcVar18 - (long)DataParser::TYPE;
    lVar31 = uVar28 * 0x30;
    piVar30 = piVar23;
    do {
      iVar9 = *piVar30;
      if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar30 + 0x15);
      }
      if (iVar9 == (int)uVar29) {
        piVar1 = *(int **)(piVar30 + 2);
        if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar30;
        }
        piVar27 = piVar30;
        if ((piVar1 == (int *)puVar7) ||
           (iVar9 = memcmp(puVar7,piVar1,uVar29 & 0xffffffff), iVar9 == 0)) break;
      }
      lVar31 = lVar31 + -0x30;
      piVar30 = piVar30 + 0xc;
      piVar27 = piVar19;
    } while (lVar31 != 0);
  }
  pcVar18 = pcVar21;
  if (piVar19 == piVar27) {
LAB_00d3fdc8:
    uVar8 = _getNumber((GenericValue *)in_x1,puVar7,0);
    *(undefined4 *)(this_00 + 0x10) = uVar8;
LAB_00d3fddc:
    iVar9 = *(int *)(this_00 + 0x14);
  }
  else {
    do {
      pcVar18 = pcVar18 + 1;
    } while (*pcVar18 != '\0');
    if (uVar4 != 0) {
      lVar31 = uVar28 * 0x30;
      do {
        iVar9 = *piVar23;
        if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
          iVar9 = 0x15 - *(char *)((long)piVar23 + 0x15);
        }
        if (iVar9 == (int)((long)pcVar18 - (long)puVar7)) {
          piVar27 = *(int **)(piVar23 + 2);
          if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
            piVar27 = piVar23;
          }
          if ((piVar27 == (int *)puVar7) ||
             (iVar9 = memcmp(puVar7,piVar27,(long)pcVar18 - (long)puVar7 & 0xffffffff), iVar9 == 0))
          goto LAB_00d3fd24;
        }
        lVar31 = lVar31 + -0x30;
        piVar23 = piVar23 + 0xc;
      } while (lVar31 != 0);
LAB_00d3fdb8:
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01d38c18 = 0;
      DAT_01d38c20 = 0;
      goto LAB_00d3fdc8;
    }
LAB_00d3fd24:
    if (piVar23 == piVar19) goto LAB_00d3fdb8;
    if ((*(byte *)((long)piVar23 + 0x2f) >> 2 & 1) == 0) goto LAB_00d3fdc8;
    do {
      pcVar21 = pcVar21 + 1;
    } while (*pcVar21 != '\0');
    uVar4 = *(uint *)in_x1;
    piVar27 = *(int **)(in_x1 + 8);
    piVar23 = piVar27;
    if (uVar4 == 0) {
LAB_00d411e8:
      if (piVar23 == piVar27 + (ulong)uVar4 * 0xc) goto LAB_00d4120c;
      piVar27 = piVar23 + 6;
      if ((*(byte *)((long)piVar23 + 0x2f) >> 4 & 1) == 0) goto LAB_00d4121c;
    }
    else {
      lVar31 = (ulong)uVar4 * 0x30;
      do {
        iVar9 = *piVar23;
        if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
          iVar9 = 0x15 - *(char *)((long)piVar23 + 0x15);
        }
        if (iVar9 == (int)((long)pcVar21 - (long)puVar7)) {
          piVar19 = *(int **)(piVar23 + 2);
          if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
            piVar19 = piVar23;
          }
          if ((piVar19 == (int *)puVar7) ||
             (iVar9 = memcmp(puVar7,piVar19,(long)pcVar21 - (long)puVar7 & 0xffffffff), iVar9 == 0))
          goto LAB_00d411e8;
        }
        lVar31 = lVar31 + -0x30;
        piVar23 = piVar23 + 0xc;
      } while (lVar31 != 0);
LAB_00d4120c:
      piVar27 = (int *)&rapidjson::
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
LAB_00d4121c:
      piVar27 = *(int **)(piVar27 + 2);
    }
    local_98 = 0;
    sStack_90 = 0;
    local_88 = (void *)0x0;
    sVar14 = strlen((char *)piVar27);
    if (0xffffffffffffffef < sVar14) {
LAB_00d412bc:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (sVar14 < 0x17) {
      pvVar15 = (void *)((ulong)&local_98 | 1);
      local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar14 << 1));
      if (sVar14 != 0) goto LAB_00d41280;
    }
    else {
      uVar28 = sVar14 + 0x10 & 0xfffffffffffffff0;
      pvVar15 = operator_new(uVar28);
      local_98 = uVar28 | 1;
      sStack_90 = sVar14;
      local_88 = pvVar15;
LAB_00d41280:
      memcpy(pvVar15,piVar27,sVar14);
    }
    *(undefined1 *)((long)pvVar15 + sVar14) = 0;
    uVar8 = DataParser::_getArmatureType((basic_string *)&local_98);
    *(undefined4 *)(this_00 + 0x10) = uVar8;
    if ((local_98 & 1) == 0) goto LAB_00d3fddc;
    operator_delete(local_88);
    iVar9 = *(int *)(this_00 + 0x14);
  }
  if (iVar9 == 0) {
    *(undefined4 *)(this_00 + 0x14) = 0x18;
  }
  *(ArmatureData **)(param_1 + 0x30) = this_00;
  puVar7 = DataParser::CANVAS;
  pcVar21 = DataParser::CANVAS + -1;
  pcVar18 = pcVar21;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar23 = *(int **)(in_x1 + 8);
  uVar4 = *(uint *)in_x1;
  uVar28 = (ulong)uVar4;
  piVar19 = piVar23 + uVar28 * 0xc;
  piVar27 = piVar23;
  if (uVar4 != 0) {
    uVar29 = (long)pcVar18 - (long)DataParser::CANVAS;
    lVar31 = uVar28 * 0x30;
    piVar30 = piVar23;
    do {
      iVar9 = *piVar30;
      if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar30 + 0x15);
      }
      if (iVar9 == (int)uVar29) {
        piVar1 = *(int **)(piVar30 + 2);
        if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar30;
        }
        piVar27 = piVar30;
        if ((piVar1 == (int *)puVar7) ||
           (iVar9 = memcmp(puVar7,piVar1,uVar29 & 0xffffffff), iVar9 == 0)) break;
      }
      lVar31 = lVar31 + -0x30;
      piVar30 = piVar30 + 0xc;
      piVar27 = piVar19;
    } while (lVar31 != 0);
  }
  if (piVar19 != piVar27) {
    do {
      pcVar21 = pcVar21 + 1;
    } while (*pcVar21 != '\0');
    if (uVar4 == 0) {
LAB_00d3ff18:
      if (piVar23 == piVar19) goto LAB_00d3ff28;
      pGVar24 = (GenericValue *)(piVar23 + 6);
    }
    else {
      lVar31 = uVar28 * 0x30;
      do {
        iVar9 = *piVar23;
        if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
          iVar9 = 0x15 - *(char *)((long)piVar23 + 0x15);
        }
        if (iVar9 == (int)((long)pcVar21 - (long)puVar7)) {
          piVar27 = *(int **)(piVar23 + 2);
          if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
            piVar27 = piVar23;
          }
          if ((piVar27 == (int *)puVar7) ||
             (iVar9 = memcmp(puVar7,piVar27,(long)pcVar21 - (long)puVar7 & 0xffffffff), iVar9 == 0))
          goto LAB_00d3ff18;
        }
        lVar31 = lVar31 + -0x30;
        piVar23 = piVar23 + 0xc;
      } while (lVar31 != 0);
LAB_00d3ff28:
      pGVar24 = (GenericValue *)
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
    }
    pCVar10 = BaseObject::borrowObject<dragonBones::CanvasData>();
    puVar7 = DataParser::COLOR;
    pcVar18 = DataParser::COLOR + -1;
    do {
      pcVar18 = pcVar18 + 1;
    } while (*pcVar18 != '\0');
    piVar23 = *(int **)(pGVar24 + 8);
    uVar4 = *(uint *)pGVar24;
    piVar19 = piVar23 + (ulong)uVar4 * 0xc;
    piVar27 = piVar23;
    if (uVar4 != 0) {
      uVar28 = (long)pcVar18 - (long)DataParser::COLOR;
      lVar31 = (ulong)uVar4 * 0x30;
      do {
        iVar9 = *piVar23;
        if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
          iVar9 = 0x15 - *(char *)((long)piVar23 + 0x15);
        }
        if (iVar9 == (int)uVar28) {
          piVar30 = *(int **)(piVar23 + 2);
          if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
            piVar30 = piVar23;
          }
          piVar27 = piVar23;
          if ((piVar30 == (int *)puVar7) ||
             (iVar9 = memcmp(puVar7,piVar30,uVar28 & 0xffffffff), iVar9 == 0)) break;
        }
        lVar31 = lVar31 + -0x30;
        piVar23 = piVar23 + 0xc;
        piVar27 = piVar19;
      } while (lVar31 != 0);
    }
    pCVar10[0xd] = (CanvasData)(piVar19 != piVar27);
    uVar8 = _getNumber(pGVar24,puVar7,0);
    *(undefined4 *)(pCVar10 + 0x10) = uVar8;
    fVar32 = (float)_getNumber(pGVar24,DataParser::X,0.0);
    *(float *)(pCVar10 + 0x14) = fVar32 * *(float *)(this_00 + 0x1c);
    fVar32 = (float)_getNumber(pGVar24,DataParser::Y,0.0);
    *(float *)(pCVar10 + 0x18) = fVar32 * *(float *)(this_00 + 0x1c);
    fVar32 = (float)_getNumber(pGVar24,DataParser::WIDTH,0.0);
    *(float *)(pCVar10 + 0x1c) = fVar32 * *(float *)(this_00 + 0x1c);
    fVar32 = (float)_getNumber(pGVar24,DataParser::HEIGHT,0.0);
    *(float *)(pCVar10 + 0x20) = fVar32 * *(float *)(this_00 + 0x1c);
    *(CanvasData **)(this_00 + 0x148) = pCVar10;
  }
  puVar7 = DataParser::AABB;
  pcVar21 = DataParser::AABB + -1;
  pcVar18 = pcVar21;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar23 = *(int **)(in_x1 + 8);
  uVar4 = *(uint *)in_x1;
  uVar28 = (ulong)uVar4;
  piVar19 = piVar23 + uVar28 * 0xc;
  piVar27 = piVar23;
  if (uVar4 != 0) {
    uVar29 = (long)pcVar18 - (long)DataParser::AABB;
    lVar31 = uVar28 * 0x30;
    piVar30 = piVar23;
    do {
      iVar9 = *piVar30;
      if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar30 + 0x15);
      }
      if (iVar9 == (int)uVar29) {
        piVar1 = *(int **)(piVar30 + 2);
        if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar30;
        }
        piVar27 = piVar30;
        if ((piVar1 == (int *)puVar7) ||
           (iVar9 = memcmp(puVar7,piVar1,uVar29 & 0xffffffff), iVar9 == 0)) break;
      }
      lVar31 = lVar31 + -0x30;
      piVar30 = piVar30 + 0xc;
      piVar27 = piVar19;
    } while (lVar31 != 0);
  }
  if (piVar19 != piVar27) {
    do {
      pcVar21 = pcVar21 + 1;
    } while (*pcVar21 != '\0');
    if (uVar4 == 0) {
LAB_00d401bc:
      if (piVar23 == piVar19) goto LAB_00d401cc;
      pGVar24 = (GenericValue *)(piVar23 + 6);
    }
    else {
      lVar31 = uVar28 * 0x30;
      do {
        iVar9 = *piVar23;
        if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
          iVar9 = 0x15 - *(char *)((long)piVar23 + 0x15);
        }
        if (iVar9 == (int)((long)pcVar21 - (long)puVar7)) {
          piVar27 = *(int **)(piVar23 + 2);
          if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
            piVar27 = piVar23;
          }
          if ((piVar27 == (int *)puVar7) ||
             (iVar9 = memcmp(puVar7,piVar27,(long)pcVar21 - (long)puVar7 & 0xffffffff), iVar9 == 0))
          goto LAB_00d401bc;
        }
        lVar31 = lVar31 + -0x30;
        piVar23 = piVar23 + 0xc;
      } while (lVar31 != 0);
LAB_00d401cc:
      pGVar24 = (GenericValue *)
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
    }
    fVar32 = (float)_getNumber(pGVar24,DataParser::X,0.0);
    *(float *)(this_00 + 0x38) = fVar32 * *(float *)(this_00 + 0x1c);
    fVar32 = (float)_getNumber(pGVar24,DataParser::Y,0.0);
    *(float *)(this_00 + 0x3c) = fVar32 * *(float *)(this_00 + 0x1c);
    fVar32 = (float)_getNumber(pGVar24,DataParser::WIDTH,0.0);
    *(float *)(this_00 + 0x40) = fVar32 * *(float *)(this_00 + 0x1c);
    fVar32 = (float)_getNumber(pGVar24,DataParser::HEIGHT,0.0);
    *(float *)(this_00 + 0x44) = fVar32 * *(float *)(this_00 + 0x1c);
  }
  puVar7 = DataParser::BONE;
  pcVar21 = DataParser::BONE + -1;
  pcVar18 = pcVar21;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar23 = *(int **)(in_x1 + 8);
  uVar4 = *(uint *)in_x1;
  uVar28 = (ulong)uVar4;
  piVar19 = piVar23 + uVar28 * 0xc;
  piVar27 = piVar23;
  if (uVar4 != 0) {
    uVar29 = (long)pcVar18 - (long)DataParser::BONE;
    lVar31 = uVar28 * 0x30;
    piVar30 = piVar23;
    do {
      iVar9 = *piVar30;
      if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar30 + 0x15);
      }
      if (iVar9 == (int)uVar29) {
        piVar1 = *(int **)(piVar30 + 2);
        if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar30;
        }
        piVar27 = piVar30;
        if ((piVar1 == (int *)puVar7) ||
           (iVar9 = memcmp(puVar7,piVar1,uVar29 & 0xffffffff), iVar9 == 0)) break;
      }
      lVar31 = lVar31 + -0x30;
      piVar30 = piVar30 + 0xc;
      piVar27 = piVar19;
    } while (lVar31 != 0);
  }
  if (piVar19 != piVar27) {
    do {
      pcVar21 = pcVar21 + 1;
    } while (*pcVar21 != '\0');
    if (uVar4 == 0) {
LAB_00d40394:
      if (piVar23 != piVar19) {
        uVar4 = piVar23[6];
        if (uVar4 != 0) {
          uVar28 = 0;
          this = (basic_string *)(param_1 + 0x210);
          do {
            local_b0 = (piecewise_construct_t *)0x0;
            local_a8 = 0;
            local_a0 = (void *)0x0;
            pJVar25 = (JSONDataParser *)(*(long *)(piVar23 + 8) + uVar28 * 0x18);
            _getString(pJVar25,(GenericValue *)DataParser::PARENT,(char *)&local_b0,
                       (basic_string *)in_x3);
            if (((ulong)local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
            local_c8 = (BoneData *)(**(code **)(*(long *)param_1 + 0x28))(param_1,pJVar25);
            sVar14 = local_98 >> 1 & 0x7f;
            if ((local_98 & 1) != 0) {
              sVar14 = sStack_90;
            }
            if (sVar14 != 0) {
              pAVar20 = (ArmatureData *)
                        std::__ndk1::
                        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                        ::
                        find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                                    *)(this_00 + 0xc0),(basic_string *)&local_98);
              if ((this_00 + 200 == pAVar20) || (*(long *)(pAVar20 + 0x38) == 0)) {
                local_b0 = (piecewise_construct_t *)&local_98;
                in_x3 = (tuple *)&local_b0;
                lVar31 = std::__ndk1::
                         __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
                         ::
                         __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                   (this,(piecewise_construct_t *)&local_98,(tuple *)&DAT_01948c98,
                                    in_x3);
                if (*(long **)(lVar31 + 0x40) == *(long **)(lVar31 + 0x48)) {
                  std::__ndk1::
                  vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>::
                  __push_back_slow_path<dragonBones::BoneData*const&>
                            ((vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>
                              *)(lVar31 + 0x38),&local_c8);
                }
                else {
                  **(long **)(lVar31 + 0x40) = (long)local_c8;
                  *(long *)(lVar31 + 0x40) = *(long *)(lVar31 + 0x40) + 8;
                }
              }
              else {
                *(long *)(local_c8 + 0x50) = *(long *)(pAVar20 + 0x38);
              }
            }
            pGVar24 = (GenericValue *)
                      std::__ndk1::
                      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
                      ::
                      find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
                                  *)this,(basic_string *)(local_c8 + 0x18));
            if (param_1 + 0x218 != pGVar24) {
              in_x3 = (tuple *)&local_b0;
              local_b0 = (piecewise_construct_t *)(local_c8 + 0x18);
              lVar31 = std::__ndk1::
                       __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
                       ::
                       __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                 (this,local_b0,(tuple *)&DAT_01948c98,in_x3);
              plVar2 = *(long **)(lVar31 + 0x40);
              for (plVar17 = *(long **)(lVar31 + 0x38); plVar17 != plVar2; plVar17 = plVar17 + 1) {
                *(BoneData **)(*plVar17 + 0x50) = local_c8;
              }
              std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
              ::erase((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
                       *)this,pGVar24);
            }
            ArmatureData::addBone(this_00,local_c8);
            if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x20)) {
              std::__ndk1::
              vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>::
              __push_back_slow_path<dragonBones::BoneData*const&>
                        ((vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>
                          *)(param_1 + 0x10),&local_c8);
            }
            else {
              **(undefined8 **)(param_1 + 0x18) = local_c8;
              *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 8;
            }
            if ((local_98 & 1) != 0) {
              operator_delete(local_88);
            }
            uVar28 = uVar28 + 1;
          } while (uVar28 != uVar4);
        }
        goto LAB_00d40590;
      }
    }
    else {
      lVar31 = uVar28 * 0x30;
      do {
        iVar9 = *piVar23;
        if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
          iVar9 = 0x15 - *(char *)((long)piVar23 + 0x15);
        }
        if (iVar9 == (int)((long)pcVar21 - (long)puVar7)) {
          piVar27 = *(int **)(piVar23 + 2);
          if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
            piVar27 = piVar23;
          }
          if ((piVar27 == (int *)puVar7) ||
             (iVar9 = memcmp(puVar7,piVar27,(long)pcVar21 - (long)puVar7 & 0xffffffff), iVar9 == 0))
          goto LAB_00d40394;
        }
        lVar31 = lVar31 + -0x30;
        piVar23 = piVar23 + 0xc;
      } while (lVar31 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d40590:
  puVar7 = DataParser::IK;
  pcVar21 = DataParser::IK + -1;
  pcVar18 = pcVar21;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar23 = *(int **)(in_x1 + 8);
  uVar4 = *(uint *)in_x1;
  uVar28 = (ulong)uVar4;
  piVar19 = piVar23 + uVar28 * 0xc;
  piVar27 = piVar23;
  if (uVar4 != 0) {
    uVar29 = (long)pcVar18 - (long)DataParser::IK;
    lVar31 = uVar28 * 0x30;
    piVar30 = piVar23;
    do {
      iVar9 = *piVar30;
      if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar30 + 0x15);
      }
      if (iVar9 == (int)uVar29) {
        piVar1 = *(int **)(piVar30 + 2);
        if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar30;
        }
        piVar27 = piVar30;
        if ((piVar1 == (int *)puVar7) ||
           (iVar9 = memcmp(puVar7,piVar1,uVar29 & 0xffffffff), iVar9 == 0)) break;
      }
      lVar31 = lVar31 + -0x30;
      piVar30 = piVar30 + 0xc;
      piVar27 = piVar19;
    } while (lVar31 != 0);
  }
  if (piVar19 != piVar27) {
    do {
      pcVar21 = pcVar21 + 1;
    } while (*pcVar21 != '\0');
    if (uVar4 == 0) {
LAB_00d406c0:
      if (piVar23 != piVar19) {
        uVar4 = piVar23[6];
        if (uVar4 != 0) {
          lVar31 = 0;
          do {
            pCVar11 = (ConstraintData *)
                      (**(code **)(*(long *)param_1 + 0x30))
                                (param_1,*(long *)(piVar23 + 8) + lVar31);
            if (pCVar11 != (ConstraintData *)0x0) {
              ArmatureData::addConstraint(this_00,pCVar11);
            }
            lVar31 = lVar31 + 0x18;
          } while ((ulong)uVar4 * 0x18 - lVar31 != 0);
        }
        goto LAB_00d40724;
      }
    }
    else {
      lVar31 = uVar28 * 0x30;
      do {
        iVar9 = *piVar23;
        if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
          iVar9 = 0x15 - *(char *)((long)piVar23 + 0x15);
        }
        if (iVar9 == (int)((long)pcVar21 - (long)puVar7)) {
          piVar27 = *(int **)(piVar23 + 2);
          if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
            piVar27 = piVar23;
          }
          if ((piVar27 == (int *)puVar7) ||
             (iVar9 = memcmp(puVar7,piVar27,(long)pcVar21 - (long)puVar7 & 0xffffffff), iVar9 == 0))
          goto LAB_00d406c0;
        }
        lVar31 = lVar31 + -0x30;
        piVar23 = piVar23 + 0xc;
      } while (lVar31 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d40724:
  ArmatureData::sortBones(this_00);
  puVar7 = DataParser::SLOT;
  pcVar21 = DataParser::SLOT + -1;
  pcVar18 = pcVar21;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar23 = *(int **)(in_x1 + 8);
  uVar4 = *(uint *)in_x1;
  uVar28 = (ulong)uVar4;
  piVar19 = piVar23 + uVar28 * 0xc;
  piVar27 = piVar23;
  if (uVar4 != 0) {
    uVar29 = (long)pcVar18 - (long)DataParser::SLOT;
    lVar31 = uVar28 * 0x30;
    piVar30 = piVar23;
    do {
      iVar9 = *piVar30;
      if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar30 + 0x15);
      }
      if (iVar9 == (int)uVar29) {
        piVar1 = *(int **)(piVar30 + 2);
        if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar30;
        }
        piVar27 = piVar30;
        if ((piVar1 == (int *)puVar7) ||
           (iVar9 = memcmp(puVar7,piVar1,uVar29 & 0xffffffff), iVar9 == 0)) break;
      }
      lVar31 = lVar31 + -0x30;
      piVar30 = piVar30 + 0xc;
      piVar27 = piVar19;
    } while (lVar31 != 0);
  }
  if (piVar19 != piVar27) {
    do {
      pcVar21 = pcVar21 + 1;
    } while (*pcVar21 != '\0');
    if (uVar4 == 0) {
LAB_00d4085c:
      if (piVar23 != piVar19) {
        uVar4 = piVar23[6];
        if (uVar4 != 0) {
          lVar31 = 0;
          iVar9 = 0;
          do {
            pSVar12 = (SlotData *)
                      (**(code **)(*(long *)param_1 + 0x38))
                                (param_1,*(long *)(piVar23 + 8) + lVar31,iVar9);
            ArmatureData::addSlot(this_00,pSVar12);
            lVar31 = lVar31 + 0x18;
            iVar9 = iVar9 + 1;
          } while ((ulong)uVar4 * 0x18 - lVar31 != 0);
        }
        goto LAB_00d408c8;
      }
    }
    else {
      lVar31 = uVar28 * 0x30;
      do {
        iVar9 = *piVar23;
        if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
          iVar9 = 0x15 - *(char *)((long)piVar23 + 0x15);
        }
        if (iVar9 == (int)((long)pcVar21 - (long)puVar7)) {
          piVar27 = *(int **)(piVar23 + 2);
          if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
            piVar27 = piVar23;
          }
          if ((piVar27 == (int *)puVar7) ||
             (iVar9 = memcmp(puVar7,piVar27,(long)pcVar21 - (long)puVar7 & 0xffffffff), iVar9 == 0))
          goto LAB_00d4085c;
        }
        lVar31 = lVar31 + -0x30;
        piVar23 = piVar23 + 0xc;
      } while (lVar31 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d408c8:
  puVar7 = DataParser::SKIN;
  pcVar21 = DataParser::SKIN + -1;
  pcVar18 = pcVar21;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar23 = *(int **)(in_x1 + 8);
  uVar4 = *(uint *)in_x1;
  uVar28 = (ulong)uVar4;
  piVar19 = piVar23 + uVar28 * 0xc;
  piVar27 = piVar23;
  if (uVar4 != 0) {
    uVar29 = (long)pcVar18 - (long)DataParser::SKIN;
    lVar31 = uVar28 * 0x30;
    piVar30 = piVar23;
    do {
      iVar9 = *piVar30;
      if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar30 + 0x15);
      }
      if (iVar9 == (int)uVar29) {
        piVar1 = *(int **)(piVar30 + 2);
        if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar30;
        }
        piVar27 = piVar30;
        if ((piVar1 == (int *)puVar7) ||
           (iVar9 = memcmp(puVar7,piVar1,uVar29 & 0xffffffff), iVar9 == 0)) break;
      }
      lVar31 = lVar31 + -0x30;
      piVar30 = piVar30 + 0xc;
      piVar27 = piVar19;
    } while (lVar31 != 0);
  }
  if (piVar19 != piVar27) {
    do {
      pcVar21 = pcVar21 + 1;
    } while (*pcVar21 != '\0');
    if (uVar4 == 0) {
LAB_00d409f4:
      if (piVar23 != piVar19) {
        uVar4 = piVar23[6];
        if (uVar4 != 0) {
          lVar31 = 0;
          do {
            pSVar13 = (SkinData *)
                      (**(code **)(*(long *)param_1 + 0x40))
                                (param_1,*(long *)(piVar23 + 8) + lVar31);
            ArmatureData::addSkin(this_00,pSVar13);
            lVar31 = lVar31 + 0x18;
          } while ((ulong)uVar4 * 0x18 - lVar31 != 0);
        }
        goto LAB_00d40a54;
      }
    }
    else {
      lVar31 = uVar28 * 0x30;
      do {
        iVar9 = *piVar23;
        if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
          iVar9 = 0x15 - *(char *)((long)piVar23 + 0x15);
        }
        if (iVar9 == (int)((long)pcVar21 - (long)puVar7)) {
          piVar27 = *(int **)(piVar23 + 2);
          if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
            piVar27 = piVar23;
          }
          if ((piVar27 == (int *)puVar7) ||
             (iVar9 = memcmp(puVar7,piVar27,(long)pcVar21 - (long)puVar7 & 0xffffffff), iVar9 == 0))
          goto LAB_00d409f4;
        }
        lVar31 = lVar31 + -0x30;
        piVar23 = piVar23 + 0xc;
      } while (lVar31 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d40a54:
  lVar31 = *(long *)(param_1 + 0x198);
  lVar5 = *(long *)(param_1 + 0x1a0) - lVar31;
  if (lVar5 != 0) {
    uVar28 = 0;
    do {
      pJVar25 = *(JSONDataParser **)(lVar31 + uVar28 * 8);
      local_b0 = (piecewise_construct_t *)0x0;
      local_a8 = 0;
      local_a0 = (void *)0x0;
      _getString(pJVar25,(GenericValue *)DataParser::SHARE,(char *)&local_b0,(basic_string *)in_x3);
      if (((ulong)local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      __src = DataParser::DEFAULT_NAME;
      puVar7 = DataParser::SKIN;
      sVar14 = local_98 >> 1 & 0x7f;
      if ((local_98 & 1) != 0) {
        sVar14 = sStack_90;
      }
      if (sVar14 != 0) {
        local_c0 = 0;
        local_b8 = (void *)0x0;
        local_c8 = (BoneData *)0x0;
        sVar14 = strlen(DataParser::DEFAULT_NAME);
        if (0xffffffffffffffef < sVar14) goto LAB_00d412bc;
        if (sVar14 < 0x17) {
          local_c8 = (BoneData *)CONCAT71(local_c8._1_7_,(char)((int)sVar14 << 1));
          pvVar15 = (void *)((ulong)&local_c8 | 1);
          if (sVar14 != 0) goto LAB_00d40b4c;
        }
        else {
          uVar29 = sVar14 + 0x10 & 0xfffffffffffffff0;
          pvVar15 = operator_new(uVar29);
          local_c8 = (BoneData *)(uVar29 | 1);
          local_c0 = sVar14;
          local_b8 = pvVar15;
LAB_00d40b4c:
          memcpy(pvVar15,__src,sVar14);
        }
        *(undefined1 *)((long)pvVar15 + sVar14) = 0;
        _getString(pJVar25,(GenericValue *)puVar7,(char *)&local_c8,(basic_string *)in_x3);
        if (((ulong)local_c8 & 1) != 0) {
          operator_delete(local_b8);
        }
        puVar7 = DataParser::DEFAULT_NAME;
        uVar29 = (ulong)local_b0 >> 1 & 0x7f;
        if (((ulong)local_b0 & 1) != 0) {
          uVar29 = local_a8;
        }
        if (uVar29 == 0) {
          sVar14 = strlen(DataParser::DEFAULT_NAME);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_b0,puVar7,sVar14);
        }
        in_x3 = (tuple *)&local_98;
        local_c8 = (BoneData *)0x0;
        local_c0 = 0;
        local_b8 = (void *)0x0;
        lVar31 = ArmatureData::getMesh
                           (this_00,(basic_string *)&local_b0,(basic_string *)&local_c8,
                            (basic_string *)in_x3);
        if (((ulong)local_c8 & 1) != 0) {
          operator_delete(local_b8);
        }
        if (lVar31 != 0) {
          VerticesData::shareFrom
                    ((VerticesData *)(*(long *)(*(long *)(param_1 + 0x1b0) + uVar28 * 8) + 0x68),
                     (VerticesData *)(lVar31 + 0x68));
        }
        if (((ulong)local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      uVar28 = uVar28 + 1;
      if ((ulong)(lVar5 >> 3) <= uVar28) break;
      lVar31 = *(long *)(param_1 + 0x198);
    } while( true );
  }
  puVar7 = DataParser::ANIMATION;
  pcVar21 = DataParser::ANIMATION + -1;
  pcVar18 = pcVar21;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar23 = *(int **)(in_x1 + 8);
  uVar4 = *(uint *)in_x1;
  uVar28 = (ulong)uVar4;
  piVar19 = piVar23 + uVar28 * 0xc;
  piVar27 = piVar23;
  if (uVar4 != 0) {
    uVar29 = (long)pcVar18 - (long)DataParser::ANIMATION;
    lVar31 = uVar28 * 0x30;
    piVar30 = piVar23;
    do {
      iVar9 = *piVar30;
      if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar30 + 0x15);
      }
      if (iVar9 == (int)uVar29) {
        piVar1 = *(int **)(piVar30 + 2);
        if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar30;
        }
        piVar27 = piVar30;
        if ((piVar1 == (int *)puVar7) ||
           (iVar9 = memcmp(puVar7,piVar1,uVar29 & 0xffffffff), iVar9 == 0)) break;
      }
      lVar31 = lVar31 + -0x30;
      piVar30 = piVar30 + 0xc;
      piVar27 = piVar19;
    } while (lVar31 != 0);
  }
  if (piVar19 != piVar27) {
    do {
      pcVar21 = pcVar21 + 1;
    } while (*pcVar21 != '\0');
    if (uVar4 == 0) {
LAB_00d40d68:
      if (piVar23 != piVar19) {
        uVar4 = piVar23[6];
        if (uVar4 != 0) {
          lVar31 = 0;
          do {
            pAVar16 = (AnimationData *)
                      (**(code **)(*(long *)param_1 + 0x70))
                                (param_1,*(long *)(piVar23 + 8) + lVar31);
            ArmatureData::addAnimation(this_00,pAVar16);
            lVar31 = lVar31 + 0x18;
          } while ((ulong)uVar4 * 0x18 - lVar31 != 0);
        }
        goto LAB_00d40dc8;
      }
    }
    else {
      lVar31 = uVar28 * 0x30;
      do {
        iVar9 = *piVar23;
        if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
          iVar9 = 0x15 - *(char *)((long)piVar23 + 0x15);
        }
        if (iVar9 == (int)((long)pcVar21 - (long)puVar7)) {
          piVar27 = *(int **)(piVar23 + 2);
          if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
            piVar27 = piVar23;
          }
          if ((piVar27 == (int *)puVar7) ||
             (iVar9 = memcmp(puVar7,piVar27,(long)pcVar21 - (long)puVar7 & 0xffffffff), iVar9 == 0))
          goto LAB_00d40d68;
        }
        lVar31 = lVar31 + -0x30;
        piVar23 = piVar23 + 0xc;
      } while (lVar31 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01d38c18 = 0;
    DAT_01d38c20 = 0;
  }
LAB_00d40dc8:
  puVar7 = DataParser::DEFAULT_ACTIONS;
  pcVar21 = DataParser::DEFAULT_ACTIONS + -1;
  pcVar18 = pcVar21;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar23 = *(int **)(in_x1 + 8);
  uVar4 = *(uint *)in_x1;
  uVar28 = (ulong)uVar4;
  piVar19 = piVar23 + uVar28 * 0xc;
  piVar27 = piVar23;
  if (uVar4 != 0) {
    uVar29 = (long)pcVar18 - (long)DataParser::DEFAULT_ACTIONS;
    lVar31 = uVar28 * 0x30;
    piVar30 = piVar23;
    do {
      iVar9 = *piVar30;
      if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar30 + 0x15);
      }
      if (iVar9 == (int)uVar29) {
        piVar1 = *(int **)(piVar30 + 2);
        if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar30;
        }
        piVar27 = piVar30;
        if ((piVar1 == (int *)puVar7) ||
           (iVar9 = memcmp(puVar7,piVar1,uVar29 & 0xffffffff), iVar9 == 0)) break;
      }
      lVar31 = lVar31 + -0x30;
      piVar30 = piVar30 + 0xc;
      piVar27 = piVar19;
    } while (lVar31 != 0);
  }
  if (piVar19 != piVar27) {
    do {
      pcVar21 = pcVar21 + 1;
    } while (*pcVar21 != '\0');
    if (uVar4 == 0) {
LAB_00d40ef8:
      if (piVar23 == piVar19) goto LAB_00d40f08;
      piVar23 = piVar23 + 6;
    }
    else {
      lVar31 = uVar28 * 0x30;
      do {
        iVar9 = *piVar23;
        if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
          iVar9 = 0x15 - *(char *)((long)piVar23 + 0x15);
        }
        if (iVar9 == (int)((long)pcVar21 - (long)puVar7)) {
          piVar27 = *(int **)(piVar23 + 2);
          if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
            piVar27 = piVar23;
          }
          if ((piVar27 == (int *)puVar7) ||
             (iVar9 = memcmp(puVar7,piVar27,(long)pcVar21 - (long)puVar7 & 0xffffffff), iVar9 == 0))
          goto LAB_00d40ef8;
        }
        lVar31 = lVar31 + -0x30;
        piVar23 = piVar23 + 0xc;
      } while (lVar31 != 0);
LAB_00d40f08:
      piVar23 = (int *)&rapidjson::
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
    plVar17 = (long *)(**(code **)(*(long *)param_1 + 0xf0))(param_1,piVar23,0,0,0);
    puVar22 = (undefined8 *)*plVar17;
    puVar3 = (undefined8 *)plVar17[1];
    if (puVar22 != puVar3) {
      do {
        pAVar26 = (ActionData *)*puVar22;
        ArmatureData::addAction(this_00,pAVar26,true);
        if (((*(int *)(pAVar26 + 0x10) == 0) &&
            (pAVar20 = (ArmatureData *)
                       std::__ndk1::
                       __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                       ::
                       find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                                   *)(this_00 + 0x120),(basic_string *)(pAVar26 + 0x18)),
            this_00 + 0x128 != pAVar20)) && (*(long *)(pAVar20 + 0x38) != 0)) {
          *(long *)(this_00 + 0x140) = *(long *)(pAVar20 + 0x38);
        }
        puVar22 = puVar22 + 1;
      } while (puVar3 != puVar22);
    }
  }
  puVar7 = DataParser::ACTIONS;
  pcVar21 = DataParser::ACTIONS + -1;
  pcVar18 = pcVar21;
  do {
    pcVar18 = pcVar18 + 1;
  } while (*pcVar18 != '\0');
  piVar23 = *(int **)(in_x1 + 8);
  uVar4 = *(uint *)in_x1;
  uVar28 = (ulong)uVar4;
  piVar19 = piVar23 + uVar28 * 0xc;
  piVar27 = piVar23;
  if (uVar4 != 0) {
    uVar29 = (long)pcVar18 - (long)DataParser::ACTIONS;
    lVar31 = uVar28 * 0x30;
    piVar30 = piVar23;
    do {
      iVar9 = *piVar30;
      if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar30 + 0x15);
      }
      if (iVar9 == (int)uVar29) {
        piVar1 = *(int **)(piVar30 + 2);
        if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
          piVar1 = piVar30;
        }
        piVar27 = piVar30;
        if ((piVar1 == (int *)puVar7) ||
           (iVar9 = memcmp(puVar7,piVar1,uVar29 & 0xffffffff), iVar9 == 0)) break;
      }
      lVar31 = lVar31 + -0x30;
      piVar30 = piVar30 + 0xc;
      piVar27 = piVar19;
    } while (lVar31 != 0);
  }
  if (piVar19 == piVar27) goto LAB_00d41124;
  do {
    pcVar21 = pcVar21 + 1;
  } while (*pcVar21 != '\0');
  if (uVar4 == 0) {
LAB_00d410c4:
    if (piVar23 == piVar19) goto LAB_00d410d4;
    piVar23 = piVar23 + 6;
  }
  else {
    lVar31 = uVar28 * 0x30;
    do {
      iVar9 = *piVar23;
      if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
        iVar9 = 0x15 - *(char *)((long)piVar23 + 0x15);
      }
      if (iVar9 == (int)((long)pcVar21 - (long)puVar7)) {
        piVar27 = *(int **)(piVar23 + 2);
        if ((*(ushort *)((long)piVar23 + 0x16) & 0x1000) != 0) {
          piVar27 = piVar23;
        }
        if ((piVar27 == (int *)puVar7) ||
           (iVar9 = memcmp(puVar7,piVar27,(long)pcVar21 - (long)puVar7 & 0xffffffff), iVar9 == 0))
        goto LAB_00d410c4;
      }
      lVar31 = lVar31 + -0x30;
      piVar23 = piVar23 + 0xc;
    } while (lVar31 != 0);
LAB_00d410d4:
    piVar23 = (int *)&rapidjson::
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
  plVar17 = (long *)(**(code **)(*(long *)param_1 + 0xf0))(param_1,piVar23,0,0,0);
  puVar3 = (undefined8 *)plVar17[1];
  for (puVar22 = (undefined8 *)*plVar17; puVar22 != puVar3; puVar22 = puVar22 + 1) {
    ArmatureData::addAction(this_00,(ActionData *)*puVar22,false);
  }
LAB_00d41124:
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_1 + 0x198);
  *(undefined8 *)(param_1 + 0x1b8) = *(undefined8 *)(param_1 + 0x1b0);
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
             *)(param_1 + 0x1e0),*(__tree_node **)(param_1 + 0x1e8));
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(GenericValue **)(param_1 + 0x1e0) = param_1 + 0x1e8;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
             *)(param_1 + 0x1f8),*(__tree_node **)(param_1 + 0x200));
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(GenericValue **)(param_1 + 0x1f8) = param_1 + 0x200;
  *(undefined8 *)(param_1 + 0x200) = 0;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
             *)(param_1 + 0x210),*(__tree_node **)(param_1 + 0x218));
  *(GenericValue **)(param_1 + 0x210) = param_1 + 0x218;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  std::__ndk1::
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>>>
  ::destroy((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>>>>
             *)(param_1 + 0x228),*(__tree_node **)(param_1 + 0x230));
  *(GenericValue **)(param_1 + 0x228) = param_1 + 0x230;
  *(undefined8 *)(param_1 + 0x238) = 0;
  *(undefined8 *)(param_1 + 0x230) = 0;
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

