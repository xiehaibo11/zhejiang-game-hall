
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::TextReader::setPropsFromBinary(cocos2d::ui::Widget*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::TextReader::setPropsFromBinary
          (TextReader *this,Widget *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  stExpCocoNode *this_00;
  size_t sVar1;
  byte *pbVar2;
  long lVar3;
  undefined *puVar4;
  ulong __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  TextReader TVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  size_t sVar14;
  char *__dest;
  stExpCocoNode *this_01;
  LinearLayoutParameter *this_02;
  RelativeLayoutParameter *this_03;
  long *plVar15;
  ulong *puVar16;
  float *pfVar17;
  long *plVar18;
  char *pcVar19;
  long lVar20;
  ulong uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_108 [16];
  void *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  ulong local_e0;
  size_t sStack_d8;
  char *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8;
  undefined7 uStack_c7;
  ulong uStack_c0;
  char *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  size_t local_a8;
  long *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [16];
  void *local_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  WidgetReader::beginSetBasicProperties((WidgetReader *)this,param_1);
  lVar11 = stExpCocoNode::GetChildArray(param_3,param_2);
  lVar12 = GUIReader::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_98,(basic_string *)(lVar12 + 0x28));
  plVar18 = (long *)((ulong)local_b0 | 1);
  lVar12 = 0;
  pcVar19 = (char *)((ulong)&local_e0 | 1);
  do {
    iVar8 = stExpCocoNode::GetChildNum(param_3);
    if (iVar8 <= lVar12) {
      WidgetReader::endSetBasicProperties((WidgetReader *)this,param_1);
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_80) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (stExpCocoNode *)(lVar11 + lVar12 * 0x10);
    pcVar13 = (char *)stExpCocoNode::GetName(this_00,param_2);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_b0,pcVar13);
    pcVar13 = (char *)stExpCocoNode::GetValue(this_00,param_2);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_c8,pcVar13);
    puVar4 = P_IgnoreSize;
    sVar14 = strlen(P_IgnoreSize);
    bVar5 = local_b0[0];
    sVar1 = (ulong)((byte)local_b0[0] >> 1);
    if (((byte)local_b0[0] & 1) != 0) {
      sVar1 = local_a8;
    }
    if (sVar14 == sVar1) {
      if (sVar14 != 0) {
        if (sVar14 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        plVar15 = plVar18;
        if (((byte)local_b0[0] & 1) != 0) {
          plVar15 = local_a0;
        }
        iVar8 = memcmp(plVar15,puVar4,sVar14);
        if (iVar8 != 0) goto LAB_00c9da80;
      }
      plVar15 = *(long **)(this + 0x90);
      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar10 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
      (**(code **)(*(long *)param_1 + 0x600))(param_1,uVar10 & 1);
switchD_00c9e280_caseD_5:
    }
    else {
LAB_00c9da80:
      puVar4 = P_SizeType;
      sVar14 = strlen(P_SizeType);
      if (sVar14 == sVar1) {
        if (sVar1 != 0) {
          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar18;
          if (((byte)bVar5 & 1) != 0) {
            plVar15 = local_a0;
          }
          iVar8 = memcmp(plVar15,puVar4,sVar1);
          if (iVar8 != 0) goto LAB_00c9dac8;
        }
        plVar15 = *(long **)(this + 0x60);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
        cocos2d::ui::Widget::setSizeType(param_1,uVar22);
        goto switchD_00c9e280_caseD_5;
      }
LAB_00c9dac8:
      puVar4 = P_PositionType;
      sVar14 = strlen(P_PositionType);
      if (sVar14 == sVar1) {
        if (sVar1 != 0) {
          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar18;
          if (((byte)bVar5 & 1) != 0) {
            plVar15 = local_a0;
          }
          iVar8 = memcmp(plVar15,puVar4,sVar1);
          if (iVar8 != 0) goto LAB_00c9db10;
        }
        plVar15 = *(long **)(this + 0x60);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
        cocos2d::ui::Widget::setPositionType(param_1,uVar22);
        goto switchD_00c9e280_caseD_5;
      }
LAB_00c9db10:
      puVar4 = P_SizePercentX;
      sVar14 = strlen(P_SizePercentX);
      if (sVar14 == sVar1) {
        if (sVar1 != 0) {
          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar18;
          if (((byte)bVar5 & 1) != 0) {
            plVar15 = local_a0;
          }
          iVar8 = memcmp(plVar15,puVar4,sVar1);
          if (iVar8 != 0) goto LAB_00c9db58;
        }
        plVar15 = *(long **)(this + 0xc0);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
        *(undefined4 *)(this + 0xd0) = uVar22;
      }
      else {
LAB_00c9db58:
        puVar4 = P_SizePercentY;
        sVar14 = strlen(P_SizePercentY);
        if (sVar14 == sVar1) {
          if (sVar1 != 0) {
            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            plVar15 = plVar18;
            if (((byte)bVar5 & 1) != 0) {
              plVar15 = local_a0;
            }
            iVar8 = memcmp(plVar15,puVar4,sVar1);
            if (iVar8 != 0) goto LAB_00c9dba0;
          }
          plVar15 = *(long **)(this + 0xc0);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
          *(undefined4 *)(this + 0xd4) = uVar22;
        }
        else {
LAB_00c9dba0:
          puVar4 = P_PositionPercentX;
          sVar14 = strlen(P_PositionPercentX);
          if (sVar14 == sVar1) {
            if (sVar1 != 0) {
              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              plVar15 = plVar18;
              if (((byte)bVar5 & 1) != 0) {
                plVar15 = local_a0;
              }
              iVar8 = memcmp(plVar15,puVar4,sVar1);
              if (iVar8 != 0) goto LAB_00c9dbe8;
            }
            plVar15 = *(long **)(this + 0xc0);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
            *(undefined4 *)(this + 0xd8) = uVar22;
          }
          else {
LAB_00c9dbe8:
            puVar4 = P_PositionPercentY;
            sVar14 = strlen(P_PositionPercentY);
            if (sVar14 == sVar1) {
              if (sVar1 != 0) {
                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                plVar15 = plVar18;
                if (((byte)bVar5 & 1) != 0) {
                  plVar15 = local_a0;
                }
                iVar8 = memcmp(plVar15,puVar4,sVar1);
                if (iVar8 != 0) goto LAB_00c9dc30;
              }
              plVar15 = *(long **)(this + 0xc0);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
              *(undefined4 *)(this + 0xdc) = uVar22;
            }
            else {
LAB_00c9dc30:
              puVar4 = P_Width;
              sVar14 = strlen(P_Width);
              if (sVar14 == sVar1) {
                if (sVar1 != 0) {
                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  plVar15 = plVar18;
                  if (((byte)bVar5 & 1) != 0) {
                    plVar15 = local_a0;
                  }
                  iVar8 = memcmp(plVar15,puVar4,sVar1);
                  if (iVar8 != 0) goto LAB_00c9dc78;
                }
                plVar15 = *(long **)(this + 0xc0);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_009d64e4();
                }
                uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                *(undefined4 *)(this + 0xe0) = uVar22;
              }
              else {
LAB_00c9dc78:
                puVar4 = P_Height;
                sVar14 = strlen(P_Height);
                if (sVar14 != sVar1) {
LAB_00c9dcc0:
                  puVar4 = P_Tag;
                  sVar14 = strlen(P_Tag);
                  if (sVar14 == sVar1) {
                    if (sVar1 != 0) {
                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      plVar15 = plVar18;
                      if (((byte)bVar5 & 1) != 0) {
                        plVar15 = local_a0;
                      }
                      iVar8 = memcmp(plVar15,puVar4,sVar1);
                      if (iVar8 != 0) goto LAB_00c9dd08;
                    }
                    plVar15 = *(long **)(this + 0x60);
                    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_009d64e4();
                    }
                    uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                    (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar22);
                    goto switchD_00c9e280_caseD_5;
                  }
LAB_00c9dd08:
                  puVar4 = P_ActionTag;
                  sVar14 = strlen(P_ActionTag);
                  if (sVar14 == sVar1) {
                    if (sVar1 != 0) {
                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      plVar15 = plVar18;
                      if (((byte)bVar5 & 1) != 0) {
                        plVar15 = local_a0;
                      }
                      iVar8 = memcmp(plVar15,puVar4,sVar1);
                      if (iVar8 != 0) goto LAB_00c9dd50;
                    }
                    plVar15 = *(long **)(this + 0x60);
                    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_009d64e4();
                    }
                    iVar8 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                    cocos2d::ui::Widget::setActionTag(param_1,iVar8);
                    goto switchD_00c9e280_caseD_5;
                  }
LAB_00c9dd50:
                  puVar4 = P_TouchAble;
                  sVar14 = strlen(P_TouchAble);
                  if (sVar14 == sVar1) {
                    if (sVar1 != 0) {
                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      plVar15 = plVar18;
                      if (((byte)bVar5 & 1) != 0) {
                        plVar15 = local_a0;
                      }
                      iVar8 = memcmp(plVar15,puVar4,sVar1);
                      if (iVar8 != 0) goto LAB_00c9dd98;
                    }
                    plVar15 = *(long **)(this + 0x90);
                    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_009d64e4();
                    }
                    uVar10 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                    (**(code **)(*(long *)param_1 + 0x588))(param_1,uVar10 & 1);
                    goto switchD_00c9e280_caseD_5;
                  }
LAB_00c9dd98:
                  puVar4 = P_Name;
                  sVar14 = strlen(P_Name);
                  if (sVar14 == sVar1) {
                    if (sVar1 != 0) {
                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      plVar15 = plVar18;
                      if (((byte)bVar5 & 1) != 0) {
                        plVar15 = local_a0;
                      }
                      iVar8 = memcmp(plVar15,puVar4,sVar1);
                      if (iVar8 != 0) goto LAB_00c9dde0;
                    }
                    pcVar13 = local_b8;
                    __n = uStack_c0;
                    uVar21 = (ulong)((byte)local_c8 >> 1);
                    if (((byte)local_c8 & 1) != 0) {
                      uVar21 = uStack_c0;
                    }
                    if (uVar21 == 0) {
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_e0,"default");
                    }
                    else {
                      sStack_d8 = 0;
                      local_d0 = (char *)0x0;
                      local_e0 = 0;
                      if (((byte)local_c8 & 1) == 0) {
                        local_e0 = CONCAT71(uStack_c7,local_c8);
                        sStack_d8 = uStack_c0;
                        local_d0 = local_b8;
                      }
                      else {
                        if (0xffffffffffffffef < uStack_c0) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_length_error();
                        }
                        if (uStack_c0 < 0x17) {
                          local_e0 = (ulong)(byte)((int)uStack_c0 << 1);
                          __dest = pcVar19;
                          if (uStack_c0 != 0) goto LAB_00c9e5ec;
                        }
                        else {
                          uVar21 = uStack_c0 + 0x10 & 0xfffffffffffffff0;
                          __dest = operator_new(uVar21);
                          local_e0 = uVar21 | 1;
                          sStack_d8 = __n;
                          local_d0 = __dest;
LAB_00c9e5ec:
                          memcpy(__dest,pcVar13,__n);
                        }
                        __dest[__n] = '\0';
                      }
                    }
                    (**(code **)(*(long *)param_1 + 0x2d0))(param_1,&local_e0);
LAB_00c9e614:
                    if ((local_e0 & 1) != 0) {
                      operator_delete(local_d0);
                    }
                  }
                  else {
LAB_00c9dde0:
                    puVar4 = P_X;
                    sVar14 = strlen(P_X);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9de28;
                      }
                      plVar15 = *(long **)(this + 0xc0);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      *(undefined4 *)(this + 0xf0) = uVar22;
                      goto joined_r0x00c9e358;
                    }
LAB_00c9de28:
                    puVar4 = P_Y;
                    sVar14 = strlen(P_Y);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9de70;
                      }
                      plVar15 = *(long **)(this + 0xc0);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      *(undefined4 *)(this + 0xf4) = uVar22;
                      goto joined_r0x00c9e358;
                    }
