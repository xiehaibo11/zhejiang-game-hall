
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::TextFieldReader::setPropsFromBinary(cocos2d::ui::Widget*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::TextFieldReader::setPropsFromBinary
          (TextFieldReader *this,Widget *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  stExpCocoNode *this_00;
  size_t sVar1;
  long lVar2;
  undefined *puVar3;
  ulong __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  TextFieldReader TVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  char *pcVar11;
  size_t sVar12;
  char *__dest;
  stExpCocoNode *this_01;
  LinearLayoutParameter *this_02;
  RelativeLayoutParameter *this_03;
  long *plVar13;
  long *plVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  float local_f8;
  float local_f4;
  void *pvStack_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  ulong uStack_d0;
  size_t sStack_c8;
  char *pcStack_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0;
  undefined7 uStack_af;
  ulong uStack_a8;
  char *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  size_t local_90;
  long *local_88;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  WidgetReader::beginSetBasicProperties((WidgetReader *)this,param_1);
  lVar10 = stExpCocoNode::GetChildArray(param_3,param_2);
  iVar7 = stExpCocoNode::GetChildNum(param_3);
  if (0 < iVar7) {
    plVar14 = (long *)((ulong)local_98 | 1);
    lVar16 = 0;
    pcVar15 = (char *)((ulong)&uStack_d0 | 1);
    do {
      this_00 = (stExpCocoNode *)(lVar10 + lVar16 * 0x10);
      pcVar11 = (char *)stExpCocoNode::GetName(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar11);
      pcVar11 = (char *)stExpCocoNode::GetValue(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_b0,pcVar11);
      puVar3 = P_IgnoreSize;
      sVar12 = strlen(P_IgnoreSize);
      bVar4 = local_98[0];
      sVar1 = (ulong)((byte)local_98[0] >> 1);
      if (((byte)local_98[0] & 1) != 0) {
        sVar1 = local_90;
      }
      if (sVar12 == sVar1) {
        if (sVar12 != 0) {
          if (sVar12 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar13 = plVar14;
          if (((byte)local_98[0] & 1) != 0) {
            plVar13 = local_88;
          }
          iVar7 = memcmp(plVar13,puVar3,sVar12);
          if (iVar7 != 0) goto LAB_00c9a38c;
        }
        plVar13 = *(long **)(this + 0x90);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
        (**(code **)(*(long *)param_1 + 0x600))(param_1,uVar9 & 1);
switchD_00c9ab8c_caseD_5:
      }
      else {
LAB_00c9a38c:
        puVar3 = P_SizeType;
        sVar12 = strlen(P_SizeType);
        if (sVar12 == sVar1) {
          if (sVar1 != 0) {
            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            plVar13 = plVar14;
            if (((byte)bVar4 & 1) != 0) {
              plVar13 = local_88;
            }
            iVar7 = memcmp(plVar13,puVar3,sVar1);
            if (iVar7 != 0) goto LAB_00c9a3d4;
          }
          plVar13 = *(long **)(this + 0x60);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
          cocos2d::ui::Widget::setSizeType(param_1,uVar19);
          goto switchD_00c9ab8c_caseD_5;
        }
LAB_00c9a3d4:
        puVar3 = P_PositionType;
        sVar12 = strlen(P_PositionType);
        if (sVar12 == sVar1) {
          if (sVar1 != 0) {
            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            plVar13 = plVar14;
            if (((byte)bVar4 & 1) != 0) {
              plVar13 = local_88;
            }
            iVar7 = memcmp(plVar13,puVar3,sVar1);
            if (iVar7 != 0) goto LAB_00c9a41c;
          }
          plVar13 = *(long **)(this + 0x60);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
          cocos2d::ui::Widget::setPositionType(param_1,uVar19);
          goto switchD_00c9ab8c_caseD_5;
        }
LAB_00c9a41c:
        puVar3 = P_SizePercentX;
        sVar12 = strlen(P_SizePercentX);
        if (sVar12 == sVar1) {
          if (sVar1 != 0) {
            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            plVar13 = plVar14;
            if (((byte)bVar4 & 1) != 0) {
              plVar13 = local_88;
            }
            iVar7 = memcmp(plVar13,puVar3,sVar1);
            if (iVar7 != 0) goto LAB_00c9a464;
          }
          plVar13 = *(long **)(this + 0xc0);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
          *(undefined4 *)(this + 0xd0) = uVar19;
        }
        else {
LAB_00c9a464:
          puVar3 = P_SizePercentY;
          sVar12 = strlen(P_SizePercentY);
          if (sVar12 == sVar1) {
            if (sVar1 != 0) {
              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              plVar13 = plVar14;
              if (((byte)bVar4 & 1) != 0) {
                plVar13 = local_88;
              }
              iVar7 = memcmp(plVar13,puVar3,sVar1);
              if (iVar7 != 0) goto LAB_00c9a4ac;
            }
            plVar13 = *(long **)(this + 0xc0);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
            *(undefined4 *)(this + 0xd4) = uVar19;
          }
          else {
LAB_00c9a4ac:
            puVar3 = P_PositionPercentX;
            sVar12 = strlen(P_PositionPercentX);
            if (sVar12 == sVar1) {
              if (sVar1 != 0) {
                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                plVar13 = plVar14;
                if (((byte)bVar4 & 1) != 0) {
                  plVar13 = local_88;
                }
                iVar7 = memcmp(plVar13,puVar3,sVar1);
                if (iVar7 != 0) goto LAB_00c9a4f4;
              }
              plVar13 = *(long **)(this + 0xc0);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
              *(undefined4 *)(this + 0xd8) = uVar19;
            }
            else {
LAB_00c9a4f4:
              puVar3 = P_PositionPercentY;
              sVar12 = strlen(P_PositionPercentY);
              if (sVar12 == sVar1) {
                if (sVar1 != 0) {
                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  plVar13 = plVar14;
                  if (((byte)bVar4 & 1) != 0) {
                    plVar13 = local_88;
                  }
                  iVar7 = memcmp(plVar13,puVar3,sVar1);
                  if (iVar7 != 0) goto LAB_00c9a53c;
                }
                plVar13 = *(long **)(this + 0xc0);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_009d64e4();
                }
                uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                *(undefined4 *)(this + 0xdc) = uVar19;
              }
              else {
LAB_00c9a53c:
                puVar3 = P_Width;
                sVar12 = strlen(P_Width);
                if (sVar12 == sVar1) {
                  if (sVar1 != 0) {
                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    plVar13 = plVar14;
                    if (((byte)bVar4 & 1) != 0) {
                      plVar13 = local_88;
                    }
                    iVar7 = memcmp(plVar13,puVar3,sVar1);
                    if (iVar7 != 0) goto LAB_00c9a584;
                  }
                  plVar13 = *(long **)(this + 0xc0);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_009d64e4();
                  }
                  uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                  *(undefined4 *)(this + 0xe0) = uVar19;
                }
                else {
LAB_00c9a584:
                  puVar3 = P_Height;
                  sVar12 = strlen(P_Height);
                  if (sVar12 != sVar1) {
LAB_00c9a5cc:
                    puVar3 = P_Tag;
                    sVar12 = strlen(P_Tag);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar13 = plVar14;
                        if (((byte)bVar4 & 1) != 0) {
                          plVar13 = local_88;
                        }
                        iVar7 = memcmp(plVar13,puVar3,sVar1);
                        if (iVar7 != 0) goto LAB_00c9a614;
                      }
                      plVar13 = *(long **)(this + 0x60);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                      (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar19);
                      goto switchD_00c9ab8c_caseD_5;
                    }
LAB_00c9a614:
                    puVar3 = P_ActionTag;
                    sVar12 = strlen(P_ActionTag);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar13 = plVar14;
                        if (((byte)bVar4 & 1) != 0) {
                          plVar13 = local_88;
                        }
                        iVar7 = memcmp(plVar13,puVar3,sVar1);
                        if (iVar7 != 0) goto LAB_00c9a65c;
                      }
                      plVar13 = *(long **)(this + 0x60);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      iVar7 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                      cocos2d::ui::Widget::setActionTag(param_1,iVar7);
                      goto switchD_00c9ab8c_caseD_5;
                    }
LAB_00c9a65c:
                    puVar3 = P_TouchAble;
                    sVar12 = strlen(P_TouchAble);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar13 = plVar14;
                        if (((byte)bVar4 & 1) != 0) {
                          plVar13 = local_88;
                        }
                        iVar7 = memcmp(plVar13,puVar3,sVar1);
                        if (iVar7 != 0) goto LAB_00c9a6a4;
                      }
                      plVar13 = *(long **)(this + 0x90);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                      (**(code **)(*(long *)param_1 + 0x588))(param_1,uVar9 & 1);
                      goto switchD_00c9ab8c_caseD_5;
                    }
LAB_00c9a6a4:
                    puVar3 = P_Name;
                    sVar12 = strlen(P_Name);
                    if (sVar12 != sVar1) {
LAB_00c9a6ec:
                      puVar3 = P_X;
                      sVar12 = strlen(P_X);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9a734;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        *(undefined4 *)(this + 0xf0) = uVar19;
                        goto joined_r0x00c9b500;
                      }
LAB_00c9a734:
                      puVar3 = P_Y;
                      sVar12 = strlen(P_Y);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9a77c;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        *(undefined4 *)(this + 0xf4) = uVar19;
                        goto joined_r0x00c9b500;
                      }
LAB_00c9a77c:
                      puVar3 = P_ScaleX;
                      sVar12 = strlen(P_ScaleX);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9a7c4;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x50))(param_1);
                        goto switchD_00c9ab8c_caseD_5;
                      }
