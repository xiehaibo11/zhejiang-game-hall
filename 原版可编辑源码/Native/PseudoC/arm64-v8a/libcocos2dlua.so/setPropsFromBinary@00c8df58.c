
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::SliderReader::setPropsFromBinary(cocos2d::ui::Widget*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::SliderReader::setPropsFromBinary
          (SliderReader *this,Widget *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  stExpCocoNode *this_00;
  size_t sVar1;
  void *pvVar2;
  long lVar3;
  undefined *puVar4;
  ulong __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  SliderReader SVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  char *pcVar11;
  size_t sVar12;
  void *__dest;
  stExpCocoNode *this_01;
  LinearLayoutParameter *this_02;
  RelativeLayoutParameter *this_03;
  long *plVar13;
  ulong uVar14;
  void *pvVar15;
  void *pvVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  undefined4 uVar20;
  int local_10c;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f8 [16];
  void *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  ulong local_d0;
  size_t sStack_c8;
  void *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0;
  undefined7 uStack_af;
  ulong uStack_a8;
  void *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  size_t local_90;
  void *local_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  WidgetReader::beginSetBasicProperties((WidgetReader *)this,param_1);
  local_10c = cocos2d::ui::Slider::getPercent((Slider *)param_1);
  lVar10 = stExpCocoNode::GetChildArray(param_3,param_2);
  iVar7 = stExpCocoNode::GetChildNum(param_3);
  if (iVar7 < 1) {
    fVar19 = 0.0;
  }
  else {
    pvVar15 = (void *)((ulong)local_98 | 1);
    lVar17 = 0;
    fVar19 = 0.0;
    pvVar16 = (void *)((ulong)&local_d0 | 1);
    do {
      this_00 = (stExpCocoNode *)(lVar10 + lVar17 * 0x10);
      pcVar11 = (char *)stExpCocoNode::GetName(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98,pcVar11);
      pcVar11 = (char *)stExpCocoNode::GetValue(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_b0,pcVar11);
      puVar4 = P_IgnoreSize;
      sVar12 = strlen(P_IgnoreSize);
      bVar5 = local_98[0];
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
          pvVar2 = pvVar15;
          if (((byte)local_98[0] & 1) != 0) {
            pvVar2 = local_88;
          }
          iVar7 = memcmp(pvVar2,puVar4,sVar12);
          if (iVar7 != 0) goto LAB_00c8e098;
        }
        plVar13 = *(long **)(this + 0x90);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
        (**(code **)(*(long *)param_1 + 0x600))(param_1,uVar9 & 1);
switchD_00c8e898_caseD_8:
      }
      else {
LAB_00c8e098:
        puVar4 = P_SizeType;
        sVar12 = strlen(P_SizeType);
        if (sVar12 == sVar1) {
          if (sVar1 != 0) {
            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            pvVar2 = pvVar15;
            if (((byte)bVar5 & 1) != 0) {
              pvVar2 = local_88;
            }
            iVar7 = memcmp(pvVar2,puVar4,sVar1);
            if (iVar7 != 0) goto LAB_00c8e0e0;
          }
          plVar13 = *(long **)(this + 0x60);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
          cocos2d::ui::Widget::setSizeType(param_1,uVar20);
          goto switchD_00c8e898_caseD_8;
        }
LAB_00c8e0e0:
        puVar4 = P_PositionType;
        sVar12 = strlen(P_PositionType);
        if (sVar12 == sVar1) {
          if (sVar1 != 0) {
            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            pvVar2 = pvVar15;
            if (((byte)bVar5 & 1) != 0) {
              pvVar2 = local_88;
            }
            iVar7 = memcmp(pvVar2,puVar4,sVar1);
            if (iVar7 != 0) goto LAB_00c8e128;
          }
          plVar13 = *(long **)(this + 0x60);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
          cocos2d::ui::Widget::setPositionType(param_1,uVar20);
          goto switchD_00c8e898_caseD_8;
        }
LAB_00c8e128:
        puVar4 = P_SizePercentX;
        sVar12 = strlen(P_SizePercentX);
        if (sVar12 == sVar1) {
          if (sVar1 != 0) {
            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            pvVar2 = pvVar15;
            if (((byte)bVar5 & 1) != 0) {
              pvVar2 = local_88;
            }
            iVar7 = memcmp(pvVar2,puVar4,sVar1);
            if (iVar7 != 0) goto LAB_00c8e170;
          }
          plVar13 = *(long **)(this + 0xc0);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
          *(undefined4 *)(this + 0xd0) = uVar20;
        }
        else {
LAB_00c8e170:
          puVar4 = P_SizePercentY;
          sVar12 = strlen(P_SizePercentY);
          if (sVar12 == sVar1) {
            if (sVar1 != 0) {
              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              pvVar2 = pvVar15;
              if (((byte)bVar5 & 1) != 0) {
                pvVar2 = local_88;
              }
              iVar7 = memcmp(pvVar2,puVar4,sVar1);
              if (iVar7 != 0) goto LAB_00c8e1b8;
            }
            plVar13 = *(long **)(this + 0xc0);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
            *(undefined4 *)(this + 0xd4) = uVar20;
          }
          else {
LAB_00c8e1b8:
            puVar4 = P_PositionPercentX;
            sVar12 = strlen(P_PositionPercentX);
            if (sVar12 == sVar1) {
              if (sVar1 != 0) {
                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                pvVar2 = pvVar15;
                if (((byte)bVar5 & 1) != 0) {
                  pvVar2 = local_88;
                }
                iVar7 = memcmp(pvVar2,puVar4,sVar1);
                if (iVar7 != 0) goto LAB_00c8e200;
              }
              plVar13 = *(long **)(this + 0xc0);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
              *(undefined4 *)(this + 0xd8) = uVar20;
            }
            else {
LAB_00c8e200:
              puVar4 = P_PositionPercentY;
              sVar12 = strlen(P_PositionPercentY);
              if (sVar12 == sVar1) {
                if (sVar1 != 0) {
                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  pvVar2 = pvVar15;
                  if (((byte)bVar5 & 1) != 0) {
                    pvVar2 = local_88;
                  }
                  iVar7 = memcmp(pvVar2,puVar4,sVar1);
                  if (iVar7 != 0) goto LAB_00c8e248;
                }
                plVar13 = *(long **)(this + 0xc0);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_009d64e4();
                }
                uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                *(undefined4 *)(this + 0xdc) = uVar20;
              }
              else {
LAB_00c8e248:
                puVar4 = P_Width;
                sVar12 = strlen(P_Width);
                if (sVar12 == sVar1) {
                  if (sVar1 != 0) {
                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    pvVar2 = pvVar15;
                    if (((byte)bVar5 & 1) != 0) {
                      pvVar2 = local_88;
                    }
                    iVar7 = memcmp(pvVar2,puVar4,sVar1);
                    if (iVar7 != 0) goto LAB_00c8e290;
                  }
                  plVar13 = *(long **)(this + 0xc0);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_009d64e4();
                  }
                  uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                  *(undefined4 *)(this + 0xe0) = uVar20;
                }
                else {
LAB_00c8e290:
                  puVar4 = P_Height;
                  sVar12 = strlen(P_Height);
                  if (sVar12 != sVar1) {
LAB_00c8e2d8:
                    puVar4 = P_Tag;
                    sVar12 = strlen(P_Tag);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar15;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_88;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c8e320;
                      }
                      plVar13 = *(long **)(this + 0x60);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                      (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar20);
                      goto switchD_00c8e898_caseD_8;
                    }
LAB_00c8e320:
                    puVar4 = P_ActionTag;
                    sVar12 = strlen(P_ActionTag);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar15;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_88;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c8e368;
                      }
                      plVar13 = *(long **)(this + 0x60);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      iVar7 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                      cocos2d::ui::Widget::setActionTag(param_1,iVar7);
                      goto switchD_00c8e898_caseD_8;
                    }
LAB_00c8e368:
                    puVar4 = P_TouchAble;
                    sVar12 = strlen(P_TouchAble);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar15;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_88;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c8e3b0;
                      }
                      plVar13 = *(long **)(this + 0x90);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                      (**(code **)(*(long *)param_1 + 0x588))(param_1,uVar9 & 1);
                      goto switchD_00c8e898_caseD_8;
                    }
LAB_00c8e3b0:
                    puVar4 = P_Name;
                    sVar12 = strlen(P_Name);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar15;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_88;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c8e3f8;
                      }
                      pvVar2 = local_a0;
                      __n = uStack_a8;
                      uVar14 = (ulong)((byte)local_b0 >> 1);
                      if (((byte)local_b0 & 1) != 0) {
                        uVar14 = uStack_a8;
                      }
                      if (uVar14 == 0) {
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>
                                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)&local_d0,"default");
                      }
                      else {
                        sStack_c8 = 0;
                        local_c0 = (void *)0x0;
                        local_d0 = 0;
                        if (((byte)local_b0 & 1) == 0) {
                          local_d0 = CONCAT71(uStack_af,local_b0);
                          sStack_c8 = uStack_a8;
                          local_c0 = local_a0;
                        }
                        else {
                          if (0xffffffffffffffef < uStack_a8) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_length_error();
                          }
                          if (uStack_a8 < 0x17) {
                            local_d0 = (ulong)(byte)((int)uStack_a8 << 1);
                            __dest = pvVar16;
                            if (uStack_a8 != 0) goto LAB_00c8ec3c;
                          }
                          else {
                            uVar14 = uStack_a8 + 0x10 & 0xfffffffffffffff0;
                            __dest = operator_new(uVar14);
                            local_d0 = uVar14 | 1;
                            sStack_c8 = __n;
                            local_c0 = __dest;
LAB_00c8ec3c:
                            memcpy(__dest,pvVar2,__n);
                          }
                          *(undefined1 *)((long)__dest + __n) = 0;
                        }
                      }
                      (**(code **)(*(long *)param_1 + 0x2d0))(param_1,&local_d0);