LAB_00c9de70:
                    puVar4 = P_ScaleX;
                    sVar14 = strlen(P_ScaleX);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9deb8;
                      }
                      plVar15 = *(long **)(this + 0xc0);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      (**(code **)(*(long *)param_1 + 0x50))(param_1);
                      goto switchD_00c9e280_caseD_5;
                    }
LAB_00c9deb8:
                    puVar4 = P_ScaleY;
                    sVar14 = strlen(P_ScaleY);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9df00;
                      }
                      plVar15 = *(long **)(this + 0xc0);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      (**(code **)(*(long *)param_1 + 0x60))(param_1);
                      goto switchD_00c9e280_caseD_5;
                    }
LAB_00c9df00:
                    puVar4 = P_Rotation;
                    sVar14 = strlen(P_Rotation);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9df48;
                      }
                      plVar15 = *(long **)(this + 0xc0);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      (**(code **)(*(long *)param_1 + 0x180))(param_1);
                      goto switchD_00c9e280_caseD_5;
                    }
LAB_00c9df48:
                    puVar4 = P_Visbile;
                    sVar14 = strlen(P_Visbile);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9df90;
                      }
                      plVar15 = *(long **)(this + 0x90);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar10 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      (**(code **)(*(long *)param_1 + 0x170))(param_1,uVar10 & 1);
                      goto switchD_00c9e280_caseD_5;
                    }
