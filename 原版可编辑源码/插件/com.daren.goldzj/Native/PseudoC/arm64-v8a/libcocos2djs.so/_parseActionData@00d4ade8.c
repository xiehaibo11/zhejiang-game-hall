
/* dragonBones::JSONDataParser::_parseActionData(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, dragonBones::ActionType,
   dragonBones::BoneData*, dragonBones::SlotData*) */

undefined8 * __thiscall
dragonBones::JSONDataParser::_parseActionData
          (JSONDataParser *this,uint *param_1,int param_3,basic_string *param_4,undefined8 param_5)

{
  uint *__s;
  int *piVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *__s1;
  int iVar7;
  undefined4 uVar8;
  ActionData *pAVar9;
  UserData *pUVar10;
  size_t sVar11;
  void *pvVar12;
  basic_string *pbVar13;
  char *pcVar14;
  undefined8 uVar15;
  JSONDataParser *this_00;
  JSONDataParser *pJVar16;
  long lVar17;
  int *piVar18;
  ActionData *pAVar19;
  long lVar20;
  int *piVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  int *piVar25;
  int *piVar26;
  char *pcVar27;
  double dVar28;
  ulong local_c0;
  size_t local_b8;
  void *local_b0;
  ulong local_a8 [2];
  void *local_98;
  ActionData *local_90;
  size_t sStack_88;
  void *local_80;
  ActionData *local_78;
  long local_70;
  
  lVar5 = tpidr_el0;
  local_70 = *(long *)(lVar5 + 0x28);
  pbVar13 = param_4;
  if (((DAT_01d3e618 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_01d3e618), iVar7 != 0)) {
    DAT_01d3e600 = (undefined8 *)0x0;
    DAT_01d3e608 = (undefined8 *)0x0;
    DAT_01d3e610 = (undefined8 *)0x0;
    __cxa_atexit(FUN_00d4bc68,&DAT_01d3e600,&PTR_LOOP_01d1b000);
    __cxa_guard_release(&DAT_01d3e618);
  }
  DAT_01d3e608 = DAT_01d3e600;
  if ((*(ushort *)((long)param_1 + 0x16) >> 10 & 1) == 0) {
    if ((*(ushort *)((long)param_1 + 0x16) == 4) && (uVar2 = *param_1, uVar2 != 0)) {
      uVar22 = 0;
      do {
        lVar17 = *(long *)(param_1 + 2);
        pAVar9 = BaseObject::borrowObject<dragonBones::ActionData>();
        puVar6 = DataParser::GOTO_AND_PLAY;
        pcVar14 = DataParser::GOTO_AND_PLAY + -1;
        do {
          pcVar14 = pcVar14 + 1;
        } while (*pcVar14 != '\0');
        this_00 = (JSONDataParser *)(lVar17 + uVar22 * 0x18);
        pJVar16 = this_00 + 8;
        piVar26 = *(int **)pJVar16;
        uVar3 = *(uint *)this_00;
        uVar23 = (ulong)uVar3;
        piVar25 = piVar26 + uVar23 * 0xc;
        piVar21 = piVar26;
        local_78 = pAVar9;
        if (uVar3 != 0) {
          uVar24 = (long)pcVar14 - (long)DataParser::GOTO_AND_PLAY;
          lVar17 = uVar23 * 0x30;
          piVar18 = piVar26;
          do {
            iVar7 = *piVar18;
            if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
              iVar7 = 0x15 - *(char *)((long)piVar18 + 0x15);
            }
            if (iVar7 == (int)uVar24) {
              piVar1 = *(int **)(piVar18 + 2);
              if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
                piVar1 = piVar18;
              }
              piVar21 = piVar18;
              if ((piVar1 == (int *)puVar6) ||
                 (iVar7 = memcmp(puVar6,piVar1,uVar24 & 0xffffffff), iVar7 == 0)) break;
            }
            lVar17 = lVar17 + -0x30;
            piVar18 = piVar18 + 0xc;
            piVar21 = piVar25;
          } while (lVar17 != 0);
        }
        __s1 = DataParser::TYPE;
        if (piVar25 == piVar21) {
          pcVar27 = DataParser::TYPE + -1;
          pcVar14 = pcVar27;
          do {
            pcVar14 = pcVar14 + 1;
          } while (*pcVar14 != '\0');
          piVar21 = piVar26;
          if (uVar3 != 0) {
            uVar24 = (long)pcVar14 - (long)DataParser::TYPE;
            lVar17 = uVar23 * 0x30;
            piVar18 = piVar26;
            do {
              iVar7 = *piVar18;
              if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
                iVar7 = 0x15 - *(char *)((long)piVar18 + 0x15);
              }
              if (iVar7 == (int)uVar24) {
                piVar1 = *(int **)(piVar18 + 2);
                if ((*(ushort *)((long)piVar18 + 0x16) & 0x1000) != 0) {
                  piVar1 = piVar18;
                }
                piVar21 = piVar18;
                if ((piVar1 == (int *)__s1) ||
                   (iVar7 = memcmp(__s1,piVar1,uVar24 & 0xffffffff), iVar7 == 0)) break;
              }
              lVar17 = lVar17 + -0x30;
              piVar18 = piVar18 + 0xc;
              piVar21 = piVar25;
            } while (lVar17 != 0);
          }
          pcVar14 = pcVar27;
          if (piVar25 == piVar21) {
LAB_00d4b2d4:
            uVar8 = _getNumber((GenericValue *)this_00,__s1,param_3);
            *(undefined4 *)(local_78 + 0x10) = uVar8;
          }
          else {
            do {
              pcVar14 = pcVar14 + 1;
            } while (*pcVar14 != '\0');
            if (uVar3 != 0) {
              lVar17 = uVar23 * 0x30;
              do {
                iVar7 = *piVar26;
                if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
                  iVar7 = 0x15 - *(char *)((long)piVar26 + 0x15);
                }
                if (iVar7 == (int)((long)pcVar14 - (long)__s1)) {
                  piVar21 = *(int **)(piVar26 + 2);
                  if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
                    piVar21 = piVar26;
                  }
                  if ((piVar21 == (int *)__s1) ||
                     (iVar7 = memcmp(__s1,piVar21,(long)pcVar14 - (long)__s1 & 0xffffffff),
                     iVar7 == 0)) goto LAB_00d4b22c;
                }
                lVar17 = lVar17 + -0x30;
                piVar26 = piVar26 + 0xc;
              } while (lVar17 != 0);
LAB_00d4b2c4:
              rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::
              operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
              ::buffer = 0;
              DAT_01d38c18 = 0;
              DAT_01d38c20 = 0;
              goto LAB_00d4b2d4;
            }
LAB_00d4b22c:
            if (piVar26 == piVar25) goto LAB_00d4b2c4;
            if ((*(byte *)((long)piVar26 + 0x2f) >> 2 & 1) == 0) goto LAB_00d4b2d4;
            do {
              pcVar27 = pcVar27 + 1;
            } while (*pcVar27 != '\0');
            uVar3 = *(uint *)this_00;
            piVar21 = *(int **)pJVar16;
            piVar26 = piVar21;
            if (uVar3 == 0) {
LAB_00d4af1c:
              if (piVar26 == piVar21 + (ulong)uVar3 * 0xc) goto LAB_00d4af3c;
              piVar21 = piVar26 + 6;
              if ((*(byte *)((long)piVar26 + 0x2f) >> 4 & 1) == 0) goto LAB_00d4af4c;
            }
            else {
              lVar17 = (ulong)uVar3 * 0x30;
              do {
                iVar7 = *piVar26;
                if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
                  iVar7 = 0x15 - *(char *)((long)piVar26 + 0x15);
                }
                if (iVar7 == (int)((long)pcVar27 - (long)__s1)) {
                  piVar25 = *(int **)(piVar26 + 2);
                  if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
                    piVar25 = piVar26;
                  }
                  if ((piVar25 == (int *)__s1) ||
                     (iVar7 = memcmp(__s1,piVar25,(long)pcVar27 - (long)__s1 & 0xffffffff),
                     iVar7 == 0)) goto LAB_00d4af1c;
                }
                lVar17 = lVar17 + -0x30;
                piVar26 = piVar26 + 0xc;
              } while (lVar17 != 0);