joined_r0x00c8f6fc:
                      if ((local_d0 & 1) != 0) {
                        operator_delete(local_c0);
                        goto joined_r0x00c8e8e0;
                      }
                    }
                    else {
LAB_00c8e3f8:
                      puVar4 = P_X;
                      sVar12 = strlen(P_X);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e440;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        *(undefined4 *)(this + 0xf0) = uVar20;
                        goto joined_r0x00c8e8e0;
                      }
LAB_00c8e440:
                      puVar4 = P_Y;
                      sVar12 = strlen(P_Y);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e488;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        *(undefined4 *)(this + 0xf4) = uVar20;
                        goto joined_r0x00c8e8e0;
                      }
LAB_00c8e488:
                      puVar4 = P_ScaleX;
                      sVar12 = strlen(P_ScaleX);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e4d0;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x50))(param_1);
                        goto switchD_00c8e898_caseD_8;
                      }
LAB_00c8e4d0:
                      puVar4 = P_ScaleY;
                      sVar12 = strlen(P_ScaleY);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e518;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x60))(param_1);
                        goto switchD_00c8e898_caseD_8;
                      }
LAB_00c8e518:
                      puVar4 = P_Rotation;
                      sVar12 = strlen(P_Rotation);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e560;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x180))(param_1);
                        goto switchD_00c8e898_caseD_8;
                      }