LAB_00c9df90:
                    puVar4 = P_ZOrder;
                    sVar14 = strlen(P_ZOrder);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9dfd8;
                      }
                      plVar15 = *(long **)(this + 0x60);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar22);
                      goto switchD_00c9e280_caseD_5;
                    }
LAB_00c9dfd8:
                    puVar4 = P_LayoutParameter;
                    sVar14 = strlen(P_LayoutParameter);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9e020;
                      }
                      this_01 = (stExpCocoNode *)stExpCocoNode::GetChildArray(this_00,param_2);
                      this_02 = (LinearLayoutParameter *)
                                cocos2d::ui::LinearLayoutParameter::create();
                      this_03 = (RelativeLayoutParameter *)
                                cocos2d::ui::RelativeLayoutParameter::create();
                      cocos2d::ui::Margin::Margin((Margin *)&local_f0);
                      iVar8 = -1;
                      for (lVar20 = 0; iVar9 = stExpCocoNode::GetChildNum(this_00), lVar20 < iVar9;
                          lVar20 = lVar20 + 1) {
                        pcVar13 = (char *)stExpCocoNode::GetName(this_01,param_2);
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>
                                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)&local_e0,pcVar13);
                        pcVar13 = (char *)stExpCocoNode::GetValue(this_01,param_2);
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>(local_108,pcVar13);
                        puVar4 = P_Type;
                        sVar14 = strlen(P_Type);
                        uVar21 = local_e0;
                        sVar1 = local_e0 >> 1 & 0x7f;
                        if ((local_e0 & 1) != 0) {
                          sVar1 = sStack_d8;
                        }
                        if (sVar14 == sVar1) {
                          if (sVar14 != 0) {
                            if (sVar14 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                            }
                            pcVar13 = pcVar19;
                            if ((local_e0 & 1) != 0) {
                              pcVar13 = local_d0;
                            }
                            iVar9 = memcmp(pcVar13,puVar4,sVar14);
                            if (iVar9 != 0) goto LAB_00c9e7b8;
                          }
                          plVar15 = *(long **)(this + 0x60);
                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          iVar8 = (**(code **)(*plVar15 + 0x30))(plVar15,local_108);
                        }
                        else {
LAB_00c9e7b8:
                          puVar4 = P_Gravity;
                          sVar14 = strlen(P_Gravity);
                          if (sVar14 == sVar1) {
                            if (sVar1 != 0) {
                              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                              }
                              pcVar13 = pcVar19;
                              if ((uVar21 & 1) != 0) {
                                pcVar13 = local_d0;
                              }
                              iVar9 = memcmp(pcVar13,puVar4,sVar1);
                              if (iVar9 != 0) goto LAB_00c9e800;
                            }
                            plVar15 = *(long **)(this + 0x60);
                            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,local_108);
                            cocos2d::ui::LinearLayoutParameter::setGravity(this_02,uVar22);
                          }
                          else {
LAB_00c9e800:
                            puVar4 = P_RelativeName;
                            sVar14 = strlen(P_RelativeName);
                            if (sVar14 == sVar1) {
                              if (sVar1 != 0) {
                                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                                }
                                pcVar13 = pcVar19;
                                if ((uVar21 & 1) != 0) {
                                  pcVar13 = local_d0;
                                }
                                iVar9 = memcmp(pcVar13,puVar4,sVar1);
                                if (iVar9 != 0) goto LAB_00c9e848;
                              }
                              cocos2d::ui::RelativeLayoutParameter::setRelativeName
                                        (this_03,(basic_string *)local_108);
                            }
                            else {
LAB_00c9e848:
                              puVar4 = P_RelativeToName;
                              sVar14 = strlen(P_RelativeToName);
                              if (sVar14 == sVar1) {
                                if (sVar1 != 0) {
                                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
                                    ;
                                  }
                                  pcVar13 = pcVar19;
                                  if ((uVar21 & 1) != 0) {
                                    pcVar13 = local_d0;
                                  }
                                  iVar9 = memcmp(pcVar13,puVar4,sVar1);
                                  if (iVar9 != 0) goto LAB_00c9e890;
                                }
                                cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName
                                          (this_03,(basic_string *)local_108);
                              }
                              else {
LAB_00c9e890:
                                puVar4 = P_Align;
                                sVar14 = strlen(P_Align);
                                if (sVar14 == sVar1) {
                                  if (sVar1 != 0) {
                                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range
                                                ();
                                    }
                                    pcVar13 = pcVar19;
                                    if ((uVar21 & 1) != 0) {
                                      pcVar13 = local_d0;
                                    }
                                    iVar9 = memcmp(pcVar13,puVar4,sVar1);
                                    if (iVar9 != 0) goto LAB_00c9e8d8;
                                  }
                                  plVar15 = *(long **)(this + 0x60);
                                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_009d64e4();
                                  }
                                  uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,local_108);
                                  cocos2d::ui::RelativeLayoutParameter::setAlign(this_03,uVar22);
                                }
                                else {
LAB_00c9e8d8:
                                  puVar4 = P_MarginLeft;
                                  sVar14 = strlen(P_MarginLeft);
                                  if (sVar14 == sVar1) {
                                    if (sVar1 != 0) {
                                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                        std::__ndk1::__basic_string_common<true>::
                                        __throw_out_of_range();
                                      }
                                      pcVar13 = pcVar19;
                                      if ((uVar21 & 1) != 0) {
                                        pcVar13 = local_d0;
                                      }
                                      iVar9 = memcmp(pcVar13,puVar4,sVar1);
                                      if (iVar9 != 0) goto LAB_00c9e920;
                                    }
                                    plVar15 = *(long **)(this + 0xc0);
                                    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_009d64e4();
                                    }
                                    local_f0 = (**(code **)(*plVar15 + 0x30))(plVar15,local_108);
                                  }
                                  else {
LAB_00c9e920:
                                    puVar4 = P_MarginTop;
                                    sVar14 = strlen(P_MarginTop);
                                    if (sVar14 == sVar1) {
                                      if (sVar1 != 0) {
                                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                          std::__ndk1::__basic_string_common<true>::
                                          __throw_out_of_range();
                                        }
                                        pcVar13 = pcVar19;
                                        if ((uVar21 & 1) != 0) {
                                          pcVar13 = local_d0;
                                        }
                                        iVar9 = memcmp(pcVar13,puVar4,sVar1);
                                        if (iVar9 != 0) goto LAB_00c9e968;
                                      }
                                      plVar15 = *(long **)(this + 0xc0);
                                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_009d64e4();
                                      }
                                      local_ec = (**(code **)(*plVar15 + 0x30))(plVar15,local_108);
                                    }
                                    else {
LAB_00c9e968:
                                      puVar4 = P_MarginRight;
                                      sVar14 = strlen(P_MarginRight);
                                      if (sVar14 == sVar1) {
                                        if (sVar1 != 0) {
                                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                            std::__ndk1::__basic_string_common<true>::
                                            __throw_out_of_range();
                                          }
                                          pcVar13 = pcVar19;
                                          if ((uVar21 & 1) != 0) {
                                            pcVar13 = local_d0;
                                          }
                                          iVar9 = memcmp(pcVar13,puVar4,sVar1);
                                          if (iVar9 != 0) goto LAB_00c9e9b0;
                                        }
                                        plVar15 = *(long **)(this + 0xc0);
                                        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_009d64e4();
                                        }
                                        local_e8 = (**(code **)(*plVar15 + 0x30))(plVar15,local_108)
                                        ;
                                      }
                                      else {
LAB_00c9e9b0:
                                        puVar4 = P_MarginDown;
                                        sVar14 = strlen(P_MarginDown);
                                        if (sVar14 == sVar1) {
                                          if (sVar1 != 0) {
                                            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            pcVar13 = pcVar19;
                                            if ((uVar21 & 1) != 0) {
                                              pcVar13 = local_d0;
                                            }
                                            iVar9 = memcmp(pcVar13,puVar4,sVar1);
                                            if (iVar9 != 0) goto joined_r0x00c9eb0c;
                                          }
                                          plVar15 = *(long **)(this + 0xc0);
                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          local_e4 = (**(code **)(*plVar15 + 0x30))
                                                               (plVar15,local_108);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
joined_r0x00c9eb0c:
                        if (((byte)local_108[0] & 1) != 0) {
                          operator_delete(local_f8);
                        }
                        if ((local_e0 & 1) != 0) {
                          operator_delete(local_d0);
                        }
                        this_01 = this_01 + 0x10;
                      }
                      cocos2d::ui::LayoutParameter::setMargin
                                ((LayoutParameter *)this_02,(Margin *)&local_f0);
                      cocos2d::ui::LayoutParameter::setMargin
                                ((LayoutParameter *)this_03,(Margin *)&local_f0);
                      if (iVar8 == 1) {
                        cocos2d::ui::Widget::setLayoutParameter(param_1,(LayoutParameter *)this_02);
                      }
                      else if (iVar8 == 2) {
                        cocos2d::ui::Widget::setLayoutParameter(param_1,(LayoutParameter *)this_03);
                      }
                      goto switchD_00c9e280_caseD_5;
                    }
