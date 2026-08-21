
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::ButtonReader::setPropsFromBinary(cocos2d::ui::Widget*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::ButtonReader::setPropsFromBinary
          (ButtonReader *this,Widget *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  ButtonReader *pBVar1;
  stExpCocoNode *this_00;
  size_t sVar2;
  void *pvVar3;
  long lVar4;
  undefined *puVar5;
  ulong __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  ButtonReader BVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  char *pcVar12;
  size_t sVar13;
  void *__dest;
  stExpCocoNode *this_01;
  LinearLayoutParameter *this_02;
  RelativeLayoutParameter *this_03;
  long *plVar14;
  ulong uVar15;
  long *plVar16;
  void *pvVar17;
  long lVar18;
  long lVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uchar local_134;
  uchar local_130;
  uchar local_12c;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_118 [16];
  void *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  ulong local_f0;
  size_t sStack_e8;
  void *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0;
  undefined7 uStack_cf;
  ulong uStack_c8;
  void *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [8];
  size_t local_b0;
  long *local_a8;
  long local_a0;
  
  lVar4 = tpidr_el0;
  local_a0 = *(long *)(lVar4 + 0x28);
  WidgetReader::setPropsFromBinary((WidgetReader *)this,param_1,param_2,param_3);
  lVar11 = stExpCocoNode::GetChildArray(param_3,param_2);
  WidgetReader::beginSetBasicProperties((WidgetReader *)this,param_1);
  iVar8 = stExpCocoNode::GetChildNum(param_3);
  if (iVar8 < 1) {
    local_134 = 0xff;
    fVar24 = 0.0;
    fVar23 = 0.0;
    local_130 = 0xff;
    fVar22 = 0.0;
    fVar21 = 0.0;
    fVar27 = 0.0;
    fVar26 = 0.0;
    local_12c = 0xff;
  }
  else {
    pBVar1 = this + 0xc0;
    plVar16 = (long *)((ulong)local_b8 | 1);
    pvVar17 = (void *)((ulong)&local_f0 | 1);
    lVar19 = 0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    local_130 = 0xff;
    local_12c = 0xff;
    local_134 = 0xff;
    do {
      this_00 = (stExpCocoNode *)(lVar11 + lVar19 * 0x10);
      pcVar12 = (char *)stExpCocoNode::GetName(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_b8,pcVar12);
      pcVar12 = (char *)stExpCocoNode::GetValue(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_d0,pcVar12);
      puVar5 = P_IgnoreSize;
      sVar13 = strlen(P_IgnoreSize);
      bVar6 = local_b8[0];
      sVar2 = (ulong)((byte)local_b8[0] >> 1);
      if (((byte)local_b8[0] & 1) != 0) {
        sVar2 = local_b0;
      }
      if (sVar13 == sVar2) {
        if (sVar13 != 0) {
          if (sVar13 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar14 = plVar16;
          if (((byte)local_b8[0] & 1) != 0) {
            plVar14 = local_a8;
          }
          iVar8 = memcmp(plVar14,puVar5,sVar13);
          if (iVar8 != 0) goto LAB_00c6f2c0;
        }
        plVar14 = *(long **)(this + 0x90);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
        (**(code **)(*(long *)param_1 + 0x600))(param_1,uVar10 & 1);
switchD_00c6fac0_caseD_5:
      }
      else {
LAB_00c6f2c0:
        puVar5 = P_SizeType;
        sVar13 = strlen(P_SizeType);
        if (sVar13 == sVar2) {
          if (sVar2 != 0) {
            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            plVar14 = plVar16;
            if (((byte)bVar6 & 1) != 0) {
              plVar14 = local_a8;
            }
            iVar8 = memcmp(plVar14,puVar5,sVar2);
            if (iVar8 != 0) goto LAB_00c6f308;
          }
          plVar14 = *(long **)(this + 0x60);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
          cocos2d::ui::Widget::setSizeType(param_1,uVar20);
          goto switchD_00c6fac0_caseD_5;
        }
LAB_00c6f308:
        puVar5 = P_PositionType;
        sVar13 = strlen(P_PositionType);
        if (sVar13 == sVar2) {
          if (sVar2 != 0) {
            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            plVar14 = plVar16;
            if (((byte)bVar6 & 1) != 0) {
              plVar14 = local_a8;
            }
            iVar8 = memcmp(plVar14,puVar5,sVar2);
            if (iVar8 != 0) goto LAB_00c6f350;
          }
          plVar14 = *(long **)(this + 0x60);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
          cocos2d::ui::Widget::setPositionType(param_1,uVar20);
          goto switchD_00c6fac0_caseD_5;
        }
LAB_00c6f350:
        puVar5 = P_SizePercentX;
        sVar13 = strlen(P_SizePercentX);
        if (sVar13 == sVar2) {
          if (sVar2 != 0) {
            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            plVar14 = plVar16;
            if (((byte)bVar6 & 1) != 0) {
              plVar14 = local_a8;
            }
            iVar8 = memcmp(plVar14,puVar5,sVar2);
            if (iVar8 != 0) goto LAB_00c6f398;
          }
          plVar14 = *(long **)pBVar1;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
          *(undefined4 *)(this + 0xd0) = uVar20;
        }
        else {
LAB_00c6f398:
          puVar5 = P_SizePercentY;
          sVar13 = strlen(P_SizePercentY);
          if (sVar13 == sVar2) {
            if (sVar2 != 0) {
              if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              plVar14 = plVar16;
              if (((byte)bVar6 & 1) != 0) {
                plVar14 = local_a8;
              }
              iVar8 = memcmp(plVar14,puVar5,sVar2);
              if (iVar8 != 0) goto LAB_00c6f3e0;
            }
            plVar14 = *(long **)pBVar1;
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
            *(undefined4 *)(this + 0xd4) = uVar20;
          }
          else {
LAB_00c6f3e0:
            puVar5 = P_PositionPercentX;
            sVar13 = strlen(P_PositionPercentX);
            if (sVar13 == sVar2) {
              if (sVar2 != 0) {
                if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                plVar14 = plVar16;
                if (((byte)bVar6 & 1) != 0) {
                  plVar14 = local_a8;
                }
                iVar8 = memcmp(plVar14,puVar5,sVar2);
                if (iVar8 != 0) goto LAB_00c6f428;
              }
              plVar14 = *(long **)pBVar1;
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
              *(undefined4 *)(this + 0xd8) = uVar20;
            }
            else {
LAB_00c6f428:
              puVar5 = P_PositionPercentY;
              sVar13 = strlen(P_PositionPercentY);
              if (sVar13 == sVar2) {
                if (sVar2 != 0) {
                  if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  plVar14 = plVar16;
                  if (((byte)bVar6 & 1) != 0) {
                    plVar14 = local_a8;
                  }
                  iVar8 = memcmp(plVar14,puVar5,sVar2);
                  if (iVar8 != 0) goto LAB_00c6f470;
                }
                plVar14 = *(long **)pBVar1;
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_009d64e4();
                }
                uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                *(undefined4 *)(this + 0xdc) = uVar20;
              }
              else {
LAB_00c6f470:
                puVar5 = P_Width;
                sVar13 = strlen(P_Width);
                if (sVar13 == sVar2) {
                  if (sVar2 != 0) {
                    if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    plVar14 = plVar16;
                    if (((byte)bVar6 & 1) != 0) {
                      plVar14 = local_a8;
                    }
                    iVar8 = memcmp(plVar14,puVar5,sVar2);
                    if (iVar8 != 0) goto LAB_00c6f4b8;
                  }
                  plVar14 = *(long **)pBVar1;
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_009d64e4();
                  }
                  uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                  *(undefined4 *)(this + 0xe0) = uVar20;
                }
                else {
LAB_00c6f4b8:
                  puVar5 = P_Height;
                  sVar13 = strlen(P_Height);
                  if (sVar13 != sVar2) {
LAB_00c6f500:
                    puVar5 = P_Tag;
                    sVar13 = strlen(P_Tag);
                    if (sVar13 == sVar2) {
                      if (sVar2 != 0) {
                        if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar14 = plVar16;
                        if (((byte)bVar6 & 1) != 0) {
                          plVar14 = local_a8;
                        }
                        iVar8 = memcmp(plVar14,puVar5,sVar2);
                        if (iVar8 != 0) goto LAB_00c6f548;
                      }
                      plVar14 = *(long **)(this + 0x60);
                      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                      (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar20);
                      goto switchD_00c6fac0_caseD_5;
                    }
LAB_00c6f548:
                    puVar5 = P_ActionTag;
                    sVar13 = strlen(P_ActionTag);
                    if (sVar13 == sVar2) {
                      if (sVar2 != 0) {
                        if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar14 = plVar16;
                        if (((byte)bVar6 & 1) != 0) {
                          plVar14 = local_a8;
                        }
                        iVar8 = memcmp(plVar14,puVar5,sVar2);
                        if (iVar8 != 0) goto LAB_00c6f590;
                      }
                      plVar14 = *(long **)(this + 0x60);
                      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      iVar8 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                      cocos2d::ui::Widget::setActionTag(param_1,iVar8);
                      goto switchD_00c6fac0_caseD_5;
                    }
LAB_00c6f590:
                    puVar5 = P_TouchAble;
                    sVar13 = strlen(P_TouchAble);
                    if (sVar13 == sVar2) {
                      if (sVar2 != 0) {
                        if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar14 = plVar16;
                        if (((byte)bVar6 & 1) != 0) {
                          plVar14 = local_a8;
                        }
                        iVar8 = memcmp(plVar14,puVar5,sVar2);
                        if (iVar8 != 0) goto LAB_00c6f5d8;
                      }
                      plVar14 = *(long **)(this + 0x90);
                      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                      (**(code **)(*(long *)param_1 + 0x588))(param_1,uVar10 & 1);
                      goto switchD_00c6fac0_caseD_5;
                    }
LAB_00c6f5d8:
                    puVar5 = P_Name;
                    sVar13 = strlen(P_Name);
                    if (sVar13 == sVar2) {
                      if (sVar2 != 0) {
                        if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        plVar14 = plVar16;
                        if (((byte)bVar6 & 1) != 0) {
                          plVar14 = local_a8;
                        }
                        iVar8 = memcmp(plVar14,puVar5,sVar2);
                        if (iVar8 != 0) goto LAB_00c6f620;
                      }
                      pvVar3 = local_c0;
                      __n = uStack_c8;
                      uVar15 = (ulong)((byte)local_d0 >> 1);
                      if (((byte)local_d0 & 1) != 0) {
                        uVar15 = uStack_c8;
                      }
                      if (uVar15 == 0) {
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>
                                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)&local_f0,"default");
                      }
                      else {
                        sStack_e8 = 0;
                        local_e0 = (void *)0x0;
                        local_f0 = 0;
                        if (((byte)local_d0 & 1) == 0) {
                          local_f0 = CONCAT71(uStack_cf,local_d0);
                          sStack_e8 = uStack_c8;
                          local_e0 = local_c0;
                        }
                        else {
                          if (0xffffffffffffffef < uStack_c8) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_length_error();
                          }
                          if (uStack_c8 < 0x17) {
                            local_f0 = (ulong)(byte)((int)uStack_c8 << 1);
                            __dest = pvVar17;
                            if (uStack_c8 != 0) goto LAB_00c6fe74;
                          }
                          else {
                            uVar15 = uStack_c8 + 0x10 & 0xfffffffffffffff0;
                            __dest = operator_new(uVar15);
                            local_f0 = uVar15 | 1;
                            sStack_e8 = __n;
                            local_e0 = __dest;
LAB_00c6fe74:
                            memcpy(__dest,pvVar3,__n);
                          }
                          *(undefined1 *)((long)__dest + __n) = 0;
                        }
                      }
                      (**(code **)(*(long *)param_1 + 0x2d0))(param_1,&local_f0);
joined_r0x00c70a48:
                      if ((local_f0 & 1) != 0) {
                        operator_delete(local_e0);
                        goto joined_r0x00c6fc6c;
                      }
                    }
                    else {
LAB_00c6f620:
                      puVar5 = P_X;
                      sVar13 = strlen(P_X);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f668;
                        }
                        plVar14 = *(long **)pBVar1;
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        *(undefined4 *)(this + 0xf0) = uVar20;
                        goto joined_r0x00c6fc6c;
                      }
LAB_00c6f668:
                      puVar5 = P_Y;
                      sVar13 = strlen(P_Y);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f6b0;
                        }
                        plVar14 = *(long **)pBVar1;
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        *(undefined4 *)(this + 0xf4) = uVar20;
                        goto joined_r0x00c6fc6c;
                      }
LAB_00c6f6b0:
                      puVar5 = P_ScaleX;
                      sVar13 = strlen(P_ScaleX);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f6f8;
                        }
                        plVar14 = *(long **)pBVar1;
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        (**(code **)(*(long *)param_1 + 0x50))(param_1);
                        goto switchD_00c6fac0_caseD_5;
                      }
LAB_00c6f6f8:
                      puVar5 = P_ScaleY;
                      sVar13 = strlen(P_ScaleY);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f740;
                        }
                        plVar14 = *(long **)pBVar1;
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        (**(code **)(*(long *)param_1 + 0x60))(param_1);
                        goto switchD_00c6fac0_caseD_5;
                      }