LAB_00d4af3c:
              piVar21 = (int *)&rapidjson::
                                GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                ::
                                operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                                ::buffer;
              rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::
              operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
              ::buffer = 0;
              DAT_01d38c18 = 0;
              DAT_01d38c20 = 0;
LAB_00d4af4c:
              piVar21 = *(int **)(piVar21 + 2);
            }
            local_90 = (ActionData *)0x0;
            sStack_88 = 0;
            local_80 = (void *)0x0;
            sVar11 = strlen((char *)piVar21);
            if (0xffffffffffffffef < sVar11) {
LAB_00d4bc60:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            if (sVar11 < 0x17) {
              local_90 = (ActionData *)CONCAT71(local_90._1_7_,(char)((int)sVar11 << 1));
              pvVar12 = (void *)((ulong)&local_90 | 1);
              if (sVar11 != 0) goto LAB_00d4afa8;
            }
            else {
              uVar23 = sVar11 + 0x10 & 0xfffffffffffffff0;
              pvVar12 = operator_new(uVar23);
              local_90 = (ActionData *)(uVar23 | 1);
              sStack_88 = sVar11;
              local_80 = pvVar12;
LAB_00d4afa8:
              memcpy(pvVar12,piVar21,sVar11);
            }
            *(undefined1 *)((long)pvVar12 + sVar11) = 0;
            uVar8 = DataParser::_getActionType((basic_string *)&local_90);
            *(undefined4 *)(local_78 + 0x10) = uVar8;
            if (((ulong)local_90 & 1) != 0) {
              operator_delete(local_80);
            }
          }
          local_a8[0] = 0;
          local_a8[1] = 0;
          local_98 = (void *)0x0;
          _getString(this_00,(GenericValue *)DataParser::NAME,(char *)local_a8,pbVar13);
          pAVar9 = local_78;
          pAVar19 = local_78 + 0x18;
          if (((byte)*pAVar19 & 1) == 0) {
            *(undefined2 *)pAVar19 = 0;
          }
          else {
            **(undefined1 **)(local_78 + 0x28) = 0;
            *(undefined8 *)(local_78 + 0x20) = 0;
            if (((byte)local_78[0x18] & 1) != 0) {
              operator_delete(*(void **)(local_78 + 0x28));
              *(undefined8 *)(pAVar9 + 0x18) = 0;
            }
          }
        }
        else {
          *(undefined4 *)(pAVar9 + 0x10) = 0;
          local_a8[0] = 0;
          local_a8[1] = 0;
          local_98 = (void *)0x0;
          _getString(this_00,(GenericValue *)puVar6,(char *)local_a8,pbVar13);
          pAVar9 = local_78;
          pAVar19 = local_78 + 0x18;
          if (((byte)*pAVar19 & 1) == 0) {
            *(undefined2 *)pAVar19 = 0;
          }
          else {
            **(undefined1 **)(local_78 + 0x28) = 0;
            *(undefined8 *)(local_78 + 0x20) = 0;
            if (((byte)local_78[0x18] & 1) != 0) {
              operator_delete(*(void **)(local_78 + 0x28));
              *(undefined8 *)(pAVar9 + 0x18) = 0;
            }
          }
        }
        *(void **)(pAVar19 + 0x10) = local_80;
        *(size_t *)(pAVar19 + 8) = sStack_88;
        *(ActionData **)pAVar19 = local_90;
        sStack_88 = 0;
        local_80 = (void *)0x0;
        local_90 = (ActionData *)0x0;
        if ((local_a8[0] & 1) != 0) {
          operator_delete(local_98);
        }
        puVar6 = DataParser::BONE;
        pcVar14 = DataParser::BONE + -1;
        do {
          pcVar14 = pcVar14 + 1;
        } while (*pcVar14 != '\0');
        piVar26 = *(int **)pJVar16;
        uVar3 = *(uint *)this_00;
        piVar25 = piVar26 + (ulong)uVar3 * 0xc;
        piVar21 = piVar26;
        if (uVar3 != 0) {
          uVar23 = (long)pcVar14 - (long)DataParser::BONE;
          lVar17 = (ulong)uVar3 * 0x30;
          do {
            iVar7 = *piVar26;
            if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
              iVar7 = 0x15 - *(char *)((long)piVar26 + 0x15);
            }
            if (iVar7 == (int)uVar23) {
              piVar18 = *(int **)(piVar26 + 2);
              if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
                piVar18 = piVar26;
              }
              piVar21 = piVar26;
              if ((piVar18 == (int *)puVar6) ||
                 (iVar7 = memcmp(puVar6,piVar18,uVar23 & 0xffffffff), iVar7 == 0)) break;
            }
            lVar17 = lVar17 + -0x30;
            piVar26 = piVar26 + 0xc;
            piVar21 = piVar25;
          } while (lVar17 != 0);
        }
        if (piVar25 == piVar21) {
          *(basic_string **)(local_78 + 0x30) = param_4;
        }
        else {
          local_a8[0] = 0;
          local_a8[1] = 0;
          local_98 = (void *)0x0;
          _getString(this_00,(GenericValue *)puVar6,(char *)local_a8,pbVar13);
          if ((local_a8[0] & 1) != 0) {
            operator_delete(local_98);
          }
          lVar20 = *(long *)(this + 0x30);
          lVar17 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::BoneData*>>>
                               *)(lVar20 + 0xc0),(basic_string *)&local_90);
          if (lVar20 + 200 == lVar17) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(undefined8 *)(lVar17 + 0x38);
          }
          *(undefined8 *)(local_78 + 0x30) = uVar15;
          if (((ulong)local_90 & 1) != 0) {
            operator_delete(local_80);
          }
        }
        puVar6 = DataParser::SLOT;
        pcVar14 = DataParser::SLOT + -1;
        do {
          pcVar14 = pcVar14 + 1;
        } while (*pcVar14 != '\0');
        piVar26 = *(int **)pJVar16;
        uVar3 = *(uint *)this_00;
        piVar25 = piVar26 + (ulong)uVar3 * 0xc;
        piVar21 = piVar26;
        if (uVar3 != 0) {
          uVar23 = (long)pcVar14 - (long)DataParser::SLOT;
          lVar17 = (ulong)uVar3 * 0x30;
          do {
            iVar7 = *piVar26;
            if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
              iVar7 = 0x15 - *(char *)((long)piVar26 + 0x15);
            }
            if (iVar7 == (int)uVar23) {
              piVar18 = *(int **)(piVar26 + 2);
              if ((*(ushort *)((long)piVar26 + 0x16) & 0x1000) != 0) {
                piVar18 = piVar26;
              }
              piVar21 = piVar26;
              if ((piVar18 == (int *)puVar6) ||
                 (iVar7 = memcmp(puVar6,piVar18,uVar23 & 0xffffffff), iVar7 == 0)) break;
            }
            lVar17 = lVar17 + -0x30;
            piVar26 = piVar26 + 0xc;
            piVar21 = piVar25;
          } while (lVar17 != 0);
        }
        if (piVar25 == piVar21) {
          *(undefined8 *)(local_78 + 0x38) = param_5;
        }
        else {
          local_a8[0] = 0;
          local_a8[1] = 0;
          local_98 = (void *)0x0;
          _getString(this_00,(GenericValue *)puVar6,(char *)local_a8,pbVar13);
          if ((local_a8[0] & 1) != 0) {
            operator_delete(local_98);
          }
          lVar20 = *(long *)(this + 0x30);
          lVar17 = std::__ndk1::
                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                   ::
                   find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                             ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,dragonBones::SlotData*>>>
                               *)(lVar20 + 0xd8),(basic_string *)&local_90);
          if (lVar20 + 0xe0 == lVar17) {
            uVar15 = 0;
          }
          else {
            uVar15 = *(undefined8 *)(lVar17 + 0x38);
          }
          *(undefined8 *)(local_78 + 0x38) = uVar15;
          if (((ulong)local_90 & 1) != 0) {
            operator_delete(local_80);
          }
        }
        piVar26 = (int *)DataParser::INTS;
        pcVar14 = DataParser::INTS + -1;
        do {
          pcVar14 = pcVar14 + 1;
        } while (*pcVar14 != '\0');
        piVar21 = *(int **)pJVar16;
        uVar3 = *(uint *)this_00;
        piVar18 = piVar21 + (ulong)uVar3 * 0xc;
        piVar25 = piVar21;
        if (uVar3 != 0) {
          uVar23 = (long)pcVar14 - (long)DataParser::INTS;
          lVar17 = (ulong)uVar3 * 0x30;
          do {
            iVar7 = *piVar21;
            if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
              iVar7 = 0x15 - *(char *)((long)piVar21 + 0x15);
            }
            if (iVar7 == (int)uVar23) {
              piVar1 = *(int **)(piVar21 + 2);
              if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                piVar1 = piVar21;
              }
              piVar25 = piVar21;
              if ((piVar1 == piVar26) ||
                 (iVar7 = memcmp(piVar26,piVar1,uVar23 & 0xffffffff), iVar7 == 0)) break;
            }
            lVar17 = lVar17 + -0x30;
            piVar21 = piVar21 + 0xc;
            piVar25 = piVar18;
          } while (lVar17 != 0);
        }
        if (piVar18 != piVar25) {
          if (*(long *)(local_78 + 0x40) == 0) {
            pUVar10 = BaseObject::borrowObject<dragonBones::UserData>();
            *(UserData **)(local_78 + 0x40) = pUVar10;
            piVar26 = (int *)DataParser::INTS;
          }
          pAVar9 = local_78;
          pcVar14 = (char *)((long)piVar26 + -1);
          do {
            pcVar14 = pcVar14 + 1;
          } while (*pcVar14 != '\0');
          uVar3 = *(uint *)this_00;
          piVar25 = *(int **)pJVar16;
          piVar21 = piVar25;
          if (uVar3 == 0) {
LAB_00d4b6ec:
            if (piVar21 != piVar25 + (ulong)uVar3 * 0xc) {
              uVar3 = piVar21[6];
              if ((uVar3 != 0) &&
                 (UserData::addInt(*(UserData **)(pAVar9 + 0x40),**(int **)(piVar21 + 8)),
                 uVar3 != 1)) {
                lVar20 = (ulong)uVar3 - 1;
                lVar17 = 0x18;
                do {
                  UserData::addInt(*(UserData **)(local_78 + 0x40),
                                   *(int *)(*(long *)(piVar21 + 8) + lVar17));
                  lVar20 = lVar20 + -1;
                  lVar17 = lVar17 + 0x18;
                } while (lVar20 != 0);
              }
              goto LAB_00d4b760;
            }
          }
          else {
            lVar17 = (ulong)uVar3 * 0x30;
            do {
              iVar7 = *piVar21;
              if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                iVar7 = 0x15 - *(char *)((long)piVar21 + 0x15);
              }
              if (iVar7 == (int)((long)pcVar14 - (long)piVar26)) {
                piVar18 = *(int **)(piVar21 + 2);
                if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                  piVar18 = piVar21;
                }
                if ((piVar18 == piVar26) ||
                   (iVar7 = memcmp(piVar26,piVar18,(long)pcVar14 - (long)piVar26 & 0xffffffff),
                   iVar7 == 0)) goto LAB_00d4b6ec;
              }
              lVar17 = lVar17 + -0x30;
              piVar21 = piVar21 + 0xc;
            } while (lVar17 != 0);
          }
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01d38c18 = 0;
          DAT_01d38c20 = 0;
        }