LAB_00c9e020:
                    puVar4 = P_Opacity;
                    sVar14 = strlen(P_Opacity);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9e068;
                      }
                      plVar15 = *(long **)(this + 0x60);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      *(undefined4 *)(this + 0xec) = uVar22;
                      goto joined_r0x00c9e358;
                    }
LAB_00c9e068:
                    puVar4 = P_ColorR;
                    sVar14 = strlen(P_ColorR);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9e0b0;
                      }
                      plVar15 = *(long **)(this + 0x60);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      TVar6 = (TextReader)(**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      this[0xe8] = TVar6;
                      goto joined_r0x00c9e358;
                    }
LAB_00c9e0b0:
                    puVar4 = P_ColorG;
                    sVar14 = strlen(P_ColorG);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9e0f8;
                      }
                      plVar15 = *(long **)(this + 0x60);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      TVar6 = (TextReader)(**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      this[0xe9] = TVar6;
                      goto joined_r0x00c9e358;
                    }
LAB_00c9e0f8:
                    puVar4 = P_ColorB;
                    sVar14 = strlen(P_ColorB);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9e140;
                      }
                      plVar15 = *(long **)(this + 0x60);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      TVar6 = (TextReader)(**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      this[0xea] = TVar6;
                      goto joined_r0x00c9e358;
                    }
