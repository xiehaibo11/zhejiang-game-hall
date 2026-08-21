
/* dragonBones::JSONDataParser::_parseArmature(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, float) */

ArmatureData * dragonBones::JSONDataParser::_parseArmature(GenericValue *param_1,float param_2)

{
  __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
  *this;
  basic_string *pbVar1;
  int *piVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined *__src;
  undefined4 uVar9;
  int iVar10;
  ArmatureData *this_00;
  CanvasData *pCVar11;
  BoneData *pBVar12;
  __tree_node_base *p_Var13;
  GenericValue *pGVar14;
  __tree_node_base **pp_Var15;
  void *pvVar16;
  ConstraintData *pCVar17;
  SlotData *pSVar18;
  SkinData *pSVar19;
  AnimationData *pAVar20;
  long *plVar21;
  size_t sVar22;
  JSONDataParser *in_x1;
  basic_string *in_x3;
  char *pcVar23;
  ulong uVar24;
  int *piVar25;
  ArmatureData *pAVar26;
  char *pcVar27;
  int *piVar28;
  undefined8 *puVar29;
  JSONDataParser *pJVar30;
  ActionData *pAVar31;
  void *pvVar32;
  int *piVar33;
  int *piVar34;
  ulong uVar35;
  ulong uVar36;
  __tree_node_base *p_Var37;
  long lVar38;
  float fVar39;
  ulong local_c8;
  size_t local_c0;
  void *local_b8;
  __tree_end_node *local_b0;
  ulong local_a8;
  void *local_a0;
  ulong local_98;
  size_t sStack_90;
  void *local_88;
  long local_80;
  
  lVar7 = tpidr_el0;
  local_80 = *(long *)(lVar7 + 0x28);
  this_00 = BaseObject::borrowObject<dragonBones::ArmatureData>();
                    /* try { // try from 00d8d804 to 00e8d817 has its CatchHandler @ 00d8dc6c */
  local_a8 = 0;
  local_a0 = (void *)0x0;
  local_b0 = (__tree_end_node *)0x0;
  _getString(in_x1,(GenericValue *)DataParser::NAME,(char *)&local_b0,in_x3);
  pAVar26 = this_00 + 0x20;
  if (((byte)*pAVar26 & 1) == 0) {
    *(undefined2 *)pAVar26 = 0;
  }
  else {
    **(undefined1 **)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    if (((byte)this_00[0x20] & 1) != 0) {
                    /* try { // try from 00d8d844 to 00e8d85f has its CatchHandler @ 00d8dc68 */
      operator_delete(*(void **)(this_00 + 0x30));
      *(undefined8 *)(this_00 + 0x20) = 0;
    }
  }
  *(void **)(this_00 + 0x30) = local_88;
  *(size_t *)(this_00 + 0x28) = sStack_90;
  *(ulong *)pAVar26 = local_98;
                    /* try { // try from 00d8d864 to 00e8d86b has its CatchHandler @ 00d8dc78 */
  sStack_90 = 0;
  local_88 = (void *)0x0;
  local_98 = 0;
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
                    /* try { // try from 00d8d884 to 00e8d89f has its CatchHandler @ 00d8dc18 */
  uVar9 = _getNumber((GenericValue *)in_x1,DataParser::FRAME_RATE,
                     *(uint *)(*(long *)(param_1 + 0x28) + 0x10));
  *(undefined4 *)(this_00 + 0x14) = uVar9;
  *(float *)(this_00 + 0x1c) = param_2;
  puVar8 = DataParser::TYPE;
  pcVar27 = DataParser::TYPE + -1;
  pcVar23 = pcVar27;
  do {
    pcVar23 = pcVar23 + 1;
  } while (*pcVar23 != '\0');
  piVar33 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar35 = (ulong)uVar5;
  piVar25 = piVar33 + uVar35 * 0xc;
  piVar34 = piVar33;
  if (uVar5 != 0) {
    uVar36 = (long)pcVar23 - (long)DataParser::TYPE;
    lVar38 = uVar35 * 0x30;
    piVar28 = piVar33;
                    /* try { // try from 00d8d8ec to 00e8d8ff has its CatchHandler @ 00d8dc1c */
    do {
                    /* try { // try from 00d8d904 to 00e8d91b has its CatchHandler @ 00d8db24 */
      iVar10 = *piVar28;
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar10 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
                    /* try { // try from 00d8d91c to 00e8d92f has its CatchHandler @ 00d8db00 */
      if (iVar10 == (int)uVar36) {
        piVar2 = *(int **)(piVar28 + 2);
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar2 = piVar28;
        }
        piVar34 = piVar28;
                    /* try { // try from 00d8d934 to 00e8d963 has its CatchHandler @ 00d8db88 */
        if ((piVar2 == (int *)puVar8) ||
           (iVar10 = memcmp(puVar8,piVar2,uVar36 & 0xffffffff), iVar10 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar28 = piVar28 + 0xc;
      piVar34 = piVar25;
    } while (lVar38 != 0);
  }
  pcVar23 = pcVar27;
  if (piVar25 == piVar34) {
LAB_00d8da84:
    uVar9 = _getNumber((GenericValue *)in_x1,puVar8,0);
    *(undefined4 *)(this_00 + 0x10) = uVar9;
LAB_00d8da98:
    iVar10 = *(int *)(this_00 + 0x14);
  }
  else {
    do {
      pcVar23 = pcVar23 + 1;
    } while (*pcVar23 != '\0');
    if (uVar5 != 0) {
                    /* try { // try from 00d8d974 to 00e8d987 has its CatchHandler @ 00d8daf0 */
      lVar38 = uVar35 * 0x30;
      do {
        iVar10 = *piVar33;
        if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
          iVar10 = 0x15 - *(char *)((long)piVar33 + 0x15);
        }
        if (iVar10 == (int)((long)pcVar23 - (long)puVar8)) {
          piVar34 = *(int **)(piVar33 + 2);
          if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
            piVar34 = piVar33;
          }
                    /* try { // try from 00d8d9c4 to 00e8da03 has its CatchHandler @ 00d8db28 */
          if ((piVar34 == (int *)puVar8) ||
             (iVar10 = memcmp(puVar8,piVar34,(long)pcVar23 - (long)puVar8 & 0xffffffff), iVar10 == 0
             )) goto LAB_00d8d9dc;
        }
                    /* try { // try from 00d8d98c to 00e8d9b3 has its CatchHandler @ 00d8db10 */
        lVar38 = lVar38 + -0x30;
        piVar33 = piVar33 + 0xc;
      } while (lVar38 != 0);
LAB_00d8da74:
                    /* try { // try from 00d8da78 to 00e8dca3 has its CatchHandler @ 00d8d1e0 */
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      goto LAB_00d8da84;
    }
LAB_00d8d9dc:
    if (piVar33 == piVar25) goto LAB_00d8da74;
    if ((*(byte *)((long)piVar33 + 0x2f) >> 2 & 1) == 0) goto LAB_00d8da84;
    do {
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    uVar5 = *(uint *)in_x1;
    piVar34 = *(int **)(in_x1 + 8);
    piVar33 = piVar34;
    if (uVar5 == 0) {
LAB_00d8f160:
      if (piVar33 == piVar34 + (ulong)uVar5 * 0xc) goto LAB_00d8f180;
      piVar34 = piVar33 + 6;
      if ((*(byte *)((long)piVar33 + 0x2f) >> 4 & 1) == 0) goto LAB_00d8f190;
    }
    else {
      lVar38 = (ulong)uVar5 * 0x30;
      do {
        iVar10 = *piVar33;
        if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
          iVar10 = 0x15 - *(char *)((long)piVar33 + 0x15);
        }
        if (iVar10 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar25 = *(int **)(piVar33 + 2);
          if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
            piVar25 = piVar33;
          }
          if ((piVar25 == (int *)puVar8) ||
             (iVar10 = memcmp(puVar8,piVar25,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar10 == 0
             )) goto LAB_00d8f160;
        }
        lVar38 = lVar38 + -0x30;
        piVar33 = piVar33 + 0xc;
      } while (lVar38 != 0);
LAB_00d8f180:
      piVar34 = (int *)&rapidjson::
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
LAB_00d8f190:
      piVar34 = *(int **)(piVar34 + 2);
    }
    sStack_90 = 0;
    local_88 = (void *)0x0;
    local_98 = 0;
    sVar22 = strlen((char *)piVar34);
    if (0xffffffffffffffef < sVar22) {
LAB_00d8f22c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (sVar22 < 0x17) {
      pvVar32 = (void *)((ulong)&local_98 | 1);
      local_98 = CONCAT71(local_98._1_7_,(char)((int)sVar22 << 1));
      if (sVar22 != 0) goto LAB_00d8f1f0;
    }
    else {
      uVar35 = sVar22 + 0x10 & 0xfffffffffffffff0;
      pvVar32 = operator_new(uVar35);
      local_98 = uVar35 | 1;
      sStack_90 = sVar22;
      local_88 = pvVar32;
LAB_00d8f1f0:
      memcpy(pvVar32,piVar34,sVar22);
    }
    *(undefined1 *)((long)pvVar32 + sVar22) = 0;
                    /* try { // try from 00d8f208 to 00e8f23b has its CatchHandler @ 00d8faa8 */
    uVar9 = DataParser::_getArmatureType((basic_string *)&local_98);
    *(undefined4 *)(this_00 + 0x10) = uVar9;
    if ((local_98 & 1) == 0) goto LAB_00d8da98;
    operator_delete(local_88);
    iVar10 = *(int *)(this_00 + 0x14);
  }
  if (iVar10 == 0) {
    *(undefined4 *)(this_00 + 0x14) = 0x18;
  }
  *(ArmatureData **)(param_1 + 0x30) = this_00;
  puVar8 = DataParser::CANVAS;
  pcVar27 = DataParser::CANVAS + -1;
  pcVar23 = pcVar27;
  do {
    pcVar23 = pcVar23 + 1;
  } while (*pcVar23 != '\0');
  piVar33 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar35 = (ulong)uVar5;
  piVar25 = piVar33 + uVar35 * 0xc;
  piVar34 = piVar33;
  if (uVar5 != 0) {
    uVar36 = (long)pcVar23 - (long)DataParser::CANVAS;
                    /* catch() { ... } // from try @ 00d8d974 with catch @ 00d8daf0 */
    lVar38 = uVar35 * 0x30;
    piVar28 = piVar33;
                    /* catch() { ... } // from try @ 00d8d91c with catch @ 00d8db00 */
    do {
                    /* catch() { ... } // from try @ 00d8d98c with catch @ 00d8db10 */
      iVar10 = *piVar28;
                    /* catch() { ... } // from try @ 00d8d904 with catch @ 00d8db24 */
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar10 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
                    /* catch() { ... } // from try @ 00d8d9c4 with catch @ 00d8db28 */
      if (iVar10 == (int)uVar36) {
        piVar2 = *(int **)(piVar28 + 2);
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar2 = piVar28;
        }
        piVar34 = piVar28;
        if ((piVar2 == (int *)puVar8) ||
           (iVar10 = memcmp(puVar8,piVar2,uVar36 & 0xffffffff), iVar10 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar28 = piVar28 + 0xc;
      piVar34 = piVar25;
    } while (lVar38 != 0);
  }
  if (piVar25 != piVar34) {
    do {
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d8dbe0:
      if (piVar33 == piVar25) goto LAB_00d8dbf0;
      pGVar14 = (GenericValue *)(piVar33 + 6);
    }
    else {
      lVar38 = uVar35 * 0x30;
                    /* catch() { ... } // from try @ 00d8d934 with catch @ 00d8db88 */
      do {
        iVar10 = *piVar33;
        if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
          iVar10 = 0x15 - *(char *)((long)piVar33 + 0x15);
        }
        if (iVar10 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar34 = *(int **)(piVar33 + 2);
          if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
            piVar34 = piVar33;
          }
          if ((piVar34 == (int *)puVar8) ||
             (iVar10 = memcmp(puVar8,piVar34,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar10 == 0
             )) goto LAB_00d8dbe0;
        }
        lVar38 = lVar38 + -0x30;
        piVar33 = piVar33 + 0xc;
      } while (lVar38 != 0);
LAB_00d8dbf0:
      pGVar14 = (GenericValue *)
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
    }
    pCVar11 = BaseObject::borrowObject<dragonBones::CanvasData>();
    puVar8 = DataParser::COLOR;
                    /* catch() { ... } // from try @ 00d8d540 with catch @ 00d8dc14 */
    pcVar23 = DataParser::COLOR + -1;
    do {
                    /* catch() { ... } // from try @ 00d8d884 with catch @ 00d8dc18 */
      pcVar23 = pcVar23 + 1;
                    /* catch() { ... } // from try @ 00d8d548 with catch @ 00d8dc1c
                       catch() { ... } // from try @ 00d8d8ec with catch @ 00d8dc1c
                       catch() { ... } // from try @ 00d8da70 with catch @ 00d8dc1c */
    } while (*pcVar23 != '\0');
    piVar33 = *(int **)(pGVar14 + 8);
    uVar5 = *(uint *)pGVar14;
    piVar25 = piVar33 + (ulong)uVar5 * 0xc;
    piVar34 = piVar33;
    if (uVar5 != 0) {
      uVar35 = (long)pcVar23 - (long)DataParser::COLOR;
                    /* catch() { ... } // from try @ 00d8d784 with catch @ 00d8dc3c */
                    /* catch() { ... } // from try @ 00d8d74c with catch @ 00d8dc40 */
      lVar38 = (ulong)uVar5 * 0x30;
                    /* catch() { ... } // from try @ 00d8d4f4 with catch @ 00d8dc44
                       catch() { ... } // from try @ 00d8d568 with catch @ 00d8dc44 */
                    /* catch() { ... } // from try @ 00d8d710 with catch @ 00d8dc48 */
      do {
                    /* catch() { ... } // from try @ 00d8d49c with catch @ 00d8dc58 */
                    /* catch() { ... } // from try @ 00d8d844 with catch @ 00d8dc68 */
        iVar10 = *piVar33;
                    /* catch() { ... } // from try @ 00d8d804 with catch @ 00d8dc6c */
        if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
          iVar10 = 0x15 - *(char *)((long)piVar33 + 0x15);
        }
                    /* catch() { ... } // from try @ 00d8d65c with catch @ 00d8dc70 */
                    /* catch() { ... } // from try @ 00d8d5dc with catch @ 00d8dc74 */
        if (iVar10 == (int)uVar35) {
                    /* catch() { ... } // from try @ 00d8d78c with catch @ 00d8dc78
                       catch() { ... } // from try @ 00d8d864 with catch @ 00d8dc78 */
          piVar28 = *(int **)(piVar33 + 2);
          if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
            piVar28 = piVar33;
          }
          piVar34 = piVar33;
          if ((piVar28 == (int *)puVar8) ||
             (iVar10 = memcmp(puVar8,piVar28,uVar35 & 0xffffffff), iVar10 == 0)) break;
        }
                    /* catch() { ... } // from try @ 00d8d6d8 with catch @ 00d8dc4c */
        lVar38 = lVar38 + -0x30;
                    /* catch() { ... } // from try @ 00d8d6a0 with catch @ 00d8dc50 */
        piVar33 = piVar33 + 0xc;
        piVar34 = piVar25;
                    /* catch() { ... } // from try @ 00d8d628 with catch @ 00d8dc54 */
      } while (lVar38 != 0);
    }
    pCVar11[0xd] = (CanvasData)(piVar25 != piVar34);
    uVar9 = _getNumber(pGVar14,puVar8,0);
    *(undefined4 *)(pCVar11 + 0x10) = uVar9;
    fVar39 = (float)_getNumber(pGVar14,DataParser::X,0.0);
    *(float *)(pCVar11 + 0x14) = fVar39 * *(float *)(this_00 + 0x1c);
    fVar39 = (float)_getNumber(pGVar14,DataParser::Y,0.0);
    *(float *)(pCVar11 + 0x18) = fVar39 * *(float *)(this_00 + 0x1c);
    fVar39 = (float)_getNumber(pGVar14,DataParser::WIDTH,0.0);
    *(float *)(pCVar11 + 0x1c) = fVar39 * *(float *)(this_00 + 0x1c);
                    /* catch() { ... } // from try @ 00d8dd78 with catch @ 00d8dd40 */
    fVar39 = (float)_getNumber(pGVar14,DataParser::HEIGHT,0.0);
    *(float *)(pCVar11 + 0x20) = fVar39 * *(float *)(this_00 + 0x1c);
    *(CanvasData **)(this_00 + 0x148) = pCVar11;
  }
  puVar8 = DataParser::AABB;
  pcVar27 = DataParser::AABB + -1;
  pcVar23 = pcVar27;
  do {
                    /* try { // try from 00d8dd70 to 00e8dd77 has its CatchHandler @ 00d8ddb0 */
    pcVar23 = pcVar23 + 1;
  } while (*pcVar23 != '\0');
                    /* try { // try from 00d8dd78 to 00e8ddcb has its CatchHandler @ 00d8dd40 */
  piVar33 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar35 = (ulong)uVar5;
  piVar25 = piVar33 + uVar35 * 0xc;
  piVar34 = piVar33;
  if (uVar5 != 0) {
    uVar36 = (long)pcVar23 - (long)DataParser::AABB;
    lVar38 = uVar35 * 0x30;
    piVar28 = piVar33;
                    /* catch() { ... } // from try @ 00d8dd70 with catch @ 00d8ddb0 */
    do {
                    /* catch() { ... } // from try @ 00d8de04 with catch @ 00d8ddcc */
      iVar10 = *piVar28;
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar10 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
      if (iVar10 == (int)uVar36) {
        piVar2 = *(int **)(piVar28 + 2);
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar2 = piVar28;
        }
        piVar34 = piVar28;
                    /* try { // try from 00d8ddfc to 00e8de03 has its CatchHandler @ 00d8de3c */
        if ((piVar2 == (int *)puVar8) ||
           (iVar10 = memcmp(puVar8,piVar2,uVar36 & 0xffffffff), iVar10 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar28 = piVar28 + 0xc;
      piVar34 = piVar25;
    } while (lVar38 != 0);
  }
  if (piVar25 != piVar34) {
    do {
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d8de90:
      if (piVar33 == piVar25) goto LAB_00d8dea0;
      pGVar14 = (GenericValue *)(piVar33 + 6);
    }
    else {
      lVar38 = uVar35 * 0x30;
                    /* catch() { ... } // from try @ 00d8ddfc with catch @ 00d8de3c */
      do {
        iVar10 = *piVar33;
        if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
          iVar10 = 0x15 - *(char *)((long)piVar33 + 0x15);
        }
        if (iVar10 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar34 = *(int **)(piVar33 + 2);
          if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
            piVar34 = piVar33;
          }
          if ((piVar34 == (int *)puVar8) ||
             (iVar10 = memcmp(puVar8,piVar34,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar10 == 0
             )) goto LAB_00d8de90;
        }
        lVar38 = lVar38 + -0x30;
        piVar33 = piVar33 + 0xc;
      } while (lVar38 != 0);
LAB_00d8dea0:
      pGVar14 = (GenericValue *)
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
    }
    fVar39 = (float)_getNumber(pGVar14,DataParser::X,0.0);
    *(float *)(this_00 + 0x38) = fVar39 * *(float *)(this_00 + 0x1c);
    fVar39 = (float)_getNumber(pGVar14,DataParser::Y,0.0);
    *(float *)(this_00 + 0x3c) = fVar39 * *(float *)(this_00 + 0x1c);
    fVar39 = (float)_getNumber(pGVar14,DataParser::WIDTH,0.0);
    *(float *)(this_00 + 0x40) = fVar39 * *(float *)(this_00 + 0x1c);
    fVar39 = (float)_getNumber(pGVar14,DataParser::HEIGHT,0.0);
    *(float *)(this_00 + 0x44) = fVar39 * *(float *)(this_00 + 0x1c);
  }
  puVar8 = DataParser::BONE;
  pcVar27 = DataParser::BONE + -1;
  pcVar23 = pcVar27;
  do {
    pcVar23 = pcVar23 + 1;
                    /* try { // try from 00d8df58 to 00e8e023 has its CatchHandler @ 00d8df58
                       catch() { ... } // from try @ 00d8df58 with catch @ 00d8df58
                       catch() { ... } // from try @ 00d8ec2c with catch @ 00d8df58
                       catch() { ... } // from try @ 00d8f6e8 with catch @ 00d8df58
                       catch() { ... } // from try @ 00d8f978 with catch @ 00d8df58 */
  } while (*pcVar23 != '\0');
  piVar33 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar35 = (ulong)uVar5;
  piVar25 = piVar33 + uVar35 * 0xc;
  piVar34 = piVar33;
  if (uVar5 != 0) {
    uVar36 = (long)pcVar23 - (long)DataParser::BONE;
    lVar38 = uVar35 * 0x30;
    piVar28 = piVar33;
    do {
      iVar10 = *piVar28;
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar10 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
      if (iVar10 == (int)uVar36) {
        piVar2 = *(int **)(piVar28 + 2);
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar2 = piVar28;
        }
        piVar34 = piVar28;
        if ((piVar2 == (int *)puVar8) ||
           (iVar10 = memcmp(puVar8,piVar2,uVar36 & 0xffffffff), iVar10 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar28 = piVar28 + 0xc;
      piVar34 = piVar25;
    } while (lVar38 != 0);
  }
  if (piVar25 != piVar34) {
    do {
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d8e074:
      if (piVar33 != piVar25) {
        uVar5 = piVar33[6];
        if (uVar5 != 0) {
          uVar35 = 0;
          this = (__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
                  *)(param_1 + 0x210);
          do {
            local_a8 = 0;
            local_a0 = (void *)0x0;
            local_b0 = (__tree_end_node *)0x0;
            pJVar30 = (JSONDataParser *)(*(long *)(piVar33 + 8) + uVar35 * 0x18);
            _getString(pJVar30,(GenericValue *)DataParser::PARENT,(char *)&local_b0,in_x3);
            if (((ulong)local_b0 & 1) != 0) {
              operator_delete(local_a0);
            }
            pBVar12 = (BoneData *)(**(code **)(*(long *)param_1 + 0x28))(param_1,pJVar30);
            sVar22 = local_98 >> 1 & 0x7f;
            if ((local_98 & 1) != 0) {
              sVar22 = sStack_90;
            }
            if (sVar22 != 0) {
              pAVar26 = (ArmatureData *)
                        std::__ndk1::
                        __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                        ::
                        find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                  ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                                    *)(this_00 + 0xc0),(basic_string *)&local_98);
              if ((this_00 + 200 == pAVar26) || (*(long *)(pAVar26 + 0x38) == 0)) {
                pp_Var15 = std::__ndk1::
                           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
                           ::
                           __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                     (this,&local_b0,(basic_string *)&local_98);
                p_Var37 = *pp_Var15;
                if (p_Var37 == (__tree_node_base *)0x0) {
                  p_Var37 = operator_new(0x50);
                  pvVar32 = local_88;
                  sVar22 = sStack_90;
                  *(undefined8 *)(p_Var37 + 0x20) = 0;
                  *(undefined8 *)(p_Var37 + 0x28) = 0;
                  *(undefined8 *)(p_Var37 + 0x30) = 0;
                  if ((local_98 & 1) == 0) {
                    *(void **)(p_Var37 + 0x30) = local_88;
                    *(size_t *)(p_Var37 + 0x28) = sStack_90;
                    *(ulong *)(p_Var37 + 0x20) = local_98;
                  }
                  else {
                    if (0xffffffffffffffef < sStack_90) goto LAB_00d8f22c;
                    if (sStack_90 < 0x17) {
                      p_Var13 = p_Var37 + 0x21;
                      p_Var37[0x20] = SUB41((int)sStack_90 << 1,0);
                      if (sStack_90 != 0) goto LAB_00d8e1f8;
                    }
                    else {
                      uVar36 = sStack_90 + 0x10 & 0xfffffffffffffff0;
                      p_Var13 = operator_new(uVar36);
                      *(size_t *)(p_Var37 + 0x28) = sVar22;
                      *(__tree_node_base **)(p_Var37 + 0x30) = p_Var13;
                      *(ulong *)(p_Var37 + 0x20) = uVar36 | 1;
LAB_00d8e1f8:
                      memcpy(p_Var13,pvVar32,sVar22);
                    }
                    p_Var13[sVar22] = (__tree_node_base)0x0;
                  }
                  *(undefined8 *)(p_Var37 + 0x38) = 0;
                  *(undefined8 *)(p_Var37 + 0x40) = 0;
                  *(undefined8 *)(p_Var37 + 0x48) = 0;
                  *(undefined8 *)p_Var37 = 0;
                  *(undefined8 *)(p_Var37 + 8) = 0;
                  *(__tree_end_node **)(p_Var37 + 0x10) = local_b0;
                  *pp_Var15 = p_Var37;
                  p_Var13 = p_Var37;
                  if (**(long **)this != 0) {
                    *(long *)this = **(long **)this;
                    p_Var13 = *pp_Var15;
                  }
                  std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                            (*(__tree_node_base **)(param_1 + 0x218),p_Var13);
                  *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + 1;
                }
                puVar29 = *(undefined8 **)(p_Var37 + 0x40);
                if (puVar29 == *(undefined8 **)(p_Var37 + 0x48)) {
                  pvVar32 = *(void **)(p_Var37 + 0x38);
                  sVar22 = (long)puVar29 - (long)pvVar32;
                  uVar36 = ((long)sVar22 >> 3) + 1;
                  if (uVar36 >> 0x3d != 0) goto LAB_00d8f22c;
                  lVar38 = (long)*(undefined8 **)(p_Var37 + 0x48) - (long)pvVar32;
                  if ((ulong)(lVar38 >> 3) < 0xfffffffffffffff) {
                    uVar24 = lVar38 >> 2;
                    if (uVar36 <= uVar24) {
                      uVar36 = uVar24;
                    }
                    if (uVar36 != 0) {
                      if (uVar36 >> 0x3d == 0) goto LAB_00d8e2b4;
                      goto LAB_00d8f22c;
                    }
                    pvVar16 = (void *)0x0;
                  }
                  else {
                    uVar36 = 0x1fffffffffffffff;
LAB_00d8e2b4:
                    pvVar16 = operator_new(uVar36 << 3);
                  }
                  puVar29 = (undefined8 *)((long)pvVar16 + ((long)sVar22 >> 3) * 8);
                  *puVar29 = pBVar12;
                  if (0 < (long)sVar22) {
                    memcpy(pvVar16,pvVar32,sVar22);
                  }
                  *(void **)(p_Var37 + 0x38) = pvVar16;
                  *(undefined8 **)(p_Var37 + 0x40) = puVar29 + 1;
                  *(void **)(p_Var37 + 0x48) = (void *)((long)pvVar16 + uVar36 * 8);
                  if (pvVar32 != (void *)0x0) {
                    operator_delete(pvVar32);
                  }
                }
                else {
                  *puVar29 = pBVar12;
                  *(undefined8 **)(p_Var37 + 0x40) = puVar29 + 1;
                }
              }
              else {
                *(long *)(pBVar12 + 0x50) = *(long *)(pAVar26 + 0x38);
              }
            }
            pbVar1 = (basic_string *)(pBVar12 + 0x18);
            pGVar14 = (GenericValue *)
                      std::__ndk1::
                      __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
                      ::
                      find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                (this,pbVar1);
            if (param_1 + 0x218 != pGVar14) {
              pp_Var15 = std::__ndk1::
                         __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
                         ::
                         __find_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                   (this,&local_b0,pbVar1);
              p_Var37 = *pp_Var15;
              if (p_Var37 == (__tree_node_base *)0x0) {
                p_Var37 = operator_new(0x50);
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)(p_Var37 + 0x20),pbVar1);
                *(undefined8 *)(p_Var37 + 0x38) = 0;
                *(undefined8 *)(p_Var37 + 0x40) = 0;
                *(undefined8 *)(p_Var37 + 0x48) = 0;
                *(undefined8 *)p_Var37 = 0;
                *(undefined8 *)(p_Var37 + 8) = 0;
                *(__tree_end_node **)(p_Var37 + 0x10) = local_b0;
                *pp_Var15 = p_Var37;
                p_Var13 = p_Var37;
                if (**(long **)this != 0) {
                  *(long *)this = **(long **)this;
                  p_Var13 = *pp_Var15;
                }
                std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                          (*(__tree_node_base **)(param_1 + 0x218),p_Var13);
                *(long *)(param_1 + 0x220) = *(long *)(param_1 + 0x220) + 1;
              }
              plVar3 = *(long **)(p_Var37 + 0x40);
              for (plVar21 = *(long **)(p_Var37 + 0x38); plVar21 != plVar3; plVar21 = plVar21 + 1) {
                *(BoneData **)(*plVar21 + 0x50) = pBVar12;
              }
              std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<dragonBones::BoneData*,std::__ndk1::allocator<dragonBones::BoneData*>>>>>
              ::erase(this,pGVar14);
            }
            ArmatureData::addBone(this_00,pBVar12);
            puVar29 = *(undefined8 **)(param_1 + 0x18);
            if (puVar29 == *(undefined8 **)(param_1 + 0x20)) {
              pvVar32 = *(void **)(param_1 + 0x10);
              sVar22 = (long)puVar29 - (long)pvVar32;
              uVar36 = ((long)sVar22 >> 3) + 1;
              if (uVar36 >> 0x3d != 0) goto LAB_00d8f22c;
              lVar38 = (long)*(undefined8 **)(param_1 + 0x20) - (long)pvVar32;
              if ((ulong)(lVar38 >> 3) < 0xfffffffffffffff) {
                uVar24 = lVar38 >> 2;
                if (uVar36 <= uVar24) {
                  uVar36 = uVar24;
                }
                if (uVar36 != 0) {
                  if (uVar36 >> 0x3d == 0) goto LAB_00d8e43c;
                  goto LAB_00d8f22c;
                }
                pvVar16 = (void *)0x0;
              }
              else {
                uVar36 = 0x1fffffffffffffff;
LAB_00d8e43c:
                pvVar16 = operator_new(uVar36 << 3);
              }
              puVar29 = (undefined8 *)((long)pvVar16 + ((long)sVar22 >> 3) * 8);
              *puVar29 = pBVar12;
              if (0 < (long)sVar22) {
                memcpy(pvVar16,pvVar32,sVar22);
              }
              *(void **)(param_1 + 0x10) = pvVar16;
              *(undefined8 **)(param_1 + 0x18) = puVar29 + 1;
              *(void **)(param_1 + 0x20) = (void *)((long)pvVar16 + uVar36 * 8);
              if (pvVar32 != (void *)0x0) {
                operator_delete(pvVar32);
              }
            }
            else {
              *puVar29 = pBVar12;
              *(undefined8 **)(param_1 + 0x18) = puVar29 + 1;
            }
            if ((local_98 & 1) != 0) {
              operator_delete(local_88);
            }
            uVar35 = uVar35 + 1;
          } while (uVar35 != uVar5);
        }
        goto LAB_00d8e4bc;
      }
    }
    else {
      lVar38 = uVar35 * 0x30;
      do {
        iVar10 = *piVar33;
        if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
          iVar10 = 0x15 - *(char *)((long)piVar33 + 0x15);
        }
        if (iVar10 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar34 = *(int **)(piVar33 + 2);
          if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
            piVar34 = piVar33;
          }
          if ((piVar34 == (int *)puVar8) ||
             (iVar10 = memcmp(puVar8,piVar34,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar10 == 0
             )) goto LAB_00d8e074;
        }
                    /* try { // try from 00d8e024 to 00e8e03b has its CatchHandler @ 00d8fb34 */
        lVar38 = lVar38 + -0x30;
        piVar33 = piVar33 + 0xc;
      } while (lVar38 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
LAB_00d8e4bc:
  puVar8 = DataParser::IK;
  pcVar27 = DataParser::IK + -1;
  pcVar23 = pcVar27;
  do {
    pcVar23 = pcVar23 + 1;
  } while (*pcVar23 != '\0');
  piVar33 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar35 = (ulong)uVar5;
  piVar25 = piVar33 + uVar35 * 0xc;
  piVar34 = piVar33;
  if (uVar5 != 0) {
    uVar36 = (long)pcVar23 - (long)DataParser::IK;
    lVar38 = uVar35 * 0x30;
    piVar28 = piVar33;
    do {
      iVar10 = *piVar28;
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar10 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
      if (iVar10 == (int)uVar36) {
        piVar2 = *(int **)(piVar28 + 2);
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar2 = piVar28;
        }
        piVar34 = piVar28;
        if ((piVar2 == (int *)puVar8) ||
           (iVar10 = memcmp(puVar8,piVar2,uVar36 & 0xffffffff), iVar10 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar28 = piVar28 + 0xc;
      piVar34 = piVar25;
    } while (lVar38 != 0);
  }
  if (piVar25 != piVar34) {
    do {
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d8e5f4:
      if (piVar33 != piVar25) {
        uVar5 = piVar33[6];
        if (uVar5 != 0) {
          lVar38 = 0;
          do {
            pCVar17 = (ConstraintData *)
                      (**(code **)(*(long *)param_1 + 0x30))
                                (param_1,*(long *)(piVar33 + 8) + lVar38);
            if (pCVar17 != (ConstraintData *)0x0) {
              ArmatureData::addConstraint(this_00,pCVar17);
            }
            lVar38 = lVar38 + 0x18;
          } while ((ulong)uVar5 * 0x18 - lVar38 != 0);
        }
        goto LAB_00d8e65c;
      }
    }
    else {
      lVar38 = uVar35 * 0x30;
      do {
        iVar10 = *piVar33;
        if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
          iVar10 = 0x15 - *(char *)((long)piVar33 + 0x15);
        }
        if (iVar10 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar34 = *(int **)(piVar33 + 2);
          if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
            piVar34 = piVar33;
          }
          if ((piVar34 == (int *)puVar8) ||
             (iVar10 = memcmp(puVar8,piVar34,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar10 == 0
             )) goto LAB_00d8e5f4;
        }
        lVar38 = lVar38 + -0x30;
        piVar33 = piVar33 + 0xc;
      } while (lVar38 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
LAB_00d8e65c:
  ArmatureData::sortBones(this_00);
  puVar8 = DataParser::SLOT;
  pcVar27 = DataParser::SLOT + -1;
  pcVar23 = pcVar27;
  do {
    pcVar23 = pcVar23 + 1;
  } while (*pcVar23 != '\0');
  piVar33 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar35 = (ulong)uVar5;
  piVar25 = piVar33 + uVar35 * 0xc;
  piVar34 = piVar33;
  if (uVar5 != 0) {
    uVar36 = (long)pcVar23 - (long)DataParser::SLOT;
    lVar38 = uVar35 * 0x30;
    piVar28 = piVar33;
    do {
      iVar10 = *piVar28;
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar10 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
      if (iVar10 == (int)uVar36) {
        piVar2 = *(int **)(piVar28 + 2);
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar2 = piVar28;
        }
        piVar34 = piVar28;
        if ((piVar2 == (int *)puVar8) ||
           (iVar10 = memcmp(puVar8,piVar2,uVar36 & 0xffffffff), iVar10 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar28 = piVar28 + 0xc;
      piVar34 = piVar25;
    } while (lVar38 != 0);
  }
  if (piVar25 != piVar34) {
    do {
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d8e79c:
      if (piVar33 != piVar25) {
        uVar5 = piVar33[6];
        if (uVar5 != 0) {
          lVar38 = 0;
          iVar10 = 0;
          do {
            pSVar18 = (SlotData *)
                      (**(code **)(*(long *)param_1 + 0x38))
                                (param_1,*(long *)(piVar33 + 8) + lVar38,iVar10);
            ArmatureData::addSlot(this_00,pSVar18);
            lVar38 = lVar38 + 0x18;
            iVar10 = iVar10 + 1;
          } while ((ulong)uVar5 * 0x18 - lVar38 != 0);
        }
        goto LAB_00d8e808;
      }
    }
    else {
      lVar38 = uVar35 * 0x30;
      do {
        iVar10 = *piVar33;
        if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
          iVar10 = 0x15 - *(char *)((long)piVar33 + 0x15);
        }
        if (iVar10 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar34 = *(int **)(piVar33 + 2);
          if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
            piVar34 = piVar33;
          }
          if ((piVar34 == (int *)puVar8) ||
             (iVar10 = memcmp(puVar8,piVar34,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar10 == 0
             )) goto LAB_00d8e79c;
        }
        lVar38 = lVar38 + -0x30;
        piVar33 = piVar33 + 0xc;
      } while (lVar38 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
LAB_00d8e808:
  puVar8 = DataParser::SKIN;
  pcVar27 = DataParser::SKIN + -1;
  pcVar23 = pcVar27;
  do {
    pcVar23 = pcVar23 + 1;
  } while (*pcVar23 != '\0');
  piVar33 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar35 = (ulong)uVar5;
  piVar25 = piVar33 + uVar35 * 0xc;
  piVar34 = piVar33;
  if (uVar5 != 0) {
    uVar36 = (long)pcVar23 - (long)DataParser::SKIN;
    lVar38 = uVar35 * 0x30;
    piVar28 = piVar33;
    do {
      iVar10 = *piVar28;
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar10 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
      if (iVar10 == (int)uVar36) {
        piVar2 = *(int **)(piVar28 + 2);
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar2 = piVar28;
        }
        piVar34 = piVar28;
        if ((piVar2 == (int *)puVar8) ||
           (iVar10 = memcmp(puVar8,piVar2,uVar36 & 0xffffffff), iVar10 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar28 = piVar28 + 0xc;
      piVar34 = piVar25;
    } while (lVar38 != 0);
  }
  if (piVar25 != piVar34) {
    do {
      pcVar27 = pcVar27 + 1;
                    /* try { // try from 00d8e8d0 to 00e8eb77 has its CatchHandler @ 00d8fb18 */
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d8e940:
      if (piVar33 != piVar25) {
        uVar5 = piVar33[6];
        if (uVar5 != 0) {
          lVar38 = 0;
          do {
            pSVar19 = (SkinData *)
                      (**(code **)(*(long *)param_1 + 0x40))
                                (param_1,*(long *)(piVar33 + 8) + lVar38);
            ArmatureData::addSkin(this_00,pSVar19);
            lVar38 = lVar38 + 0x18;
          } while ((ulong)uVar5 * 0x18 - lVar38 != 0);
        }
        goto LAB_00d8e9a0;
      }
    }
    else {
      lVar38 = uVar35 * 0x30;
      do {
        iVar10 = *piVar33;
        if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
          iVar10 = 0x15 - *(char *)((long)piVar33 + 0x15);
        }
        if (iVar10 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar34 = *(int **)(piVar33 + 2);
          if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
            piVar34 = piVar33;
          }
          if ((piVar34 == (int *)puVar8) ||
             (iVar10 = memcmp(puVar8,piVar34,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar10 == 0
             )) goto LAB_00d8e940;
        }
        lVar38 = lVar38 + -0x30;
        piVar33 = piVar33 + 0xc;
      } while (lVar38 != 0);
    }
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
    DAT_01785a60 = 0;
  }
LAB_00d8e9a0:
  lVar38 = *(long *)(param_1 + 0x198);
  lVar6 = *(long *)(param_1 + 0x1a0) - lVar38;
  if (lVar6 != 0) {
    uVar35 = 0;
    do {
      pJVar30 = *(JSONDataParser **)(lVar38 + uVar35 * 8);
      local_a8 = 0;
      local_a0 = (void *)0x0;
      local_b0 = (__tree_end_node *)0x0;
      _getString(pJVar30,(GenericValue *)DataParser::SHARE,(char *)&local_b0,in_x3);
      if (((ulong)local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      __src = DataParser::DEFAULT_NAME;
      puVar8 = DataParser::SKIN;
      sVar22 = local_98 >> 1 & 0x7f;
      if ((local_98 & 1) != 0) {
        sVar22 = sStack_90;
      }
      if (sVar22 != 0) {
        local_c8 = 0;
        local_c0 = 0;
        local_b8 = (void *)0x0;
        sVar22 = strlen(DataParser::DEFAULT_NAME);
        if (0xffffffffffffffef < sVar22) goto LAB_00d8f22c;
        if (sVar22 < 0x17) {
          local_c8 = CONCAT71(local_c8._1_7_,(char)((int)sVar22 << 1));
          pvVar32 = (void *)((ulong)&local_c8 | 1);
          if (sVar22 != 0) goto LAB_00d8eaac;
        }
        else {
          uVar36 = sVar22 + 0x10 & 0xfffffffffffffff0;
          pvVar32 = operator_new(uVar36);
          local_c8 = uVar36 | 1;
          local_c0 = sVar22;
          local_b8 = pvVar32;
LAB_00d8eaac:
          memcpy(pvVar32,__src,sVar22);
        }
        *(undefined1 *)((long)pvVar32 + sVar22) = 0;
        _getString(pJVar30,(GenericValue *)puVar8,(char *)&local_c8,in_x3);
        if ((local_c8 & 1) != 0) {
          operator_delete(local_b8);
        }
        puVar8 = DataParser::DEFAULT_NAME;
        uVar36 = (ulong)local_b0 >> 1 & 0x7f;
        if (((ulong)local_b0 & 1) != 0) {
          uVar36 = local_a8;
        }
        if (uVar36 == 0) {
          sVar22 = strlen(DataParser::DEFAULT_NAME);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_b0,puVar8,sVar22);
        }
        in_x3 = (basic_string *)&local_98;
        local_c0 = 0;
        local_b8 = (void *)0x0;
        local_c8 = 0;
        lVar38 = ArmatureData::getMesh
                           (this_00,(basic_string *)&local_b0,(basic_string *)&local_c8,in_x3);
        if ((local_c8 & 1) != 0) {
          operator_delete(local_b8);
        }
        if (lVar38 != 0) {
          VerticesData::shareFrom
                    ((VerticesData *)(*(long *)(*(long *)(param_1 + 0x1b0) + uVar35 * 8) + 0x68),
                     (VerticesData *)(lVar38 + 0x68));
        }
        if (((ulong)local_b0 & 1) != 0) {
          operator_delete(local_a0);
        }
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      uVar35 = uVar35 + 1;
                    /* try { // try from 00d8eb88 to 00e8eb97 has its CatchHandler @ 00d8faac */
      if ((ulong)(lVar6 >> 3) <= uVar35) break;
      lVar38 = *(long *)(param_1 + 0x198);
    } while( true );
  }
  puVar8 = DataParser::ANIMATION;
  pcVar27 = DataParser::ANIMATION + -1;
  pcVar23 = pcVar27;
  do {
    pcVar23 = pcVar23 + 1;
  } while (*pcVar23 != '\0');
  piVar33 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar35 = (ulong)uVar5;
  piVar25 = piVar33 + uVar35 * 0xc;
  piVar34 = piVar33;
  if (uVar5 != 0) {
                    /* try { // try from 00d8ebd4 to 00e8ec17 has its CatchHandler @ 00d8fb18 */
    uVar36 = (long)pcVar23 - (long)DataParser::ANIMATION;
    lVar38 = uVar35 * 0x30;
    piVar28 = piVar33;
    do {
      iVar10 = *piVar28;
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar10 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
      if (iVar10 == (int)uVar36) {
        piVar2 = *(int **)(piVar28 + 2);
                    /* try { // try from 00d8ec24 to 00e8ec2b has its CatchHandler @ 00d8faac */
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar2 = piVar28;
        }
        piVar34 = piVar28;
                    /* try { // try from 00d8ec2c to 00e8ec57 has its CatchHandler @ 00d8df58 */
        if ((piVar2 == (int *)puVar8) ||
           (iVar10 = memcmp(puVar8,piVar2,uVar36 & 0xffffffff), iVar10 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar28 = piVar28 + 0xc;
      piVar34 = piVar25;
    } while (lVar38 != 0);
  }
  if (piVar25 != piVar34) {
    do {
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d8ecd0:
      if (piVar33 != piVar25) {
        uVar5 = piVar33[6];
        if (uVar5 != 0) {
          lVar38 = 0;
          do {
            pAVar20 = (AnimationData *)
                      (**(code **)(*(long *)param_1 + 0x70))
                                (param_1,*(long *)(piVar33 + 8) + lVar38);
                    /* try { // try from 00d8ed0c to 00e8ed17 has its CatchHandler @ 00d8faa4 */
            ArmatureData::addAnimation(this_00,pAVar20);
            lVar38 = lVar38 + 0x18;
          } while ((ulong)uVar5 * 0x18 - lVar38 != 0);
        }
        goto LAB_00d8ed30;
      }
    }
    else {
      lVar38 = uVar35 * 0x30;
      do {
                    /* try { // try from 00d8ec90 to 00e8ed07 has its CatchHandler @ 00d8fb18 */
        iVar10 = *piVar33;
        if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
          iVar10 = 0x15 - *(char *)((long)piVar33 + 0x15);
        }
        if (iVar10 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar34 = *(int **)(piVar33 + 2);
          if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
            piVar34 = piVar33;
          }
          if ((piVar34 == (int *)puVar8) ||
             (iVar10 = memcmp(puVar8,piVar34,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar10 == 0
             )) goto LAB_00d8ecd0;
        }
        lVar38 = lVar38 + -0x30;
        piVar33 = piVar33 + 0xc;
      } while (lVar38 != 0);
    }
                    /* try { // try from 00d8ed24 to 00e8ed2b has its CatchHandler @ 00d8fa9c */
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
                    /* try { // try from 00d8ed2c to 00e8ed33 has its CatchHandler @ 00d8fa98 */
    DAT_01785a60 = 0;
  }
LAB_00d8ed30:
  puVar8 = DataParser::DEFAULT_ACTIONS;
  pcVar27 = DataParser::DEFAULT_ACTIONS + -1;
  pcVar23 = pcVar27;
  do {
    pcVar23 = pcVar23 + 1;
                    /* try { // try from 00d8ed48 to 00e8ed4f has its CatchHandler @ 00d8fac0 */
  } while (*pcVar23 != '\0');
  piVar33 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar35 = (ulong)uVar5;
                    /* try { // try from 00d8ed58 to 00e8ed6f has its CatchHandler @ 00d8fb14 */
  piVar25 = piVar33 + uVar35 * 0xc;
  piVar34 = piVar33;
  if (uVar5 != 0) {
    uVar36 = (long)pcVar23 - (long)DataParser::DEFAULT_ACTIONS;
                    /* try { // try from 00d8ed70 to 00e8ed93 has its CatchHandler @ 00d8fae4 */
    lVar38 = uVar35 * 0x30;
    piVar28 = piVar33;
    do {
      iVar10 = *piVar28;
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar10 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
      if (iVar10 == (int)uVar36) {
        piVar2 = *(int **)(piVar28 + 2);
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar2 = piVar28;
        }
        piVar34 = piVar28;
        if ((piVar2 == (int *)puVar8) ||
           (iVar10 = memcmp(puVar8,piVar2,uVar36 & 0xffffffff), iVar10 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar28 = piVar28 + 0xc;
      piVar34 = piVar25;
    } while (lVar38 != 0);
  }
  if (piVar25 != piVar34) {
    do {
      pcVar27 = pcVar27 + 1;
    } while (*pcVar27 != '\0');
    if (uVar5 == 0) {
LAB_00d8ee68:
      if (piVar33 == piVar25) goto LAB_00d8ee78;
      piVar33 = piVar33 + 6;
    }
    else {
      lVar38 = uVar35 * 0x30;
      do {
        iVar10 = *piVar33;
        if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
          iVar10 = 0x15 - *(char *)((long)piVar33 + 0x15);
        }
        if (iVar10 == (int)((long)pcVar27 - (long)puVar8)) {
          piVar34 = *(int **)(piVar33 + 2);
          if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
            piVar34 = piVar33;
          }
          if ((piVar34 == (int *)puVar8) ||
             (iVar10 = memcmp(puVar8,piVar34,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar10 == 0
             )) goto LAB_00d8ee68;
        }
        lVar38 = lVar38 + -0x30;
        piVar33 = piVar33 + 0xc;
      } while (lVar38 != 0);
LAB_00d8ee78:
      piVar33 = (int *)&rapidjson::
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
    plVar21 = (long *)(**(code **)(*(long *)param_1 + 0xf0))(param_1,piVar33,0,0,0);
    puVar29 = (undefined8 *)*plVar21;
    puVar4 = (undefined8 *)plVar21[1];
    if (puVar29 != puVar4) {
      do {
        pAVar31 = (ActionData *)*puVar29;
        ArmatureData::addAction(this_00,pAVar31,true);
        if (((*(int *)(pAVar31 + 0x10) == 0) &&
            (pAVar26 = (ArmatureData *)
                       std::__ndk1::
                       __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                       ::
                       find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                                 ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::AnimationData*>>>
                                   *)(this_00 + 0x120),(basic_string *)(pAVar31 + 0x18)),
            this_00 + 0x128 != pAVar26)) && (*(long *)(pAVar26 + 0x38) != 0)) {
          *(long *)(this_00 + 0x140) = *(long *)(pAVar26 + 0x38);
        }
        puVar29 = puVar29 + 1;
      } while (puVar4 != puVar29);
    }
  }
  puVar8 = DataParser::ACTIONS;
  pcVar27 = DataParser::ACTIONS + -1;
  pcVar23 = pcVar27;
  do {
    pcVar23 = pcVar23 + 1;
  } while (*pcVar23 != '\0');
  piVar33 = *(int **)(in_x1 + 8);
  uVar5 = *(uint *)in_x1;
  uVar35 = (ulong)uVar5;
  piVar25 = piVar33 + uVar35 * 0xc;
  piVar34 = piVar33;
  if (uVar5 != 0) {
    uVar36 = (long)pcVar23 - (long)DataParser::ACTIONS;
    lVar38 = uVar35 * 0x30;
    piVar28 = piVar33;
    do {
      iVar10 = *piVar28;
      if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
        iVar10 = 0x15 - *(char *)((long)piVar28 + 0x15);
      }
      if (iVar10 == (int)uVar36) {
        piVar2 = *(int **)(piVar28 + 2);
        if ((*(ushort *)((long)piVar28 + 0x16) & 0x1000) != 0) {
          piVar2 = piVar28;
        }
        piVar34 = piVar28;
        if ((piVar2 == (int *)puVar8) ||
           (iVar10 = memcmp(puVar8,piVar2,uVar36 & 0xffffffff), iVar10 == 0)) break;
      }
      lVar38 = lVar38 + -0x30;
      piVar28 = piVar28 + 0xc;
      piVar34 = piVar25;
    } while (lVar38 != 0);
  }
  if (piVar25 == piVar34) goto LAB_00d8f09c;
  do {
    pcVar27 = pcVar27 + 1;
  } while (*pcVar27 != '\0');
  if (uVar5 == 0) {
LAB_00d8f03c:
    if (piVar33 == piVar25) goto LAB_00d8f04c;
    piVar33 = piVar33 + 6;
  }
  else {
    lVar38 = uVar35 * 0x30;
    do {
      iVar10 = *piVar33;
      if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
        iVar10 = 0x15 - *(char *)((long)piVar33 + 0x15);
      }
      if (iVar10 == (int)((long)pcVar27 - (long)puVar8)) {
        piVar34 = *(int **)(piVar33 + 2);
        if ((*(ushort *)((long)piVar33 + 0x16) & 0x1000) != 0) {
          piVar34 = piVar33;
        }
        if ((piVar34 == (int *)puVar8) ||
           (iVar10 = memcmp(puVar8,piVar34,(long)pcVar27 - (long)puVar8 & 0xffffffff), iVar10 == 0))
        goto LAB_00d8f03c;
      }
      lVar38 = lVar38 + -0x30;
      piVar33 = piVar33 + 0xc;
    } while (lVar38 != 0);
LAB_00d8f04c:
    piVar33 = (int *)&rapidjson::
                      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                      ::
                      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                      ::buffer;
    rapidjson::
    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
    ::buffer = 0;
    DAT_01785a58 = 0;
                    /* try { // try from 00d8f058 to 00e8f1eb has its CatchHandler @ 00d8fac4 */
    DAT_01785a60 = 0;
  }
  plVar21 = (long *)(**(code **)(*(long *)param_1 + 0xf0))(param_1,piVar33,0,0,0);
  puVar4 = (undefined8 *)plVar21[1];
  for (puVar29 = (undefined8 *)*plVar21; puVar29 != puVar4; puVar29 = puVar29 + 1) {
    ArmatureData::addAction(this_00,(ActionData *)*puVar29,false);
  }
LAB_00d8f09c:
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
  if (*(long *)(lVar7 + 0x28) == local_80) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

