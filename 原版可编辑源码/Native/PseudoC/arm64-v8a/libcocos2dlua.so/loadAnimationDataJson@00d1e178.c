
/* cocos2d::Bundle3D::loadAnimationDataJson(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, cocos2d::Animation3DData*)
    */

undefined4 __thiscall
cocos2d::Bundle3D::loadAnimationDataJson
          (Bundle3D *this,basic_string *param_1,Animation3DData *param_2)

{
  size_t sVar1;
  basic_string *__s1;
  int *__s2;
  long *__s2_00;
  undefined4 *puVar2;
  Bundle3D BVar3;
  basic_string bVar4;
  ushort uVar5;
  long lVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar7;
  int iVar8;
  int iVar9;
  size_t __n;
  char *pcVar10;
  Quaternion *this_00;
  uint *puVar11;
  double *pdVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  Bundle3D *__s1_00;
  int *piVar16;
  undefined4 uVar17;
  uint uVar18;
  int *piVar19;
  ulong uVar20;
  ulong uVar21;
  int *piVar22;
  long *plVar23;
  int *piVar24;
  char *pcVar25;
  ulong uVar26;
  ulong uVar27;
  long *plVar28;
  long *plVar29;
  long lVar30;
  long *plVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *local_e0;
  long lStack_d8;
  undefined8 local_c8;
  undefined4 local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  int *local_90;
  long local_80;
  
  lVar6 = tpidr_el0;
  local_80 = *(long *)(lVar6 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"");
  BVar3 = this[0x38];
  uVar27 = (ulong)((byte)BVar3 >> 1);
  if (((byte)BVar3 & 1) != 0) {
    uVar27 = *(ulong *)(this + 0x40);
  }
  if (uVar27 == 3) {
    __s1_00 = *(Bundle3D **)(this + 0x48);
    if (((byte)BVar3 & 1) == 0) {
      __s1_00 = this + 0x39;
    }
    iVar8 = memcmp(__s1_00,&DAT_013d2af7,3);
    if ((iVar8 != 0) && (iVar8 = memcmp(__s1_00,&DAT_012f2699,3), iVar8 != 0)) goto LAB_00d1e220;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(local_a0,"animation",9);
  }
  else {
LAB_00d1e220:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(local_a0,"animations",10);
  }
  bVar7 = local_a0[0];
  piVar16 = (int *)((ulong)local_a0 | 1);
  if (((byte)local_a0[0] & 1) != 0) {
    piVar16 = local_90;
  }
  pcVar25 = (char *)((long)piVar16 + -1);
  pcVar10 = pcVar25;
  do {
    pcVar10 = pcVar10 + 1;
  } while (*pcVar10 != '\0');
  piVar19 = *(int **)(this + 0x70);
  uVar18 = *(uint *)(this + 0x68);
  uVar27 = (ulong)uVar18;
  piVar24 = piVar19 + uVar27 * 0xc;
  piVar14 = piVar19;
  if (uVar18 == 0) {
LAB_00d1e308:
    if (piVar24 != piVar14) {
      do {
        pcVar25 = pcVar25 + 1;
      } while (*pcVar25 != '\0');
      if (uVar18 == 0) {
LAB_00d1e39c:
        if (piVar19 != piVar24) {
          if (piVar19[6] == 0) goto LAB_00d1e520;
          uVar27 = (ulong)((byte)*param_1 >> 1);
          if (((byte)*param_1 & 1) != 0) {
            uVar27 = *(ulong *)(param_1 + 8);
          }
          if (uVar27 == 0) {
            uVar27 = 0;
          }
          else {
            uVar26 = 0;
            uVar27 = 0xffffffff;
            do {
              puVar13 = (uint *)(*(long *)(piVar19 + 8) + uVar26 * 0x18);
              uVar18 = *puVar13;
              piVar14 = *(int **)(puVar13 + 2);
              piVar16 = piVar14;
              if (uVar18 == 0) {
LAB_00d1e480:
                if (piVar16 == piVar14 + (ulong)uVar18 * 0xc) goto LAB_00d1e49c;
                piVar14 = piVar16 + 6;
                if ((*(byte *)((long)piVar16 + 0x2f) >> 4 & 1) == 0) goto LAB_00d1e4ac;
              }
              else {
                lVar30 = (ulong)uVar18 * 0x30;
                do {
                  iVar8 = *piVar16;
                  if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                    iVar8 = 0x15 - *(char *)((long)piVar16 + 0x15);
                  }
                  if (iVar8 == 2) {
                    piVar24 = *(int **)(piVar16 + 2);
                    if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                      piVar24 = piVar16;
                    }
                    if ((piVar24 == (int *)0x143a510) || ((short)*piVar24 == 0x6469))
                    goto LAB_00d1e480;
                  }
                  lVar30 = lVar30 + -0x30;
                  piVar16 = piVar16 + 0xc;
                } while (lVar30 != 0);
LAB_00d1e49c:
                piVar14 = (int *)&rapidjson::
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
LAB_00d1e4ac:
                piVar14 = *(int **)(piVar14 + 2);
              }
              __n = strlen((char *)piVar14);
              bVar4 = *param_1;
              sVar1 = (ulong)((byte)bVar4 >> 1);
              if (((byte)bVar4 & 1) != 0) {
                sVar1 = *(size_t *)(param_1 + 8);
              }
              if (__n == sVar1) {
                if (__n != 0) {
                  if (__n == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  __s1 = param_1 + 1;
                  if (((byte)bVar4 & 1) != 0) {
                    __s1 = *(basic_string **)(param_1 + 0x10);
                  }
                  iVar8 = memcmp(__s1,piVar14,__n);
                  if (iVar8 != 0) goto LAB_00d1e3f4;
                }
                uVar27 = uVar26 & 0xffffffff;
              }
LAB_00d1e3f4:
              uVar26 = uVar26 + 1;
            } while (uVar26 < (uint)piVar19[6]);
            if ((int)uVar27 < 0) goto LAB_00d1e520;
          }
          puVar13 = (uint *)(*(long *)(piVar19 + 8) + uVar27 * 0x18);
          piVar14 = *(int **)(puVar13 + 2);
          uVar18 = *puVar13;
          piVar16 = piVar14;
          if (uVar18 == 0) {
LAB_00d1e604:
            if (piVar16 == piVar14 + (ulong)uVar18 * 0xc) goto LAB_00d1e634;
            uVar5 = *(ushort *)((long)piVar16 + 0x2e);
            if ((uVar5 >> 9 & 1) == 0) {
              if ((uVar5 >> 5 & 1) != 0) {
                dVar32 = (double)(long)piVar16[6];
                goto LAB_00d1e670;
              }
              if ((uVar5 >> 6 & 1) != 0) {
                dVar32 = (double)NEON_ucvtf((ulong)(uint)piVar16[6]);
                goto LAB_00d1e670;
              }
              uVar27 = *(ulong *)(piVar16 + 6);
              if ((uVar5 >> 7 & 1) != 0) {
                dVar32 = (double)(long)uVar27;
                goto LAB_00d1e670;
              }
              goto LAB_00d1e648;
            }
            dVar32 = *(double *)(piVar16 + 6);
          }
          else {
            lVar30 = (ulong)uVar18 * 0x30;
            do {
              iVar8 = *piVar16;
              if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                iVar8 = 0x15 - *(char *)((long)piVar16 + 0x15);
              }
              if (iVar8 == 6) {
                piVar19 = *(int **)(piVar16 + 2);
                if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                  piVar19 = piVar16;
                }
                if ((piVar19 == (int *)0x13d5802) ||
                   (iVar8 = memcmp("length",piVar19,6), iVar8 == 0)) goto LAB_00d1e604;
              }
              lVar30 = lVar30 + -0x30;
              piVar16 = piVar16 + 0xc;
            } while (lVar30 != 0);
LAB_00d1e634:
            uVar27 = 0;
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
LAB_00d1e648:
            dVar32 = (double)uVar27;
          }
LAB_00d1e670:
          *(float *)(param_2 + 0x48) = (float)dVar32;
          uVar18 = *puVar13;
          piVar14 = *(int **)(puVar13 + 2);
          piVar16 = piVar14;
          if (uVar18 == 0) {
LAB_00d1e6fc:
            if (piVar16 == piVar14 + (ulong)uVar18 * 0xc) goto LAB_00d1f5e8;
            if (piVar16[6] != 0) {
              uVar27 = 0;
              this_00 = (Quaternion *)((ulong)&local_e0 | 4);
              do {
                puVar13 = (uint *)(*(long *)(piVar16 + 8) + uVar27 * 0x18);
                piVar19 = *(int **)(puVar13 + 2);
                uVar18 = *puVar13;
                piVar14 = piVar19;
                if (uVar18 == 0) {
LAB_00d1e7e8:
                  if (piVar14 == piVar19 + (ulong)uVar18 * 0xc) goto LAB_00d1e810;
                  piVar19 = piVar14 + 6;
                  if ((*(byte *)((long)piVar14 + 0x2f) >> 4 & 1) == 0) goto LAB_00d1e828;
                }
                else {
                  lVar30 = (ulong)uVar18 * 0x30;
                  do {
                    iVar8 = *piVar14;
                    if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
                      iVar8 = 0x15 - *(char *)((long)piVar14 + 0x15);
                    }
                    if (iVar8 == 6) {
                      piVar24 = *(int **)(piVar14 + 2);
                      if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
                        piVar24 = piVar14;
                      }
                      if ((piVar24 == (int *)"boneId") ||
                         (iVar8 = memcmp("boneId",piVar24,6), iVar8 == 0)) goto LAB_00d1e7e8;
                    }
                    lVar30 = lVar30 + -0x30;
                    piVar14 = piVar14 + 0xc;
                  } while (lVar30 != 0);
LAB_00d1e810:
                  piVar19 = (int *)&rapidjson::
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
LAB_00d1e828:
                  piVar19 = *(int **)(piVar19 + 2);
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                basic_string<decltype(nullptr)>(local_b8,(char *)piVar19);
                piVar14 = *(int **)(puVar13 + 2);
                uVar18 = *puVar13;
                uVar26 = (ulong)uVar18;
                piVar24 = piVar14 + uVar26 * 0xc;
                piVar19 = piVar14;
                if (uVar18 != 0) {
                  lVar30 = uVar26 * 0x30;
                  piVar22 = piVar14;
                  do {
                    iVar8 = *piVar22;
                    if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
                      iVar8 = 0x15 - *(char *)((long)piVar22 + 0x15);
                    }
                    if (iVar8 == 9) {
                      __s2 = *(int **)(piVar22 + 2);
                      if ((*(ushort *)((long)piVar22 + 0x16) & 0x1000) != 0) {
                        __s2 = piVar22;
                      }
                      piVar19 = piVar22;
                      if ((__s2 == (int *)"keyframes") ||
                         (iVar8 = memcmp("keyframes",__s2,9), iVar8 == 0)) break;
                    }
                    lVar30 = lVar30 + -0x30;
                    piVar22 = piVar22 + 0xc;
                    piVar19 = piVar24;
                  } while (lVar30 != 0);
                }
                if (piVar24 != piVar19) {
                  if (uVar18 == 0) {
LAB_00d1e938:
                    if (piVar14 == piVar24) goto LAB_00d1e948;
                    puVar13 = (uint *)(piVar14 + 6);
                    uVar18 = *puVar13;
                  }
                  else {
                    lVar30 = uVar26 * 0x30;
                    do {
                      iVar8 = *piVar14;
                      if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
                        iVar8 = 0x15 - *(char *)((long)piVar14 + 0x15);
                      }
                      if (iVar8 == 9) {
                        piVar19 = *(int **)(piVar14 + 2);
                        if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
                          piVar19 = piVar14;
                        }
                        if ((piVar19 == (int *)"keyframes") ||
                           (iVar8 = memcmp("keyframes",piVar19,9), iVar8 == 0)) goto LAB_00d1e938;
                      }
                      lVar30 = lVar30 + -0x30;
                      piVar14 = piVar14 + 0xc;
                    } while (lVar30 != 0);
LAB_00d1e948:
                    puVar13 = (uint *)&rapidjson::
                                       GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                                       ::
                                       operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                                       ::buffer;
                    uVar18 = 0;
                    rapidjson::
                    GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                    ::
                    operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                    ::buffer = 0;
                    DAT_01785a58 = 0;
                    DAT_01785a60 = 0;
                  }
                  local_e0 = local_b8;
                  lVar30 = std::__ndk1::
                           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
                           ::
                           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                     ((basic_string *)(param_2 + 0x18),
                                      (piecewise_construct_t *)local_b8,(tuple *)&DAT_01419148,
                                      (tuple *)&local_e0);
                  uVar26 = (ulong)uVar18;
                  std::__ndk1::
                  vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>
                  ::reserve((vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>
                             *)(lVar30 + 0x38),uVar26);
                  local_e0 = local_b8;
                  lVar30 = std::__ndk1::
                           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
                           ::
                           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                     ((basic_string *)(param_2 + 0x30),
                                      (piecewise_construct_t *)local_b8,(tuple *)&DAT_01419148,
                                      (tuple *)&local_e0);
                  std::__ndk1::
                  vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                  ::reserve((vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                             *)(lVar30 + 0x38),uVar26);
                  local_e0 = local_b8;
                  lVar30 = std::__ndk1::
                           __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
                           ::
                           __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                     ((basic_string *)param_2,(piecewise_construct_t *)local_b8,
                                      (tuple *)&DAT_01419148,(tuple *)&local_e0);
                  std::__ndk1::
                  vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                  ::reserve((vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                             *)(lVar30 + 0x38),uVar26);
                  if (uVar18 != 0) {
                    uVar21 = 0;
                    do {
                      puVar11 = (uint *)(*(long *)(puVar13 + 2) + uVar21 * 0x18);
                      puVar15 = puVar11 + 2;
                      plVar31 = *(long **)puVar15;
                      uVar18 = *puVar11;
                      uVar20 = (ulong)uVar18;
                      plVar28 = plVar31 + uVar20 * 6;
                      plVar23 = plVar31;
                      if (uVar18 == 0) {
LAB_00d1eac0:
                        if (plVar28 != plVar23) {
                          plVar23 = plVar31;
                          if (uVar18 == 0) {
                            if (plVar31 == plVar28) goto LAB_00d1eb7c;
LAB_00d1eb38:
                            plVar23 = plVar23 + 3;
                            plVar28 = plVar31;
                            if (uVar18 != 0) goto LAB_00d1eba8;
LAB_00d1ec10:
                            if (plVar31 == plVar28 + uVar20 * 6) goto LAB_00d1ec50;
                            uVar5 = *(ushort *)((long)plVar31 + 0x2e);
                            if ((uVar5 >> 9 & 1) == 0) {
                              if ((uVar5 >> 5 & 1) != 0) {
                                dVar32 = (double)(long)(int)plVar31[3];
                                goto LAB_00d1ecac;
                              }
                              if ((uVar5 >> 6 & 1) != 0) {
                                dVar32 = (double)NEON_ucvtf((ulong)*(uint *)(plVar31 + 3));
                                goto LAB_00d1ecac;
                              }
                              uVar20 = plVar31[3];
                              if ((uVar5 >> 7 & 1) != 0) {
                                dVar32 = (double)(long)uVar20;
                                goto LAB_00d1ecac;
                              }
                              goto LAB_00d1ec74;
                            }
                            dVar32 = (double)plVar31[3];
                          }
                          else {
                            lVar30 = uVar20 * 0x30;
                            do {
                              iVar8 = (int)*plVar23;
                              if ((*(ushort *)((long)plVar23 + 0x16) & 0x1000) != 0) {
                                iVar8 = 0x15 - *(char *)((long)plVar23 + 0x15);
                              }
                              if (iVar8 == 0xb) {
                                plVar29 = (long *)plVar23[1];
                                if ((*(ushort *)((long)plVar23 + 0x16) & 0x1000) != 0) {
                                  plVar29 = plVar23;
                                }
                                if ((plVar29 == (long *)"translation") ||
                                   (iVar8 = memcmp("translation",plVar29,0xb), iVar8 == 0)) {
                                  if (plVar23 != plVar28) goto LAB_00d1eb38;
                                  break;
                                }
                              }
                              lVar30 = lVar30 + -0x30;
                              plVar23 = plVar23 + 6;
                            } while (lVar30 != 0);
LAB_00d1eb7c:
                            plVar23 = &rapidjson::
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
                            plVar31 = *(long **)puVar15;
                            uVar20 = (ulong)*puVar11;
                            plVar28 = plVar31;
                            if (*puVar11 == 0) goto LAB_00d1ec10;
LAB_00d1eba8:
                            lVar30 = uVar20 * 0x30;
                            plVar31 = plVar28;
                            do {
                              iVar8 = (int)*plVar31;
                              if ((*(ushort *)((long)plVar31 + 0x16) & 0x1000) != 0) {
                                iVar8 = 0x15 - *(char *)((long)plVar31 + 0x15);
                              }
                              if (iVar8 == 7) {
                                plVar29 = (long *)plVar31[1];
                                if ((*(ushort *)((long)plVar31 + 0x16) & 0x1000) != 0) {
                                  plVar29 = plVar31;
                                }
                                if ((plVar29 == (long *)"keytime") ||
                                   (iVar8 = memcmp("keytime",plVar29,7), iVar8 == 0))
                                goto LAB_00d1ec10;
                              }
                              plVar31 = plVar31 + 6;
                              lVar30 = lVar30 + -0x30;
                            } while (lVar30 != 0);
LAB_00d1ec50:
                            uVar20 = 0;
                            rapidjson::
                            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                            ::
                            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                            ::buffer = 0;
                            DAT_01785a58 = 0;
                            DAT_01785a60 = 0;
LAB_00d1ec74:
                            dVar32 = (double)uVar20;
                          }
LAB_00d1ecac:
                          pdVar12 = (double *)plVar23[1];
                          uVar5 = *(ushort *)((long)pdVar12 + 0x16);
                          if ((uVar5 >> 9 & 1) == 0) {
                            if ((uVar5 >> 5 & 1) != 0) {
                              dVar33 = (double)(long)*(int *)pdVar12;
                              uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
                              goto joined_r0x00d1ece0;
                            }
                            if ((uVar5 >> 6 & 1) == 0) {
                              if ((uVar5 >> 7 & 1) == 0) {
                                dVar33 = (double)(ulong)*pdVar12;
                                uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
                                goto joined_r0x00d1ece0;
                              }
                              dVar33 = (double)(long)*pdVar12;
                              uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
                            }
                            else {
                              dVar33 = (double)NEON_ucvtf((ulong)*(uint *)pdVar12);
                              uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
                            }
                            if ((uVar5 >> 9 & 1) == 0) goto LAB_00d1ece4;
LAB_00d1ed10:
                            dVar34 = pdVar12[3];
                          }
                          else {
                            dVar33 = *pdVar12;
                            uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
joined_r0x00d1ece0:
                            if ((uVar5 >> 9 & 1) != 0) goto LAB_00d1ed10;
LAB_00d1ece4:
                            if ((uVar5 >> 5 & 1) == 0) {
                              if ((uVar5 >> 6 & 1) == 0) {
                                if ((uVar5 >> 7 & 1) == 0) {
                                  dVar34 = (double)(ulong)pdVar12[3];
                                }
                                else {
                                  dVar34 = (double)(long)pdVar12[3];
                                }
                              }
                              else {
                                dVar34 = (double)NEON_ucvtf((ulong)*(uint *)(pdVar12 + 3));
                              }
                            }
                            else {
                              dVar34 = (double)(long)*(int *)(pdVar12 + 3);
                            }
                          }
                          uVar5 = *(ushort *)((long)pdVar12 + 0x46);
                          if ((uVar5 >> 9 & 1) == 0) {
                            if ((uVar5 >> 5 & 1) == 0) {
                              if ((uVar5 >> 6 & 1) == 0) {
                                if ((uVar5 >> 7 & 1) == 0) {
                                  dVar35 = (double)(ulong)pdVar12[6];
                                }
                                else {
                                  dVar35 = (double)(long)pdVar12[6];
                                }
                              }
                              else {
                                dVar35 = (double)NEON_ucvtf((ulong)*(uint *)(pdVar12 + 6));
                              }
                            }
                            else {
                              dVar35 = (double)(long)*(int *)(pdVar12 + 6);
                            }
                          }
                          else {
                            dVar35 = pdVar12[6];
                          }
                          Vec3::Vec3((Vec3 *)&local_c8,(float)dVar33,(float)dVar34,(float)dVar35);
                          local_e0 = local_b8;
                          lVar30 = std::__ndk1::
                                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
                                   ::
                                   __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                             ((basic_string *)param_2,
                                              (piecewise_construct_t *)local_b8,
                                              (tuple *)&DAT_01419148,(tuple *)&local_e0);
                          local_e0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)CONCAT44(local_e0._4_4_,(float)dVar32);
                          *(undefined4 *)(this_00 + 8) = local_c0;
                          *(undefined8 *)this_00 = local_c8;
                          plVar23 = *(long **)(lVar30 + 0x40);
                          if (plVar23 < *(long **)(lVar30 + 0x48)) {
                            plVar23[1] = lStack_d8;
                            *plVar23 = (long)local_e0;
                            *(long **)(lVar30 + 0x40) = plVar23 + 2;
                          }
                          else {
                            std::__ndk1::
                            vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                            ::__push_back_slow_path<cocos2d::Animation3DData::Vec3Key>
                                      ((vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                                        *)(lVar30 + 0x38),(Vec3Key *)&local_e0);
                          }
                          plVar31 = *(long **)puVar15;
                          uVar20 = (ulong)*puVar11;
                        }
                      }
                      else {
                        lVar30 = uVar20 * 0x30;
                        do {
                          iVar8 = (int)*plVar23;
                          if ((*(ushort *)((long)plVar23 + 0x16) & 0x1000) != 0) {
                            iVar8 = 0x15 - *(char *)((long)plVar23 + 0x15);
                          }
                          if (iVar8 == 0xb) {
                            plVar29 = (long *)plVar23[1];
                            if ((*(ushort *)((long)plVar23 + 0x16) & 0x1000) != 0) {
                              plVar29 = plVar23;
                            }
                            if ((plVar29 == (long *)"translation") ||
                               (iVar8 = memcmp("translation",plVar29,0xb), iVar8 == 0))
                            goto LAB_00d1eac0;
                          }
                          lVar30 = lVar30 + -0x30;
                          plVar23 = plVar23 + 6;
                        } while (lVar30 != 0);
                      }
                      iVar8 = (int)uVar20;
                      plVar23 = plVar31;
                      if (iVar8 == 0) {
LAB_00d1eeac:
                        if (plVar31 + uVar20 * 6 != plVar23) {
                          plVar23 = plVar31;
                          if (iVar8 == 0) {
LAB_00d1ef20:
                            if (plVar23 == plVar31 + uVar20 * 6) goto LAB_00d1ef38;
                            plVar23 = plVar23 + 3;
                            plVar28 = plVar31;
                            if (iVar8 != 0) goto LAB_00d1ef64;
LAB_00d1efcc:
                            if (plVar31 == plVar28 + uVar20 * 6) goto LAB_00d1effc;
                            uVar5 = *(ushort *)((long)plVar31 + 0x2e);
                            if ((uVar5 >> 9 & 1) == 0) {
                              if ((uVar5 >> 5 & 1) != 0) {
                                dVar32 = (double)(long)(int)plVar31[3];
                                goto LAB_00d1f048;
                              }
                              if ((uVar5 >> 6 & 1) != 0) {
                                dVar32 = (double)NEON_ucvtf((ulong)*(uint *)(plVar31 + 3));
                                goto LAB_00d1f048;
                              }
                              uVar20 = plVar31[3];
                              if ((uVar5 >> 7 & 1) != 0) {
                                dVar32 = (double)(long)uVar20;
                                goto LAB_00d1f048;
                              }
                              goto LAB_00d1f010;
                            }
                            dVar32 = (double)plVar31[3];
                          }
                          else {
                            lVar30 = uVar20 * 0x30;
                            do {
                              iVar9 = (int)*plVar23;
                              if ((*(ushort *)((long)plVar23 + 0x16) & 0x1000) != 0) {
                                iVar9 = 0x15 - *(char *)((long)plVar23 + 0x15);
                              }
                              if (iVar9 == 8) {
                                plVar28 = (long *)plVar23[1];
                                if ((*(ushort *)((long)plVar23 + 0x16) & 0x1000) != 0) {
                                  plVar28 = plVar23;
                                }
                                if ((plVar28 == (long *)0x142520d) ||
                                   (*plVar28 == 0x6e6f697461746f72)) goto LAB_00d1ef20;
                              }
                              plVar23 = plVar23 + 6;
                              lVar30 = lVar30 + -0x30;
                            } while (lVar30 != 0);
LAB_00d1ef38:
                            plVar23 = &rapidjson::
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
                            plVar31 = *(long **)puVar15;
                            uVar20 = (ulong)*puVar11;
                            plVar28 = plVar31;
                            if (*puVar11 == 0) goto LAB_00d1efcc;
LAB_00d1ef64:
                            lVar30 = uVar20 * 0x30;
                            plVar31 = plVar28;
                            do {
                              iVar8 = (int)*plVar31;
                              if ((*(ushort *)((long)plVar31 + 0x16) & 0x1000) != 0) {
                                iVar8 = 0x15 - *(char *)((long)plVar31 + 0x15);
                              }
                              if (iVar8 == 7) {
                                plVar29 = (long *)plVar31[1];
                                if ((*(ushort *)((long)plVar31 + 0x16) & 0x1000) != 0) {
                                  plVar29 = plVar31;
                                }
                                if ((plVar29 == (long *)"keytime") ||
                                   (iVar8 = memcmp("keytime",plVar29,7), iVar8 == 0))
                                goto LAB_00d1efcc;
                              }
                              plVar31 = plVar31 + 6;
                              lVar30 = lVar30 + -0x30;
                            } while (lVar30 != 0);
LAB_00d1effc:
                            uVar20 = 0;
                            rapidjson::
                            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                            ::
                            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                            ::buffer = 0;
                            DAT_01785a58 = 0;
                            DAT_01785a60 = 0;
LAB_00d1f010:
                            dVar32 = (double)uVar20;
                          }
LAB_00d1f048:
                          pdVar12 = (double *)plVar23[1];
                          uVar5 = *(ushort *)((long)pdVar12 + 0x16);
                          if ((uVar5 >> 9 & 1) == 0) {
                            if ((uVar5 >> 5 & 1) != 0) {
                              dVar33 = (double)(long)*(int *)pdVar12;
                              uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
                              goto joined_r0x00d1f07c;
                            }
                            if ((uVar5 >> 6 & 1) == 0) {
                              if ((uVar5 >> 7 & 1) == 0) {
                                dVar33 = (double)(ulong)*pdVar12;
                                uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
                                goto joined_r0x00d1f07c;
                              }
                              dVar33 = (double)(long)*pdVar12;
                              uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
                            }
                            else {
                              dVar33 = (double)NEON_ucvtf((ulong)*(uint *)pdVar12);
                              uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
                            }
                            if ((uVar5 >> 9 & 1) == 0) goto LAB_00d1f080;
LAB_00d1f0b4:
                            dVar34 = pdVar12[3];
                            uVar5 = *(ushort *)((long)pdVar12 + 0x46);
joined_r0x00d1f0e8:
                            if ((uVar5 >> 9 & 1) == 0) goto LAB_00d1f0c0;
LAB_00d1f0ec:
                            dVar35 = pdVar12[6];
                          }
                          else {
                            dVar33 = *pdVar12;
                            uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
joined_r0x00d1f07c:
                            if ((uVar5 >> 9 & 1) != 0) goto LAB_00d1f0b4;
LAB_00d1f080:
                            if ((uVar5 >> 5 & 1) != 0) {
                              dVar34 = (double)(long)*(int *)(pdVar12 + 3);
                              uVar5 = *(ushort *)((long)pdVar12 + 0x46);
                              goto joined_r0x00d1f0e8;
                            }
                            if ((uVar5 >> 6 & 1) == 0) {
                              if ((uVar5 >> 7 & 1) == 0) {
                                dVar34 = (double)(ulong)pdVar12[3];
                                uVar5 = *(ushort *)((long)pdVar12 + 0x46);
                                goto joined_r0x00d1f0e8;
                              }
                              dVar34 = (double)(long)pdVar12[3];
                              uVar5 = *(ushort *)((long)pdVar12 + 0x46);
                            }
                            else {
                              dVar34 = (double)NEON_ucvtf((ulong)*(uint *)(pdVar12 + 3));
                              uVar5 = *(ushort *)((long)pdVar12 + 0x46);
                            }
                            if ((uVar5 >> 9 & 1) != 0) goto LAB_00d1f0ec;
LAB_00d1f0c0:
                            if ((uVar5 >> 5 & 1) == 0) {
                              if ((uVar5 >> 6 & 1) == 0) {
                                if ((uVar5 >> 7 & 1) == 0) {
                                  dVar35 = (double)(ulong)pdVar12[6];
                                }
                                else {
                                  dVar35 = (double)(long)pdVar12[6];
                                }
                              }
                              else {
                                dVar35 = (double)NEON_ucvtf((ulong)*(uint *)(pdVar12 + 6));
                              }
                            }
                            else {
                              dVar35 = (double)(long)*(int *)(pdVar12 + 6);
                            }
                          }
                          uVar5 = *(ushort *)((long)pdVar12 + 0x5e);
                          if ((uVar5 >> 9 & 1) == 0) {
                            if ((uVar5 >> 5 & 1) == 0) {
                              if ((uVar5 >> 6 & 1) == 0) {
                                if ((uVar5 >> 7 & 1) == 0) {
                                  dVar36 = (double)(ulong)pdVar12[9];
                                }
                                else {
                                  dVar36 = (double)(long)pdVar12[9];
                                }
                              }
                              else {
                                dVar36 = (double)NEON_ucvtf((ulong)*(uint *)(pdVar12 + 9));
                              }
                            }
                            else {
                              dVar36 = (double)(long)*(int *)(pdVar12 + 9);
                            }
                          }
                          else {
                            dVar36 = pdVar12[9];
                          }
                          Quaternion::Quaternion
                                    ((Quaternion *)&local_c8,(float)dVar33,(float)dVar34,
                                     (float)dVar35,(float)dVar36);
                          local_e0 = local_b8;
                          lVar30 = std::__ndk1::
                                   __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>>>>
                                   ::
                                   __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                             ((basic_string *)(param_2 + 0x18),
                                              (piecewise_construct_t *)local_b8,
                                              (tuple *)&DAT_01419148,(tuple *)&local_e0);
                          local_e0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)CONCAT44(local_e0._4_4_,(float)dVar32);
                          Quaternion::Quaternion(this_00,(Quaternion *)&local_c8);
                          puVar2 = *(undefined4 **)(lVar30 + 0x40);
                          if (puVar2 < *(undefined4 **)(lVar30 + 0x48)) {
                            *puVar2 = local_e0._0_4_;
                            Quaternion::Quaternion((Quaternion *)(puVar2 + 1),this_00);
                            *(undefined4 **)(lVar30 + 0x40) = puVar2 + 5;
                          }
                          else {
                            std::__ndk1::
                            vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>
                            ::__push_back_slow_path<cocos2d::Animation3DData::QuatKey>
                                      ((vector<cocos2d::Animation3DData::QuatKey,std::__ndk1::allocator<cocos2d::Animation3DData::QuatKey>>
                                        *)(lVar30 + 0x38),(QuatKey *)&local_e0);
                          }
                          Quaternion::~Quaternion(this_00);
                          Quaternion::~Quaternion((Quaternion *)&local_c8);
                          plVar31 = *(long **)puVar15;
                          uVar20 = (ulong)*puVar11;
                        }
                      }
                      else {
                        lVar30 = uVar20 * 0x30;
                        do {
                          iVar9 = (int)*plVar23;
                          if ((*(ushort *)((long)plVar23 + 0x16) & 0x1000) != 0) {
                            iVar9 = 0x15 - *(char *)((long)plVar23 + 0x15);
                          }
                          if (iVar9 == 8) {
                            plVar28 = (long *)plVar23[1];
                            if ((*(ushort *)((long)plVar23 + 0x16) & 0x1000) != 0) {
                              plVar28 = plVar23;
                            }
                            if ((plVar28 == (long *)0x142520d) || (*plVar28 == 0x6e6f697461746f72))
                            goto LAB_00d1eeac;
                          }
                          plVar23 = plVar23 + 6;
                          lVar30 = lVar30 + -0x30;
                        } while (lVar30 != 0);
                      }
                      plVar28 = plVar31 + uVar20 * 6;
                      iVar8 = (int)uVar20;
                      plVar23 = plVar31;
                      if (iVar8 != 0) {
                        lVar30 = uVar20 * 0x30;
                        plVar29 = plVar31;
                        do {
                          iVar9 = (int)*plVar29;
                          if ((*(ushort *)((long)plVar29 + 0x16) & 0x1000) != 0) {
                            iVar9 = 0x15 - *(char *)((long)plVar29 + 0x15);
                          }
                          if (iVar9 == 5) {
                            __s2_00 = (long *)plVar29[1];
                            if ((*(ushort *)((long)plVar29 + 0x16) & 0x1000) != 0) {
                              __s2_00 = plVar29;
                            }
                            plVar23 = plVar29;
                            if ((__s2_00 == (long *)0x1424f42) ||
                               (iVar9 = memcmp("scale",__s2_00,5), iVar9 == 0)) break;
                          }
                          plVar29 = plVar29 + 6;
                          lVar30 = lVar30 + -0x30;
                          plVar23 = plVar28;
                        } while (lVar30 != 0);
                      }
                      if (plVar28 != plVar23) {
                        plVar23 = plVar31;
                        if (iVar8 == 0) {
LAB_00d1f354:
                          if (plVar23 == plVar28) goto LAB_00d1f36c;
                          plVar23 = plVar23 + 3;
                          plVar28 = plVar31;
                          if (iVar8 != 0) goto LAB_00d1f398;
LAB_00d1f400:
                          if (plVar31 == plVar28 + uVar20 * 6) goto LAB_00d1f430;
                          uVar5 = *(ushort *)((long)plVar31 + 0x2e);
                          if ((uVar5 >> 9 & 1) == 0) {
                            if ((uVar5 >> 5 & 1) != 0) {
                              dVar32 = (double)(long)(int)plVar31[3];
                              goto LAB_00d1f46c;
                            }
                            if ((uVar5 >> 6 & 1) != 0) {
                              dVar32 = (double)NEON_ucvtf((ulong)*(uint *)(plVar31 + 3));
                              goto LAB_00d1f46c;
                            }
                            uVar20 = plVar31[3];
                            if ((uVar5 >> 7 & 1) != 0) {
                              dVar32 = (double)(long)uVar20;
                              goto LAB_00d1f46c;
                            }
                            goto LAB_00d1f444;
                          }
                          dVar32 = (double)plVar31[3];
                        }
                        else {
                          lVar30 = uVar20 * 0x30;
                          do {
                            iVar9 = (int)*plVar23;
                            if ((*(ushort *)((long)plVar23 + 0x16) & 0x1000) != 0) {
                              iVar9 = 0x15 - *(char *)((long)plVar23 + 0x15);
                            }
                            if (iVar9 == 5) {
                              plVar29 = (long *)plVar23[1];
                              if ((*(ushort *)((long)plVar23 + 0x16) & 0x1000) != 0) {
                                plVar29 = plVar23;
                              }
                              if ((plVar29 == (long *)0x1424f42) ||
                                 (iVar9 = memcmp("scale",plVar29,5), iVar9 == 0)) goto LAB_00d1f354;
                            }
                            plVar23 = plVar23 + 6;
                            lVar30 = lVar30 + -0x30;
                          } while (lVar30 != 0);
LAB_00d1f36c:
                          plVar23 = &rapidjson::
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
                          plVar31 = *(long **)puVar15;
                          uVar20 = (ulong)*puVar11;
                          plVar28 = plVar31;
                          if (*puVar11 == 0) goto LAB_00d1f400;
LAB_00d1f398:
                          lVar30 = uVar20 * 0x30;
                          plVar31 = plVar28;
                          do {
                            iVar8 = (int)*plVar31;
                            if ((*(ushort *)((long)plVar31 + 0x16) & 0x1000) != 0) {
                              iVar8 = 0x15 - *(char *)((long)plVar31 + 0x15);
                            }
                            if (iVar8 == 7) {
                              plVar29 = (long *)plVar31[1];
                              if ((*(ushort *)((long)plVar31 + 0x16) & 0x1000) != 0) {
                                plVar29 = plVar31;
                              }
                              if ((plVar29 == (long *)"keytime") ||
                                 (iVar8 = memcmp("keytime",plVar29,7), iVar8 == 0))
                              goto LAB_00d1f400;
                            }
                            plVar31 = plVar31 + 6;
                            lVar30 = lVar30 + -0x30;
                          } while (lVar30 != 0);
LAB_00d1f430:
                          uVar20 = 0;
                          rapidjson::
                          GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
                          ::
                          operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
                          ::buffer = 0;
                          DAT_01785a58 = 0;
                          DAT_01785a60 = 0;
LAB_00d1f444:
                          dVar32 = (double)uVar20;
                        }
LAB_00d1f46c:
                        pdVar12 = (double *)plVar23[1];
                        uVar5 = *(ushort *)((long)pdVar12 + 0x16);
                        if ((uVar5 >> 9 & 1) == 0) {
                          if ((uVar5 >> 5 & 1) != 0) {
                            dVar33 = (double)(long)*(int *)pdVar12;
                            uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
                            goto joined_r0x00d1f4a0;
                          }
                          if ((uVar5 >> 6 & 1) == 0) {
                            if ((uVar5 >> 7 & 1) == 0) {
                              dVar33 = (double)(ulong)*pdVar12;
                              uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
                              goto joined_r0x00d1f4a0;
                            }
                            dVar33 = (double)(long)*pdVar12;
                            uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
                          }
                          else {
                            dVar33 = (double)NEON_ucvtf((ulong)*(uint *)pdVar12);
                            uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
                          }
                          if ((uVar5 >> 9 & 1) == 0) goto LAB_00d1f4a4;
LAB_00d1f4d0:
                          dVar34 = pdVar12[3];
                        }
                        else {
                          dVar33 = *pdVar12;
                          uVar5 = *(ushort *)((long)pdVar12 + 0x2e);
joined_r0x00d1f4a0:
                          if ((uVar5 >> 9 & 1) != 0) goto LAB_00d1f4d0;
LAB_00d1f4a4:
                          if ((uVar5 >> 5 & 1) == 0) {
                            if ((uVar5 >> 6 & 1) == 0) {
                              if ((uVar5 >> 7 & 1) == 0) {
                                dVar34 = (double)(ulong)pdVar12[3];
                              }
                              else {
                                dVar34 = (double)(long)pdVar12[3];
                              }
                            }
                            else {
                              dVar34 = (double)NEON_ucvtf((ulong)*(uint *)(pdVar12 + 3));
                            }
                          }
                          else {
                            dVar34 = (double)(long)*(int *)(pdVar12 + 3);
                          }
                        }
                        uVar5 = *(ushort *)((long)pdVar12 + 0x46);
                        if ((uVar5 >> 9 & 1) == 0) {
                          if ((uVar5 >> 5 & 1) == 0) {
                            if ((uVar5 >> 6 & 1) == 0) {
                              if ((uVar5 >> 7 & 1) == 0) {
                                dVar35 = (double)(ulong)pdVar12[6];
                              }
                              else {
                                dVar35 = (double)(long)pdVar12[6];
                              }
                            }
                            else {
                              dVar35 = (double)NEON_ucvtf((ulong)*(uint *)(pdVar12 + 6));
                            }
                          }
                          else {
                            dVar35 = (double)(long)*(int *)(pdVar12 + 6);
                          }
                        }
                        else {
                          dVar35 = pdVar12[6];
                        }
                        Vec3::Vec3((Vec3 *)&local_c8,(float)dVar33,(float)dVar34,(float)dVar35);
                        local_e0 = local_b8;
                        lVar30 = std::__ndk1::
                                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>>>>
                                 ::
                                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                           ((basic_string *)(param_2 + 0x30),
                                            (piecewise_construct_t *)local_b8,(tuple *)&DAT_01419148
                                            ,(tuple *)&local_e0);
                        local_e0 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)CONCAT44(local_e0._4_4_,(float)dVar32);
                        *(undefined4 *)(this_00 + 8) = local_c0;
                        *(undefined8 *)this_00 = local_c8;
                        plVar23 = *(long **)(lVar30 + 0x40);
                        if (plVar23 < *(long **)(lVar30 + 0x48)) {
                          plVar23[1] = lStack_d8;
                          *plVar23 = (long)local_e0;
                          *(long **)(lVar30 + 0x40) = plVar23 + 2;
                        }
                        else {
                          std::__ndk1::
                          vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                          ::__push_back_slow_path<cocos2d::Animation3DData::Vec3Key>
                                    ((vector<cocos2d::Animation3DData::Vec3Key,std::__ndk1::allocator<cocos2d::Animation3DData::Vec3Key>>
                                      *)(lVar30 + 0x38),(Vec3Key *)&local_e0);
                        }
                      }
                      uVar21 = uVar21 + 1;
                    } while (uVar21 != uVar26);
                  }
                }
                if (((byte)local_b8[0] & 1) != 0) {
                  operator_delete(local_a8);
                }
                uVar27 = uVar27 + 1;
              } while (uVar27 < (uint)piVar16[6]);
              uVar17 = 1;
              bVar7 = local_a0[0];
              goto joined_r0x00d1f610;
            }
          }
          else {
            lVar30 = (ulong)uVar18 * 0x30;
            do {
              iVar8 = *piVar16;
              if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                iVar8 = 0x15 - *(char *)((long)piVar16 + 0x15);
              }
              if (iVar8 == 5) {
                piVar19 = *(int **)(piVar16 + 2);
                if ((*(ushort *)((long)piVar16 + 0x16) & 0x1000) != 0) {
                  piVar19 = piVar16;
                }
                if ((piVar19 == (int *)"bones") || (iVar8 = memcmp("bones",piVar19,5), iVar8 == 0))
                goto LAB_00d1e6fc;
              }
              lVar30 = lVar30 + -0x30;
              piVar16 = piVar16 + 0xc;
            } while (lVar30 != 0);