LAB_00c8e560:
                      puVar4 = P_Visbile;
                      sVar12 = strlen(P_Visbile);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e5a8;
                        }
                        plVar13 = *(long **)(this + 0x90);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x170))(param_1,uVar9 & 1);
                        goto switchD_00c8e898_caseD_8;
                      }
LAB_00c8e5a8:
                      puVar4 = P_ZOrder;
                      sVar12 = strlen(P_ZOrder);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e5f0;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar20);
                        goto switchD_00c8e898_caseD_8;
                      }
LAB_00c8e5f0:
                      puVar4 = P_LayoutParameter;
                      sVar12 = strlen(P_LayoutParameter);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e638;
                        }
                        this_01 = (stExpCocoNode *)stExpCocoNode::GetChildArray(this_00,param_2);
                        this_02 = (LinearLayoutParameter *)
                                  cocos2d::ui::LinearLayoutParameter::create();
                        this_03 = (RelativeLayoutParameter *)
                                  cocos2d::ui::RelativeLayoutParameter::create();
                        cocos2d::ui::Margin::Margin((Margin *)&local_e0);
                        iVar7 = -1;
                        for (lVar18 = 0; iVar8 = stExpCocoNode::GetChildNum(this_00), lVar18 < iVar8
                            ; lVar18 = lVar18 + 1) {
                          pcVar11 = (char *)stExpCocoNode::GetName(this_01,param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_d0,pcVar11);
                          pcVar11 = (char *)stExpCocoNode::GetValue(this_01,param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>(local_f8,pcVar11);
                          puVar4 = P_Type;
                          sVar12 = strlen(P_Type);
                          uVar14 = local_d0;
                          sVar1 = local_d0 >> 1 & 0x7f;
                          if ((local_d0 & 1) != 0) {
                            sVar1 = sStack_c8;
                          }
                          if (sVar12 == sVar1) {
                            if (sVar12 != 0) {
                              if (sVar12 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                              }
                              pvVar2 = pvVar16;
                              if ((local_d0 & 1) != 0) {
                                pvVar2 = local_c0;
                              }
                              iVar8 = memcmp(pvVar2,puVar4,sVar12);
                              if (iVar8 != 0) goto LAB_00c8edf0;
                            }
                            plVar13 = *(long **)(this + 0x60);
                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            iVar7 = (**(code **)(*plVar13 + 0x30))(plVar13,local_f8);
                          }
                          else {
LAB_00c8edf0:
                            puVar4 = P_Gravity;
                            sVar12 = strlen(P_Gravity);
                            if (sVar12 == sVar1) {
                              if (sVar1 != 0) {
                                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                                }
                                pvVar2 = pvVar16;
                                if ((uVar14 & 1) != 0) {
                                  pvVar2 = local_c0;
                                }
                                iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                if (iVar8 != 0) goto LAB_00c8ee38;
                              }
                              plVar13 = *(long **)(this + 0x60);
                              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_009d64e4();
                              }
                              uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,local_f8);
                              cocos2d::ui::LinearLayoutParameter::setGravity(this_02,uVar20);
                            }
                            else {
LAB_00c8ee38:
                              puVar4 = P_RelativeName;
                              sVar12 = strlen(P_RelativeName);
                              if (sVar12 == sVar1) {
                                if (sVar1 != 0) {
                                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
                                    ;
                                  }
                                  pvVar2 = pvVar16;
                                  if ((uVar14 & 1) != 0) {
                                    pvVar2 = local_c0;
                                  }
                                  iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                  if (iVar8 != 0) goto LAB_00c8ee80;
                                }
                                cocos2d::ui::RelativeLayoutParameter::setRelativeName
                                          (this_03,(basic_string *)local_f8);
                              }
                              else {
LAB_00c8ee80:
                                puVar4 = P_RelativeToName;
                                sVar12 = strlen(P_RelativeToName);
                                if (sVar12 == sVar1) {
                                  if (sVar1 != 0) {
                                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range
                                                ();
                                    }
                                    pvVar2 = pvVar16;
                                    if ((uVar14 & 1) != 0) {
                                      pvVar2 = local_c0;
                                    }
                                    iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                    if (iVar8 != 0) goto LAB_00c8eec8;
                                  }
                                  cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName
                                            (this_03,(basic_string *)local_f8);
                                }
                                else {
LAB_00c8eec8:
                                  puVar4 = P_Align;
                                  sVar12 = strlen(P_Align);
                                  if (sVar12 == sVar1) {
                                    if (sVar1 != 0) {
                                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                        std::__ndk1::__basic_string_common<true>::
                                        __throw_out_of_range();
                                      }
                                      pvVar2 = pvVar16;
                                      if ((uVar14 & 1) != 0) {
                                        pvVar2 = local_c0;
                                      }
                                      iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                      if (iVar8 != 0) goto LAB_00c8ef10;
                                    }
                                    plVar13 = *(long **)(this + 0x60);
                                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_009d64e4();
                                    }
                                    uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,local_f8);
                                    cocos2d::ui::RelativeLayoutParameter::setAlign(this_03,uVar20);
                                  }
                                  else {
LAB_00c8ef10:
                                    puVar4 = P_MarginLeft;
                                    sVar12 = strlen(P_MarginLeft);
                                    if (sVar12 == sVar1) {
                                      if (sVar1 != 0) {
                                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                          std::__ndk1::__basic_string_common<true>::
                                          __throw_out_of_range();
                                        }
                                        pvVar2 = pvVar16;
                                        if ((uVar14 & 1) != 0) {
                                          pvVar2 = local_c0;
                                        }
                                        iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                        if (iVar8 != 0) goto LAB_00c8ef58;
                                      }
                                      plVar13 = *(long **)(this + 0xc0);
                                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_009d64e4();
                                      }
                                      local_e0 = (**(code **)(*plVar13 + 0x30))(plVar13,local_f8);
                                    }
                                    else {
LAB_00c8ef58:
                                      puVar4 = P_MarginTop;
                                      sVar12 = strlen(P_MarginTop);
                                      if (sVar12 == sVar1) {
                                        if (sVar1 != 0) {
                                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                            std::__ndk1::__basic_string_common<true>::
                                            __throw_out_of_range();
                                          }
                                          pvVar2 = pvVar16;
                                          if ((uVar14 & 1) != 0) {
                                            pvVar2 = local_c0;
                                          }
                                          iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                          if (iVar8 != 0) goto LAB_00c8efa0;
                                        }
                                        plVar13 = *(long **)(this + 0xc0);
                                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_009d64e4();
                                        }
                                        local_dc = (**(code **)(*plVar13 + 0x30))(plVar13,local_f8);
                                      }
                                      else {
LAB_00c8efa0:
                                        puVar4 = P_MarginRight;
                                        sVar12 = strlen(P_MarginRight);
                                        if (sVar12 == sVar1) {
                                          if (sVar1 != 0) {
                                            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            pvVar2 = pvVar16;
                                            if ((uVar14 & 1) != 0) {
                                              pvVar2 = local_c0;
                                            }
                                            iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                            if (iVar8 != 0) goto LAB_00c8efe8;
                                          }
                                          plVar13 = *(long **)(this + 0xc0);
                                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          local_d8 = (**(code **)(*plVar13 + 0x30))
                                                               (plVar13,local_f8);
                                        }
                                        else {
LAB_00c8efe8:
                                          puVar4 = P_MarginDown;
                                          sVar12 = strlen(P_MarginDown);
                                          if (sVar12 == sVar1) {
                                            if (sVar1 != 0) {
                                              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                std::__ndk1::__basic_string_common<true>::
                                                __throw_out_of_range();
                                              }
                                              pvVar2 = pvVar16;
                                              if ((uVar14 & 1) != 0) {
                                                pvVar2 = local_c0;
                                              }
                                              iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                              if (iVar8 != 0) goto joined_r0x00c8f164;
                                            }
                                            plVar13 = *(long **)(this + 0xc0);
                                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_009d64e4();
                                            }
                                            local_d4 = (**(code **)(*plVar13 + 0x30))
                                                                 (plVar13,local_f8);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
joined_r0x00c8f164:
                          if (((byte)local_f8[0] & 1) != 0) {
                            operator_delete(local_e8);
                          }
                          if ((local_d0 & 1) != 0) {
                            operator_delete(local_c0);
                          }
                          this_01 = this_01 + 0x10;
                        }
                        cocos2d::ui::LayoutParameter::setMargin
                                  ((LayoutParameter *)this_02,(Margin *)&local_e0);
                        cocos2d::ui::LayoutParameter::setMargin
                                  ((LayoutParameter *)this_03,(Margin *)&local_e0);
                        if (iVar7 == 1) {
                          cocos2d::ui::Widget::setLayoutParameter
                                    (param_1,(LayoutParameter *)this_02);
                        }
                        else if (iVar7 == 2) {
                          cocos2d::ui::Widget::setLayoutParameter
                                    (param_1,(LayoutParameter *)this_03);
                        }
                        goto switchD_00c8e898_caseD_8;
                      }
