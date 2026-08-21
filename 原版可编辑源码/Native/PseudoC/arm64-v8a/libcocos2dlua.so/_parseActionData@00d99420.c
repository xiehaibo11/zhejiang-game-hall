
/* dragonBones::JSONDataParser::_parseActionData(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, dragonBones::ActionType,
   dragonBones::BoneData*, dragonBones::SlotData*) */

undefined8 * __thiscall
dragonBones::JSONDataParser::_parseActionData
          (JSONDataParser *this,uint *param_1,int param_3,basic_string *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  uint *__s;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined4 uVar10;
  ActionData *pAVar11;
  undefined8 *puVar12;
  size_t sVar13;
  void *pvVar14;
  GenericValue *__s1;
  basic_string *pbVar15;
  char *pcVar16;
  undefined8 uVar17;
  GenericValue *this_00;
  GenericValue *pGVar18;
  long lVar19;
  ulong uVar20;
  ActionData *pAVar21;
  int *piVar22;
  long lVar23;
  ulong uVar24;
  int *piVar25;
  char *pcVar26;
  int *piVar27;
  ulong uVar28;
  int *piVar29;
  UserData *pUVar30;
  double dVar31;
  ulong local_b8;
  size_t local_b0;
  void *local_a8;
  ulong local_a0 [2];
  void *local_90;
  ulong local_88;
  size_t sStack_80;
  void *local_78;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
                    /* try { // try from 00d99464 to 00e9946f has its CatchHandler @ 00d99744 */
  pbVar15 = param_4;
  if (((DAT_01787d30 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_01787d30), iVar9 != 0)) {
    DAT_01787d18 = (undefined8 *)0x0;
    DAT_01787d20 = (undefined8 *)0x0;
    DAT_01787d28 = (undefined8 *)0x0;
    __cxa_atexit(FUN_00d9a374,&DAT_01787d18,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01787d30);
  }
  DAT_01787d20 = DAT_01787d18;
  if ((*(ushort *)((long)param_1 + 0x16) >> 10 & 1) == 0) {
    if ((*(ushort *)((long)param_1 + 0x16) == 4) && (uVar3 = *param_1, uVar3 != 0)) {
                    /* try { // try from 00d994ac to 00e994bb has its CatchHandler @ 00d997bc */
      uVar24 = 0;
      do {
        lVar19 = *(long *)(param_1 + 2);
        pAVar11 = BaseObject::borrowObject<dragonBones::ActionData>();
        __s1 = (GenericValue *)DataParser::GOTO_AND_PLAY;
                    /* try { // try from 00d99528 to 00e99537 has its CatchHandler @ 00d997d4 */
        pcVar16 = DataParser::GOTO_AND_PLAY + -1;
        do {
          pcVar16 = pcVar16 + 1;
        } while (*pcVar16 != '\0');
        this_00 = (GenericValue *)(lVar19 + uVar24 * 0x18);
        pGVar18 = this_00 + 8;
        piVar29 = *(int **)pGVar18;
        uVar4 = *(uint *)this_00;
        uVar20 = (ulong)uVar4;
        piVar27 = piVar29 + uVar20 * 0xc;
        piVar22 = piVar29;
        if (uVar4 == 0) {
LAB_00d995c8:
          if (piVar27 == piVar22) goto LAB_00d99644;
          *(undefined4 *)(pAVar11 + 0x10) = 0;
                    /* try { // try from 00d995ec to 00e995f7 has its CatchHandler @ 00d997b8 */
        }
        else {
          uVar28 = (long)pcVar16 - (long)DataParser::GOTO_AND_PLAY;
          lVar19 = uVar20 * 0x30;
          do {
                    /* try { // try from 00d9958c to 00e995d3 has its CatchHandler @ 00d99770 */
            iVar9 = *piVar22;
            if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
              iVar9 = 0x15 - *(char *)((long)piVar22 + 0x15);
            }
            if (iVar9 == (int)uVar28) {
              piVar25 = *(int **)(piVar22 + 2);
              if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
                piVar25 = piVar22;
              }
              if (((GenericValue *)piVar25 == __s1) ||
                 (iVar9 = memcmp(__s1,piVar25,uVar28 & 0xffffffff), iVar9 == 0)) goto LAB_00d995c8;
            }
            lVar19 = lVar19 + -0x30;
            piVar22 = piVar22 + 0xc;
          } while (lVar19 != 0);
LAB_00d99644:
          puVar7 = DataParser::TYPE;
          pcVar26 = DataParser::TYPE + -1;
          pcVar16 = pcVar26;
          do {
            pcVar16 = pcVar16 + 1;
          } while (*pcVar16 != '\0');
          piVar22 = piVar29;
          if (uVar4 != 0) {
            uVar28 = (long)pcVar16 - (long)DataParser::TYPE;
            lVar19 = uVar20 * 0x30;
            piVar25 = piVar29;
            do {
              iVar9 = *piVar25;
              if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
                iVar9 = 0x15 - *(char *)((long)piVar25 + 0x15);
              }
              if (iVar9 == (int)uVar28) {
                piVar2 = *(int **)(piVar25 + 2);
                if ((*(ushort *)((long)piVar25 + 0x16) & 0x1000) != 0) {
                  piVar2 = piVar25;
                }
                piVar22 = piVar25;
                    /* try { // try from 00d996c0 to 00e99823 has its CatchHandler @ 00d99288 */
                if ((piVar2 == (int *)puVar7) ||
                   (iVar9 = memcmp(puVar7,piVar2,uVar28 & 0xffffffff), iVar9 == 0)) break;
              }
              lVar19 = lVar19 + -0x30;
              piVar25 = piVar25 + 0xc;
              piVar22 = piVar27;
            } while (lVar19 != 0);
          }
          pcVar16 = pcVar26;
          if (piVar27 != piVar22) {
            do {
              pcVar16 = pcVar16 + 1;
                    /* catch() { ... } // from try @ 00d99464 with catch @ 00d99744 */
            } while (*pcVar16 != '\0');
                    /* catch() { ... } // from try @ 00d992f8 with catch @ 00d99748 */
            if (uVar4 == 0) {
LAB_00d997b0:
              if (piVar29 != piVar27) {
                    /* catch() { ... } // from try @ 00d995ec with catch @ 00d997b8 */
                    /* catch() { ... } // from try @ 00d994ac with catch @ 00d997bc */
                if ((*(byte *)((long)piVar29 + 0x2f) >> 2 & 1) == 0) goto LAB_00d99854;
                do {
                    /* catch() { ... } // from try @ 00d99360 with catch @ 00d997c0 */
                  pcVar26 = pcVar26 + 1;
                    /* catch() { ... } // from try @ 00d9934c with catch @ 00d997c4 */
                } while (*pcVar26 != '\0');
                uVar4 = *(uint *)this_00;
                piVar29 = *(int **)pGVar18;
                    /* catch() { ... } // from try @ 00d99528 with catch @ 00d997d4 */
                piVar22 = piVar29;
                if (uVar4 == 0) {
LAB_00d9a134:
                    /* catch() { ... } // from try @ 00d9a0f8 with catch @ 00d9a138 */
                  if (piVar22 == piVar29 + (ulong)uVar4 * 0xc) goto LAB_00d9a154;
                  piVar29 = piVar22 + 6;
                  if ((*(byte *)((long)piVar22 + 0x2f) >> 4 & 1) == 0) goto LAB_00d9a164;
                }
                else {
                    /* catch() { ... } // from try @ 00d99508 with catch @ 00d997d8 */
                  lVar19 = (ulong)uVar4 * 0x30;
                  do {
                    iVar9 = *piVar22;
                    if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
                      iVar9 = 0x15 - *(char *)((long)piVar22 + 0x15);
                    }
                    if (iVar9 == (int)((long)pcVar26 - (long)puVar7)) {
                      piVar27 = *(int **)(piVar22 + 2);
                      if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
                        piVar27 = piVar22;
                      }
                      if ((piVar27 == (int *)puVar7) ||
                         (iVar9 = memcmp(puVar7,piVar27,(long)pcVar26 - (long)puVar7 & 0xffffffff),
                         iVar9 == 0)) goto LAB_00d9a134;
                    }
                    lVar19 = lVar19 + -0x30;
                    piVar22 = piVar22 + 0xc;
                  } while (lVar19 != 0);
LAB_00d9a154:
                  piVar29 = (int *)&rapidjson::
                                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                    ::
                                    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                                    ::buffer;
                  rapidjson::
                  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                  ::
                  operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                  ::buffer = 0;
                  DAT_01785a58 = 0;
                  DAT_01785a60 = 0;
LAB_00d9a164:
                  piVar29 = *(int **)(piVar29 + 2);
                }
                sStack_80 = 0;
                local_78 = (void *)0x0;
                local_88 = 0;
                sVar13 = strlen((char *)piVar29);
                if (sVar13 < 0xfffffffffffffff0) {
                  if (sVar13 < 0x17) {
                    local_88 = CONCAT71(local_88._1_7_,(char)((int)sVar13 << 1));
                    pvVar14 = (void *)((ulong)&local_88 | 1);
                    if (sVar13 != 0) goto LAB_00d9a1c0;
                  }
                  else {
                    uVar20 = sVar13 + 0x10 & 0xfffffffffffffff0;
                    pvVar14 = operator_new(uVar20);
                    local_88 = uVar20 | 1;
                    sStack_80 = sVar13;
                    local_78 = pvVar14;
LAB_00d9a1c0:
                    memcpy(pvVar14,piVar29,sVar13);
                  }
                  *(undefined1 *)((long)pvVar14 + sVar13) = 0;
                  uVar10 = DataParser::_getActionType((basic_string *)&local_88);
                  *(undefined4 *)(pAVar11 + 0x10) = uVar10;
                  __s1 = (GenericValue *)DataParser::NAME;
                  if ((local_88 & 1) != 0) {
                    operator_delete(local_78);
                    __s1 = (GenericValue *)DataParser::NAME;
                  }
                  goto LAB_00d99888;
                }
                goto LAB_00d9a2a0;
              }
            }
            else {
                    /* catch() { ... } // from try @ 00d992e8 with catch @ 00d99758 */
              lVar19 = uVar20 * 0x30;
              do {
                    /* catch() { ... } // from try @ 00d99630 with catch @ 00d9976c */
                    /* catch() { ... } // from try @ 00d9958c with catch @ 00d99770 */
                iVar9 = *piVar29;
                if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
                  iVar9 = 0x15 - *(char *)((long)piVar29 + 0x15);
                }
                if (iVar9 == (int)((long)pcVar16 - (long)puVar7)) {
                  piVar22 = *(int **)(piVar29 + 2);
                  if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
                    piVar22 = piVar29;
                  }
                  if ((piVar22 == (int *)puVar7) ||
                     (iVar9 = memcmp(puVar7,piVar22,(long)pcVar16 - (long)puVar7 & 0xffffffff),
                     iVar9 == 0)) goto LAB_00d997b0;
                }
                lVar19 = lVar19 + -0x30;
                piVar29 = piVar29 + 0xc;
                    /* catch() { ... } // from try @ 00d993c8 with catch @ 00d99768 */
              } while (lVar19 != 0);
            }
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
          }
