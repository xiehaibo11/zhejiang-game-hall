
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::WidgetReader::createOptionsWithFlatBuffers(tinyxml2::XMLElement const*,
   flatbuffers::FlatBufferBuilder*) */

undefined4 __thiscall
cocostudio::WidgetReader::createOptionsWithFlatBuffers
          (WidgetReader *this,XMLElement *param_1,FlatBufferBuilder *param_2)

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
  undefined4 uVar15;
  undefined4 uVar16;
  char *pcVar17;
  size_t sVar18;
  XMLNode *this_00;
  size_t sVar19;
  long lVar20;
  int *piVar21;
  long *plVar22;
  float fVar23;
  double dVar24;
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
  float fVar37;
  float fVar38;
  int local_200;
  undefined8 local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  undefined8 local_1b8;
  float local_1b0;
  float fStack_1ac;
  undefined1 local_1a8;
  undefined2 local_1a7;
  undefined1 local_1a5;
  float local_1a0;
  float local_19c;
  float fStack_198;
  float local_194;
  float local_190;
  float local_18c;
  ulong local_188;
  int *local_180;
  float local_178;
  float local_174;
  size_t local_170;
  long *local_168;
  ulong local_160;
  ulong local_158;
  char *local_150;
  ulong local_148;
  ulong local_140;
  char *local_138;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_130 [8];
  ulong local_128;
  char *local_120;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [8];
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
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_118,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_130,"");
  local_140 = 0;
  local_138 = (char *)0x0;
  local_150 = (char *)0x0;
  local_148 = 0;
  local_160 = 0;
  local_158 = 0;
  lVar20 = *(long *)(param_1 + 0x60);
  if (lVar20 == 0) {
    bVar6 = true;
    local_1b8 = 0;
    bVar7 = false;
    local_1e0 = 0;
    local_1d8 = 0;
    bVar9 = false;
    bVar8 = false;
    local_1f0 = 0;
    local_1e8 = 0;
    local_200 = 0xff;
    fVar33 = 0.0;
    fVar35 = 0.0;
    fVar31 = 0.0;
    fVar29 = 0.0;
    fVar27 = 0.0;
    fVar25 = 0.0;
  }
  else {
    local_200 = 0xff;
    local_1e8 = 0;
    local_1e0 = 0;
    local_1f0 = 0;
    bVar9 = false;
    bVar8 = false;
    local_1d8 = 0;
    bVar7 = false;
    local_1b8 = 0;
    bVar6 = true;
    fVar25 = 0.0;
    fVar27 = 0.0;
    fVar29 = 0.0;
    fVar31 = 0.0;
    fVar35 = 0.0;
    fVar33 = 0.0;
    plVar22 = (long *)((ulong)&local_178 | 1);
    piVar21 = (int *)((ulong)&local_190 | 1);
    do {
      pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_178,pcVar17);
      pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_190,pcVar17);
      fVar28 = local_178;
      sVar19 = (ulong)((byte)local_178._0_1_ >> 1);
      if (((uint)local_178 & 1) != 0) {
        sVar19 = local_170;
      }
      switch(sVar19) {
      case 3:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"Tag",3);
        if (iVar10 != 0) goto switchD_00cdd4bc_caseD_e;
        piVar2 = piVar21;
        if (((uint)local_190 & 1) != 0) {
          piVar2 = local_180;
        }
        iVar10 = atoi((char *)piVar2);
        local_1e0 = CONCAT44(iVar10,(undefined4)local_1e0);
        break;
      case 4:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        if ((int)*plVar1 != 0x656d614e) goto switchD_00cdd4bc_caseD_e;
        uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
        piVar2 = piVar21;
        if (((uint)local_190 & 1) != 0) {
          uVar3 = local_188;
          piVar2 = local_180;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_c8,(char *)piVar2,uVar3);
        break;
      case 5:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"FlipX",5);
        if (iVar10 == 0) {
          uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
          if (((uint)local_190 & 1) != 0) {
            uVar3 = local_188;
          }
          if (uVar3 == 4) {
            piVar2 = piVar21;
            if (((uint)local_190 & 1) != 0) {
              piVar2 = local_180;
            }
            local_1f0 = CONCAT44(local_1f0._4_4_,(uint)(*piVar2 == 0x65757254));
          }
          else {
            local_1f0 = (ulong)local_1f0._4_4_ << 0x20;
          }
        }
        else {
          iVar10 = memcmp(plVar1,"FlipY",5);
          if (iVar10 == 0) {
            uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
            if (((uint)local_190 & 1) != 0) {
              uVar3 = local_188;
            }
            if (uVar3 == 4) {
              piVar2 = piVar21;
              if (((uint)local_190 & 1) != 0) {
                piVar2 = local_180;
              }
              bVar9 = *piVar2 == 0x65757254;
            }
            else {
              bVar9 = false;
            }
          }
          else {
            iVar10 = memcmp(plVar1,"Alpha",5);
            if (iVar10 != 0) goto switchD_00cdd4bc_caseD_e;
            piVar2 = piVar21;
            if (((uint)local_190 & 1) != 0) {
              piVar2 = local_180;
            }
            local_200 = atoi((char *)piVar2);
          }
        }
        break;
      case 6:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"ZOrder",6);
        if (iVar10 != 0) goto switchD_00cdd4bc_caseD_e;
        piVar2 = piVar21;
        if (((uint)local_190 & 1) != 0) {
          piVar2 = local_180;
        }
        iVar10 = atoi((char *)piVar2);
        local_1e0 = CONCAT44(local_1e0._4_4_,iVar10);
        break;
      case 7:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"Visible",7);
        if (iVar10 != 0) goto switchD_00cdd4bc_caseD_e;
        break;
      case 8:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        if (*plVar1 != 0x6e6f697461746f52) {
          if (*plVar1 != 0x6174614472657355) goto switchD_00cdd4bc_caseD_e;
          uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
          piVar2 = piVar21;
          if (((uint)local_190 & 1) != 0) {
            uVar3 = local_188;
            piVar2 = local_180;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_100,(char *)piVar2,uVar3);
        }
        break;
      case 9:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"ActionTag",9);
        if (iVar10 != 0) goto switchD_00cdd4bc_caseD_e;
        piVar2 = piVar21;
        if (((uint)local_190 & 1) != 0) {
          piVar2 = local_180;
        }
        local_1e8 = atol((char *)piVar2);
        break;
      case 10:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"FrameEvent",10);
        if (iVar10 != 0) goto switchD_00cdd4bc_caseD_e;
        uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
        piVar2 = piVar21;
        if (((uint)local_190 & 1) != 0) {
          uVar3 = local_188;
          piVar2 = local_180;
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign(local_e8,(char *)piVar2,uVar3);
        break;
      case 0xb:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"TouchEnable",0xb);
        if (iVar10 != 0) goto switchD_00cdd4bc_caseD_e;
        uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
        if (((uint)local_190 & 1) != 0) {
          uVar3 = local_188;
        }
        if (uVar3 == 4) {
          piVar2 = piVar21;
          if (((uint)local_190 & 1) != 0) {
            piVar2 = local_180;
          }
          local_1f0 = (ulong)CONCAT14(*piVar2 == 0x65757254,(undefined4)local_1f0);
        }
        else {
          local_1f0 = local_1f0 & 0xffffffff;
        }
        break;
      case 0xc:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"CallBackType",0xc);
        if (iVar10 == 0) {
          uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
          piVar2 = piVar21;
          if (((uint)local_190 & 1) != 0) {
            uVar3 = local_188;
            piVar2 = local_180;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_118,(char *)piVar2,uVar3);
        }
        else {
          iVar10 = memcmp(plVar1,"CallBackName",0xc);
          if (iVar10 != 0) goto switchD_00cdd4bc_caseD_e;
          uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
          piVar2 = piVar21;
          if (((uint)local_190 & 1) != 0) {
            uVar3 = local_188;
            piVar2 = local_180;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (local_130,(char *)piVar2,uVar3);
        }
        break;
      case 0xd:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"RotationSkewX",0xd);
        if (iVar10 == 0) {
          piVar2 = piVar21;
          if (((uint)local_190 & 1) != 0) {
            piVar2 = local_180;
          }
          dVar24 = atof((char *)piVar2);
          fVar35 = (float)dVar24;
        }
        else {
          iVar10 = memcmp(plVar1,"RotationSkewY",0xd);
          if (iVar10 != 0) goto switchD_00cdd4bc_caseD_e;
          piVar2 = piVar21;
          if (((uint)local_190 & 1) != 0) {
            piVar2 = local_180;
          }
          dVar24 = atof((char *)piVar2);
          fVar33 = (float)dVar24;
        }
        break;
      default:
switchD_00cdd4bc_caseD_e:
        puVar5 = P_Layout_PositionPercentXEnabled;
        sVar18 = strlen(P_Layout_PositionPercentXEnabled);
        if (sVar18 == sVar19) {
          if (sVar19 != 0) {
            if (sVar19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            plVar1 = plVar22;
            if (((uint)fVar28 & 1) != 0) {
              plVar1 = local_168;
            }
            iVar10 = memcmp(plVar1,puVar5,sVar19);
            if (iVar10 != 0) goto LAB_00cdd870;
          }
          uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
          if (((uint)local_190 & 1) != 0) {
            uVar3 = local_188;
          }
          if (uVar3 == 4) {
            piVar2 = piVar21;
            if (((uint)local_190 & 1) != 0) {
              piVar2 = local_180;
            }
            local_1b8 = (ulong)CONCAT14(*piVar2 == 0x65757254,(undefined4)local_1b8);
          }
          else {
            local_1b8 = local_1b8 & 0xffffffff;
          }
        }
        else {
LAB_00cdd870:
          puVar5 = P_Layout_PositionPercentYEnabled;
          sVar18 = strlen(P_Layout_PositionPercentYEnabled);
          if (sVar18 == sVar19) {
            if (sVar19 != 0) {
              if (sVar19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              plVar1 = plVar22;
              if (((uint)fVar28 & 1) != 0) {
                plVar1 = local_168;
              }
              iVar10 = memcmp(plVar1,puVar5,sVar19);
              if (iVar10 != 0) goto LAB_00cdd8ac;
            }
            uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
            if (((uint)local_190 & 1) != 0) {
              uVar3 = local_188;
            }
            if (uVar3 == 4) {
              piVar2 = piVar21;
              if (((uint)local_190 & 1) != 0) {
                piVar2 = local_180;
              }
              local_1b8 = CONCAT44(local_1b8._4_4_,(uint)(*piVar2 == 0x65757254));
            }
            else {
              local_1b8 = (ulong)local_1b8._4_4_ << 0x20;
            }
          }
          else {
LAB_00cdd8ac:
            puVar5 = P_Layout_PercentWidthEnable;
            sVar18 = strlen(P_Layout_PercentWidthEnable);
            if (sVar18 == sVar19) {
              if (sVar19 != 0) {
                if (sVar19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                plVar1 = plVar22;
                if (((uint)fVar28 & 1) != 0) {
                  plVar1 = local_168;
                }
                iVar10 = memcmp(plVar1,puVar5,sVar19);
                if (iVar10 != 0) goto LAB_00cdd8f0;
              }
              uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
              if (((uint)local_190 & 1) != 0) {
                uVar3 = local_188;
              }
              if (uVar3 == 4) {
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                bVar7 = *piVar2 == 0x65757254;
              }
              else {
                bVar7 = false;
              }
            }
            else {
LAB_00cdd8f0:
              puVar5 = P_Layout_PercentHeightEnable;
              sVar18 = strlen(P_Layout_PercentHeightEnable);
              if (sVar18 == sVar19) {
                if (sVar19 != 0) {
                  if (sVar19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  plVar1 = plVar22;
                  if (((uint)fVar28 & 1) != 0) {
                    plVar1 = local_168;
                  }
                  iVar10 = memcmp(plVar1,puVar5,sVar19);
                  if (iVar10 != 0) goto LAB_00cdd934;
                }
                uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
                if (((uint)local_190 & 1) != 0) {
                  uVar3 = local_188;
                }
                if (uVar3 == 4) {
                  piVar2 = piVar21;
                  if (((uint)local_190 & 1) != 0) {
                    piVar2 = local_180;
                  }
                  local_1d8 = (ulong)CONCAT14(*piVar2 == 0x65757254,(undefined4)local_1d8);
                }
                else {
                  local_1d8 = local_1d8 & 0xffffffff;
                }
              }
              else {
LAB_00cdd934:
                puVar5 = P_Layout_StretchWidthEnable;
                sVar18 = strlen(P_Layout_StretchWidthEnable);
                if (sVar18 == sVar19) {
                  if (sVar19 != 0) {
                    if (sVar19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    plVar1 = plVar22;
                    if (((uint)fVar28 & 1) != 0) {
                      plVar1 = local_168;
                    }
                    iVar10 = memcmp(plVar1,puVar5,sVar19);
                    if (iVar10 != 0) goto LAB_00cdd978;
                  }
                  uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
                  if (((uint)local_190 & 1) != 0) {
                    uVar3 = local_188;
                  }
                  if (uVar3 == 4) {
                    piVar2 = piVar21;
                    if (((uint)local_190 & 1) != 0) {
                      piVar2 = local_180;
                    }
                    local_1d8 = CONCAT44(local_1d8._4_4_,(uint)(*piVar2 == 0x65757254));
                  }
                  else {
                    local_1d8 = (ulong)local_1d8._4_4_ << 0x20;
                  }
                }
                else {
LAB_00cdd978:
                  puVar5 = P_Layout_StretchHeightEnable;
                  sVar18 = strlen(P_Layout_StretchHeightEnable);
                  if (sVar18 == sVar19) {
                    if (sVar19 != 0) {
                      if (sVar19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      plVar1 = plVar22;
                      if (((uint)fVar28 & 1) != 0) {
                        plVar1 = local_168;
                      }
                      iVar10 = memcmp(plVar1,puVar5,sVar19);
                      if (iVar10 != 0) goto LAB_00cdd9bc;
                    }
                    uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
                    if (((uint)local_190 & 1) != 0) {
                      uVar3 = local_188;
                    }
                    if (uVar3 == 4) {
                      piVar2 = piVar21;
                      if (((uint)local_190 & 1) != 0) {
                        piVar2 = local_180;
                      }
                      bVar8 = *piVar2 == 0x65757254;
                    }
                    else {
                      bVar8 = false;
                    }
                  }
                  else {
LAB_00cdd9bc:
                    puVar5 = P_Layout_HorizontalEdge;
                    sVar18 = strlen(P_Layout_HorizontalEdge);
                    if (sVar18 == sVar19) {
                      if (sVar19 != 0) {
                        if (sVar19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar1 = plVar22;
                        if (((uint)fVar28 & 1) != 0) {
                          plVar1 = local_168;
                        }
                        iVar10 = memcmp(plVar1,puVar5,sVar19);
                        if (iVar10 != 0) goto LAB_00cdda00;
                      }
                      uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
                      piVar2 = piVar21;
                      if (((uint)local_190 & 1) != 0) {
                        uVar3 = local_188;
                        piVar2 = local_180;
                      }
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_148,(char *)piVar2,uVar3);
                    }
                    else {
LAB_00cdda00:
                      puVar5 = P_Layout_VerticalEdge;
                      sVar18 = strlen(P_Layout_VerticalEdge);
                      if (sVar18 == sVar19) {
                        if (sVar19 != 0) {
                          if (sVar19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar1 = plVar22;
                          if (((uint)fVar28 & 1) != 0) {
                            plVar1 = local_168;
                          }
                          iVar10 = memcmp(plVar1,puVar5,sVar19);
                          if (iVar10 != 0) goto LAB_00cdda44;
                        }
                        uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
                        piVar2 = piVar21;
                        if (((uint)local_190 & 1) != 0) {
                          uVar3 = local_188;
                          piVar2 = local_180;
                        }
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_160,(char *)piVar2,uVar3);
                      }
                      else {
LAB_00cdda44:
                        puVar5 = P_Layout_LeftMargin;
                        sVar18 = strlen(P_Layout_LeftMargin);
                        if (sVar18 == sVar19) {
                          if (sVar19 != 0) {
                            if (sVar19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                            }
                            plVar1 = plVar22;
                            if (((uint)fVar28 & 1) != 0) {
                              plVar1 = local_168;
                            }
                            iVar10 = memcmp(plVar1,puVar5,sVar19);
                            if (iVar10 != 0) goto LAB_00cdda88;
                          }
                          piVar2 = piVar21;
                          if (((uint)local_190 & 1) != 0) {
                            piVar2 = local_180;
                          }
                          dVar24 = atof((char *)piVar2);
                          fVar31 = (float)dVar24;
                        }
                        else {
LAB_00cdda88:
                          puVar5 = P_Layout_RightMargin;
                          sVar18 = strlen(P_Layout_RightMargin);
                          if (sVar18 == sVar19) {
                            if (sVar19 != 0) {
                              if (sVar19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                              }
                              plVar1 = plVar22;
                              if (((uint)fVar28 & 1) != 0) {
                                plVar1 = local_168;
                              }
                              iVar10 = memcmp(plVar1,puVar5,sVar19);
                              if (iVar10 != 0) goto LAB_00cddacc;
                            }
                            piVar2 = piVar21;
                            if (((uint)local_190 & 1) != 0) {
                              piVar2 = local_180;
                            }
                            dVar24 = atof((char *)piVar2);
                            fVar29 = (float)dVar24;
                          }
                          else {
LAB_00cddacc:
                            puVar5 = P_Layout_TopMargin;
                            sVar18 = strlen(P_Layout_TopMargin);
                            if (sVar18 == sVar19) {
                              if (sVar19 != 0) {
                                if (sVar19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                                }
                                plVar1 = plVar22;
                                if (((uint)fVar28 & 1) != 0) {
                                  plVar1 = local_168;
                                }
                                iVar10 = memcmp(plVar1,puVar5,sVar19);
                                if (iVar10 != 0) goto LAB_00cddb10;
                              }
                              piVar2 = piVar21;
                              if (((uint)local_190 & 1) != 0) {
                                piVar2 = local_180;
                              }
                              dVar24 = atof((char *)piVar2);
                              fVar27 = (float)dVar24;
                            }
                            else {
LAB_00cddb10:
                              puVar5 = P_Layout_BottomMargin;
                              sVar18 = strlen(P_Layout_BottomMargin);
                              if (sVar18 == sVar19) {
                                if (sVar19 != 0) {
                                  if (sVar19 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
                                    ;
                                  }
                                  plVar1 = plVar22;
                                  if (((uint)fVar28 & 1) != 0) {
                                    plVar1 = local_168;
                                  }
                                  iVar10 = memcmp(plVar1,puVar5,sVar19);
                                  if (iVar10 != 0) break;
                                }
                                piVar2 = piVar21;
                                if (((uint)local_190 & 1) != 0) {
                                  piVar2 = local_180;
                                }
                                dVar24 = atof((char *)piVar2);
                                fVar25 = (float)dVar24;
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
      case 0xf:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"VisibleForFrame",0xf);
        if (iVar10 != 0) goto switchD_00cdd4bc_caseD_e;
        uVar3 = (ulong)((byte)local_190._0_1_ >> 1);
        if (((uint)local_190 & 1) != 0) {
          uVar3 = local_188;
        }
        if (uVar3 == 4) {
          piVar2 = piVar21;
          if (((uint)local_190 & 1) != 0) {
            piVar2 = local_180;
          }
          bVar6 = *piVar2 == 0x65757254;
        }
        else {
          bVar6 = false;
        }
      }
      lVar20 = *(long *)(lVar20 + 0x38);
      if (((uint)local_190 & 1) != 0) {
        operator_delete(local_180);
      }
      if (((uint)local_178 & 1) != 0) {
        operator_delete(local_168);
      }
    } while (lVar20 != 0);
  }
  this_00 = (XMLNode *)tinyxml2::XMLNode::FirstChildElement((XMLNode *)param_1,(char *)0x0);
  if (this_00 == (XMLNode *)0x0) {
    fVar30 = 1.0;
    local_1c4 = 1.0;
    local_19c = 0.0;
    local_1cc = 0.0;
    fVar38 = 0.0;
    fVar37 = 0.0;
    fVar28 = 0.0;
    fVar26 = 0.0;
    fVar32 = 0.0;
    local_1c8 = 0.0;
    fVar36 = 0.0;
    fVar34 = 0.0;
  }
  else {
    fVar30 = 1.0;
    local_1c8 = 0.0;
    local_1c4 = 1.0;
    fVar34 = 0.0;
    fVar36 = 0.0;
    local_1cc = 0.0;
    fVar32 = 0.0;
    fVar26 = 0.0;
    fVar28 = 0.0;
    fVar37 = 0.0;
    plVar22 = (long *)((ulong)&local_178 | 1);
    piVar21 = (int *)((ulong)&local_190 | 1);
    fVar38 = 0.0;
    fVar23 = 0.0;
    do {
      pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(this_00 + 0x18));
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_178,pcVar17);
      sVar19 = (ulong)((byte)local_178._0_1_ >> 1);
      if (((uint)local_178 & 1) != 0) {
        sVar19 = local_170;
      }
      switch(sVar19) {
      case 4:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        if ((int)*plVar1 == 0x657a6953) {
          lVar20 = *(long *)(this_00 + 0x60);
          while (lVar20 != 0) {
            pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
            sVar19 = strlen(pcVar17);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_178,pcVar17,sVar19);
            pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_190,pcVar17);
            sVar19 = (ulong)((byte)local_178._0_1_ >> 1);
            if (((uint)local_178 & 1) != 0) {
              sVar19 = local_170;
            }
            if (sVar19 == 1) {
              plVar1 = plVar22;
              if (((uint)local_178 & 1) != 0) {
                plVar1 = local_168;
              }
              if ((char)*plVar1 == 'Y') {
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                dVar24 = atof((char *)piVar2);
                fVar26 = (float)dVar24;
              }
              else if ((char)*plVar1 == 'X') {
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                dVar24 = atof((char *)piVar2);
                fVar32 = (float)dVar24;
              }
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (((uint)local_190 & 1) != 0) {
              operator_delete(local_180);
            }
          }
        }
        break;
      case 5:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"Scale",5);
        if (iVar10 == 0) {
          lVar20 = *(long *)(this_00 + 0x60);
          while (lVar20 != 0) {
            pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
            sVar19 = strlen(pcVar17);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_178,pcVar17,sVar19);
            pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_190,pcVar17);
            sVar19 = (ulong)((byte)local_178._0_1_ >> 1);
            if (((uint)local_178 & 1) != 0) {
              sVar19 = local_170;
            }
            if (sVar19 == 6) {
              plVar1 = plVar22;
              if (((uint)local_178 & 1) != 0) {
                plVar1 = local_168;
              }
              iVar10 = memcmp(plVar1,"ScaleX",6);
              if (iVar10 == 0) {
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                dVar24 = atof((char *)piVar2);
                fVar30 = (float)dVar24;
              }
              else {
                iVar10 = memcmp(plVar1,"ScaleY",6);
                if (iVar10 == 0) {
                  piVar2 = piVar21;
                  if (((uint)local_190 & 1) != 0) {
                    piVar2 = local_180;
                  }
                  dVar24 = atof((char *)piVar2);
                  local_1c4 = (float)dVar24;
                }
              }
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (((uint)local_190 & 1) != 0) {
              operator_delete(local_180);
            }
          }
        }
        break;
      case 6:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"CColor",6);
        if (iVar10 == 0) {
          lVar20 = *(long *)(this_00 + 0x60);
          while (lVar20 != 0) {
            pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
            sVar19 = strlen(pcVar17);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_178,pcVar17,sVar19);
            pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_190,pcVar17);
            sVar19 = (ulong)((byte)local_178._0_1_ >> 1);
            if (((uint)local_178 & 1) != 0) {
              sVar19 = local_170;
            }
            if (sVar19 == 1) {
              plVar1 = plVar22;
              if (((uint)local_178 & 1) != 0) {
                plVar1 = local_168;
              }
              switch((char)*plVar1) {
              case 'A':
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                iVar10 = atoi((char *)piVar2);
                local_cd = (undefined1)iVar10;
                break;
              case 'B':
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                iVar10 = atoi((char *)piVar2);
                local_ce = (undefined1)iVar10;
                break;
              case 'G':
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                iVar10 = atoi((char *)piVar2);
                local_d0 = CONCAT11((char)iVar10,local_d0._0_1_);
                break;
              case 'R':
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                iVar10 = atoi((char *)piVar2);
                local_d0 = CONCAT11(local_d0._1_1_,(char)iVar10);
              }
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (((uint)local_190 & 1) != 0) {
              operator_delete(local_180);
            }
          }
        }
        break;
      case 7:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"PreSize",7);
        if (iVar10 == 0) {
          lVar20 = *(long *)(this_00 + 0x60);
          while (lVar20 != 0) {
            pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
            sVar19 = strlen(pcVar17);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_178,pcVar17,sVar19);
            pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_190,pcVar17);
            sVar19 = (ulong)((byte)local_178._0_1_ >> 1);
            if (((uint)local_178 & 1) != 0) {
              sVar19 = local_170;
            }
            if (sVar19 == 1) {
              plVar1 = plVar22;
              if (((uint)local_178 & 1) != 0) {
                plVar1 = local_168;
              }
              if ((char)*plVar1 == 'Y') {
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                dVar24 = atof((char *)piVar2);
                fVar34 = (float)dVar24;
              }
              else if ((char)*plVar1 == 'X') {
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                dVar24 = atof((char *)piVar2);
                fVar36 = (float)dVar24;
              }
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (((uint)local_190 & 1) != 0) {
              operator_delete(local_180);
            }
          }
        }
        break;
      case 8:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        if (*plVar1 == 0x6e6f697469736f50) {
          lVar20 = *(long *)(this_00 + 0x60);
          while (lVar20 != 0) {
            pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
            sVar19 = strlen(pcVar17);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_178,pcVar17,sVar19);
            pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_190,pcVar17);
            sVar19 = (ulong)((byte)local_178._0_1_ >> 1);
            if (((uint)local_178 & 1) != 0) {
              sVar19 = local_170;
            }
            if (sVar19 == 1) {
              plVar1 = plVar22;
              if (((uint)local_178 & 1) != 0) {
                plVar1 = local_168;
              }
              if ((char)*plVar1 == 'Y') {
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                dVar24 = atof((char *)piVar2);
                fVar38 = (float)dVar24;
              }
              else if ((char)*plVar1 == 'X') {
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                dVar24 = atof((char *)piVar2);
                fVar37 = (float)dVar24;
              }
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (((uint)local_190 & 1) != 0) {
              operator_delete(local_180);
            }
          }
        }
        break;
      case 0xb:
        plVar1 = plVar22;
        if (((uint)local_178 & 1) != 0) {
          plVar1 = local_168;
        }
        iVar10 = memcmp(plVar1,"AnchorPoint",0xb);
        if (iVar10 == 0) {
          lVar20 = *(long *)(this_00 + 0x60);
          while (lVar20 != 0) {
            pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
            sVar19 = strlen(pcVar17);
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_178,pcVar17,sVar19);
            pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
            basic_string<decltype(nullptr)>
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_190,pcVar17);
            sVar19 = (ulong)((byte)local_178._0_1_ >> 1);
            if (((uint)local_178 & 1) != 0) {
              sVar19 = local_170;
            }
            if (sVar19 == 6) {
              plVar1 = plVar22;
              if (((uint)local_178 & 1) != 0) {
                plVar1 = local_168;
              }
              iVar10 = memcmp(plVar1,"ScaleX",6);
              if (iVar10 == 0) {
                piVar2 = piVar21;
                if (((uint)local_190 & 1) != 0) {
                  piVar2 = local_180;
                }
                dVar24 = atof((char *)piVar2);
                fVar28 = (float)dVar24;
              }
              else {
                iVar10 = memcmp(plVar1,"ScaleY",6);
                if (iVar10 == 0) {
                  piVar2 = piVar21;
                  if (((uint)local_190 & 1) != 0) {
                    piVar2 = local_180;
                  }
                  dVar24 = atof((char *)piVar2);
                  fVar23 = (float)dVar24;
                }
              }
            }
            lVar20 = *(long *)(lVar20 + 0x38);
            if (((uint)local_190 & 1) != 0) {
              operator_delete(local_180);
            }
          }
        }
        else {
          iVar10 = memcmp(plVar1,"PrePosition",0xb);
          if (iVar10 == 0) {
            lVar20 = *(long *)(this_00 + 0x60);
            while (lVar20 != 0) {
              pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 8));
              sVar19 = strlen(pcVar17);
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_178,pcVar17,sVar19);
              pcVar17 = (char *)tinyxml2::StrPair::GetStr((StrPair *)(lVar20 + 0x20));
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              basic_string<decltype(nullptr)>
                        ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_190,pcVar17);
              sVar19 = (ulong)((byte)local_178._0_1_ >> 1);
              if (((uint)local_178 & 1) != 0) {
                sVar19 = local_170;
              }
              if (sVar19 == 1) {
                plVar1 = plVar22;
                if (((uint)local_178 & 1) != 0) {
                  plVar1 = local_168;
                }
                if ((char)*plVar1 == 'Y') {
                  piVar2 = piVar21;
                  if (((uint)local_190 & 1) != 0) {
                    piVar2 = local_180;
                  }
                  dVar24 = atof((char *)piVar2);
                  local_1c8 = (float)dVar24;
                }
                else if ((char)*plVar1 == 'X') {
                  piVar2 = piVar21;
                  if (((uint)local_190 & 1) != 0) {
                    piVar2 = local_180;
                  }
                  dVar24 = atof((char *)piVar2);
                  local_1cc = (float)dVar24;
                }
              }
              lVar20 = *(long *)(lVar20 + 0x38);
              if (((uint)local_190 & 1) != 0) {
                operator_delete(local_180);
              }
            }
          }
        }
      }
      this_00 = (XMLNode *)tinyxml2::XMLNode::NextSiblingElement(this_00,(char *)0x0);
      if (((uint)local_178 & 1) != 0) {
        operator_delete(local_168);
      }
      local_19c = fVar23;
    } while (this_00 != (XMLNode *)0x0);
  }
  local_1a8 = local_cd;
  local_1a7 = local_d0;
  local_194 = local_1c4;
  local_1a5 = local_ce;
  uVar3 = local_148 >> 1 & 0x7f;
  pcVar17 = (char *)((ulong)&local_148 | 1);
  if ((local_148 & 1) != 0) {
    uVar3 = local_140;
    pcVar17 = local_138;
  }
  local_1b0 = fVar32;
  fStack_1ac = fVar26;
  local_1a0 = fVar28;
  fStack_198 = fVar30;
  local_190 = fVar37;
  local_18c = fVar38;
  local_178 = fVar35;
  local_174 = fVar33;
  uVar11 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar17,uVar3);
  uVar3 = local_160 >> 1 & 0x7f;
  pcVar17 = (char *)((ulong)&local_160 | 1);
  if ((local_160 & 1) != 0) {
    uVar3 = local_158;
    pcVar17 = local_150;
  }
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar17,uVar3);
  uVar11 = flatbuffers::CreateLayoutComponentTable
                     (local_1cc,local_1c8,fVar36,fVar34,fVar31,fVar29,fVar27,fVar25,param_2,
                      local_1b8._4_4_,(undefined4)local_1b8,bVar7,local_1d8._4_4_,
                      (undefined4)local_1d8,bVar8,uVar11,uVar12);
  uVar3 = (ulong)((byte)local_c8[0] >> 1);
  pcVar17 = (char *)((ulong)local_c8 | 1);
  if (((byte)local_c8[0] & 1) != 0) {
    uVar3 = local_c0;
    pcVar17 = local_b8;
  }
  uVar12 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar17,uVar3);
  uVar3 = (ulong)((byte)local_e8[0] >> 1);
  pcVar17 = (char *)((ulong)local_e8 | 1);
  if (((byte)local_e8[0] & 1) != 0) {
    uVar3 = local_e0;
    pcVar17 = local_d8;
  }
  uVar13 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar17,uVar3);
  uVar3 = (ulong)((byte)local_100[0] >> 1);
  pcVar17 = (char *)((ulong)local_100 | 1);
  if (((byte)local_100[0] & 1) != 0) {
    uVar3 = local_f8;
    pcVar17 = local_f0;
  }
  uVar14 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar17,uVar3);
  uVar3 = (ulong)((byte)local_118[0] >> 1);
  pcVar17 = (char *)((ulong)local_118 | 1);
  if (((byte)local_118[0] & 1) != 0) {
    uVar3 = local_110;
    pcVar17 = local_108;
  }
  uVar15 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar17,uVar3);
  uVar3 = (ulong)((byte)local_130[0] >> 1);
  pcVar17 = (char *)((ulong)local_130 | 1);
  if (((byte)local_130[0] & 1) != 0) {
    uVar3 = local_128;
    pcVar17 = local_120;
  }
  uVar16 = flatbuffers::FlatBufferBuilder::CreateString(param_2,pcVar17,uVar3);
  uVar11 = flatbuffers::CreateWidgetOptions
                     (param_2,uVar12,local_1e8,&local_178,local_1e0 & 0xffffffff,bVar6,local_200,
                      local_1e0._4_4_,&local_190,&fStack_198,&local_1a0,&local_1a8,&local_1b0,
                      (char)local_1f0,bVar9,0,(char)(local_1f0 >> 0x20),uVar13,uVar14,uVar15,uVar16,
                      uVar11);
  if ((local_160 & 1) != 0) {
    operator_delete(local_150);
  }
  if ((local_148 & 1) != 0) {
    operator_delete(local_138);
  }
  if (((byte)local_130[0] & 1) != 0) {
    operator_delete(local_120);
  }
  if (((byte)local_118[0] & 1) != 0) {
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