LAB_00c6f740:
                      puVar5 = P_Rotation;
                      sVar13 = strlen(P_Rotation);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f788;
                        }
                        plVar14 = *(long **)pBVar1;
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        (**(code **)(*(long *)param_1 + 0x180))(param_1);
                        goto switchD_00c6fac0_caseD_5;
                      }
LAB_00c6f788:
                      puVar5 = P_Visbile;
                      sVar13 = strlen(P_Visbile);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f7d0;
                        }
                        plVar14 = *(long **)(this + 0x90);
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        (**(code **)(*(long *)param_1 + 0x170))(param_1,uVar10 & 1);
                        goto switchD_00c6fac0_caseD_5;
                      }
LAB_00c6f7d0:
                      puVar5 = P_ZOrder;
                      sVar13 = strlen(P_ZOrder);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f818;
                        }
                        plVar14 = *(long **)(this + 0x60);
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar20);
                        goto switchD_00c6fac0_caseD_5;
                      }
LAB_00c6f818:
                      puVar5 = P_LayoutParameter;
                      sVar13 = strlen(P_LayoutParameter);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f860;
                        }
                        this_01 = (stExpCocoNode *)stExpCocoNode::GetChildArray(this_00,param_2);
                        this_02 = (LinearLayoutParameter *)
                                  cocos2d::ui::LinearLayoutParameter::create();
                        this_03 = (RelativeLayoutParameter *)
                                  cocos2d::ui::RelativeLayoutParameter::create();
                        cocos2d::ui::Margin::Margin((Margin *)&local_100);
                        iVar8 = -1;
                        for (lVar18 = 0; iVar9 = stExpCocoNode::GetChildNum(this_00), lVar18 < iVar9
                            ; lVar18 = lVar18 + 1) {
                          pcVar12 = (char *)stExpCocoNode::GetName(this_01,param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_f0,pcVar12);
                          pcVar12 = (char *)stExpCocoNode::GetValue(this_01,param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>(local_118,pcVar12);
                          puVar5 = P_Type;
                          sVar13 = strlen(P_Type);
                          uVar15 = local_f0;
                          sVar2 = local_f0 >> 1 & 0x7f;
                          if ((local_f0 & 1) != 0) {
                            sVar2 = sStack_e8;
                          }
                          if (sVar13 == sVar2) {
                            if (sVar13 != 0) {
                              if (sVar13 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                              }
                              pvVar3 = pvVar17;
                              if ((local_f0 & 1) != 0) {
                                pvVar3 = local_e0;
                              }
                              iVar9 = memcmp(pvVar3,puVar5,sVar13);
                              if (iVar9 != 0) goto LAB_00c70028;
                            }
                            plVar14 = *(long **)(this + 0x60);
                            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            iVar8 = (**(code **)(*plVar14 + 0x30))(plVar14,local_118);
                          }
                          else {
LAB_00c70028:
                            puVar5 = P_Gravity;
                            sVar13 = strlen(P_Gravity);
                            if (sVar13 == sVar2) {
                              if (sVar2 != 0) {
                                if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                                }
                                pvVar3 = pvVar17;
                                if ((uVar15 & 1) != 0) {
                                  pvVar3 = local_e0;
                                }
                                iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                if (iVar9 != 0) goto LAB_00c70070;
                              }
                              plVar14 = *(long **)(this + 0x60);
                              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_009d64e4();
                              }
                              uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,local_118);
                              cocos2d::ui::LinearLayoutParameter::setGravity(this_02,uVar20);
                            }
                            else {
LAB_00c70070:
                              puVar5 = P_RelativeName;
                              sVar13 = strlen(P_RelativeName);
                              if (sVar13 == sVar2) {
                                if (sVar2 != 0) {
                                  if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
                                    ;
                                  }
                                  pvVar3 = pvVar17;
                                  if ((uVar15 & 1) != 0) {
                                    pvVar3 = local_e0;
                                  }
                                  iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                  if (iVar9 != 0) goto LAB_00c700b8;
                                }
                                cocos2d::ui::RelativeLayoutParameter::setRelativeName
                                          (this_03,(basic_string *)local_118);
                              }
                              else {
LAB_00c700b8:
                                puVar5 = P_RelativeToName;
                                sVar13 = strlen(P_RelativeToName);
                                if (sVar13 == sVar2) {
                                  if (sVar2 != 0) {
                                    if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range
                                                ();
                                    }
                                    pvVar3 = pvVar17;
                                    if ((uVar15 & 1) != 0) {
                                      pvVar3 = local_e0;
                                    }
                                    iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                    if (iVar9 != 0) goto LAB_00c70100;
                                  }
                                  cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName
                                            (this_03,(basic_string *)local_118);
                                }
                                else {
LAB_00c70100:
                                  puVar5 = P_Align;
                                  sVar13 = strlen(P_Align);
                                  if (sVar13 == sVar2) {
                                    if (sVar2 != 0) {
                                      if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                        std::__ndk1::__basic_string_common<true>::
                                        __throw_out_of_range();
                                      }
                                      pvVar3 = pvVar17;
                                      if ((uVar15 & 1) != 0) {
                                        pvVar3 = local_e0;
                                      }
                                      iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                      if (iVar9 != 0) goto LAB_00c70148;
                                    }
                                    plVar14 = *(long **)(this + 0x60);
                                    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_009d64e4();
                                    }
                                    uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,local_118);
                                    cocos2d::ui::RelativeLayoutParameter::setAlign(this_03,uVar20);
                                  }
                                  else {
LAB_00c70148:
                                    puVar5 = P_MarginLeft;
                                    sVar13 = strlen(P_MarginLeft);
                                    if (sVar13 == sVar2) {
                                      if (sVar2 != 0) {
                                        if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                          std::__ndk1::__basic_string_common<true>::
                                          __throw_out_of_range();
                                        }
                                        pvVar3 = pvVar17;
                                        if ((uVar15 & 1) != 0) {
                                          pvVar3 = local_e0;
                                        }
                                        iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                        if (iVar9 != 0) goto LAB_00c70190;
                                      }
                                      plVar14 = *(long **)pBVar1;
                                      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_009d64e4();
                                      }
                                      local_100 = (**(code **)(*plVar14 + 0x30))(plVar14,local_118);
                                    }
                                    else {
LAB_00c70190:
                                      puVar5 = P_MarginTop;
                                      sVar13 = strlen(P_MarginTop);
                                      if (sVar13 == sVar2) {
                                        if (sVar2 != 0) {
                                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                            std::__ndk1::__basic_string_common<true>::
                                            __throw_out_of_range();
                                          }
                                          pvVar3 = pvVar17;
                                          if ((uVar15 & 1) != 0) {
                                            pvVar3 = local_e0;
                                          }
                                          iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                          if (iVar9 != 0) goto LAB_00c701d8;
                                        }
                                        plVar14 = *(long **)pBVar1;
                                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_009d64e4();
                                        }
                                        local_fc = (**(code **)(*plVar14 + 0x30))(plVar14,local_118)
                                        ;
                                      }
                                      else {
LAB_00c701d8:
                                        puVar5 = P_MarginRight;
                                        sVar13 = strlen(P_MarginRight);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            pvVar3 = pvVar17;
                                            if ((uVar15 & 1) != 0) {
                                              pvVar3 = local_e0;
                                            }
                                            iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                            if (iVar9 != 0) goto LAB_00c70220;
                                          }
                                          plVar14 = *(long **)pBVar1;
                                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          local_f8 = (**(code **)(*plVar14 + 0x30))
                                                               (plVar14,local_118);
                                        }
                                        else {
LAB_00c70220:
                                          puVar5 = P_MarginDown;
                                          sVar13 = strlen(P_MarginDown);
                                          if (sVar13 == sVar2) {
                                            if (sVar2 != 0) {
                                              if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                std::__ndk1::__basic_string_common<true>::
                                                __throw_out_of_range();
                                              }
                                              pvVar3 = pvVar17;
                                              if ((uVar15 & 1) != 0) {
                                                pvVar3 = local_e0;
                                              }
                                              iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                              if (iVar9 != 0) goto joined_r0x00c70384;
                                            }
                                            plVar14 = *(long **)pBVar1;
                                            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_009d64e4();
                                            }
                                            local_f4 = (**(code **)(*plVar14 + 0x30))
                                                                 (plVar14,local_118);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