LAB_00c8e638:
                      puVar4 = P_Opacity;
                      sVar12 = strlen(P_Opacity);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e680;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        *(undefined4 *)(this + 0xec) = uVar20;
                        goto joined_r0x00c8e8e0;
                      }
LAB_00c8e680:
                      puVar4 = P_ColorR;
                      sVar12 = strlen(P_ColorR);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e6c8;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        SVar6 = (SliderReader)(**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        this[0xe8] = SVar6;
                        goto joined_r0x00c8e8e0;
                      }
LAB_00c8e6c8:
                      puVar4 = P_ColorG;
                      sVar12 = strlen(P_ColorG);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e710;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        SVar6 = (SliderReader)(**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        this[0xe9] = SVar6;
                        goto joined_r0x00c8e8e0;
                      }
LAB_00c8e710:
                      puVar4 = P_ColorB;
                      sVar12 = strlen(P_ColorB);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e758;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        SVar6 = (SliderReader)(**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        this[0xea] = SVar6;
                        goto joined_r0x00c8e8e0;
                      }
LAB_00c8e758:
                      puVar4 = P_FlipX;
                      sVar12 = strlen(P_FlipX);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e7a0;
                        }
                        plVar13 = *(long **)(this + 0x90);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x598))(param_1,uVar9 & 1);
                        goto switchD_00c8e898_caseD_8;
                      }