LAB_00d4b760:
        piVar26 = (int *)DataParser::FLOATS;
        pcVar14 = DataParser::FLOATS + -1;
        do {
          pcVar14 = pcVar14 + 1;
        } while (*pcVar14 != '\0');
        piVar21 = *(int **)pJVar16;
        uVar3 = *(uint *)this_00;
        piVar18 = piVar21 + (ulong)uVar3 * 0xc;
        piVar25 = piVar21;
        if (uVar3 != 0) {
          uVar23 = (long)pcVar14 - (long)DataParser::FLOATS;
          lVar17 = (ulong)uVar3 * 0x30;
          do {
            iVar7 = *piVar21;
            if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
              iVar7 = 0x15 - *(char *)((long)piVar21 + 0x15);
            }
            if (iVar7 == (int)uVar23) {
              piVar1 = *(int **)(piVar21 + 2);
              if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                piVar1 = piVar21;
              }
              piVar25 = piVar21;
              if ((piVar1 == piVar26) ||
                 (iVar7 = memcmp(piVar26,piVar1,uVar23 & 0xffffffff), iVar7 == 0)) break;
            }
            lVar17 = lVar17 + -0x30;
            piVar21 = piVar21 + 0xc;
            piVar25 = piVar18;
          } while (lVar17 != 0);
        }
        if (piVar18 != piVar25) {
          if (*(long *)(local_78 + 0x40) == 0) {
            pUVar10 = BaseObject::borrowObject<dragonBones::UserData>();
            *(UserData **)(local_78 + 0x40) = pUVar10;
            piVar26 = (int *)DataParser::FLOATS;
          }
          pAVar9 = local_78;
          pcVar14 = (char *)((long)piVar26 + -1);
          do {
            pcVar14 = pcVar14 + 1;
          } while (*pcVar14 != '\0');
          uVar3 = *(uint *)this_00;
          piVar25 = *(int **)pJVar16;
          piVar21 = piVar25;
          if (uVar3 == 0) {
LAB_00d4b8a0:
            if (piVar21 != piVar25 + (ulong)uVar3 * 0xc) {
              uVar3 = piVar21[6];
              if (uVar3 != 0) {
                lVar17 = 0;
                while( true ) {
                  lVar20 = *(long *)(piVar21 + 8);
                  uVar4 = *(ushort *)(lVar20 + lVar17 + 0x16);
                  if ((uVar4 >> 9 & 1) == 0) {
                    if ((uVar4 >> 5 & 1) == 0) {
                      if ((uVar4 >> 6 & 1) == 0) {
                        if ((uVar4 >> 7 & 1) == 0) {
                          dVar28 = (double)*(ulong *)(lVar20 + lVar17);
                        }
                        else {
                          dVar28 = (double)(long)*(ulong *)(lVar20 + lVar17);
                        }
                      }
                      else {
                        dVar28 = (double)NEON_ucvtf((ulong)*(uint *)(lVar20 + lVar17));
                      }
                    }
                    else {
                      dVar28 = (double)(long)*(int *)(lVar20 + lVar17);
                    }
                  }
                  else {
                    dVar28 = *(double *)(lVar20 + lVar17);
                  }
                  UserData::addFloat(*(UserData **)(pAVar9 + 0x40),(float)dVar28);
                  if ((ulong)uVar3 * 0x18 + -0x18 == lVar17) break;
                  lVar17 = lVar17 + 0x18;
                  pAVar9 = local_78;
                }
              }
              goto LAB_00d4b954;
            }
          }
          else {
            lVar17 = (ulong)uVar3 * 0x30;
            do {
              iVar7 = *piVar21;
              if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                iVar7 = 0x15 - *(char *)((long)piVar21 + 0x15);
              }
              if (iVar7 == (int)((long)pcVar14 - (long)piVar26)) {
                piVar18 = *(int **)(piVar21 + 2);
                if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                  piVar18 = piVar21;
                }
                if ((piVar18 == piVar26) ||
                   (iVar7 = memcmp(piVar26,piVar18,(long)pcVar14 - (long)piVar26 & 0xffffffff),
                   iVar7 == 0)) goto LAB_00d4b8a0;
              }
              lVar17 = lVar17 + -0x30;
              piVar21 = piVar21 + 0xc;
            } while (lVar17 != 0);
          }
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01d38c18 = 0;
          DAT_01d38c20 = 0;
        }