LAB_00d99854:
          uVar10 = _getNumber(this_00,puVar7,param_3);
          *(undefined4 *)(pAVar11 + 0x10) = uVar10;
          __s1 = (GenericValue *)DataParser::NAME;
        }
LAB_00d99888:
        local_90 = (void *)0x0;
        local_a0[1] = 0;
        local_a0[0] = 0;
        _getString((JSONDataParser *)this_00,__s1,(char *)local_a0,pbVar15);
        pAVar21 = pAVar11 + 0x18;
        if (((byte)*pAVar21 & 1) == 0) {
          *(undefined2 *)pAVar21 = 0;
        }
        else {
          **(undefined1 **)(pAVar11 + 0x28) = 0;
          *(undefined8 *)(pAVar11 + 0x20) = 0;
          if (((byte)pAVar11[0x18] & 1) != 0) {
            operator_delete(*(void **)(pAVar11 + 0x28));
            *(undefined8 *)(pAVar11 + 0x18) = 0;
          }
        }
        *(void **)(pAVar11 + 0x28) = local_78;
        *(size_t *)(pAVar11 + 0x20) = sStack_80;
        *(ulong *)pAVar21 = local_88;
        sStack_80 = 0;
        local_78 = (void *)0x0;
        local_88 = 0;
        if ((local_a0[0] & 1) != 0) {
          operator_delete(local_90);
        }
        puVar7 = DataParser::BONE;
        pcVar16 = DataParser::BONE + -1;
        do {
          pcVar16 = pcVar16 + 1;
        } while (*pcVar16 != '\0');
        piVar22 = *(int **)pGVar18;
        uVar4 = *(uint *)this_00;
        piVar29 = piVar22 + (ulong)uVar4 * 0xc;
        if (uVar4 == 0) {
LAB_00d99984:
          if (piVar29 == piVar22) goto LAB_00d999ec;
          local_a0[1] = 0;
          local_90 = (void *)0x0;
          local_a0[0] = 0;
          _getString((JSONDataParser *)this_00,(GenericValue *)puVar7,(char *)local_a0,pbVar15);
          if ((local_a0[0] & 1) != 0) {
            operator_delete(local_90);
          }
          lVar23 = *(long *)(this + 0x30);
          lVar19 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                               *)(lVar23 + 0xc0),(basic_string *)&local_88);
          if (lVar23 + 200 == lVar19) {
            uVar17 = 0;
          }
          else {
            uVar17 = *(undefined8 *)(lVar19 + 0x38);
          }
          *(undefined8 *)(pAVar11 + 0x30) = uVar17;
          if ((local_88 & 1) != 0) {
            operator_delete(local_78);
          }
        }
        else {
          uVar20 = (long)pcVar16 - (long)DataParser::BONE;
          lVar19 = (ulong)uVar4 * 0x30;
          do {
            iVar9 = *piVar22;
            if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
              iVar9 = 0x15 - *(char *)((long)piVar22 + 0x15);
            }
            if (iVar9 == (int)uVar20) {
              piVar27 = *(int **)(piVar22 + 2);
              if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
                piVar27 = piVar22;
              }
              if ((piVar27 == (int *)puVar7) ||
                 (iVar9 = memcmp(puVar7,piVar27,uVar20 & 0xffffffff), iVar9 == 0))
              goto LAB_00d99984;
            }
            lVar19 = lVar19 + -0x30;
            piVar22 = piVar22 + 0xc;
          } while (lVar19 != 0);