LAB_00c9a7c4:
                      puVar3 = P_ScaleY;
                      sVar12 = strlen(P_ScaleY);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9a80c;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x60))(param_1);
                        goto switchD_00c9ab8c_caseD_5;
                      }
LAB_00c9a80c:
                      puVar3 = P_Rotation;
                      sVar12 = strlen(P_Rotation);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9a854;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x180))(param_1);
                        goto switchD_00c9ab8c_caseD_5;
                      }
LAB_00c9a854:
                      puVar3 = P_Visbile;
                      sVar12 = strlen(P_Visbile);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9a89c;
                        }
                        plVar13 = *(long **)(this + 0x90);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x170))(param_1,uVar9 & 1);
                        goto switchD_00c9ab8c_caseD_5;
                      }
LAB_00c9a89c:
                      puVar3 = P_ZOrder;
                      sVar12 = strlen(P_ZOrder);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9a8e4;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar19);
                        goto switchD_00c9ab8c_caseD_5;
                      }
LAB_00c9a8e4:
                      puVar3 = P_LayoutParameter;
                      sVar12 = strlen(P_LayoutParameter);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9a92c;
                        }
                        this_01 = (stExpCocoNode *)stExpCocoNode::GetChildArray(this_00,param_2);
                        this_02 = (LinearLayoutParameter *)
                                  cocos2d::ui::LinearLayoutParameter::create();
                        this_03 = (RelativeLayoutParameter *)
                                  cocos2d::ui::RelativeLayoutParameter::create();
                        cocos2d::ui::Margin::Margin((Margin *)&uStack_e0);
                        iVar7 = -1;
                        for (lVar17 = 0; iVar8 = stExpCocoNode::GetChildNum(this_00), lVar17 < iVar8
                            ; lVar17 = lVar17 + 1) {
                          pcVar11 = (char *)stExpCocoNode::GetName(this_01,param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&uStack_d0,pcVar11);
                          pcVar11 = (char *)stExpCocoNode::GetValue(this_01,param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_f8,pcVar11);
                          puVar3 = P_Type;
                          sVar12 = strlen(P_Type);
                          uVar18 = uStack_d0;
                          sVar1 = uStack_d0 >> 1 & 0x7f;
                          if ((uStack_d0 & 1) != 0) {
                            sVar1 = sStack_c8;
                          }
                          if (sVar12 == sVar1) {
                            if (sVar12 != 0) {
                              if (sVar12 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                              }
                              pcVar11 = pcVar15;
                              if ((uStack_d0 & 1) != 0) {
                                pcVar11 = pcStack_c0;
                              }
                              iVar8 = memcmp(pcVar11,puVar3,sVar12);
                              if (iVar8 != 0) goto LAB_00c9b0c0;
                            }
                            plVar13 = *(long **)(this + 0x60);
                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            iVar7 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                          }
                          else {
LAB_00c9b0c0:
                            puVar3 = P_Gravity;
                            sVar12 = strlen(P_Gravity);
                            if (sVar12 == sVar1) {
                              if (sVar1 != 0) {
                                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                                }
                                pcVar11 = pcVar15;
                                if ((uVar18 & 1) != 0) {
                                  pcVar11 = pcStack_c0;
                                }
                                iVar8 = memcmp(pcVar11,puVar3,sVar1);
                                if (iVar8 != 0) goto LAB_00c9b108;
                              }
                              plVar13 = *(long **)(this + 0x60);
                              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_009d64e4();
                              }
                              uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                              cocos2d::ui::LinearLayoutParameter::setGravity(this_02,uVar19);
                            }
                            else {
LAB_00c9b108:
                              puVar3 = P_RelativeName;
                              sVar12 = strlen(P_RelativeName);
                              if (sVar12 == sVar1) {
                                if (sVar1 != 0) {
                                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
                                    ;
                                  }
                                  pcVar11 = pcVar15;
                                  if ((uVar18 & 1) != 0) {
                                    pcVar11 = pcStack_c0;
                                  }
                                  iVar8 = memcmp(pcVar11,puVar3,sVar1);
                                  if (iVar8 != 0) goto LAB_00c9b150;
                                }
                                cocos2d::ui::RelativeLayoutParameter::setRelativeName
                                          (this_03,(basic_string *)&local_f8);
                              }
                              else {
LAB_00c9b150:
                                puVar3 = P_RelativeToName;
                                sVar12 = strlen(P_RelativeToName);
                                if (sVar12 == sVar1) {
                                  if (sVar1 != 0) {
                                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range
                                                ();
                                    }
                                    pcVar11 = pcVar15;
                                    if ((uVar18 & 1) != 0) {
                                      pcVar11 = pcStack_c0;
                                    }
                                    iVar8 = memcmp(pcVar11,puVar3,sVar1);
                                    if (iVar8 != 0) goto LAB_00c9b198;
                                  }
                                  cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName
                                            (this_03,(basic_string *)&local_f8);
                                }
                                else {
LAB_00c9b198:
                                  puVar3 = P_Align;
                                  sVar12 = strlen(P_Align);
                                  if (sVar12 == sVar1) {
                                    if (sVar1 != 0) {
                                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                        std::__ndk1::__basic_string_common<true>::
                                        __throw_out_of_range();
                                      }
                                      pcVar11 = pcVar15;
                                      if ((uVar18 & 1) != 0) {
                                        pcVar11 = pcStack_c0;
                                      }
                                      iVar8 = memcmp(pcVar11,puVar3,sVar1);
                                      if (iVar8 != 0) goto LAB_00c9b1e0;
                                    }
                                    plVar13 = *(long **)(this + 0x60);
                                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_009d64e4();
                                    }
                                    uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                                    cocos2d::ui::RelativeLayoutParameter::setAlign(this_03,uVar19);
                                  }
                                  else {
LAB_00c9b1e0:
                                    puVar3 = P_MarginLeft;
                                    sVar12 = strlen(P_MarginLeft);
                                    if (sVar12 == sVar1) {
                                      if (sVar1 != 0) {
                                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                          std::__ndk1::__basic_string_common<true>::
                                          __throw_out_of_range();
                                        }
                                        pcVar11 = pcVar15;
                                        if ((uVar18 & 1) != 0) {
                                          pcVar11 = pcStack_c0;
                                        }
                                        iVar8 = memcmp(pcVar11,puVar3,sVar1);
                                        if (iVar8 != 0) goto LAB_00c9b228;
                                      }
                                      plVar13 = *(long **)(this + 0xc0);
                                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_009d64e4();
                                      }
                                      uStack_e0 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                                    }
                                    else {
LAB_00c9b228:
                                      puVar3 = P_MarginTop;
                                      sVar12 = strlen(P_MarginTop);
                                      if (sVar12 == sVar1) {
                                        if (sVar1 != 0) {
                                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                            std::__ndk1::__basic_string_common<true>::
                                            __throw_out_of_range();
                                          }
                                          pcVar11 = pcVar15;
                                          if ((uVar18 & 1) != 0) {
                                            pcVar11 = pcStack_c0;
                                          }
                                          iVar8 = memcmp(pcVar11,puVar3,sVar1);
                                          if (iVar8 != 0) goto LAB_00c9b270;
                                        }
                                        plVar13 = *(long **)(this + 0xc0);
                                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_009d64e4();
                                        }
                                        uStack_dc = (**(code **)(*plVar13 + 0x30))
                                                              (plVar13,&local_f8);
                                      }
                                      else {
LAB_00c9b270:
                                        puVar3 = P_MarginRight;
                                        sVar12 = strlen(P_MarginRight);
                                        if (sVar12 == sVar1) {
                                          if (sVar1 != 0) {
                                            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            pcVar11 = pcVar15;
                                            if ((uVar18 & 1) != 0) {
                                              pcVar11 = pcStack_c0;
                                            }
                                            iVar8 = memcmp(pcVar11,puVar3,sVar1);
                                            if (iVar8 != 0) goto LAB_00c9b2b8;
                                          }
                                          plVar13 = *(long **)(this + 0xc0);
                                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          uStack_d8 = (**(code **)(*plVar13 + 0x30))
                                                                (plVar13,&local_f8);
                                        }
                                        else {
LAB_00c9b2b8:
                                          puVar3 = P_MarginDown;
                                          sVar12 = strlen(P_MarginDown);
                                          if (sVar12 == sVar1) {
                                            if (sVar1 != 0) {
                                              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                std::__ndk1::__basic_string_common<true>::
                                                __throw_out_of_range();
                                              }
                                              pcVar11 = pcVar15;
                                              if ((uVar18 & 1) != 0) {
                                                pcVar11 = pcStack_c0;
                                              }
                                              iVar8 = memcmp(pcVar11,puVar3,sVar1);
                                              if (iVar8 != 0) goto joined_r0x00c9b3f8;
                                            }
                                            plVar13 = *(long **)(this + 0xc0);
                                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_009d64e4();
                                            }
                                            uStack_d4 = (**(code **)(*plVar13 + 0x30))
                                                                  (plVar13,&local_f8);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
joined_r0x00c9b3f8:
                          if (((uint)local_f8 & 1) != 0) {
                            operator_delete(pvStack_e8);
                          }
                          if ((uStack_d0 & 1) != 0) {
                            operator_delete(pcStack_c0);
                          }
                          this_01 = this_01 + 0x10;
                        }
                        cocos2d::ui::LayoutParameter::setMargin
                                  ((LayoutParameter *)this_02,(Margin *)&uStack_e0);
                        cocos2d::ui::LayoutParameter::setMargin
                                  ((LayoutParameter *)this_03,(Margin *)&uStack_e0);
                        if (iVar7 == 1) {
                          cocos2d::ui::Widget::setLayoutParameter
                                    (param_1,(LayoutParameter *)this_02);
                        }
                        else if (iVar7 == 2) {
                          cocos2d::ui::Widget::setLayoutParameter
                                    (param_1,(LayoutParameter *)this_03);
                        }
                        goto switchD_00c9ab8c_caseD_5;
                      }
