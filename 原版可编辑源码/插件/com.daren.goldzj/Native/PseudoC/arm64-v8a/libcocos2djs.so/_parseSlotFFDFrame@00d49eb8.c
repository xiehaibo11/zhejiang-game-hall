
/* dragonBones::JSONDataParser::_parseSlotFFDFrame(rapidjson::GenericValue<rapidjson::UTF8<char>,
   rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> > const&, unsigned int, unsigned int) */

undefined4
dragonBones::JSONDataParser::_parseSlotFFDFrame(GenericValue *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  vector<float,std::__ndk1::allocator<float>> *this;
  float *pfVar3;
  undefined2 *puVar4;
  int *__s2;
  long lVar5;
  long lVar6;
  int iVar7;
  ushort uVar8;
  short sVar9;
  long lVar10;
  undefined *__s1;
  undefined4 uVar11;
  int iVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 *puVar15;
  long lVar16;
  GenericValue *pGVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  char *pcVar21;
  long lVar22;
  double *pdVar23;
  long lVar24;
  int *piVar25;
  ulong uVar26;
  long lVar27;
  char *pcVar28;
  int *piVar29;
  int *piVar30;
  int *piVar31;
  size_t __n;
  ulong uVar32;
  void *__src;
  uint uVar33;
  void *__dest;
  ulong uVar34;
  float fVar35;
  float fVar36;
  double dVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  uint local_13c;
  float local_110;
  ulong local_e8;
  size_t local_e0;
  void *local_d8;
  ulong local_d0;
  ulong uStack_c8;
  void *local_c0;
  ulong *local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong local_90;
  ulong uStack_88;
  void *local_80;
  long local_70;
  
  pGVar17 = (GenericValue *)(ulong)param_2;
  lVar10 = tpidr_el0;
  local_70 = *(long *)(lVar10 + 0x28);
  lVar5 = *(long *)(param_1 + 0x150);
  lVar6 = *(long *)(param_1 + 0x158);
  uVar11 = (**(code **)(*(long *)param_1 + 0x98))();
  uVar13 = _getNumber(pGVar17,DataParser::OFFSET,0);
  uVar13 = uVar13 & 0xffffffff;
  lVar20 = *(long *)(*(long *)(param_1 + 0x50) + 0x60);
  sVar9 = *(short *)(*(long *)(param_1 + 0x108) +
                    (ulong)*(uint *)(*(long *)(param_1 + 0x50) + 0x6c) * 2);
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = (void *)0x0;
  if ((*(byte *)(lVar20 + 0x10) & 1) == 0) {
    __n = (size_t)(*(byte *)(lVar20 + 0x10) >> 1);
    __src = (void *)(lVar20 + 0x11);
  }
  else {
    __n = *(size_t *)(lVar20 + 0x18);
    __src = *(void **)(lVar20 + 0x20);
  }
  if (0xffffffffffffffef < __n + 1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (__n + 1 < 0x17) {
    __dest = (void *)((ulong)&local_e8 | 1);
    local_e8 = (ulong)(byte)((int)__n << 1);
    if (__n == 0) goto LAB_00d49fbc;
  }
  else {
    uVar34 = __n + 0x11 & 0xfffffffffffffff0;
    __dest = operator_new(uVar34);
    local_e8 = uVar34 | 1;
    local_e0 = __n;
    local_d8 = __dest;
  }
  memcpy(__dest,__src,__n);
LAB_00d49fbc:
  *(undefined1 *)((long)__dest + __n) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_e8
         ,"_",1);
  lVar20 = *(long *)(param_1 + 0x40);
  uVar34 = (ulong)(*(byte *)(lVar20 + 0x20) >> 1);
  pcVar21 = (char *)(lVar20 + 0x21);
  if ((*(byte *)(lVar20 + 0x20) & 1) != 0) {
    uVar34 = *(ulong *)(lVar20 + 0x28);
    pcVar21 = *(char **)(lVar20 + 0x30);
  }
  puVar14 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_e8,pcVar21,uVar34);
  local_c0 = (void *)puVar14[2];
  uStack_c8 = puVar14[1];
  local_d0 = *puVar14;
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = 0;
  puVar15 = (undefined8 *)
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_d0,"_",1);
  local_a0 = (void *)puVar15[2];
  uStack_a8 = puVar15[1];
  local_b0 = (ulong *)*puVar15;
  puVar15[1] = 0;
  puVar15[2] = 0;
  *puVar15 = 0;
  lVar20 = *(long *)(param_1 + 0x50);
  uVar34 = (ulong)(*(byte *)(lVar20 + 0x18) >> 1);
  pcVar21 = (char *)(lVar20 + 0x19);
  if ((*(byte *)(lVar20 + 0x18) & 1) != 0) {
    uVar34 = *(ulong *)(lVar20 + 0x20);
    pcVar21 = *(char **)(lVar20 + 0x28);
  }
  puVar14 = (ulong *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                               *)&local_b0,pcVar21,uVar34);
  local_80 = (void *)puVar14[2];
  uStack_88 = puVar14[1];
  local_90 = *puVar14;
  puVar14[1] = 0;
  puVar14[2] = 0;
  *puVar14 = 0;
  if (((ulong)local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_e8 & 1) != 0) {
    operator_delete(local_d8);
  }
  this = (vector<float,std::__ndk1::allocator<float>> *)(param_1 + 0x150);
  lVar20 = *(long *)(*(long *)(param_1 + 0x50) + 0x78);
  iVar12 = (int)sVar9;
  if (lVar20 == 0) {
    uVar26 = (ulong)(uint)(iVar12 << 1);
    uVar18 = *(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150) >> 2;
    uVar34 = uVar18 + uVar26;
    if (uVar18 < uVar34) {
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this,uVar26);
      uVar33 = 0;
    }
    else {
      uVar33 = 0;
      if (uVar18 != uVar34) {
        *(ulong *)(param_1 + 0x158) = *(long *)(param_1 + 0x150) + uVar34 * 4;
      }
    }
  }
  else {
    local_b0 = &local_90;
    lVar16 = std::__ndk1::
             __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
             ::
             __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                       ((basic_string *)(param_1 + 0x1e0),(piecewise_construct_t *)&local_90,
                        (tuple *)&DAT_01948c98,(tuple *)&local_b0);
    lVar16 = *(long *)(lVar16 + 0x38);
    pdVar23 = *(double **)(lVar16 + 8);
    uVar8 = *(ushort *)((long)pdVar23 + 0x16);
    if ((uVar8 >> 9 & 1) == 0) {
      if ((uVar8 >> 5 & 1) == 0) {
        if ((uVar8 >> 6 & 1) == 0) {
          if ((uVar8 >> 7 & 1) == 0) {
            dVar37 = (double)(ulong)*pdVar23;
          }
          else {
            dVar37 = (double)(long)*pdVar23;
          }
        }
        else {
          dVar37 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
        }
      }
      else {
        dVar37 = (double)(long)*(int *)pdVar23;
      }
    }
    else {
      dVar37 = *pdVar23;
    }
    *(float *)(param_1 + 0x7c) = (float)dVar37;
    lVar24 = *(long *)(lVar16 + 8);
    uVar8 = *(ushort *)(lVar24 + 0x2e);
    if ((uVar8 >> 9 & 1) == 0) {
      if ((uVar8 >> 5 & 1) == 0) {
        if ((uVar8 >> 6 & 1) == 0) {
          if ((uVar8 >> 7 & 1) == 0) {
            dVar37 = (double)*(ulong *)(lVar24 + 0x18);
          }
          else {
            dVar37 = (double)(long)*(ulong *)(lVar24 + 0x18);
          }
        }
        else {
          dVar37 = (double)NEON_ucvtf((ulong)*(uint *)(lVar24 + 0x18));
        }
      }
      else {
        dVar37 = (double)(long)*(int *)(lVar24 + 0x18);
      }
    }
    else {
      dVar37 = *(double *)(lVar24 + 0x18);
    }
    *(float *)(param_1 + 0x80) = (float)dVar37;
    lVar24 = *(long *)(lVar16 + 8);
    uVar8 = *(ushort *)(lVar24 + 0x46);
    if ((uVar8 >> 9 & 1) == 0) {
      if ((uVar8 >> 5 & 1) == 0) {
        if ((uVar8 >> 6 & 1) == 0) {
          if ((uVar8 >> 7 & 1) == 0) {
            dVar37 = (double)*(ulong *)(lVar24 + 0x30);
          }
          else {
            dVar37 = (double)(long)*(ulong *)(lVar24 + 0x30);
          }
        }
        else {
          dVar37 = (double)NEON_ucvtf((ulong)*(uint *)(lVar24 + 0x30));
        }
      }
      else {
        dVar37 = (double)(long)*(int *)(lVar24 + 0x30);
      }
    }
    else {
      dVar37 = *(double *)(lVar24 + 0x30);
    }
    *(float *)(param_1 + 0x84) = (float)dVar37;
    lVar24 = *(long *)(lVar16 + 8);
    uVar8 = *(ushort *)(lVar24 + 0x5e);
    if ((uVar8 >> 9 & 1) == 0) {
      if ((uVar8 >> 5 & 1) == 0) {
        if ((uVar8 >> 6 & 1) == 0) {
          if ((uVar8 >> 7 & 1) == 0) {
            dVar37 = (double)*(ulong *)(lVar24 + 0x48);
          }
          else {
            dVar37 = (double)(long)*(ulong *)(lVar24 + 0x48);
          }
        }
        else {
          dVar37 = (double)NEON_ucvtf((ulong)*(uint *)(lVar24 + 0x48));
        }
      }
      else {
        dVar37 = (double)(long)*(int *)(lVar24 + 0x48);
      }
    }
    else {
      dVar37 = *(double *)(lVar24 + 0x48);
    }
    *(float *)(param_1 + 0x88) = (float)dVar37;
    lVar24 = *(long *)(lVar16 + 8);
    uVar8 = *(ushort *)(lVar24 + 0x76);
    if ((uVar8 >> 9 & 1) == 0) {
      if ((uVar8 >> 5 & 1) == 0) {
        if ((uVar8 >> 6 & 1) == 0) {
          if ((uVar8 >> 7 & 1) == 0) {
            dVar37 = (double)*(ulong *)(lVar24 + 0x60);
          }
          else {
            dVar37 = (double)(long)*(ulong *)(lVar24 + 0x60);
          }
        }
        else {
          dVar37 = (double)NEON_ucvtf((ulong)*(uint *)(lVar24 + 0x60));
        }
      }
      else {
        dVar37 = (double)(long)*(int *)(lVar24 + 0x60);
      }
    }
    else {
      dVar37 = *(double *)(lVar24 + 0x60);
    }
    *(float *)(param_1 + 0x8c) = (float)dVar37;
    lVar16 = *(long *)(lVar16 + 8);
    uVar8 = *(ushort *)(lVar16 + 0x8e);
    if ((uVar8 >> 9 & 1) == 0) {
      if ((uVar8 >> 5 & 1) == 0) {
        if ((uVar8 >> 6 & 1) == 0) {
          if ((uVar8 >> 7 & 1) == 0) {
            dVar37 = (double)*(ulong *)(lVar16 + 0x78);
          }
          else {
            dVar37 = (double)(long)*(ulong *)(lVar16 + 0x78);
          }
        }
        else {
          dVar37 = (double)NEON_ucvtf((ulong)*(uint *)(lVar16 + 0x78));
        }
      }
      else {
        dVar37 = (double)(long)*(int *)(lVar16 + 0x78);
      }
    }
    else {
      dVar37 = *(double *)(lVar16 + 0x78);
    }
    *(float *)(param_1 + 0x90) = (float)dVar37;
    uVar26 = *(long *)(param_1 + 0x158) - *(long *)(param_1 + 0x150) >> 2;
    uVar18 = (ulong)(uint)(*(int *)(lVar20 + 0x10) << 1);
    uVar34 = uVar26 + uVar18;
    if (uVar26 < uVar34) {
      std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__append(this,uVar18);
    }
    else if (uVar26 != uVar34) {
      *(ulong *)(param_1 + 0x158) = *(long *)(param_1 + 0x150) + uVar34 * 4;
    }
    uVar26 = (ulong)(uint)(iVar12 << 1);
    uVar33 = *(int *)(lVar20 + 0x14) +
             (int)((ulong)(*(long *)(lVar20 + 0x20) - *(long *)(lVar20 + 0x18)) >> 3) + 2;
  }
  lVar16 = lVar6 - lVar5 >> 2;
  if (iVar12 != 0) {
    uVar34 = 0;
    local_13c = 0;
    do {
      __s1 = DataParser::VERTICES;
      pcVar28 = DataParser::VERTICES + -1;
      pcVar21 = pcVar28;
      do {
        pcVar21 = pcVar21 + 1;
      } while (*pcVar21 != '\0');
      piVar30 = *(int **)(pGVar17 + 8);
      uVar19 = *(uint *)pGVar17;
      uVar18 = (ulong)uVar19;
      piVar25 = piVar30 + uVar18 * 0xc;
      piVar31 = piVar30;
      if (uVar19 != 0) {
        uVar32 = (long)pcVar21 - (long)DataParser::VERTICES;
        lVar24 = uVar18 * 0x30;
        piVar29 = piVar30;
        do {
          iVar12 = *piVar29;
          if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
            iVar12 = 0x15 - *(char *)((long)piVar29 + 0x15);
          }
          if (iVar12 == (int)uVar32) {
            __s2 = *(int **)(piVar29 + 2);
            if ((*(ushort *)((long)piVar29 + 0x16) & 0x1000) != 0) {
              __s2 = piVar29;
            }
            piVar31 = piVar29;
            if ((__s2 == (int *)__s1) ||
               (iVar12 = memcmp(__s1,__s2,uVar32 & 0xffffffff), iVar12 == 0)) break;
          }
          lVar24 = lVar24 + -0x30;
          piVar29 = piVar29 + 0xc;
          piVar31 = piVar25;
        } while (lVar24 != 0);
      }
      if (piVar25 == piVar31) {
        fVar35 = 0.0;
        local_110 = 0.0;
joined_r0x00d4a5e4:
        if (lVar20 == 0) goto LAB_00d4a5e8;
LAB_00d4a8cc:
        local_b0 = &local_90;
        lVar24 = std::__ndk1::
                 __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const*>>>
                 ::
                 __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                           ((basic_string *)(param_1 + 0x1f8),(piecewise_construct_t *)&local_90,
                            (tuple *)&DAT_01948c98,(tuple *)&local_b0);
        lVar22 = *(long *)(param_1 + 0x108);
        lVar24 = *(long *)(lVar24 + 0x38);
        sVar9 = *(short *)(lVar22 + (ulong)uVar33 * 2);
        uVar33 = uVar33 + 1;
        fVar36 = (float)*(undefined8 *)(param_1 + 0x7c) * local_110 +
                 (float)*(undefined8 *)(param_1 + 0x84) * fVar35;
        fVar35 = (float)((ulong)*(undefined8 *)(param_1 + 0x7c) >> 0x20) * local_110 +
                 (float)((ulong)*(undefined8 *)(param_1 + 0x84) >> 0x20) * fVar35;
        uVar18 = (long)sVar9 & 0xffffffff;
        *(ulong *)(param_1 + 0xe4) = CONCAT44(fVar35,fVar36);
        if (uVar18 != 0) {
          uVar19 = local_13c;
          uVar2 = uVar33;
          do {
            iVar12 = *(short *)(lVar22 + (ulong)uVar2 * 2) * 7;
            pdVar23 = (double *)(*(long *)(lVar24 + 8) + (ulong)(iVar12 + 1) * 0x18);
            uVar8 = *(ushort *)((long)pdVar23 + 0x16);
            if ((uVar8 >> 9 & 1) == 0) {
              if ((uVar8 >> 5 & 1) == 0) {
                if ((uVar8 >> 6 & 1) == 0) {
                  if ((uVar8 >> 7 & 1) == 0) {
                    dVar37 = (double)(ulong)*pdVar23;
                  }
                  else {
                    dVar37 = (double)(long)*pdVar23;
                  }
                }
                else {
                  dVar37 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                }
              }
              else {
                dVar37 = (double)(long)*(int *)pdVar23;
              }
            }
            else {
              dVar37 = *pdVar23;
            }
            fVar38 = (float)dVar37;
            *(float *)(param_1 + 0x94) = fVar38;
            pdVar23 = (double *)(*(long *)(lVar24 + 8) + (ulong)(iVar12 + 2) * 0x18);
            uVar8 = *(ushort *)((long)pdVar23 + 0x16);
            if ((uVar8 >> 9 & 1) == 0) {
              if ((uVar8 >> 5 & 1) == 0) {
                if ((uVar8 >> 6 & 1) == 0) {
                  if ((uVar8 >> 7 & 1) == 0) {
                    dVar37 = (double)(ulong)*pdVar23;
                  }
                  else {
                    dVar37 = (double)(long)*pdVar23;
                  }
                }
                else {
                  dVar37 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                }
              }
              else {
                dVar37 = (double)(long)*(int *)pdVar23;
              }
            }
            else {
              dVar37 = *pdVar23;
            }
            fVar39 = (float)dVar37;
            *(float *)(param_1 + 0x98) = fVar39;
            pdVar23 = (double *)(*(long *)(lVar24 + 8) + (ulong)(iVar12 + 3) * 0x18);
            uVar8 = *(ushort *)((long)pdVar23 + 0x16);
            if ((uVar8 >> 9 & 1) == 0) {
              if ((uVar8 >> 5 & 1) == 0) {
                if ((uVar8 >> 6 & 1) == 0) {
                  if ((uVar8 >> 7 & 1) == 0) {
                    dVar37 = (double)(ulong)*pdVar23;
                  }
                  else {
                    dVar37 = (double)(long)*pdVar23;
                  }
                }
                else {
                  dVar37 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                }
              }
              else {
                dVar37 = (double)(long)*(int *)pdVar23;
              }
            }
            else {
              dVar37 = *pdVar23;
            }
            fVar40 = (float)dVar37;
            *(float *)(param_1 + 0x9c) = fVar40;
            pdVar23 = (double *)(*(long *)(lVar24 + 8) + (ulong)(iVar12 + 4) * 0x18);
            uVar8 = *(ushort *)((long)pdVar23 + 0x16);
            if ((uVar8 >> 9 & 1) == 0) {
              if ((uVar8 >> 5 & 1) == 0) {
                if ((uVar8 >> 6 & 1) == 0) {
                  if ((uVar8 >> 7 & 1) == 0) {
                    dVar37 = (double)(ulong)*pdVar23;
                  }
                  else {
                    dVar37 = (double)(long)*pdVar23;
                  }
                }
                else {
                  dVar37 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                }
              }
              else {
                dVar37 = (double)(long)*(int *)pdVar23;
              }
            }
            else {
              dVar37 = *pdVar23;
            }
            fVar41 = (float)dVar37;
            *(float *)(param_1 + 0xa0) = fVar41;
            pdVar23 = (double *)(*(long *)(lVar24 + 8) + (ulong)(iVar12 + 5) * 0x18);
            uVar8 = *(ushort *)((long)pdVar23 + 0x16);
            if ((uVar8 >> 9 & 1) == 0) {
              if ((uVar8 >> 5 & 1) == 0) {
                if ((uVar8 >> 6 & 1) == 0) {
                  if ((uVar8 >> 7 & 1) == 0) {
                    dVar37 = (double)(ulong)*pdVar23;
                  }
                  else {
                    dVar37 = (double)(long)*pdVar23;
                  }
                }
                else {
                  dVar37 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                }
              }
              else {
                dVar37 = (double)(long)*(int *)pdVar23;
              }
            }
            else {
              dVar37 = *pdVar23;
            }
            fVar43 = (float)dVar37;
            *(float *)(param_1 + 0xa4) = fVar43;
            pdVar23 = (double *)(*(long *)(lVar24 + 8) + (ulong)(iVar12 + 6) * 0x18);
            uVar8 = *(ushort *)((long)pdVar23 + 0x16);
            if ((uVar8 >> 9 & 1) == 0) {
              if ((uVar8 >> 5 & 1) == 0) {
                if ((uVar8 >> 6 & 1) == 0) {
                  if ((uVar8 >> 7 & 1) == 0) {
                    dVar37 = (double)(ulong)*pdVar23;
                  }
                  else {
                    dVar37 = (double)(long)*pdVar23;
                  }
                }
                else {
                  dVar37 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                }
              }
              else {
                dVar37 = (double)(long)*(int *)pdVar23;
              }
            }
            else {
              dVar37 = *pdVar23;
            }
            lVar27 = *(long *)(param_1 + 0x150);
            fVar44 = fVar41 * fVar38 - fVar39 * fVar40;
            *(float *)(param_1 + 0x94) = fVar41 / fVar44;
            *(float *)(param_1 + 0x98) = -fVar39 / fVar44;
            *(float *)(param_1 + 0x9c) = -fVar40 / fVar44;
            *(float *)(param_1 + 0xa0) = fVar38 / fVar44;
            fVar42 = fVar36 * (fVar41 / fVar44) + fVar35 * (-fVar40 / fVar44);
            *(float *)(param_1 + 0xa4) = (fVar40 * (float)dVar37 - fVar41 * fVar43) / fVar44;
            *(float *)(param_1 + 0xa8) = -(fVar38 * (float)dVar37 - fVar39 * fVar43) / fVar44;
            *(float *)(param_1 + 0xe4) = fVar42;
            *(float *)(param_1 + 0xe8) = fVar36 * (-fVar39 / fVar44) + fVar35 * (fVar38 / fVar44);
            *(float *)(lVar27 + (lVar16 + (ulong)uVar19) * 4) = fVar42;
            uVar1 = uVar19 + 1;
            uVar19 = uVar19 + 2;
            uVar18 = uVar18 - 1;
            uVar2 = uVar2 + 1;
            *(undefined4 *)(lVar27 + (lVar16 + (ulong)uVar1) * 4) = *(undefined4 *)(param_1 + 0xe8);
          } while (uVar18 != 0);
          uVar33 = uVar33 + (int)sVar9;
          local_13c = local_13c + sVar9 * 2;
        }
      }
      else {
        fVar35 = 0.0;
        local_110 = 0.0;
        pcVar21 = pcVar28;
        if (uVar13 <= uVar34) {
          do {
            pcVar21 = pcVar21 + 1;
          } while (*pcVar21 != '\0');
          if (uVar19 == 0) {
LAB_00d4a60c:
            if (piVar30 == piVar25) goto LAB_00d4a620;
            uVar19 = piVar30[6];
          }
          else {
            lVar24 = uVar18 * 0x30;
            do {
              iVar12 = *piVar30;
              if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
                iVar12 = 0x15 - *(char *)((long)piVar30 + 0x15);
              }
              if (iVar12 == (int)((long)pcVar21 - (long)__s1)) {
                piVar31 = *(int **)(piVar30 + 2);
                if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
                  piVar31 = piVar30;
                }
                if ((piVar31 == (int *)__s1) ||
                   (iVar12 = memcmp(__s1,piVar31,(long)pcVar21 - (long)__s1 & 0xffffffff),
                   iVar12 == 0)) goto LAB_00d4a60c;
              }
              lVar24 = lVar24 + -0x30;
              piVar30 = piVar30 + 0xc;
            } while (lVar24 != 0);
LAB_00d4a620:
            uVar19 = 0;
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01d38c18 = 0;
            DAT_01d38c20 = 0;
          }
          local_110 = 0.0;
          pcVar21 = pcVar28;
          if (uVar34 - uVar13 < (ulong)uVar19) {
            do {
              pcVar21 = pcVar21 + 1;
            } while (*pcVar21 != '\0');
            uVar19 = *(uint *)pGVar17;
            piVar31 = *(int **)(pGVar17 + 8);
            piVar30 = piVar31;
            if (uVar19 == 0) {
LAB_00d4a6d4:
              if (piVar30 == piVar31 + (ulong)uVar19 * 0xc) goto LAB_00d4a6ec;
              lVar24 = *(long *)(piVar30 + 8);
            }
            else {
              lVar24 = (ulong)uVar19 * 0x30;
              do {
                iVar12 = *piVar30;
                if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
                  iVar12 = 0x15 - *(char *)((long)piVar30 + 0x15);
                }
                if (iVar12 == (int)((long)pcVar21 - (long)__s1)) {
                  piVar25 = *(int **)(piVar30 + 2);
                  if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
                    piVar25 = piVar30;
                  }
                  if ((piVar25 == (int *)__s1) ||
                     (iVar12 = memcmp(__s1,piVar25,(long)pcVar21 - (long)__s1 & 0xffffffff),
                     iVar12 == 0)) goto LAB_00d4a6d4;
                }
                lVar24 = lVar24 + -0x30;
                piVar30 = piVar30 + 0xc;
              } while (lVar24 != 0);
LAB_00d4a6ec:
              lVar24 = 0;
              rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::
              operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
              ::buffer = 0;
              DAT_01d38c18 = 0;
              DAT_01d38c20 = 0;
            }
            pdVar23 = (double *)(lVar24 + (uVar34 - uVar13 & 0xffffffff) * 0x18);
            uVar8 = *(ushort *)((long)pdVar23 + 0x16);
            if ((uVar8 >> 9 & 1) == 0) {
              if ((uVar8 >> 5 & 1) == 0) {
                if ((uVar8 >> 6 & 1) == 0) {
                  if ((uVar8 >> 7 & 1) == 0) {
                    dVar37 = (double)(ulong)*pdVar23;
                  }
                  else {
                    dVar37 = (double)(long)*pdVar23;
                  }
                }
                else {
                  dVar37 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                }
              }
              else {
                dVar37 = (double)(long)*(int *)pdVar23;
              }
            }
            else {
              dVar37 = *pdVar23;
            }
            local_110 = (float)dVar37;
          }
        }
        uVar18 = (uVar34 | 1) - uVar13;
        pcVar21 = pcVar28;
        if (uVar13 <= (uVar34 | 1)) {
          do {
            pcVar21 = pcVar21 + 1;
          } while (*pcVar21 != '\0');
          uVar19 = *(uint *)pGVar17;
          piVar31 = *(int **)(pGVar17 + 8);
          piVar30 = piVar31;
          if (uVar19 == 0) {
LAB_00d4a800:
            if (piVar30 == piVar31 + (ulong)uVar19 * 0xc) goto LAB_00d4a818;
            uVar19 = piVar30[6];
          }
          else {
            lVar24 = (ulong)uVar19 * 0x30;
            do {
              iVar12 = *piVar30;
              if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
                iVar12 = 0x15 - *(char *)((long)piVar30 + 0x15);
              }
              if (iVar12 == (int)((long)pcVar21 - (long)__s1)) {
                piVar25 = *(int **)(piVar30 + 2);
                if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
                  piVar25 = piVar30;
                }
                if ((piVar25 == (int *)__s1) ||
                   (iVar12 = memcmp(__s1,piVar25,(long)pcVar21 - (long)__s1 & 0xffffffff),
                   iVar12 == 0)) goto LAB_00d4a800;
              }
              lVar24 = lVar24 + -0x30;
              piVar30 = piVar30 + 0xc;
            } while (lVar24 != 0);