LAB_00c9e140:
                    puVar4 = P_FlipX;
                    sVar14 = strlen(P_FlipX);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9e188;
                      }
                      plVar15 = *(long **)(this + 0x90);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar10 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      (**(code **)(*(long *)param_1 + 0x598))(param_1,uVar10 & 1);
                      goto switchD_00c9e280_caseD_5;
                    }
LAB_00c9e188:
                    puVar4 = P_FlipY;
                    sVar14 = strlen(P_FlipY);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9e1d0;
                      }
                      plVar15 = *(long **)(this + 0x90);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar10 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      (**(code **)(*(long *)param_1 + 0x5a8))(param_1,uVar10 & 1);
                      goto switchD_00c9e280_caseD_5;
                    }
LAB_00c9e1d0:
                    puVar4 = P_AnchorPointX;
                    sVar14 = strlen(P_AnchorPointX);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9e218;
                      }
                      plVar15 = *(long **)(this + 0xc0);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      *(undefined4 *)(this + 0xfc) = uVar22;
                      goto joined_r0x00c9e358;
                    }
LAB_00c9e218:
                    puVar4 = P_AnchorPointY;
                    sVar14 = strlen(P_AnchorPointY);
                    if (sVar14 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar15 = plVar18;
                        if (((byte)bVar5 & 1) != 0) {
                          plVar15 = local_a0;
                        }
                        iVar8 = memcmp(plVar15,puVar4,sVar1);
                        if (iVar8 != 0) goto LAB_00c9e260;
                      }
                      plVar15 = *(long **)(this + 0xc0);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                      *(undefined4 *)(this + 0x100) = uVar22;
                      goto joined_r0x00c9e358;
                    }