LAB_00d4b954:
        piVar26 = (int *)DataParser::STRINGS;
        pcVar14 = DataParser::STRINGS + -1;
        do {
          pcVar14 = pcVar14 + 1;
        } while (*pcVar14 != '\0');
        piVar21 = *(int **)pJVar16;
        uVar3 = *(uint *)this_00;
        piVar18 = piVar21 + (ulong)uVar3 * 0xc;
        piVar25 = piVar21;
        if (uVar3 != 0) {
          uVar23 = (long)pcVar14 - (long)DataParser::STRINGS;
          lVar17 = (ulong)uVar3 * 0x30;
          do {
            iVar7 = *piVar21;
            if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
              iVar7 = 0x15 - *(char *)((long)piVar21 + 0x15);
            }
            if (iVar7 == (int)uVar23) {
              piVar1 = *(int **)(piVar21 + 2);
              if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                piVar1 = piVar21;
              }
              piVar25 = piVar21;
              if ((piVar1 == piVar26) ||
                 (iVar7 = memcmp(piVar26,piVar1,uVar23 & 0xffffffff), iVar7 == 0)) break;
            }
            lVar17 = lVar17 + -0x30;
            piVar21 = piVar21 + 0xc;
            piVar25 = piVar18;
          } while (lVar17 != 0);
        }
        if (piVar18 != piVar25) {
          if (*(long *)(local_78 + 0x40) == 0) {
            pUVar10 = BaseObject::borrowObject<dragonBones::UserData>();
            *(UserData **)(local_78 + 0x40) = pUVar10;
            piVar26 = (int *)DataParser::STRINGS;
          }
          pAVar9 = local_78;
          pcVar14 = (char *)((long)piVar26 + -1);
          do {
            pcVar14 = pcVar14 + 1;
          } while (*pcVar14 != '\0');
          uVar3 = *(uint *)this_00;
          piVar25 = *(int **)pJVar16;
          piVar21 = piVar25;
          if (uVar3 == 0) {
LAB_00d4ba94:
            if (piVar21 != piVar25 + (ulong)uVar3 * 0xc) {
              uVar3 = piVar21[6];
              if (uVar3 != 0) {
                lVar17 = 0;
                uVar23 = 1;
                do {
                  pUVar10 = *(UserData **)(pAVar9 + 0x40);
                  pcVar14 = (char *)(*(long *)(piVar21 + 8) + lVar17);
                  if (((byte)pcVar14[0x17] >> 4 & 1) == 0) {
                    pcVar14 = *(char **)(pcVar14 + 8);
                  }
                  local_c0 = 0;
                  local_b8 = 0;
                  local_b0 = (void *)0x0;
                  sVar11 = strlen(pcVar14);
                  if (0xffffffffffffffef < sVar11) goto LAB_00d4bc60;
                  if (sVar11 < 0x17) {
                    local_c0 = CONCAT71(local_c0._1_7_,(char)((int)sVar11 << 1));
                    pvVar12 = (void *)((ulong)&local_c0 | 1);
                    if (sVar11 != 0) goto LAB_00d4bb34;
                  }
                  else {
                    uVar24 = sVar11 + 0x10 & 0xfffffffffffffff0;
                    pvVar12 = operator_new(uVar24);
                    local_c0 = uVar24 | 1;
                    local_b8 = sVar11;
                    local_b0 = pvVar12;
LAB_00d4bb34:
                    memcpy(pvVar12,pcVar14,sVar11);
                  }
                  *(undefined1 *)((long)pvVar12 + sVar11) = 0;
                  UserData::addString(pUVar10,&local_c0);
                  if ((local_c0 & 1) != 0) {
                    operator_delete(local_b0);
                  }
                  if (uVar3 <= uVar23) break;
                  lVar17 = lVar17 + 0x18;
                  uVar23 = uVar23 + 1;
                  pAVar9 = local_78;
                } while( true );
              }
              goto LAB_00d4bb80;
            }
          }
          else {
            lVar17 = (ulong)uVar3 * 0x30;
            do {
              iVar7 = *piVar21;
              if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                iVar7 = 0x15 - *(char *)((long)piVar21 + 0x15);
              }
              if (iVar7 == (int)((long)pcVar14 - (long)piVar26)) {
                piVar18 = *(int **)(piVar21 + 2);
                if ((*(ushort *)((long)piVar21 + 0x16) & 0x1000) != 0) {
                  piVar18 = piVar21;
                }
                if ((piVar18 == piVar26) ||
                   (iVar7 = memcmp(piVar26,piVar18,(long)pcVar14 - (long)piVar26 & 0xffffffff),
                   iVar7 == 0)) goto LAB_00d4ba94;
              }
              lVar17 = lVar17 + -0x30;
              piVar21 = piVar21 + 0xc;
            } while (lVar17 != 0);
          }
          rapidjson::
          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
          ::
          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
          ::buffer = 0;
          DAT_01d38c18 = 0;
          DAT_01d38c20 = 0;
        }