LAB_00d999ec:
          *(basic_string **)(pAVar11 + 0x30) = param_4;
        }
        puVar7 = DataParser::SLOT;
        pcVar16 = DataParser::SLOT + -1;
        do {
          pcVar16 = pcVar16 + 1;
        } while (*pcVar16 != '\0');
        piVar22 = *(int **)pGVar18;
        uVar4 = *(uint *)this_00;
        piVar29 = piVar22 + (ulong)uVar4 * 0xc;
        if (uVar4 == 0) {
LAB_00d99aa8:
          if (piVar29 == piVar22) goto LAB_00d99b10;
          local_a0[1] = 0;
          local_90 = (void *)0x0;
          local_a0[0] = 0;
          _getString((JSONDataParser *)this_00,(GenericValue *)puVar7,(char *)local_a0,pbVar15);
          if ((local_a0[0] & 1) != 0) {
            operator_delete(local_90);
          }
          lVar23 = *(long *)(this + 0x30);
          lVar19 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                               *)(lVar23 + 0xd8),(basic_string *)&local_88);
          if (lVar23 + 0xe0 == lVar19) {
            uVar17 = 0;
          }
          else {
            uVar17 = *(undefined8 *)(lVar19 + 0x38);
          }
          *(undefined8 *)(pAVar11 + 0x38) = uVar17;
          if ((local_88 & 1) != 0) {
            operator_delete(local_78);
          }
        }
        else {
          uVar20 = (long)pcVar16 - (long)DataParser::SLOT;
          lVar19 = (ulong)uVar4 * 0x30;
          do {
            iVar9 = *piVar22;
            if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
              iVar9 = 0x15 - *(char *)((long)piVar22 + 0x15);
            }
            if (iVar9 == (int)uVar20) {
              piVar27 = *(int **)(piVar22 + 2);
              if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
                piVar27 = piVar22;
              }
              if ((piVar27 == (int *)puVar7) ||
                 (iVar9 = memcmp(puVar7,piVar27,uVar20 & 0xffffffff), iVar9 == 0))
              goto LAB_00d99aa8;
            }
            lVar19 = lVar19 + -0x30;
            piVar22 = piVar22 + 0xc;
          } while (lVar19 != 0);