LAB_00c9e260:
                    switch(sVar1) {
                    case 4:
                      plVar15 = plVar18;
                      if (((byte)bVar5 & 1) != 0) {
                        plVar15 = local_a0;
                      }
                      if ((int)*plVar15 == 0x74786574) {
                        cocos2d::ui::Text::setString((Text *)param_1,(basic_string *)&local_c8);
                      }
                      break;
                    case 8:
                      plVar15 = plVar18;
                      if (((byte)bVar5 & 1) != 0) {
                        plVar15 = local_a0;
                      }
                      if (*plVar15 == 0x657a6953746e6f66) {
                        plVar15 = *(long **)(this + 0x60);
                        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        iVar8 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                        cocos2d::ui::Text::setFontSize((Text *)param_1,(float)iVar8);
                        break;
                      }
                      if (*plVar15 != 0x656d614e746e6f66) break;
                      sStack_d8 = 0;
                      local_d0 = (char *)0x0;
                      local_e0 = 0;
                      pcVar13 = (char *)((ulong)&local_c8 | 1);
                      uVar21 = (ulong)((byte)local_c8 >> 1);
                      if (((byte)local_c8 & 1) != 0) {
                        pcVar13 = local_b8;
                        uVar21 = uStack_c0;
                      }
                      puVar16 = (ulong *)std::__ndk1::
                                         basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                         ::append(local_98,pcVar13,uVar21);
                      if (&local_e0 != puVar16) {
                        uVar21 = puVar16[1];
                        pbVar2 = (byte *)puVar16[2];
                        if (((byte)*puVar16 & 1) == 0) {
                          pbVar2 = (byte *)((long)puVar16 + 1);
                          uVar21 = (ulong)(byte)((byte)*puVar16 >> 1);
                        }
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_e0,(char *)pbVar2,uVar21);
                      }
                      plVar15 = (long *)cocos2d::FileUtils::getInstance();
                      uVar21 = (**(code **)(*plVar15 + 0x128))(plVar15,&local_e0);
                      if ((uVar21 & 1) == 0) {
                        cocos2d::ui::Text::setFontName((Text *)param_1,(basic_string *)&local_c8);
                      }
                      else {
                        cocos2d::ui::Text::setFontName((Text *)param_1,(basic_string *)&local_e0);
                      }
                      goto LAB_00c9e614;
                    case 9:
                      plVar15 = plVar18;
                      if (((byte)bVar5 & 1) != 0) {
                        plVar15 = local_a0;
                      }
                      iVar8 = memcmp(plVar15,"areaWidth",9);
                      if (iVar8 == 0) {
                        plVar15 = *(long **)(this + 0xc0);
                        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        fVar23 = (float)(**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                        lVar20 = cocos2d::ui::Text::getTextAreaSize((Text *)param_1);
                        cocos2d::Size::Size((Size *)&local_e0,fVar23,*(float *)(lVar20 + 4));
                        cocos2d::ui::Text::setTextAreaSize((Text *)param_1,(Size *)&local_e0);
                      }
                      break;
                    case 10:
                      plVar15 = plVar18;
                      if (((byte)bVar5 & 1) != 0) {
                        plVar15 = local_a0;
                      }
                      iVar8 = memcmp(plVar15,"areaHeight",10);
                      if (iVar8 == 0) {
                        pfVar17 = (float *)cocos2d::ui::Text::getTextAreaSize((Text *)param_1);
                        plVar15 = *(long **)(this + 0xc0);
                        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        fVar24 = *pfVar17;
                        fVar23 = (float)(**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                        cocos2d::Size::Size((Size *)&local_e0,fVar24,fVar23);
                        cocos2d::ui::Text::setTextAreaSize((Text *)param_1,(Size *)&local_e0);
                      }
                      else {
                        iVar8 = memcmp(plVar15,"hAlignment",10);
                        if (iVar8 == 0) {
                          plVar15 = *(long **)(this + 0x60);
                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                          cocos2d::ui::Text::setTextHorizontalAlignment((Text *)param_1,uVar22);
                        }
                        else {
                          iVar8 = memcmp(plVar15,"vAlignment",10);
                          if (iVar8 == 0) {
                            plVar15 = *(long **)(this + 0x60);
                            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                            cocos2d::ui::Text::setTextVerticalAlignment((Text *)param_1,uVar22);
                          }
                        }
                      }
                      break;
                    case 0x10:
                      plVar15 = plVar18;
                      if (((byte)bVar5 & 1) != 0) {
                        plVar15 = local_a0;
                      }
                      iVar8 = memcmp(plVar15,"touchScaleEnable",0x10);
                      if (iVar8 == 0) {
                        plVar15 = *(long **)(this + 0x90);
                        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        bVar7 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                        cocos2d::ui::Text::setTouchScaleChangeEnabled
                                  ((Text *)param_1,(bool)(bVar7 & 1));
                      }
                    }
                  }
                  goto switchD_00c9e280_caseD_5;
                }
                if (sVar1 != 0) {
                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  plVar15 = plVar18;
                  if (((byte)bVar5 & 1) != 0) {
                    plVar15 = local_a0;
                  }
                  iVar8 = memcmp(plVar15,puVar4,sVar1);
                  if (iVar8 != 0) goto LAB_00c9dcc0;
                }
                plVar15 = *(long **)(this + 0xc0);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_009d64e4();
                }
                uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c8);
                *(undefined4 *)(this + 0xe4) = uVar22;
              }
            }
          }
        }
      }
    }
joined_r0x00c9e358:
    if (((byte)local_c8 & 1) != 0) {
      operator_delete(local_b8);
    }
    if (((byte)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    lVar12 = lVar12 + 1;
  } while( true );
}