LAB_00c8e7a0:
                      puVar4 = P_FlipY;
                      sVar12 = strlen(P_FlipY);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e7e8;
                        }
                        plVar13 = *(long **)(this + 0x90);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        (**(code **)(*(long *)param_1 + 0x5a8))(param_1,uVar9 & 1);
                        goto switchD_00c8e898_caseD_8;
                      }
LAB_00c8e7e8:
                      puVar4 = P_AnchorPointX;
                      sVar12 = strlen(P_AnchorPointX);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e830;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        *(undefined4 *)(this + 0xfc) = uVar20;
                        goto joined_r0x00c8e8e0;
                      }
LAB_00c8e830:
                      puVar4 = P_AnchorPointY;
                      sVar12 = strlen(P_AnchorPointY);
                      if (sVar12 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if (((byte)bVar5 & 1) != 0) {
                            pvVar2 = local_88;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c8e878;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        *(undefined4 *)(this + 0x100) = uVar20;
                        goto joined_r0x00c8e8e0;
                      }
LAB_00c8e878:
                      switch(sVar1) {
                      case 6:
                        pvVar2 = pvVar15;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_88;
                        }
                        iVar7 = memcmp(pvVar2,"length",6);
                        if (iVar7 == 0) {
                          plVar13 = *(long **)(this + 0xc0);
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          fVar19 = (float)(**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                          goto joined_r0x00c8e8e0;
                        }
                        break;
                      case 7:
                        pvVar2 = pvVar15;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_88;
                        }
                        iVar7 = memcmp(pvVar2,"percent",7);
                        if (iVar7 == 0) {
                          plVar13 = *(long **)(this + 0x60);
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          local_10c = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                        }
                        break;
                      case 0xc:
                        pvVar2 = pvVar15;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_88;
                        }
                        iVar7 = memcmp(pvVar2,"scale9Enable",0xc);
                        if (iVar7 == 0) {
                          plVar13 = *(long **)(this + 0x90);
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                          cocos2d::ui::Slider::setScale9Enabled(SUB81(param_1,0));
                        }
                        break;
                      case 0xe:
                        pvVar2 = pvVar15;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_88;
                        }
                        iVar7 = memcmp(pvVar2,"ballNormalData",0xe);
                        if (iVar7 == 0) {
                          lVar18 = stExpCocoNode::GetChildArray(this_00,param_2);
                          pcVar11 = (char *)stExpCocoNode::GetValue
                                                      ((stExpCocoNode *)(lVar18 + 0x20),param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_d0,pcVar11);
                          plVar13 = *(long **)(this + 0x60);
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_d0);
                          WidgetReader::getResourcePath(local_f8,this,param_2,this_00,uVar20);
                          cocos2d::ui::Slider::loadSlidBallTextureNormal
                                    ((Slider *)param_1,local_f8,uVar20);
                          goto LAB_00c8f6e8;
                        }
                        break;
                      case 0xf:
                        pvVar2 = pvVar15;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_88;
                        }
                        iVar7 = memcmp(pvVar2,"barFileNameData",0xf);
                        if (iVar7 == 0) {
                          lVar18 = stExpCocoNode::GetChildArray(this_00,param_2);
                          pcVar11 = (char *)stExpCocoNode::GetValue
                                                      ((stExpCocoNode *)(lVar18 + 0x20),param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_d0,pcVar11);
                          plVar13 = *(long **)(this + 0x60);
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_d0);
                          WidgetReader::getResourcePath(local_f8,this,param_2,this_00,uVar20);
                          cocos2d::ui::Slider::loadBarTexture((Slider *)param_1,local_f8,uVar20);
                        }
                        else {
                          iVar7 = memcmp(pvVar2,"ballPressedData",0xf);
                          if (iVar7 == 0) {
                            lVar18 = stExpCocoNode::GetChildArray(this_00,param_2);
                            pcVar11 = (char *)stExpCocoNode::GetValue
                                                        ((stExpCocoNode *)(lVar18 + 0x20),param_2);
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::basic_string<decltype(nullptr)>
                                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                        *)&local_d0,pcVar11);
                            plVar13 = *(long **)(this + 0x60);
                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_d0);
                            WidgetReader::getResourcePath(local_f8,this,param_2,this_00,uVar20);
                            cocos2d::ui::Slider::loadSlidBallTexturePressed
                                      ((Slider *)param_1,local_f8,uVar20);
                          }
                          else {
                            iVar7 = memcmp(pvVar2,"progressBarData",0xf);
                            if (iVar7 != 0) break;
                            lVar18 = stExpCocoNode::GetChildArray(this_00,param_2);
                            pcVar11 = (char *)stExpCocoNode::GetValue
                                                        ((stExpCocoNode *)(lVar18 + 0x20),param_2);
                            std::__ndk1::
                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            ::basic_string<decltype(nullptr)>
                                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                        *)&local_d0,pcVar11);
                            plVar13 = *(long **)(this + 0x60);
                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_d0);
                            WidgetReader::getResourcePath(local_f8,this,param_2,this_00,uVar20);
                            cocos2d::ui::Slider::loadProgressBarTexture
                                      ((Slider *)param_1,local_f8,uVar20);
                          }
                        }