LAB_00d99b10:
          *(undefined8 *)(pAVar11 + 0x38) = param_5;
        }
        piVar22 = (int *)DataParser::INTS;
                    /* try { // try from 00d99b40 to 00e99bb3 has its CatchHandler @ 00d99b40
                       catch() { ... } // from try @ 00d99b40 with catch @ 00d99b40
                       catch() { ... } // from try @ 00d99e28 with catch @ 00d99b40
                       catch() { ... } // from try @ 00d99e70 with catch @ 00d99b40
                       catch() { ... } // from try @ 00d99ea0 with catch @ 00d99b40 */
        pcVar16 = DataParser::INTS + -1;
        do {
          pcVar16 = pcVar16 + 1;
        } while (*pcVar16 != '\0');
        piVar29 = *(int **)pGVar18;
        uVar4 = *(uint *)this_00;
        piVar25 = piVar29 + (ulong)uVar4 * 0xc;
        piVar27 = piVar29;
        if (uVar4 != 0) {
          uVar20 = (long)pcVar16 - (long)DataParser::INTS;
          lVar19 = (ulong)uVar4 * 0x30;
          do {
            iVar9 = *piVar29;
            if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
              iVar9 = 0x15 - *(char *)((long)piVar29 + 0x15);
            }
            if (iVar9 == (int)uVar20) {
              piVar2 = *(int **)(piVar29 + 2);
              if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
                piVar2 = piVar29;
              }
                    /* try { // try from 00d99bb4 to 00e99bbf has its CatchHandler @ 00d99f34 */
              piVar27 = piVar29;
              if ((piVar2 == piVar22) ||
                 (iVar9 = memcmp(piVar22,piVar2,uVar20 & 0xffffffff), iVar9 == 0)) break;
            }
            lVar19 = lVar19 + -0x30;
            piVar29 = piVar29 + 0xc;
            piVar27 = piVar25;
          } while (lVar19 != 0);
        }
        if (piVar25 != piVar27) {
          pUVar30 = *(UserData **)(pAVar11 + 0x40);
          if (pUVar30 == (UserData *)0x0) {
            pUVar30 = BaseObject::borrowObject<dragonBones::UserData>();
            *(UserData **)(pAVar11 + 0x40) = pUVar30;
                    /* try { // try from 00d99bf4 to 00e99bfb has its CatchHandler @ 00d99f24 */
            piVar22 = (int *)DataParser::INTS;
          }
          pcVar16 = (char *)((long)piVar22 + -1);
          do {
            pcVar16 = pcVar16 + 1;
          } while (*pcVar16 != '\0');
          uVar4 = *(uint *)this_00;
          piVar27 = *(int **)pGVar18;
          piVar29 = piVar27;
          if (uVar4 == 0) {
LAB_00d99c88:
            if (piVar29 != piVar27 + (ulong)uVar4 * 0xc) {
              uVar4 = piVar29[6];
                    /* try { // try from 00d99ca4 to 00e99cab has its CatchHandler @ 00d99f20 */
              if ((uVar4 != 0) && (UserData::addInt(pUVar30,**(int **)(piVar29 + 8)), uVar4 != 1)) {
                lVar23 = (ulong)uVar4 - 1;
                lVar19 = 0x18;
                do {
                    /* try { // try from 00d99cd0 to 00e99cd3 has its CatchHandler @ 00d99f14 */
                  UserData::addInt(*(UserData **)(pAVar11 + 0x40),
                                   *(int *)(*(long *)(piVar29 + 8) + lVar19));
                  lVar23 = lVar23 + -1;
                  lVar19 = lVar19 + 0x18;
                } while (lVar23 != 0);
              }
              goto LAB_00d99cf8;
            }
          }
          else {
                    /* try { // try from 00d99c20 to 00e99c33 has its CatchHandler @ 00d99f44 */
            lVar19 = (ulong)uVar4 * 0x30;
            do {
                    /* try { // try from 00d99c4c to 00e99c57 has its CatchHandler @ 00d99f44 */
              iVar9 = *piVar29;
              if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
                iVar9 = 0x15 - *(char *)((long)piVar29 + 0x15);
              }
              if (iVar9 == (int)((long)pcVar16 - (long)piVar22)) {
                    /* try { // try from 00d99c5c to 00e99c6f has its CatchHandler @ 00d99f18 */
                piVar25 = *(int **)(piVar29 + 2);
                if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
                  piVar25 = piVar29;
                }
                if ((piVar25 == piVar22) ||
                   (iVar9 = memcmp(piVar22,piVar25,(long)pcVar16 - (long)piVar22 & 0xffffffff),
                   iVar9 == 0)) goto LAB_00d99c88;
              }
              lVar19 = lVar19 + -0x30;
              piVar29 = piVar29 + 0xc;
                    /* try { // try from 00d99c38 to 00e99c47 has its CatchHandler @ 00d99f18 */
            } while (lVar19 != 0);
          }
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01785a58 = 0;
          DAT_01785a60 = 0;
        }