joined_r0x00c70384:
                          if (((byte)local_118[0] & 1) != 0) {
                            operator_delete(local_108);
                          }
                          if ((local_f0 & 1) != 0) {
                            operator_delete(local_e0);
                          }
                          this_01 = this_01 + 0x10;
                        }
                        cocos2d::ui::LayoutParameter::setMargin
                                  ((LayoutParameter *)this_02,(Margin *)&local_100);
                        cocos2d::ui::LayoutParameter::setMargin
                                  ((LayoutParameter *)this_03,(Margin *)&local_100);
                        if (iVar8 == 1) {
                          cocos2d::ui::Widget::setLayoutParameter
                                    (param_1,(LayoutParameter *)this_02);
                        }
                        else if (iVar8 == 2) {
                          cocos2d::ui::Widget::setLayoutParameter
                                    (param_1,(LayoutParameter *)this_03);
                        }
                        goto switchD_00c6fac0_caseD_5;
                      }
LAB_00c6f860:
                      puVar5 = P_Opacity;
                      sVar13 = strlen(P_Opacity);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f8a8;
                        }
                        plVar14 = *(long **)(this + 0x60);
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        *(undefined4 *)(this + 0xec) = uVar20;
                        goto joined_r0x00c6fc6c;
                      }
LAB_00c6f8a8:
                      puVar5 = P_ColorR;
                      sVar13 = strlen(P_ColorR);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f8f0;
                        }
                        plVar14 = *(long **)(this + 0x60);
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        BVar7 = (ButtonReader)(**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        this[0xe8] = BVar7;
                        goto joined_r0x00c6fc6c;
                      }