LAB_00d4bb80:
        if (DAT_01d3e608 == DAT_01d3e610) {
          std::__ndk1::
          vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>::
          __push_back_slow_path<dragonBones::ActionData*const&>
                    ((vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>
                      *)&DAT_01d3e600,&local_78);
        }
        else {
          *DAT_01d3e608 = local_78;
          DAT_01d3e608 = DAT_01d3e608 + 1;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar2);
    }
  }
  else {
    pAVar9 = BaseObject::borrowObject<dragonBones::ActionData>();
    *(int *)(pAVar9 + 0x10) = param_3;
    __s = *(uint **)(param_1 + 2);
    if ((*(ushort *)((long)param_1 + 0x16) & 0x1000) != 0) {
      __s = param_1;
    }
    local_90 = pAVar9;
    sVar11 = strlen((char *)__s);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (pAVar9 + 0x18),(char *)__s,sVar11);
    *(basic_string **)(pAVar9 + 0x30) = param_4;
    *(undefined8 *)(pAVar9 + 0x38) = param_5;
    if (DAT_01d3e608 == DAT_01d3e610) {
      std::__ndk1::vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>
      ::__push_back_slow_path<dragonBones::ActionData*const&>
                ((vector<dragonBones::ActionData*,std::__ndk1::allocator<dragonBones::ActionData*>>
                  *)&DAT_01d3e600,&local_90);
    }
    else {
      *DAT_01d3e608 = pAVar9;
      DAT_01d3e608 = DAT_01d3e608 + 1;
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return &DAT_01d3e600;
}