LAB_00c9a92c:
                      puVar3 = P_Opacity;
                      sVar12 = strlen(P_Opacity);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9a974;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        *(undefined4 *)(this + 0xec) = uVar19;
                        goto joined_r0x00c9b500;
                      }
LAB_00c9a974:
                      puVar3 = P_ColorR;
                      sVar12 = strlen(P_ColorR);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9a9bc;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        TVar5 = (TextFieldReader)(**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        this[0xe8] = TVar5;
                        goto joined_r0x00c9b500;
                      }
LAB_00c9a9bc:
                      puVar3 = P_ColorG;
                      sVar12 = strlen(P_ColorG);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9aa04;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        TVar5 = (TextFieldReader)(**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        this[0xe9] = TVar5;
                        goto joined_r0x00c9b500;
                      }
LAB_00c9aa04:
                      puVar3 = P_ColorB;
                      sVar12 = strlen(P_ColorB);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9aa4c;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        TVar5 = (TextFieldReader)(**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        this[0xea] = TVar5;
                        goto joined_r0x00c9b500;
                      }
LAB_00c9aa4c:
                      puVar3 = P_FlipX;
                      sVar12 = strlen(P_FlipX);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9aa94;
                        }
                        plVar13 = *(long **)(this + 0x90);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x598))(param_1,uVar9 & 1);
                        goto switchD_00c9ab8c_caseD_5;
                      }