LAB_00c6f8f0:
                      puVar5 = P_ColorG;
                      sVar13 = strlen(P_ColorG);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f938;
                        }
                        plVar14 = *(long **)(this + 0x60);
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        BVar7 = (ButtonReader)(**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        this[0xe9] = BVar7;
                        goto joined_r0x00c6fc6c;
                      }
LAB_00c6f938:
                      puVar5 = P_ColorB;
                      sVar13 = strlen(P_ColorB);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f980;
                        }
                        plVar14 = *(long **)(this + 0x60);
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        BVar7 = (ButtonReader)(**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        this[0xea] = BVar7;
                        goto joined_r0x00c6fc6c;
                      }
LAB_00c6f980:
                      puVar5 = P_FlipX;
                      sVar13 = strlen(P_FlipX);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6f9c8;
                        }
                        plVar14 = *(long **)(this + 0x90);
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        (**(code **)(*(long *)param_1 + 0x598))(param_1,uVar10 & 1);
                        goto switchD_00c6fac0_caseD_5;
                      }
LAB_00c6f9c8:
                      puVar5 = P_FlipY;
                      sVar13 = strlen(P_FlipY);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6fa10;
                        }
                        plVar14 = *(long **)(this + 0x90);
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        (**(code **)(*(long *)param_1 + 0x5a8))(param_1,uVar10 & 1);
                        goto switchD_00c6fac0_caseD_5;
                      }