LAB_00c8f6e8:
                        if (((byte)local_f8[0] & 1) != 0) {
                          operator_delete(local_e8);
                        }
                        goto joined_r0x00c8f6fc;
                      case 0x10:
                        pvVar2 = pvVar15;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_88;
                        }
                        iVar7 = memcmp(pvVar2,"ballDisabledData",0x10);
                        if (iVar7 == 0) {
                          lVar18 = stExpCocoNode::GetChildArray(this_00,param_2);
                          pcVar11 = (char *)stExpCocoNode::GetValue
                                                      ((stExpCocoNode *)(lVar18 + 0x20),param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_d0,pcVar11);
                          plVar13 = *(long **)(this + 0x60);
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_d0);
                          WidgetReader::getResourcePath(local_f8,this,param_2,this_00,uVar20);
                          cocos2d::ui::Slider::loadSlidBallTextureDisabled
                                    ((Slider *)param_1,local_f8,uVar20);
                          goto LAB_00c8f6e8;
                        }
                      }
                    }
                    goto switchD_00c8e898_caseD_8;
                  }
                  if (sVar1 != 0) {
                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    pvVar2 = pvVar15;
                    if (((byte)bVar5 & 1) != 0) {
                      pvVar2 = local_88;
                    }
                    iVar7 = memcmp(pvVar2,puVar4,sVar1);
                    if (iVar7 != 0) goto LAB_00c8e2d8;
                  }
                  plVar13 = *(long **)(this + 0xc0);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_009d64e4();
                  }
                  uVar20 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_b0);
                  *(undefined4 *)(this + 0xe4) = uVar20;
                }
              }
            }
          }
        }
      }
joined_r0x00c8e8e0:
      if (((byte)local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
      lVar17 = lVar17 + 1;
      iVar7 = stExpCocoNode::GetChildNum(param_3);
    } while (lVar17 < iVar7);
  }
  uVar14 = cocos2d::ui::Slider::isScale9Enabled((Slider *)param_1);
  if ((uVar14 & 1) != 0) {
    lVar10 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
    cocos2d::Size::Size((Size *)local_98,fVar19,*(float *)(lVar10 + 4));
    (**(code **)(*(long *)param_1 + 0x160))(param_1,local_98);
  }
  cocos2d::ui::Slider::setPercent((Slider *)param_1,local_10c);
  WidgetReader::endSetBasicProperties((WidgetReader *)this,param_1);
  if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