LAB_00d99cf8:
        piVar22 = (int *)DataParser::FLOATS;
                    /* try { // try from 00d99cfc to 00e99d07 has its CatchHandler @ 00d99f1c */
        pcVar16 = DataParser::FLOATS + -1;
        do {
                    /* try { // try from 00d99d08 to 00e99d5f has its CatchHandler @ 00d99f80 */
          pcVar16 = pcVar16 + 1;
        } while (*pcVar16 != '\0');
        piVar29 = *(int **)pGVar18;
        uVar4 = *(uint *)this_00;
        piVar25 = piVar29 + (ulong)uVar4 * 0xc;
        piVar27 = piVar29;
        if (uVar4 != 0) {
          uVar20 = (long)pcVar16 - (long)DataParser::FLOATS;
          lVar19 = (ulong)uVar4 * 0x30;
          do {
            iVar9 = *piVar29;
            if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
              iVar9 = 0x15 - *(char *)((long)piVar29 + 0x15);
            }
            if (iVar9 == (int)uVar20) {
              piVar2 = *(int **)(piVar29 + 2);
              if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
                piVar2 = piVar29;
              }
              piVar27 = piVar29;
              if ((piVar2 == piVar22) ||
                 (iVar9 = memcmp(piVar22,piVar2,uVar20 & 0xffffffff), iVar9 == 0)) break;
            }
            lVar19 = lVar19 + -0x30;
            piVar29 = piVar29 + 0xc;
            piVar27 = piVar25;
          } while (lVar19 != 0);
        }
        if (piVar25 != piVar27) {
          pUVar30 = *(UserData **)(pAVar11 + 0x40);
          if (pUVar30 == (UserData *)0x0) {
            pUVar30 = BaseObject::borrowObject<dragonBones::UserData>();
            *(UserData **)(pAVar11 + 0x40) = pUVar30;
            piVar22 = (int *)DataParser::FLOATS;
          }
          pcVar16 = (char *)((long)piVar22 + -1);
          do {
            pcVar16 = pcVar16 + 1;
          } while (*pcVar16 != '\0');
          uVar4 = *(uint *)this_00;
          piVar27 = *(int **)pGVar18;
          piVar29 = piVar27;
          if (uVar4 == 0) {
LAB_00d99e4c:
                    /* try { // try from 00d99e54 to 00e99e63 has its CatchHandler @ 00d99ef4 */
            if (piVar29 != piVar27 + (ulong)uVar4 * 0xc) {
              uVar4 = piVar29[6];
                    /* try { // try from 00d99e64 to 00e99e6f has its CatchHandler @ 00d99ea4 */
              if (uVar4 != 0) {
                    /* try { // try from 00d99e70 to 00e99e97 has its CatchHandler @ 00d99b40 */
                lVar19 = 0;
                while( true ) {
                  lVar23 = *(long *)(piVar29 + 8);
                  uVar5 = *(ushort *)(lVar23 + lVar19 + 0x16);
                  if ((uVar5 >> 9 & 1) == 0) {
                    if ((uVar5 >> 5 & 1) == 0) {
                      if ((uVar5 >> 6 & 1) == 0) {
                        if ((uVar5 >> 7 & 1) == 0) {
                    /* try { // try from 00d99e98 to 00e99e9f has its CatchHandler @ 00d99ea0 */
                          dVar31 = (double)*(ulong *)(lVar23 + lVar19);
                        }
                        else {
                          dVar31 = (double)(long)*(ulong *)(lVar23 + lVar19);
                        }
                      }
                      else {
                        dVar31 = (double)NEON_ucvtf((ulong)*(uint *)(lVar23 + lVar19));
                      }
                    }
                    else {
                      dVar31 = (double)(long)*(int *)(lVar23 + lVar19);
                    }
                  }
                  else {
                    /* catch() { ... } // from try @ 00d99e20 with catch @ 00d99ea0
                       catch() { ... } // from try @ 00d99e98 with catch @ 00d99ea0
                       try { // try from 00d99ea0 to 00e99f9f has its CatchHandler @ 00d99b40 */
                    dVar31 = *(double *)(lVar23 + lVar19);
                    /* catch() { ... } // from try @ 00d99e64 with catch @ 00d99ea4 */
                  }
                  UserData::addFloat(pUVar30,(float)dVar31);
                  if ((ulong)uVar4 * 0x18 + -0x18 == lVar19) break;
                  pUVar30 = *(UserData **)(pAVar11 + 0x40);
                  lVar19 = lVar19 + 0x18;
                }
              }
              goto LAB_00d99efc;
            }
          }
          else {
            lVar19 = (ulong)uVar4 * 0x30;
            do {
              iVar9 = *piVar29;
              if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
                iVar9 = 0x15 - *(char *)((long)piVar29 + 0x15);
              }
              if (iVar9 == (int)((long)pcVar16 - (long)piVar22)) {
                    /* try { // try from 00d99e20 to 00e99e27 has its CatchHandler @ 00d99ea0 */
                piVar25 = *(int **)(piVar29 + 2);
                    /* try { // try from 00d99e28 to 00e99e53 has its CatchHandler @ 00d99b40 */
                if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
                  piVar25 = piVar29;
                }
                if ((piVar25 == piVar22) ||
                   (iVar9 = memcmp(piVar22,piVar25,(long)pcVar16 - (long)piVar22 & 0xffffffff),
                   iVar9 == 0)) goto LAB_00d99e4c;
              }
              lVar19 = lVar19 + -0x30;
              piVar29 = piVar29 + 0xc;
            } while (lVar19 != 0);
          }
                    /* catch() { ... } // from try @ 00d99e54 with catch @ 00d99ef4 */
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01785a58 = 0;
          DAT_01785a60 = 0;
        }