LAB_00c6fa10:
                      puVar5 = P_AnchorPointX;
                      sVar13 = strlen(P_AnchorPointX);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6fa58;
                        }
                        plVar14 = *(long **)pBVar1;
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        *(undefined4 *)(this + 0xfc) = uVar20;
                        goto joined_r0x00c6fc6c;
                      }
LAB_00c6fa58:
                      puVar5 = P_AnchorPointY;
                      sVar13 = strlen(P_AnchorPointY);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          plVar14 = plVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            plVar14 = local_a8;
                          }
                          iVar8 = memcmp(plVar14,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c6faa0;
                        }
                        plVar14 = *(long **)pBVar1;
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                        *(undefined4 *)(this + 0x100) = uVar20;
                        goto joined_r0x00c6fc6c;
                      }
LAB_00c6faa0:
                      switch(sVar2) {
                      case 4:
                        plVar14 = plVar16;
                        if (((byte)bVar6 & 1) != 0) {
                          plVar14 = local_a8;
                        }
                        if ((int)*plVar14 == 0x74786574) {
                          cocos2d::ui::Button::setTitleText
                                    ((Button *)param_1,(basic_string *)&local_d0);
                        }
                        break;
                      case 8:
                        plVar14 = plVar16;
                        if (((byte)bVar6 & 1) != 0) {
                          plVar14 = local_a8;
                        }
                        if (*plVar14 == 0x657a6953746e6f66) {
                          plVar14 = *(long **)pBVar1;
                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          fVar25 = (float)(**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                          cocos2d::ui::Button::setTitleFontSize((Button *)param_1,fVar25);
                        }
                        else if (*plVar14 == 0x656d614e746e6f66) {
                          cocos2d::ui::Button::setTitleFontName
                                    ((Button *)param_1,(basic_string *)&local_d0);
                        }
                        break;
                      case 10:
                        plVar14 = plVar16;
                        if (((byte)bVar6 & 1) != 0) {
                          plVar14 = local_a8;
                        }
                        iVar8 = memcmp(plVar14,"normalData",10);
                        if (iVar8 != 0) {
                          iVar8 = memcmp(plVar14,"capInsetsX",10);
                          if (iVar8 == 0) {
                            plVar14 = *(long **)pBVar1;
                            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            fVar26 = (float)(**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                          }
                          else {
                            iVar8 = memcmp(plVar14,"capInsetsY",10);
                            if (iVar8 != 0) {
                              iVar8 = memcmp(plVar14,"textColorR",10);
                              if (iVar8 == 0) {
                                plVar14 = *(long **)(this + 0x60);
                                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                  FUN_009d64e4();
                                }
                                local_12c = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                              }
                              else {
                                iVar8 = memcmp(plVar14,"textColorG",10);
                                if (iVar8 == 0) {
                                  plVar14 = *(long **)(this + 0x60);
                                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_009d64e4();
                                  }
                                  local_130 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                                }
                                else {
                                  iVar8 = memcmp(plVar14,"textColorB",10);
                                  if (iVar8 == 0) {
                                    plVar14 = *(long **)(this + 0x60);
                                    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_009d64e4();
                                    }
                                    local_134 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                                  }
                                }
                              }
                              break;
                            }
                            plVar14 = *(long **)pBVar1;
                            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            fVar27 = (float)(**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                          }
                          goto joined_r0x00c6fc6c;
                        }
                        lVar18 = stExpCocoNode::GetChildArray(this_00,param_2);
                        pcVar12 = (char *)stExpCocoNode::GetValue
                                                    ((stExpCocoNode *)(lVar18 + 0x20),param_2);
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>
                                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)&local_f0,pcVar12);
                        plVar14 = *(long **)(this + 0x60);
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_f0);
                        WidgetReader::getResourcePath(local_118,this,param_2,this_00,uVar20);
                        cocos2d::ui::Button::loadTextureNormal((Button *)param_1,local_118,uVar20);