LAB_00d4a818:
            uVar19 = 0;
            rapidjson::
            GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
            ::
            operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
            ::buffer = 0;
            DAT_01d38c18 = 0;
            DAT_01d38c20 = 0;
          }
          if (uVar18 < uVar19) {
            do {
              pcVar28 = pcVar28 + 1;
            } while (*pcVar28 != '\0');
            uVar19 = *(uint *)pGVar17;
            piVar31 = *(int **)(pGVar17 + 8);
            piVar30 = piVar31;
            if (uVar19 == 0) {
LAB_00d4a3d4:
              if (piVar30 == piVar31 + (ulong)uVar19 * 0xc) goto LAB_00d4a3ec;
              lVar24 = *(long *)(piVar30 + 8);
            }
            else {
              lVar24 = (ulong)uVar19 * 0x30;
              do {
                iVar12 = *piVar30;
                if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
                  iVar12 = 0x15 - *(char *)((long)piVar30 + 0x15);
                }
                if (iVar12 == (int)((long)pcVar28 - (long)__s1)) {
                  piVar25 = *(int **)(piVar30 + 2);
                  if ((*(ushort *)((long)piVar30 + 0x16) & 0x1000) != 0) {
                    piVar25 = piVar30;
                  }
                  if ((piVar25 == (int *)__s1) ||
                     (iVar12 = memcmp(__s1,piVar25,(long)pcVar28 - (long)__s1 & 0xffffffff),
                     iVar12 == 0)) goto LAB_00d4a3d4;
                }
                lVar24 = lVar24 + -0x30;
                piVar30 = piVar30 + 0xc;
              } while (lVar24 != 0);
LAB_00d4a3ec:
              lVar24 = 0;
              rapidjson::
              GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              ::
              operator[]<rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>(rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>const&)
              ::buffer = 0;
              DAT_01d38c18 = 0;
              DAT_01d38c20 = 0;
            }
            pdVar23 = (double *)(lVar24 + (uVar18 & 0xffffffff) * 0x18);
            uVar8 = *(ushort *)((long)pdVar23 + 0x16);
            if ((uVar8 >> 9 & 1) == 0) {
              if ((uVar8 >> 5 & 1) == 0) {
                if ((uVar8 >> 6 & 1) == 0) {
                  if ((uVar8 >> 7 & 1) == 0) {
                    dVar37 = (double)(ulong)*pdVar23;
                  }
                  else {
                    dVar37 = (double)(long)*pdVar23;
                  }
                }
                else {
                  dVar37 = (double)NEON_ucvtf((ulong)*(uint *)pdVar23);
                }
              }
              else {
                dVar37 = (double)(long)*(int *)pdVar23;
              }
            }
            else {
              dVar37 = *pdVar23;
            }
            fVar35 = (float)dVar37;
            goto joined_r0x00d4a5e4;
          }
        }
        if (lVar20 != 0) goto LAB_00d4a8cc;
