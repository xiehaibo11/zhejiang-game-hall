
/* cocos2d::LuaStack::luaLoadChunksFromZIP(lua_State*) */

void __thiscall cocos2d::LuaStack::luaLoadChunksFromZIP(LuaStack *this,lua_State *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar1;
  size_t sVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  size_t sVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  long *plVar11;
  ZipFile *pZVar12;
  void *pvVar13;
  ZipFile *this_00;
  char *pcVar14;
  char *pcVar15;
  undefined8 uVar16;
  size_t sVar17;
  uchar *puVar18;
  byte bVar19;
  ulong uVar20;
  char *pcVar21;
  char *pcVar22;
  size_t sVar23;
  ulong uVar24;
  ulong uVar25;
  ulong local_d0;
  ulong uStack_c8;
  char *local_c0;
  long local_b8;
  Data aDStack_b0 [16];
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  byte local_80 [16];
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar8 = lua_gettop(param_1);
  if (iVar8 < 1) {
    uVar16 = 0;
    goto LAB_007d3f90;
  }
  sVar17 = 0;
  pcVar10 = (char *)lua_tolstring(param_1,0xffffffff);
  lua_settop(param_1,0);
  plVar11 = (long *)FileUtils::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,pcVar10);
  (**(code **)(*plVar11 + 0x50))(local_80,plVar11,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  (**(code **)(*plVar11 + 0x28))(aDStack_b0,plVar11,local_80);
  pZVar12 = (ZipFile *)Data::getBytes(aDStack_b0);
  pvVar13 = (void *)Data::getSize(aDStack_b0);
  if ((this == (LuaStack *)0x0) || (this[0x34] == (LuaStack)0x0)) {
LAB_007d3ae0:
    if ((long)pvVar13 < 1) {
      pZVar12 = (ZipFile *)0x0;
    }
    else {
      this_00 = (ZipFile *)ZipFile::createWithBuffer(pZVar12,pvVar13,sVar17);
      pZVar12 = (ZipFile *)0x0;
      if (this_00 != (ZipFile *)0x0) goto LAB_007d3b00;
    }
LAB_007d3f5c:
    lua_pushboolean(param_1,0);
  }
  else {
    iVar8 = *(int *)(this + 0x50);
    sVar23 = (size_t)iVar8;
    if (((long)pvVar13 < (long)sVar23) ||
       (sVar17 = sVar23, iVar9 = memcmp(*(void **)(this + 0x48),pZVar12,sVar23), iVar9 != 0))
    goto LAB_007d3ae0;
    local_a0 = local_a0 & 0xffffffff00000000;
    puVar18 = *(uchar **)(this + 0x38);
    pZVar12 = (ZipFile *)
              xxtea_decrypt((uchar *)(pZVar12 + sVar23),(int)pvVar13 - iVar8,puVar18,
                            *(uint *)(this + 0x40),(uint *)&local_a0);
    this_00 = (ZipFile *)
              ZipFile::createWithBuffer(pZVar12,(void *)(local_a0 & 0xffffffff),(ulong)puVar18);
    if (this_00 == (ZipFile *)0x0) goto LAB_007d3f5c;
LAB_007d3b00:
    lua_getfield(param_1,0xffffd8ee,"package");
    lua_getfield(param_1,0xffffffff,"preload");
    ZipFile::getFirstFilename();
    bVar7 = (local_a0 & 1) == 0;
    uVar20 = local_a0 >> 1 & 0x7f;
    if (!bVar7) {
      uVar20 = uStack_98;
    }
    if (uVar20 != 0) {
      pcVar22 = (char *)((ulong)&local_a0 | 1);
      pcVar10 = (char *)((ulong)&local_d0 | 1);
      do {
        local_b8 = 0;
        pcVar14 = pcVar22;
        if (!bVar7) {
          pcVar14 = local_90;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_d0,pcVar14);
        pcVar14 = (char *)ZipFile::getFileData(this_00,(basic_string *)&local_d0,&local_b8);
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
        if (local_b8 != 0) {
          uVar20 = (ulong)((byte)local_a0._0_1_ >> 1);
          bVar19 = (byte)local_a0._0_1_ & 1;
          pcVar21 = pcVar22;
          uVar24 = uVar20;
          if ((local_a0 & 1) != 0) {
            pcVar21 = local_90;
            uVar24 = uStack_98;
          }
          uVar25 = uVar24;
          if (uVar24 != 0) {
            do {
              if (uVar25 == 0) goto LAB_007d3e48;
              lVar4 = uVar25 - 1;
              uVar25 = uVar25 - 1;
            } while (pcVar21[lVar4] != '.');
            if (uVar25 != 0xffffffffffffffff) {
              uStack_c8 = 0;
              local_c0 = (char *)0x0;
              local_d0 = 0;
              if (uVar24 < uVar25) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              uVar20 = uVar24 - uVar25;
              if (uVar24 <= uVar24 - uVar25) {
                uVar20 = uVar24;
              }
              if (0xffffffffffffffef < uVar20) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_length_error();
              }
              if (uVar20 < 0x17) {
                local_d0 = (ulong)(byte)((int)uVar20 << 1);
                pcVar15 = pcVar10;
                if (uVar20 != 0) goto LAB_007d3c88;
              }
              else {
                uVar24 = uVar20 + 0x10 & 0xfffffffffffffff0;
                pcVar15 = operator_new(uVar24);
                local_d0 = uVar24 | 1;
                uStack_c8 = uVar20;
                local_c0 = pcVar15;
LAB_007d3c88:
                memcpy(pcVar15,pcVar21 + uVar25,uVar20);
              }
              pcVar15[uVar20] = '\0';
              bVar1 = local_d0._0_1_;
              sVar23 = (size_t)((byte)local_d0._0_1_ >> 1);
              sVar17 = sVar23;
              if ((local_d0 & 1) != 0) {
                sVar17 = uStack_c8;
              }
              sVar2 = (ulong)(DAT_01781d50 >> 1);
              if ((DAT_01781d50 & 1) != 0) {
                sVar2 = DAT_01781d58;
              }
              uVar20 = local_d0 & 1;
              uVar24 = local_d0 & 1;
              if (sVar17 == sVar2) {
                pcVar21 = pcVar10;
                if ((local_d0 & 1) != 0) {
                  pcVar21 = local_c0;
                }
                pcVar15 = &DAT_01781d51;
                if ((DAT_01781d50 & 1) != 0) {
                  pcVar15 = DAT_01781d60;
                }
                pcVar5 = pcVar10;
                sVar2 = sVar23;
                sVar6 = sVar17;
                if ((local_d0 & 1) == 0) {
                  while (sVar6 != 0) {
                    if (*pcVar5 != *pcVar15) goto LAB_007d3d4c;
                    pcVar15 = pcVar15 + 1;
                    sVar2 = sVar2 - 1;
                    pcVar5 = pcVar5 + 1;
                    sVar6 = sVar2;
                  }
                }
                else if ((sVar17 != 0) && (iVar8 = memcmp(pcVar21,pcVar15,sVar17), iVar8 != 0))
                goto LAB_007d3d4c;
                goto LAB_007d3de0;
              }
LAB_007d3d4c:
              sVar2 = (ulong)(DAT_01781d38 >> 1);
              if ((DAT_01781d38 & 1) != 0) {
                sVar2 = DAT_01781d40;
              }
              if (sVar17 == sVar2) {
                pcVar21 = pcVar10;
                if (uVar20 != 0) {
                  pcVar21 = local_c0;
                }
                pcVar15 = &DAT_01781d39;
                if ((DAT_01781d38 & 1) != 0) {
                  pcVar15 = DAT_01781d48;
                }
                pcVar5 = pcVar10;
                if (uVar24 == 0) {
                  while (sVar17 != 0) {
                    if (*pcVar5 != *pcVar15) goto LAB_007d3e34;
                    pcVar15 = pcVar15 + 1;
                    sVar23 = sVar23 - 1;
                    pcVar5 = pcVar5 + 1;
                    sVar17 = sVar23;
                  }
LAB_007d3de0:
                  uVar20 = local_a0 >> 1 & 0x7f;
                  if ((local_a0 & 1) != 0) {
                    uVar20 = uStack_98;
                  }
                  if (uVar20 < uVar25) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  pcVar21 = pcVar22;
                  if ((local_a0 & 1) != 0) {
                    pcVar21 = local_90;
                  }
                  uVar20 = uVar25;
                  if ((local_a0 & 1) == 0) {
                    local_a0 = CONCAT71(local_a0._1_7_,(char)((int)uVar25 << 1));
                    uVar20 = uStack_98;
                  }
                  uStack_98 = uVar20;
                  pcVar21[uVar25] = '\0';
                  bVar1 = local_d0._0_1_;
                  goto LAB_007d3e28;
                }
                if ((sVar17 == 0) || (iVar8 = memcmp(pcVar21,pcVar15,sVar17), iVar8 == 0))
                goto LAB_007d3de0;
LAB_007d3e2c:
                operator_delete(local_c0);
              }
              else {
LAB_007d3e28:
                if (((byte)bVar1 & 1) != 0) goto LAB_007d3e2c;
              }
LAB_007d3e34:
              bVar19 = (byte)local_a0._0_1_ & 1;
              uVar20 = (ulong)((byte)local_a0._0_1_ >> 1);
            }
          }
LAB_007d3e48:
          pcVar21 = pcVar22;
          if (bVar19 != 0) {
            pcVar21 = local_90;
            uVar20 = uStack_98;
          }
          if (uVar20 != 0) {
            do {
              if ((*pcVar21 == '\\') || (*pcVar21 == '/')) {
                *pcVar21 = '.';
              }
              uVar20 = uVar20 - 1;
              pcVar21 = pcVar21 + 1;
            } while (uVar20 != 0);
            bVar19 = (byte)local_a0._0_1_ & 1;
          }
          pcVar21 = pcVar22;
          if (bVar19 != 0) {
            pcVar21 = local_90;
          }
          iVar8 = luaLoadBuffer(this,param_1,pcVar14,(int)local_b8,pcVar21);
          if (iVar8 == 0) {
            pcVar21 = pcVar22;
            if ((local_a0 & 1) != 0) {
              pcVar21 = local_90;
            }
            lua_setfield(param_1,0xfffffffe,pcVar21);
          }
          free(pcVar14);
        }
        ZipFile::getNextFilename();
        if ((local_a0 & 1) != 0) {
          *local_90 = '\0';
          uStack_98 = 0;
          if ((local_a0 & 1) != 0) {
            operator_delete(local_90);
          }
        }
        uStack_98 = uStack_c8;
        local_a0 = local_d0;
        local_90 = local_c0;
        bVar7 = (local_d0 & 1) == 0;
        uVar20 = local_d0 >> 1 & 0x7f;
        if (!bVar7) {
          uVar20 = uStack_c8;
        }
      } while (uVar20 != 0);
    }
    lua_settop(param_1,0xfffffffd);
    lua_pushboolean(param_1,1);
    (**(code **)(*(long *)this_00 + 8))(this_00);
    if ((local_a0 & 1) != 0) {
      operator_delete(local_90);
    }
  }
  if (pZVar12 != (ZipFile *)0x0) {
    free(pZVar12);
  }
  Data::~Data(aDStack_b0);
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  uVar16 = 1;
LAB_007d3f90:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar16);
}