LAB_00c70a34:
                        if (((byte)local_118[0] & 1) != 0) {
                          operator_delete(local_108);
                        }
                        goto joined_r0x00c70a48;
                      case 0xb:
                        plVar14 = plVar16;
                        if (((byte)bVar6 & 1) != 0) {
                          plVar14 = local_a8;
                        }
                        iVar8 = memcmp(plVar14,"pressedData",0xb);
                        if (iVar8 == 0) {
                          lVar18 = stExpCocoNode::GetChildArray(this_00,param_2);
                          pcVar12 = (char *)stExpCocoNode::GetValue
                                                      ((stExpCocoNode *)(lVar18 + 0x20),param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_f0,pcVar12);
                          plVar14 = *(long **)(this + 0x60);
                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_f0);
                          WidgetReader::getResourcePath(local_118,this,param_2,this_00,uVar20);
                          cocos2d::ui::Button::loadTexturePressed
                                    ((Button *)param_1,local_118,uVar20);
                          goto LAB_00c70a34;
                        }
                        iVar8 = memcmp(plVar14,"scale9Width",0xb);
                        if (iVar8 == 0) {
                          plVar14 = *(long **)pBVar1;
                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          fVar23 = (float)(**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                          goto joined_r0x00c6fc6c;
                        }
                        break;
                      case 0xc:
                        plVar14 = plVar16;
                        if (((byte)bVar6 & 1) != 0) {
                          plVar14 = local_a8;
                        }
                        iVar8 = memcmp(plVar14,"scale9Enable",0xc);
                        if (iVar8 == 0) {
                          plVar14 = *(long **)(this + 0x90);
                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                          (**(code **)(*(long *)param_1 + 0x680))(param_1,uVar10 & 1);
                        }
                        else {
                          iVar8 = memcmp(plVar14,"disabledData",0xc);
                          if (iVar8 == 0) {
                            lVar18 = stExpCocoNode::GetChildArray(this_00,param_2);
                            pcVar12 = (char *)stExpCocoNode::GetValue
                                                        ((stExpCocoNode *)(lVar18 + 0x20),param_2);
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::basic_string<decltype(nullptr)>
                                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                        *)&local_f0,pcVar12);
                            plVar14 = *(long **)(this + 0x60);
                            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_f0);
                            WidgetReader::getResourcePath(local_118,this,param_2,this_00,uVar20);
                            cocos2d::ui::Button::loadTextureDisabled
                                      ((Button *)param_1,local_118,uVar20);
                            goto LAB_00c70a34;
                          }
                          iVar8 = memcmp(plVar14,"scale9Height",0xc);
                          if (iVar8 == 0) {
                            plVar14 = *(long **)pBVar1;
                            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            fVar24 = (float)(**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                            goto joined_r0x00c6fc6c;
                          }
                        }
                        break;
                      case 0xe:
                        plVar14 = plVar16;
                        if (((byte)bVar6 & 1) != 0) {
                          plVar14 = local_a8;
                        }
                        iVar8 = memcmp(plVar14,"capInsetsWidth",0xe);
                        if (iVar8 == 0) {
                          plVar14 = *(long **)pBVar1;
                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          fVar21 = (float)(**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                          goto joined_r0x00c6fc6c;
                        }
                        break;
                      case 0xf:
                        plVar14 = plVar16;
                        if (((byte)bVar6 & 1) != 0) {
                          plVar14 = local_a8;
                        }
                        iVar8 = memcmp(plVar14,"capInsetsHeight",0xf);
                        if (iVar8 == 0) {
                          plVar14 = *(long **)pBVar1;
                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          fVar22 = (float)(**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                          goto joined_r0x00c6fc6c;
                        }
                      }
                    }
                    goto switchD_00c6fac0_caseD_5;
                  }
                  if (sVar2 != 0) {
                    if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    plVar14 = plVar16;
                    if (((byte)bVar6 & 1) != 0) {
                      plVar14 = local_a8;
                    }
                    iVar8 = memcmp(plVar14,puVar5,sVar2);
                    if (iVar8 != 0) goto LAB_00c6f500;
                  }
                  plVar14 = *(long **)pBVar1;
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_009d64e4();
                  }
                  uVar20 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_d0);
                  *(undefined4 *)(this + 0xe4) = uVar20;
                }
              }
            }
          }
        }
      }
joined_r0x00c6fc6c:
      if (((byte)local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
      if (((byte)local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      lVar19 = lVar19 + 1;
      iVar8 = stExpCocoNode::GetChildNum(param_3);
    } while (lVar19 < iVar8);
  }
  WidgetReader::endSetBasicProperties((WidgetReader *)this,param_1);
  uVar15 = cocos2d::ui::Button::isScale9Enabled((Button *)param_1);
  if ((uVar15 & 1) != 0) {
    cocos2d::Rect::Rect((Rect *)local_b8,fVar26,fVar27,fVar21,fVar22);
    cocos2d::ui::Button::setCapInsets(param_1);
    cocos2d::Size::Size((Size *)local_b8,fVar23,fVar24);
    (**(code **)(*(long *)param_1 + 0x160))(param_1,local_b8);
  }
  cocos2d::Color3B::Color3B((Color3B *)local_b8,local_12c,local_130,local_134);
  cocos2d::ui::Button::setTitleColor((Button *)param_1,(Color3B *)local_b8);
  if (*(long *)(lVar4 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