LAB_00d4a5e8:
        pfVar3 = (float *)(*(long *)this + (uVar34 + lVar16) * 4);
        *pfVar3 = local_110;
        pfVar3[1] = fVar35;
      }
      uVar34 = uVar34 + 2;
    } while (uVar34 < uVar26);
  }
  if (param_3 == 0) {
    lVar20 = *(long *)(param_1 + 0x138);
    uVar13 = *(long *)(param_1 + 0x140) - lVar20 >> 1;
    if (uVar13 < 0xfffffffffffffffb) {
      std::__ndk1::vector<short,std::__ndk1::allocator<short>>::__append
                ((vector<short,std::__ndk1::allocator<short>> *)(param_1 + 0x138),5);
      lVar20 = *(long *)(param_1 + 0x138);
    }
    else {
      *(ulong *)(param_1 + 0x140) = lVar20 + uVar13 * 2 + 10;
    }
    puVar4 = (undefined2 *)(lVar20 + uVar13 * 2);
    *puVar4 = (short)*(undefined4 *)(*(long *)(param_1 + 0x50) + 0x6c);
    iVar12 = *(int *)(param_1 + 0x158);
    iVar7 = *(int *)(param_1 + 0x150);
    puVar4[3] = 0;
    puVar4[4] = (short)((ulong)(lVar6 - lVar5) >> 2);
    sVar9 = (short)((uint)(iVar12 - iVar7) >> 2) - (short)lVar16;
    puVar4[1] = sVar9;
    puVar4[2] = sVar9;
    *(short *)(*(long *)(param_1 + 0x180) +
              (ulong)(*(int *)(*(long *)(param_1 + 0x60) + 0x14) + 3) * 2) =
         (short)uVar13 - (short)*(undefined4 *)(*(long *)(param_1 + 0x58) + 0x10);
  }
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar10 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}