LAB_00c9aa94:
                      puVar3 = P_FlipY;
                      sVar12 = strlen(P_FlipY);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9aadc;
                        }
                        plVar13 = *(long **)(this + 0x90);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x5a8))(param_1,uVar9 & 1);
                        goto switchD_00c9ab8c_caseD_5;
                      }
LAB_00c9aadc:
                      puVar3 = P_AnchorPointX;
                      sVar12 = strlen(P_AnchorPointX);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,puVar3,sVar1);
                          if (iVar7 != 0) goto LAB_00c9ab24;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        *(undefined4 *)(this + 0xfc) = uVar19;
                        goto joined_r0x00c9b500;
                      }
LAB_00c9ab24:
                      puVar3 = P_AnchorPointY;
                      sVar12 = strlen(P_AnchorPointY);
                      if (sVar12 != sVar1) {
LAB_00c9ab6c:
                        switch(sVar1) {
                        case 4:
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          if ((int)*plVar13 == 0x74786574) {
                            cocos2d::ui::TextField::setString((basic_string *)param_1);
                          }
                          break;
                        case 8:
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          if (*plVar13 == 0x657a6953746e6f66) {
                            plVar13 = *(long **)(this + 0x60);
                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            iVar7 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                            cocos2d::ui::TextField::setFontSize((TextField *)param_1,iVar7);
                          }
                          else if (*plVar13 == 0x656d614e746e6f66) {
                            cocos2d::ui::TextField::setFontName
                                      ((TextField *)param_1,(basic_string *)&local_b0);
                          }
                          break;
                        case 9:
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,"maxLength",9);
                          if (iVar7 == 0) {
                            plVar13 = *(long **)(this + 0x60);
                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            iVar7 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                            cocos2d::ui::TextField::setMaxLength((TextField *)param_1,iVar7);
                          }
                          break;
                        case 0xb:
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,"placeHolder",0xb);
                          if (iVar7 == 0) {
                            cocos2d::ui::TextField::setPlaceHolder((basic_string *)param_1);
                          }
                          break;
                        case 0xe:
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,"touchSizeWidth",0xe);
                          if (iVar7 == 0) {
                            plVar13 = *(long **)(this + 0xc0);
                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            fVar21 = (float)(**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                            cocos2d::ui::TextField::getTouchSize();
                            cocos2d::Size::Size((Size *)&uStack_d0,fVar21,local_f4);
                            cocos2d::ui::TextField::setTouchSize
                                      ((TextField *)param_1,(Size *)&uStack_d0);
                          }
                          else {
                            iVar7 = memcmp(plVar13,"passwordEnable",0xe);
                            if (iVar7 == 0) {
                              plVar13 = *(long **)(this + 0x90);
                              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_009d64e4();
                              }
                              bVar6 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                              cocos2d::ui::TextField::setPasswordEnabled
                                        ((TextField *)param_1,(bool)(bVar6 & 1));
                            }
                          }
                          break;
                        case 0xf:
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,"touchSizeHeight",0xf);
                          if (iVar7 == 0) {
                            cocos2d::ui::TextField::getTouchSize();
                            fVar21 = local_f8;
                            plVar13 = *(long **)(this + 0xc0);
                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            fVar20 = (float)(**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                            cocos2d::Size::Size((Size *)&uStack_d0,fVar21,fVar20);
                            cocos2d::ui::TextField::setTouchSize
                                      ((TextField *)param_1,(Size *)&uStack_d0);
                          }
                          else {
                            iVar7 = memcmp(plVar13,"maxLengthEnable",0xf);
                            if (iVar7 == 0) {
                              plVar13 = *(long **)(this + 0x90);
                              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_009d64e4();
                              }
                              bVar6 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                              cocos2d::ui::TextField::setMaxLengthEnabled
                                        ((TextField *)param_1,(bool)(bVar6 & 1));
                            }
                          }
                          break;
                        case 0x11:
                          plVar13 = plVar14;
                          if (((byte)bVar4 & 1) != 0) {
                            plVar13 = local_88;
                          }
                          iVar7 = memcmp(plVar13,"passwordStyleText",0x11);
                          if (iVar7 == 0) {
                            pcVar11 = (char *)((ulong)&local_b0 | 1);
                            if (((byte)local_b0 & 1) != 0) {
                              pcVar11 = local_a0;
                            }
                            cocos2d::ui::TextField::setPasswordStyleText
                                      ((TextField *)param_1,pcVar11);
                          }
                        }
                        goto switchD_00c9ab8c_caseD_5;
                      }
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar13 = plVar14;
                        if (((byte)bVar4 & 1) != 0) {
                          plVar13 = local_88;
                        }
                        iVar7 = memcmp(plVar13,puVar3,sVar1);
                        if (iVar7 != 0) goto LAB_00c9ab6c;
                      }
                      plVar13 = *(long **)(this + 0xc0);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                      *(undefined4 *)(this + 0x100) = uVar19;
                      goto joined_r0x00c9b500;
                    }
                    if (sVar1 != 0) {
                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      plVar13 = plVar14;
                      if (((byte)bVar4 & 1) != 0) {
                        plVar13 = local_88;
                      }
                      iVar7 = memcmp(plVar13,puVar3,sVar1);
                      if (iVar7 != 0) goto LAB_00c9a6ec;
                    }
                    pcVar11 = local_a0;
                    __n = uStack_a8;
                    uVar18 = (ulong)((byte)local_b0 >> 1);
                    if (((byte)local_b0 & 1) != 0) {
                      uVar18 = uStack_a8;
                    }
                    if (uVar18 == 0) {
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&uStack_d0,"default");
                    }
                    else {
                      sStack_c8 = 0;
                      pcStack_c0 = (char *)0x0;
                      uStack_d0 = 0;
                      if (((byte)local_b0 & 1) == 0) {
                        uStack_d0 = CONCAT71(uStack_af,local_b0);
                        sStack_c8 = uStack_a8;
                        pcStack_c0 = local_a0;
                      }
                      else {
                        if (0xffffffffffffffef < uStack_a8) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_length_error();
                        }
                        if (uStack_a8 < 0x17) {
                          uStack_d0 = (ulong)(byte)((int)uStack_a8 << 1);
                          __dest = pcVar15;
                          if (uStack_a8 != 0) goto LAB_00c9aef8;
                        }
                        else {
                          uVar18 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
                          __dest = operator_new(uVar18);
                          uStack_d0 = uVar18 | 1;
                          sStack_c8 = __n;
                          pcStack_c0 = __dest;
LAB_00c9aef8:
                          memcpy(__dest,pcVar11,__n);
                        }
                        __dest[__n] = '\0';
                      }
                    }
                    (**(code **)(*(long *)param_1 + 0x2d0))(param_1,&uStack_d0);
                    if ((uStack_d0 & 1) != 0) {
                      operator_delete(pcStack_c0);
                    }
                    goto switchD_00c9ab8c_caseD_5;
                  }
                  if (sVar1 != 0) {
                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    plVar13 = plVar14;
                    if (((byte)bVar4 & 1) != 0) {
                      plVar13 = local_88;
                    }
                    iVar7 = memcmp(plVar13,puVar3,sVar1);
                    if (iVar7 != 0) goto LAB_00c9a5cc;
                  }
                  plVar13 = *(long **)(this + 0xc0);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_009d64e4();
                  }
                  uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                  *(undefined4 *)(this + 0xe4) = uVar19;
                }
              }
            }
          }
        }
      }
joined_r0x00c9b500:
      if (((byte)local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      lVar16 = lVar16 + 1;
      iVar7 = stExpCocoNode::GetChildNum(param_3);
    } while (lVar16 < iVar7);
  }
  WidgetReader::endSetBasicProperties((WidgetReader *)this,param_1);
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

