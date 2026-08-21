
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::NodeReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::NodeReader::createOptionsWithFlatBuffers
          (NodeReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

{
  long *plVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  size_t sVar16;
  XMLNode *this_00;
  size_t sVar17;
  int *piVar18;
  long *plVar19;
  long lVar20;
  float fVar21;
  double dVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  int local_1d0;
  undefined8 local_1c0;
  long local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  float local_19c;
  float local_198;
  float local_194;
  undefined8 local_188;
  float local_180;
  float fStack_17c;
  undefined1 local_178;
  undefined2 local_177;
  undefined1 local_175;
  float local_170;
  float local_16c;
  float fStack_168;
  float local_164;
  float local_160;
  float local_15c;
  ulong local_158;
  int *local_150;
  float local_148;
  float local_144;
  size_t local_140;
  long *local_138;
  ulong local_130;
  ulong local_128;
  char *local_120;
  ulong local_118;
  ulong local_110;
  char *local_108;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_100 [8];
  ulong local_f8;
  char *local_f0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [8];
  ulong local_e0;
  char *local_d8;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  ulong local_c0;
  char *local_b8;
  long local_b0;
  
  lVar4 = tpidr_el0;
  local_b0 = *(long *)(lVar4 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c8,"");
  cocos2d::Color4B::Color4B((Color4B *)&local_d0,0xff,0xff,0xff,0xff);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_e8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_100,"");
  local_110 = 0;
  local_108 = (char *)0x0;
  local_120 = (char *)0x0;
  local_118 = 0;
  local_130 = 0;
  local_128 = 0;
  lVar20 = *(long *)(param_1 + 0x60);
  if (lVar20 == 0) {
    bVar6 = true;
    bVar9 = false;
    bVar8 = false;
    local_1c0 = 0;
    local_1b8 = 0;
    local_188 = 0;
    bVar7 = false;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1d0 = 0xff;
    fVar31 = 0.0;
    fVar33 = 0.0;
    fVar29 = 0.0;
    fVar27 = 0.0;
    fVar25 = 0.0;
    fVar23 = 0.0;
  }
  else {
    local_1d0 = 0xff;
    local_1b8 = 0;
    local_1b0 = 0;
    local_1c0 = 0;
    bVar9 = false;
    bVar8 = false;
    local_1a8 = 0;
    bVar7 = false;
    local_188 = 0;
    bVar6 = true;
    fVar23 = 0.0;
    fVar25 = 0.0;
    fVar27 = 0.0;
    fVar29 = 0.0;
    fVar33 = 0.0;
    fVar31 = 0.0;
    plVar19 = (long *)((ulong)&local_148 | 1);
    piVar18 = (int *)((ulong)&local_160 | 1);
    do {
      pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_148,pcVar15);
      pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_160,pcVar15);
      fVar24 = local_148;
      sVar17 = (ulong)((byte)local_148._0_1_ >> 1);
      if (((uint)local_148 & 1) != 0) {
        sVar17 = local_140;
      }
      switch(sVar17) {
      case 3:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"Tag",3);
        if (iVar10 != 0) goto switchD_00cd31c0_caseD_c;
        piVar2 = piVar18;
        if (((uint)local_160 & 1) != 0) {
          piVar2 = local_150;
        }
        iVar10 = atoi((char *)piVar2);
        local_1b0 = CONCAT44(iVar10,(undefined4)local_1b0);
        break;
      case 4:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        if ((int)*plVar1 != 0x656d614e) goto switchD_00cd31c0_caseD_c;
        uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
        piVar2 = piVar18;
        if (((uint)local_160 & 1) != 0) {
          uVar3 = local_158;
          piVar2 = local_150;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_c8,(char *)piVar2,uVar3);
        break;
      case 5:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"FlipX",5);
        if (iVar10 == 0) {
          uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
          if (((uint)local_160 & 1) != 0) {
            uVar3 = local_158;
          }
          if (uVar3 == 4) {
            piVar2 = piVar18;
            if (((uint)local_160 & 1) != 0) {
              piVar2 = local_150;
            }
            local_1c0 = CONCAT44(local_1c0._4_4_,(uint)(*piVar2 == 0x65757254));
          }
          else {
            local_1c0 = (ulong)local_1c0._4_4_ << 0x20;
          }
        }
        else {
          iVar10 = memcmp(plVar1,"FlipY",5);
          if (iVar10 == 0) {
            uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
            if (((uint)local_160 & 1) != 0) {
              uVar3 = local_158;
            }
            if (uVar3 == 4) {
              piVar2 = piVar18;
              if (((uint)local_160 & 1) != 0) {
                piVar2 = local_150;
              }
              bVar9 = *piVar2 == 0x65757254;
            }
            else {
              bVar9 = false;
            }
          }
          else {
            iVar10 = memcmp(plVar1,"Alpha",5);
            if (iVar10 != 0) goto switchD_00cd31c0_caseD_c;
            piVar2 = piVar18;
            if (((uint)local_160 & 1) != 0) {
              piVar2 = local_150;
            }
            local_1d0 = atoi((char *)piVar2);
          }
        }
        break;
      case 6:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"ZOrder",6);
        if (iVar10 != 0) goto switchD_00cd31c0_caseD_c;
        piVar2 = piVar18;
        if (((uint)local_160 & 1) != 0) {
          piVar2 = local_150;
        }
        iVar10 = atoi((char *)piVar2);
        local_1b0 = CONCAT44(local_1b0._4_4_,iVar10);
        break;
      case 7:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"Visible",7);
        if (iVar10 != 0) goto switchD_00cd31c0_caseD_c;
        break;
      case 8:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        if (*plVar1 != 0x6e6f697461746f52) {
          if (*plVar1 != 0x6174614472657355) goto switchD_00cd31c0_caseD_c;
          uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
          piVar2 = piVar18;
          if (((uint)local_160 & 1) != 0) {
            uVar3 = local_158;
            piVar2 = local_150;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_100,(char *)piVar2,uVar3);
        }
        break;
      case 9:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"ActionTag",9);
        if (iVar10 != 0) goto switchD_00cd31c0_caseD_c;
        piVar2 = piVar18;
        if (((uint)local_160 & 1) != 0) {
          piVar2 = local_150;
        }
        local_1b8 = atol((char *)piVar2);
        break;
      case 10:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"FrameEvent",10);
        if (iVar10 != 0) goto switchD_00cd31c0_caseD_c;
        uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
        piVar2 = piVar18;
        if (((uint)local_160 & 1) != 0) {
          uVar3 = local_158;
          piVar2 = local_150;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_e8,(char *)piVar2,uVar3);
        break;
      case 0xb:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"TouchEnable",0xb);
        if (iVar10 != 0) goto switchD_00cd31c0_caseD_c;
        uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
        if (((uint)local_160 & 1) != 0) {
          uVar3 = local_158;
        }
        if (uVar3 == 4) {
          piVar2 = piVar18;
          if (((uint)local_160 & 1) != 0) {
            piVar2 = local_150;
          }
          local_1c0 = (ulong)CONCAT14(*piVar2 == 0x65757254,(undefined4)local_1c0);
        }
        else {
          local_1c0 = local_1c0 & 0xffffffff;
        }
        break;
      default:
switchD_00cd31c0_caseD_c:
        puVar5 = Layout_PositionPercentXEnabled;
        sVar16 = strlen(Layout_PositionPercentXEnabled);
        if (sVar16 == sVar17) {
          if (sVar17 != 0) {
            if (sVar17 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            plVar1 = plVar19;
            if (((uint)fVar24 & 1) != 0) {
              plVar1 = local_138;
            }
            iVar10 = memcmp(plVar1,puVar5,sVar17);
            if (iVar10 != 0) goto LAB_00cd3514;
          }
          uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
          if (((uint)local_160 & 1) != 0) {
            uVar3 = local_158;
          }
          if (uVar3 == 4) {
            piVar2 = piVar18;
            if (((uint)local_160 & 1) != 0) {
              piVar2 = local_150;
            }
            local_188 = (ulong)CONCAT14(*piVar2 == 0x65757254,(undefined4)local_188);
          }
          else {
            local_188 = local_188 & 0xffffffff;
          }
        }
        else {
LAB_00cd3514:
          puVar5 = Layout_PositionPercentYEnabled;
          sVar16 = strlen(Layout_PositionPercentYEnabled);
          if (sVar16 == sVar17) {
            if (sVar17 != 0) {
              if (sVar17 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              plVar1 = plVar19;
              if (((uint)fVar24 & 1) != 0) {
                plVar1 = local_138;
              }
              iVar10 = memcmp(plVar1,puVar5,sVar17);
              if (iVar10 != 0) goto LAB_00cd3550;
            }
            uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
            if (((uint)local_160 & 1) != 0) {
              uVar3 = local_158;
            }
            if (uVar3 == 4) {
              piVar2 = piVar18;
              if (((uint)local_160 & 1) != 0) {
                piVar2 = local_150;
              }
              local_188 = CONCAT44(local_188._4_4_,(uint)(*piVar2 == 0x65757254));
            }
            else {
              local_188 = (ulong)local_188._4_4_ << 0x20;
            }
          }
          else {
LAB_00cd3550:
            puVar5 = Layout_PercentWidthEnable;
            sVar16 = strlen(Layout_PercentWidthEnable);
            if (sVar16 == sVar17) {
              if (sVar17 != 0) {
                if (sVar17 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                plVar1 = plVar19;
                if (((uint)fVar24 & 1) != 0) {
                  plVar1 = local_138;
                }
                iVar10 = memcmp(plVar1,puVar5,sVar17);
                if (iVar10 != 0) goto LAB_00cd3594;
              }
              uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
              if (((uint)local_160 & 1) != 0) {
                uVar3 = local_158;
              }
              if (uVar3 == 4) {
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                bVar7 = *piVar2 == 0x65757254;
              }
              else {
                bVar7 = false;
              }
            }
            else {
LAB_00cd3594:
              puVar5 = Layout_PercentHeightEnable;
              sVar16 = strlen(Layout_PercentHeightEnable);
              if (sVar16 == sVar17) {
                if (sVar17 != 0) {
                  if (sVar17 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  plVar1 = plVar19;
                  if (((uint)fVar24 & 1) != 0) {
                    plVar1 = local_138;
                  }
                  iVar10 = memcmp(plVar1,puVar5,sVar17);
                  if (iVar10 != 0) goto LAB_00cd35d8;
                }
                uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
                if (((uint)local_160 & 1) != 0) {
                  uVar3 = local_158;
                }
                if (uVar3 == 4) {
                  piVar2 = piVar18;
                  if (((uint)local_160 & 1) != 0) {
                    piVar2 = local_150;
                  }
                  local_1a8 = (ulong)CONCAT14(*piVar2 == 0x65757254,(undefined4)local_1a8);
                }
                else {
                  local_1a8 = local_1a8 & 0xffffffff;
                }
              }
              else {
LAB_00cd35d8:
                puVar5 = Layout_StretchWidthEnable;
                sVar16 = strlen(Layout_StretchWidthEnable);
                if (sVar16 == sVar17) {
                  if (sVar17 != 0) {
                    if (sVar17 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    plVar1 = plVar19;
                    if (((uint)fVar24 & 1) != 0) {
                      plVar1 = local_138;
                    }
                    iVar10 = memcmp(plVar1,puVar5,sVar17);
                    if (iVar10 != 0) goto LAB_00cd361c;
                  }
                  uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
                  if (((uint)local_160 & 1) != 0) {
                    uVar3 = local_158;
                  }
                  if (uVar3 == 4) {
                    piVar2 = piVar18;
                    if (((uint)local_160 & 1) != 0) {
                      piVar2 = local_150;
                    }
                    local_1a8 = CONCAT44(local_1a8._4_4_,(uint)(*piVar2 == 0x65757254));
                  }
                  else {
                    local_1a8 = (ulong)local_1a8._4_4_ << 0x20;
                  }
                }
                else {
LAB_00cd361c:
                  puVar5 = Layout_StretchHeightEnable;
                  sVar16 = strlen(Layout_StretchHeightEnable);
                  if (sVar16 == sVar17) {
                    if (sVar17 != 0) {
                      if (sVar17 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      plVar1 = plVar19;
                      if (((uint)fVar24 & 1) != 0) {
                        plVar1 = local_138;
                      }
                      iVar10 = memcmp(plVar1,puVar5,sVar17);
                      if (iVar10 != 0) goto LAB_00cd3660;
                    }
                    uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
                    if (((uint)local_160 & 1) != 0) {
                      uVar3 = local_158;
                    }
                    if (uVar3 == 4) {
                      piVar2 = piVar18;
                      if (((uint)local_160 & 1) != 0) {
                        piVar2 = local_150;
                      }
                      bVar8 = *piVar2 == 0x65757254;
                    }
                    else {
                      bVar8 = false;
                    }
                  }
                  else {
LAB_00cd3660:
                    puVar5 = Layout_HorizontalEdge;
                    sVar16 = strlen(Layout_HorizontalEdge);
                    if (sVar16 == sVar17) {
                      if (sVar17 != 0) {
                        if (sVar17 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar1 = plVar19;
                        if (((uint)fVar24 & 1) != 0) {
                          plVar1 = local_138;
                        }
                        iVar10 = memcmp(plVar1,puVar5,sVar17);
                        if (iVar10 != 0) goto LAB_00cd36a4;
                      }
                      uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
                      piVar2 = piVar18;
                      if (((uint)local_160 & 1) != 0) {
                        uVar3 = local_158;
                        piVar2 = local_150;
                      }
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_118,(char *)piVar2,uVar3);
                    }
                    else {
LAB_00cd36a4:
                      puVar5 = Layout_VerticalEdge;
                      sVar16 = strlen(Layout_VerticalEdge);
                      if (sVar16 == sVar17) {
                        if (sVar17 != 0) {
                          if (sVar17 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar1 = plVar19;
                          if (((uint)fVar24 & 1) != 0) {
                            plVar1 = local_138;
                          }
                          iVar10 = memcmp(plVar1,puVar5,sVar17);
                          if (iVar10 != 0) goto LAB_00cd36e8;
                        }
                        uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
                        piVar2 = piVar18;
                        if (((uint)local_160 & 1) != 0) {
                          uVar3 = local_158;
                          piVar2 = local_150;
                        }
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_130,(char *)piVar2,uVar3);
                      }
                      else {
LAB_00cd36e8:
                        puVar5 = Layout_LeftMargin;
                        sVar16 = strlen(Layout_LeftMargin);
                        if (sVar16 == sVar17) {
                          if (sVar17 != 0) {
                            if (sVar17 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                            }
                            plVar1 = plVar19;
                            if (((uint)fVar24 & 1) != 0) {
                              plVar1 = local_138;
                            }
                            iVar10 = memcmp(plVar1,puVar5,sVar17);
                            if (iVar10 != 0) goto LAB_00cd372c;
                          }
                          piVar2 = piVar18;
                          if (((uint)local_160 & 1) != 0) {
                            piVar2 = local_150;
                          }
                          dVar22 = atof((char *)piVar2);
                          fVar29 = (float)dVar22;
                        }
                        else {
LAB_00cd372c:
                          puVar5 = Layout_RightMargin;
                          sVar16 = strlen(Layout_RightMargin);
                          if (sVar16 == sVar17) {
                            if (sVar17 != 0) {
                              if (sVar17 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                              }
                              plVar1 = plVar19;
                              if (((uint)fVar24 & 1) != 0) {
                                plVar1 = local_138;
                              }
                              iVar10 = memcmp(plVar1,puVar5,sVar17);
                              if (iVar10 != 0) goto LAB_00cd3770;
                            }
                            piVar2 = piVar18;
                            if (((uint)local_160 & 1) != 0) {
                              piVar2 = local_150;
                            }
                            dVar22 = atof((char *)piVar2);
                            fVar27 = (float)dVar22;
                          }
                          else {
LAB_00cd3770:
                            puVar5 = Layout_TopMargin;
                            sVar16 = strlen(Layout_TopMargin);
                            if (sVar16 == sVar17) {
                              if (sVar17 != 0) {
                                if (sVar17 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                                }
                                plVar1 = plVar19;
                                if (((uint)fVar24 & 1) != 0) {
                                  plVar1 = local_138;
                                }
                                iVar10 = memcmp(plVar1,puVar5,sVar17);
                                if (iVar10 != 0) goto LAB_00cd37b4;
                              }
                              piVar2 = piVar18;
                              if (((uint)local_160 & 1) != 0) {
                                piVar2 = local_150;
                              }
                              dVar22 = atof((char *)piVar2);
                              fVar25 = (float)dVar22;
                            }
                            else {
LAB_00cd37b4:
                              puVar5 = Layout_BottomMargin;
                              sVar16 = strlen(Layout_BottomMargin);
                              if (sVar16 == sVar17) {
                                if (sVar17 != 0) {
                                  if (sVar17 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
                                    ;
                                  }
                                  plVar1 = plVar19;
                                  if (((uint)fVar24 & 1) != 0) {
                                    plVar1 = local_138;
                                  }
                                  iVar10 = memcmp(plVar1,puVar5,sVar17);
                                  if (iVar10 != 0) break;
                                }
                                piVar2 = piVar18;
                                if (((uint)local_160 & 1) != 0) {
                                  piVar2 = local_150;
                                }
                                dVar22 = atof((char *)piVar2);
                                fVar23 = (float)dVar22;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        break;
      case 0xd:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"RotationSkewX",0xd);
        if (iVar10 == 0) {
          piVar2 = piVar18;
          if (((uint)local_160 & 1) != 0) {
            piVar2 = local_150;
          }
          dVar22 = atof((char *)piVar2);
          fVar31 = (float)dVar22;
        }
        else {
          iVar10 = memcmp(plVar1,"RotationSkewY",0xd);
          if (iVar10 != 0) goto switchD_00cd31c0_caseD_c;
          piVar2 = piVar18;
          if (((uint)local_160 & 1) != 0) {
            piVar2 = local_150;
          }
          dVar22 = atof((char *)piVar2);
          fVar33 = (float)dVar22;
        }
        break;
      case 0xf:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"VisibleForFrame",0xf);
        if (iVar10 != 0) goto switchD_00cd31c0_caseD_c;
        uVar3 = (ulong)((byte)local_160._0_1_ >> 1);
        if (((uint)local_160 & 1) != 0) {
          uVar3 = local_158;
        }
        if (uVar3 == 4) {
          piVar2 = piVar18;
          if (((uint)local_160 & 1) != 0) {
            piVar2 = local_150;
          }
          bVar6 = *piVar2 == 0x65757254;
        }
        else {
          bVar6 = false;
        }
      }
      lVar20 = *(long *)(lVar20 + 0x38);
      if (((uint)local_160 & 1) != 0) {
        operator_delete(local_150);
      }
      if (((uint)local_148 & 1) != 0) {
        operator_delete(local_138);
      }
    } while (lVar20 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 == (XMLNode *)0x0) {
    fVar28 = 1.0;
    local_194 = 1.0;
    local_16c = 0.0;
    local_19c = 0.0;
    fVar36 = 0.0;
    fVar35 = 0.0;
    fVar24 = 0.0;
    fVar26 = 0.0;
    fVar30 = 0.0;
    local_198 = 0.0;
    fVar34 = 0.0;
    fVar32 = 0.0;
  }
  else {
    fVar28 = 1.0;
    local_198 = 0.0;
    local_194 = 1.0;
    fVar32 = 0.0;
    fVar34 = 0.0;
    local_19c = 0.0;
    fVar30 = 0.0;
    fVar26 = 0.0;
    fVar24 = 0.0;
    fVar35 = 0.0;
    plVar19 = (long *)((ulong)&local_148 | 1);
    piVar18 = (int *)((ulong)&local_160 | 1);
    fVar36 = 0.0;
    fVar21 = 0.0;
    do {
      pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_148,pcVar15);
      sVar17 = (ulong)((byte)local_148._0_1_ >> 1);
      if (((uint)local_148 & 1) != 0) {
        sVar17 = local_140;
      }
      switch(sVar17) {
      case 4:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        if ((int)*plVar1 == 0x657a6953) {
          lVar20 = *(long *)(this_00 + 0x60);
          while (lVar20 != 0) {
            pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
            sVar17 = strlen(pcVar15);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_148,pcVar15,sVar17);
            pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_160,pcVar15);
            sVar17 = (ulong)((byte)local_148._0_1_ >> 1);
            if (((uint)local_148 & 1) != 0) {
              sVar17 = local_140;
            }
            if (sVar17 == 1) {
              plVar1 = plVar19;
              if (((uint)local_148 & 1) != 0) {
                plVar1 = local_138;
              }
              if ((char)*plVar1 == 'Y') {
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                dVar22 = atof((char *)piVar2);
                fVar26 = (float)dVar22;
              }
              else if ((char)*plVar1 == 'X') {
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                dVar22 = atof((char *)piVar2);
                fVar30 = (float)dVar22;
              }
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (((uint)local_160 & 1) != 0) {
              operator_delete(local_150);
            }
          }
        }
        break;
      case 5:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"Scale",5);
        if (iVar10 == 0) {
          lVar20 = *(long *)(this_00 + 0x60);
          while (lVar20 != 0) {
            pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
            sVar17 = strlen(pcVar15);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_148,pcVar15,sVar17);
            pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_160,pcVar15);
            sVar17 = (ulong)((byte)local_148._0_1_ >> 1);
            if (((uint)local_148 & 1) != 0) {
              sVar17 = local_140;
            }
            if (sVar17 == 6) {
              plVar1 = plVar19;
              if (((uint)local_148 & 1) != 0) {
                plVar1 = local_138;
              }
              iVar10 = memcmp(plVar1,"ScaleX",6);
              if (iVar10 == 0) {
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                dVar22 = atof((char *)piVar2);
                fVar28 = (float)dVar22;
              }
              else {
                iVar10 = memcmp(plVar1,"ScaleY",6);
                if (iVar10 == 0) {
                  piVar2 = piVar18;
                  if (((uint)local_160 & 1) != 0) {
                    piVar2 = local_150;
                  }
                  dVar22 = atof((char *)piVar2);
                  local_194 = (float)dVar22;
                }
              }
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (((uint)local_160 & 1) != 0) {
              operator_delete(local_150);
            }
          }
        }
        break;
      case 6:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"CColor",6);
        if (iVar10 == 0) {
          lVar20 = *(long *)(this_00 + 0x60);
          while (lVar20 != 0) {
            pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
            sVar17 = strlen(pcVar15);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_148,pcVar15,sVar17);
            pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_160,pcVar15);
            sVar17 = (ulong)((byte)local_148._0_1_ >> 1);
            if (((uint)local_148 & 1) != 0) {
              sVar17 = local_140;
            }
            if (sVar17 == 1) {
              plVar1 = plVar19;
              if (((uint)local_148 & 1) != 0) {
                plVar1 = local_138;
              }
              switch((char)*plVar1) {
              case 'A':
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                iVar10 = atoi((char *)piVar2);
                local_cd = (undefined1)iVar10;
                break;
              case 'B':
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                iVar10 = atoi((char *)piVar2);
                local_ce = (undefined1)iVar10;
                break;
              case 'G':
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                iVar10 = atoi((char *)piVar2);
                local_d0 = CONCAT11((char)iVar10,local_d0._0_1_);
                break;
              case 'R':
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                iVar10 = atoi((char *)piVar2);
                local_d0 = CONCAT11(local_d0._1_1_,(char)iVar10);
              }
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (((uint)local_160 & 1) != 0) {
              operator_delete(local_150);
            }
          }
        }
        break;
      case 7:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"PreSize",7);
        if (iVar10 == 0) {
          lVar20 = *(long *)(this_00 + 0x60);
          while (lVar20 != 0) {
            pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
            sVar17 = strlen(pcVar15);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_148,pcVar15,sVar17);
            pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_160,pcVar15);
            sVar17 = (ulong)((byte)local_148._0_1_ >> 1);
            if (((uint)local_148 & 1) != 0) {
              sVar17 = local_140;
            }
            if (sVar17 == 1) {
              plVar1 = plVar19;
              if (((uint)local_148 & 1) != 0) {
                plVar1 = local_138;
              }
              if ((char)*plVar1 == 'Y') {
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                dVar22 = atof((char *)piVar2);
                fVar32 = (float)dVar22;
              }
              else if ((char)*plVar1 == 'X') {
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                dVar22 = atof((char *)piVar2);
                fVar34 = (float)dVar22;
              }
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (((uint)local_160 & 1) != 0) {
              operator_delete(local_150);
            }
          }
        }
        break;
      case 8:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        if (*plVar1 == 0x6e6f697469736f50) {
          lVar20 = *(long *)(this_00 + 0x60);
          while (lVar20 != 0) {
            pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
            sVar17 = strlen(pcVar15);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_148,pcVar15,sVar17);
            pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_160,pcVar15);
            sVar17 = (ulong)((byte)local_148._0_1_ >> 1);
            if (((uint)local_148 & 1) != 0) {
              sVar17 = local_140;
            }
            if (sVar17 == 1) {
              plVar1 = plVar19;
              if (((uint)local_148 & 1) != 0) {
                plVar1 = local_138;
              }
              if ((char)*plVar1 == 'Y') {
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                dVar22 = atof((char *)piVar2);
                fVar36 = (float)dVar22;
              }
              else if ((char)*plVar1 == 'X') {
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                dVar22 = atof((char *)piVar2);
                fVar35 = (float)dVar22;
              }
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (((uint)local_160 & 1) != 0) {
              operator_delete(local_150);
            }
          }
        }
        break;
      case 0xb:
        plVar1 = plVar19;
        if (((uint)local_148 & 1) != 0) {
          plVar1 = local_138;
        }
        iVar10 = memcmp(plVar1,"AnchorPoint",0xb);
        if (iVar10 == 0) {
          lVar20 = *(long *)(this_00 + 0x60);
          while (lVar20 != 0) {
            pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
            sVar17 = strlen(pcVar15);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_148,pcVar15,sVar17);
            pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_160,pcVar15);
            sVar17 = (ulong)((byte)local_148._0_1_ >> 1);
            if (((uint)local_148 & 1) != 0) {
              sVar17 = local_140;
            }
            if (sVar17 == 6) {
              plVar1 = plVar19;
              if (((uint)local_148 & 1) != 0) {
                plVar1 = local_138;
              }
              iVar10 = memcmp(plVar1,"ScaleX",6);
              if (iVar10 == 0) {
                piVar2 = piVar18;
                if (((uint)local_160 & 1) != 0) {
                  piVar2 = local_150;
                }
                dVar22 = atof((char *)piVar2);
                fVar24 = (float)dVar22;
              }
              else {
                iVar10 = memcmp(plVar1,"ScaleY",6);
                if (iVar10 == 0) {
                  piVar2 = piVar18;
                  if (((uint)local_160 & 1) != 0) {
                    piVar2 = local_150;
                  }
                  dVar22 = atof((char *)piVar2);
                  fVar21 = (float)dVar22;
                }
              }
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (((uint)local_160 & 1) != 0) {
              operator_delete(local_150);
            }
          }
        }
        else {
          iVar10 = memcmp(plVar1,"PrePosition",0xb);
          if (iVar10 == 0) {
            lVar20 = *(long *)(this_00 + 0x60);
            while (lVar20 != 0) {
              pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
              sVar17 = strlen(pcVar15);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_148,pcVar15,sVar17);
              pcVar15 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_160,pcVar15);
              sVar17 = (ulong)((byte)local_148._0_1_ >> 1);
              if (((uint)local_148 & 1) != 0) {
                sVar17 = local_140;
              }
              if (sVar17 == 1) {
                plVar1 = plVar19;
                if (((uint)local_148 & 1) != 0) {
                  plVar1 = local_138;
                }
                if ((char)*plVar1 == 'Y') {
                  piVar2 = piVar18;
                  if (((uint)local_160 & 1) != 0) {
                    piVar2 = local_150;
                  }
                  dVar22 = atof((char *)piVar2);
                  local_198 = (float)dVar22;
                }
                else if ((char)*plVar1 == 'X') {
                  piVar2 = piVar18;
                  if (((uint)local_160 & 1) != 0) {
                    piVar2 = local_150;
                  }
                  dVar22 = atof((char *)piVar2);
                  local_19c = (float)dVar22;
                }
              }
              lVar20 = *(long *)(lVar20 + 0x38);
              if (((uint)local_160 & 1) != 0) {
                operator_delete(local_150);
              }
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((uint)local_148 & 1) != 0) {
        operator_delete(local_138);
      }
      local_16c = fVar21;
    } while (this_00 != (XMLNode *)0x0);
  }
  local_178 = local_cd;
  local_177 = local_d0;
  local_164 = local_194;
  local_175 = local_ce;
  uVar3 = local_118 >> 1 & 0x7f;
  pcVar15 = (char *)((ulong)&local_118 | 1);
  if ((local_118 & 1) != 0) {
    uVar3 = local_110;
    pcVar15 = local_108;
  }
  local_180 = fVar30;
  fStack_17c = fVar26;
  local_170 = fVar24;
  fStack_168 = fVar28;
  local_160 = fVar35;
  local_15c = fVar36;
  local_148 = fVar31;
  local_144 = fVar33;
  uVar11 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar15,uVar3);
  uVar3 = local_130 >> 1 & 0x7f;
  pcVar15 = (char *)((ulong)&local_130 | 1);
  if ((local_130 & 1) != 0) {
    uVar3 = local_128;
    pcVar15 = local_120;
  }
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar15,uVar3);
  uVar11 = flatbuffers::CreateLayoutComponentTable
                     (local_19c,local_198,fVar34,fVar32,fVar29,fVar27,fVar25,fVar23,param_2,
                      local_188._4_4_,(undefined4)local_188,bVar7,local_1a8._4_4_,
                      (undefined4)local_1a8,bVar8,uVar11,uVar12);
  uVar3 = (ulong)((byte)local_c8[0] >> 1);
  pcVar15 = (char *)((ulong)local_c8 | 1);
  if (((byte)local_c8[0] & 1) != 0) {
    uVar3 = local_c0;
    pcVar15 = local_b8;
  }
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar15,uVar3);
  uVar3 = (ulong)((byte)local_e8[0] >> 1);
  pcVar15 = (char *)((ulong)local_e8 | 1);
  if (((byte)local_e8[0] & 1) != 0) {
    uVar3 = local_e0;
    pcVar15 = local_d8;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar15,uVar3);
  uVar3 = (ulong)((byte)local_100[0] >> 1);
  pcVar15 = (char *)((ulong)local_100 | 1);
  if (((byte)local_100[0] & 1) != 0) {
    uVar3 = local_f8;
    pcVar15 = local_f0;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar15,uVar3);
  uVar11 = flatbuffers::CreateWidgetOptions
                     (param_2,uVar12,local_1b8,&local_148,local_1b0 & 0xffffffff,bVar6,local_1d0,
                      local_1b0._4_4_,&local_160,&fStack_168,&local_170,&local_178,&local_180,
                      (char)local_1c0,bVar9,0,(char)(local_1c0 >> 0x20),uVar13,uVar14,0,0,uVar11);
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  if ((local_118 & 1) != 0) {
    operator_delete(local_108);
  }
  if (((byte)local_100[0] & 1) != 0) {
    operator_delete(local_f0);
  }
  if (((byte)local_e8[0] & 1) != 0) {
    operator_delete(local_d8);
  }
  if (((byte)local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar4 + 0x28) != local_b0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}