LAB_00d99efc:
        piVar22 = (int *)DataParser::STRINGS;
        pcVar16 = DataParser::STRINGS + -1;
        do {
          pcVar16 = pcVar16 + 1;
        } while (*pcVar16 != '\0');
                    /* catch() { ... } // from try @ 00d99cd0 with catch @ 00d99f14 */
                    /* catch() { ... } // from try @ 00d99c38 with catch @ 00d99f18
                       catch() { ... } // from try @ 00d99c5c with catch @ 00d99f18 */
                    /* catch() { ... } // from try @ 00d99cfc with catch @ 00d99f1c */
        piVar29 = *(int **)pGVar18;
                    /* catch() { ... } // from try @ 00d99ca4 with catch @ 00d99f20 */
        uVar4 = *(uint *)this_00;
                    /* catch() { ... } // from try @ 00d99bf4 with catch @ 00d99f24 */
        piVar25 = piVar29 + (ulong)uVar4 * 0xc;
        piVar27 = piVar29;
        if (uVar4 != 0) {
          uVar20 = (long)pcVar16 - (long)DataParser::STRINGS;
                    /* catch() { ... } // from try @ 00d99bb4 with catch @ 00d99f34 */
          lVar19 = (ulong)uVar4 * 0x30;
          do {
            iVar9 = *piVar29;
            if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
              iVar9 = 0x15 - *(char *)((long)piVar29 + 0x15);
            }
            if (iVar9 == (int)uVar20) {
              piVar2 = *(int **)(piVar29 + 2);
              if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
                piVar2 = piVar29;
              }
              piVar27 = piVar29;
                    /* catch() { ... } // from try @ 00d99d08 with catch @ 00d99f80 */
              if ((piVar2 == piVar22) ||
                 (iVar9 = memcmp(piVar22,piVar2,uVar20 & 0xffffffff), iVar9 == 0)) break;
            }
                    /* catch() { ... } // from try @ 00d99c20 with catch @ 00d99f44
                       catch() { ... } // from try @ 00d99c4c with catch @ 00d99f44 */
            lVar19 = lVar19 + -0x30;
            piVar29 = piVar29 + 0xc;
            piVar27 = piVar25;
          } while (lVar19 != 0);
        }
        if (piVar25 != piVar27) {
          pUVar30 = *(UserData **)(pAVar11 + 0x40);
          if (pUVar30 == (UserData *)0x0) {
            pUVar30 = BaseObject::borrowObject<dragonBones::UserData>();
            *(UserData **)(pAVar11 + 0x40) = pUVar30;
            piVar22 = (int *)DataParser::STRINGS;
          }
          pcVar16 = (char *)((long)piVar22 + -1);
          do {
            pcVar16 = pcVar16 + 1;
          } while (*pcVar16 != '\0');
          uVar4 = *(uint *)this_00;
          piVar27 = *(int **)pGVar18;
          piVar29 = piVar27;
          if (uVar4 == 0) {
LAB_00d9a050:
            if (piVar29 != piVar27 + (ulong)uVar4 * 0xc) {
              uVar4 = piVar29[6];
              if (uVar4 != 0) {
                    /* try { // try from 00d9a06c to 00e9a073 has its CatchHandler @ 00d9a0ac */
                lVar19 = 0;
                    /* try { // try from 00d9a074 to 00e9a0c7 has its CatchHandler @ 00d9a03c */
                do {
                  pcVar16 = (char *)(*(long *)(piVar29 + 8) + lVar19);
                  if (((byte)pcVar16[0x17] >> 4 & 1) == 0) {
                    pcVar16 = *(char **)(pcVar16 + 8);
                  }
                  local_b0 = 0;
                  local_a8 = (void *)0x0;
                  local_b8 = 0;
                  sVar13 = strlen(pcVar16);
                  if (0xffffffffffffffef < sVar13) goto LAB_00d9a2a0;
                    /* catch() { ... } // from try @ 00d9a06c with catch @ 00d9a0ac */
                  if (sVar13 < 0x17) {
                    local_b8 = CONCAT71(local_b8._1_7_,(char)((int)sVar13 << 1));
                    pvVar14 = (void *)((ulong)&local_b8 | 1);
                    if (sVar13 != 0) goto LAB_00d9a0e4;
                  }
                  else {
                    /* catch() { ... } // from try @ 00d9a100 with catch @ 00d9a0c8 */
                    uVar20 = sVar13 + 0x10 & 0xfffffffffffffff0;
                    pvVar14 = operator_new(uVar20);
                    local_b8 = uVar20 | 1;
                    local_b0 = sVar13;
                    local_a8 = pvVar14;
LAB_00d9a0e4:
                    memcpy(pvVar14,pcVar16,sVar13);
                  }
                    /* try { // try from 00d9a0f8 to 00e9a0ff has its CatchHandler @ 00d9a138 */
                  *(undefined1 *)((long)pvVar14 + sVar13) = 0;
                    /* try { // try from 00d9a100 to 00e9a153 has its CatchHandler @ 00d9a0c8 */
                  UserData::addString(pUVar30,&local_b8);
                  if ((local_b8 & 1) != 0) {
                    operator_delete(local_a8);
                  }
                  if ((ulong)uVar4 * 0x18 + -0x18 == lVar19) break;
                  pUVar30 = *(UserData **)(pAVar11 + 0x40);
                  lVar19 = lVar19 + 0x18;
                } while( true );
              }
              goto LAB_00d994dc;
            }
          }
          else {
            lVar19 = (ulong)uVar4 * 0x30;
            do {
              iVar9 = *piVar29;
              if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
                iVar9 = 0x15 - *(char *)((long)piVar29 + 0x15);
              }
              if (iVar9 == (int)((long)pcVar16 - (long)piVar22)) {
                piVar25 = *(int **)(piVar29 + 2);
                if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
                  piVar25 = piVar29;
                }
                    /* catch() { ... } // from try @ 00d9a074 with catch @ 00d9a03c */
                if ((piVar25 == piVar22) ||
                   (iVar9 = memcmp(piVar22,piVar25,(long)pcVar16 - (long)piVar22 & 0xffffffff),
                   iVar9 == 0)) goto LAB_00d9a050;
              }
              lVar19 = lVar19 + -0x30;
              piVar29 = piVar29 + 0xc;
            } while (lVar19 != 0);
          }
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01785a58 = 0;
          DAT_01785a60 = 0;
        }