LAB_00d1f5e8:
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01785a58 = 0;
            DAT_01785a60 = 0;
          }
          uVar17 = 1;
          goto joined_r0x00d1f610;
        }
      }
      else {
        lVar30 = uVar27 * 0x30;
        do {
          iVar8 = *piVar19;
          if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
            iVar8 = 0x15 - *(char *)((long)piVar19 + 0x15);
          }
          if (iVar8 == (int)((long)pcVar25 - (long)piVar16)) {
            piVar14 = *(int **)(piVar19 + 2);
            if ((*(ushort *)((long)piVar19 + 0x16) & 0x1000) != 0) {
              piVar14 = piVar19;
            }
            if ((piVar14 == piVar16) ||
               (iVar8 = memcmp(piVar16,piVar14,(long)pcVar25 - (long)piVar16 & 0xffffffff),
               iVar8 == 0)) goto LAB_00d1e39c;
          }
          lVar30 = lVar30 + -0x30;
          piVar19 = piVar19 + 0xc;
        } while (lVar30 != 0);
      }
      uVar17 = 0;
      rapidjson::
      GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
      operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
      ::buffer = 0;
      DAT_01785a58 = 0;
      DAT_01785a60 = 0;
      goto joined_r0x00d1f610;
    }
  }
  else {
    lVar30 = uVar27 * 0x30;
    do {
      iVar8 = *piVar14;
      if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
        iVar8 = 0x15 - *(char *)((long)piVar14 + 0x15);
      }
      if (iVar8 == (int)((long)pcVar10 - (long)piVar16)) {
        piVar22 = *(int **)(piVar14 + 2);
        if ((*(ushort *)((long)piVar14 + 0x16) & 0x1000) != 0) {
          piVar22 = piVar14;
        }
        if ((piVar22 == piVar16) ||
           (iVar8 = memcmp(piVar16,piVar22,(long)pcVar10 - (long)piVar16 & 0xffffffff), iVar8 == 0))
        goto LAB_00d1e308;
      }
      lVar30 = lVar30 + -0x30;
      piVar14 = piVar14 + 0xc;
    } while (lVar30 != 0);
  }
LAB_00d1e520:
  uVar17 = 0;
joined_r0x00d1f610:
  if (((byte)bVar7 & 1) != 0) {
    operator_delete(local_90);
  }
  if (*(long *)(lVar6 + 0x28) == local_80) {
    return uVar17;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