LAB_00d994dc:
        puVar8 = DAT_01787d18;
        if (DAT_01787d20 == DAT_01787d28) {
          sVar13 = (long)DAT_01787d20 - (long)DAT_01787d18;
          uVar20 = ((long)sVar13 >> 3) + 1;
          if (uVar20 >> 0x3d != 0) goto LAB_00d9a2a0;
          if ((ulong)((long)DAT_01787d28 - (long)DAT_01787d18 >> 3) < 0xfffffffffffffff) {
            uVar28 = (long)DAT_01787d28 - (long)DAT_01787d18 >> 2;
            if (uVar20 <= uVar28) {
              uVar20 = uVar28;
            }
            if (uVar20 != 0) {
                    /* try { // try from 00d99630 to 00e996bf has its CatchHandler @ 00d9976c */
              if (uVar20 >> 0x3d == 0) goto LAB_00d996dc;
              goto LAB_00d9a2a0;
            }
            puVar12 = (undefined8 *)0x0;
          }
          else {
            uVar20 = 0x1fffffffffffffff;
LAB_00d996dc:
            puVar12 = operator_new(uVar20 << 3);
          }
          puVar1 = puVar12 + ((long)sVar13 >> 3);
          *puVar1 = pAVar11;
          if (0 < (long)sVar13) {
            memcpy(puVar12,puVar8,sVar13);
          }
          DAT_01787d18 = puVar12;
          DAT_01787d20 = puVar1 + 1;
          DAT_01787d28 = puVar12 + uVar20;
          if (puVar8 != (undefined8 *)0x0) {
            operator_delete(puVar8);
          }
        }
        else {
          *DAT_01787d20 = pAVar11;
          DAT_01787d20 = DAT_01787d20 + 1;
        }
        uVar24 = uVar24 + 1;
                    /* try { // try from 00d99508 to 00e99523 has its CatchHandler @ 00d997d8 */
      } while (uVar24 != uVar3);
    }
    goto LAB_00d9a2ec;
  }
  pAVar11 = BaseObject::borrowObject<dragonBones::ActionData>();
  *(int *)(pAVar11 + 0x10) = param_3;
  __s = *(uint **)(param_1 + 2);
  if ((*(ushort *)((long)param_1 + 0x16) & 0x1000) != 0) {
    __s = param_1;
  }
  sVar13 = strlen((char *)__s);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (pAVar11 + 0x18),(char *)__s,sVar13);
  *(basic_string **)(pAVar11 + 0x30) = param_4;
  *(undefined8 *)(pAVar11 + 0x38) = param_5;
  puVar8 = DAT_01787d18;
  if (DAT_01787d20 != DAT_01787d28) {
    *DAT_01787d20 = pAVar11;
    DAT_01787d20 = DAT_01787d20 + 1;
                    /* try { // try from 00d9a254 to 00e9a317 has its CatchHandler @ 00d9a254
                       catch() { ... } // from try @ 00d9a254 with catch @ 00d9a254
                       catch() { ... } // from try @ 00d9aee8 with catch @ 00d9a254
                       catch() { ... } // from try @ 00d9b8e0 with catch @ 00d9a254
                       catch() { ... } // from try @ 00d9bb00 with catch @ 00d9a254 */
    goto LAB_00d9a2ec;
  }
  sVar13 = (long)DAT_01787d20 - (long)DAT_01787d18;
  uVar24 = ((long)sVar13 >> 3) + 1;
  if (uVar24 >> 0x3d != 0) {
LAB_00d9a2a0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((ulong)((long)DAT_01787d28 - (long)DAT_01787d18 >> 3) < 0xfffffffffffffff) {
    uVar20 = (long)DAT_01787d28 - (long)DAT_01787d18 >> 2;
    if (uVar24 <= uVar20) {
      uVar24 = uVar20;
    }
    if (uVar24 != 0) {
      if (uVar24 >> 0x3d != 0) goto LAB_00d9a2a0;
      goto LAB_00d9a2a8;
    }
    puVar12 = (undefined8 *)0x0;
  }
  else {
    uVar24 = 0x1fffffffffffffff;
LAB_00d9a2a8:
    puVar12 = operator_new(uVar24 << 3);
  }
  puVar1 = puVar12 + ((long)sVar13 >> 3);
  *puVar1 = pAVar11;
  if (0 < (long)sVar13) {
    memcpy(puVar12,puVar8,sVar13);
  }
  DAT_01787d18 = puVar12;
  DAT_01787d20 = puVar1 + 1;
  DAT_01787d28 = puVar12 + uVar24;
  if (puVar8 != (undefined8 *)0x0) {
    operator_delete(puVar8);
  }
LAB_00d9a2ec:
  if (*(long *)(lVar6 + 0x28) == local_70) {
                    /* try { // try from 00d9a318 to 00e9a32f has its CatchHandler @ 00d9bc54 */
    return &DAT_01787d18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

