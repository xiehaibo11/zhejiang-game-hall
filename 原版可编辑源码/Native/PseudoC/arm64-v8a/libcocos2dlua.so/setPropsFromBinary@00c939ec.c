
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::TextAtlasReader::setPropsFromBinary(cocos2d::ui::Widget*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::TextAtlasReader::setPropsFromBinary
          (TextAtlasReader *this,Widget *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  stExpCocoNode *this_00;
  size_t sVar1;
  void *pvVar2;
  long lVar3;
  undefined *puVar4;
  ulong __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  TextAtlasReader TVar6;
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
  void *pvVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined4 uVar19;
  float unaff_s8;
  float unaff_s9;
  int local_16c;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_138 [8];
  ulong local_130;
  char *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  ulong local_110;
  size_t sStack_108;
  char *local_100;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_f8;
  undefined7 uStack_f7;
  ulong uStack_f0;
  char *local_e8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e0 [8];
  size_t local_d8;
  void *local_d0;
  ulong local_c8;
  undefined8 local_c0;
  void *local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  void *local_a0;
  ulong local_98;
  undefined8 local_90;
  void *local_88;
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  WidgetReader::beginSetBasicProperties((WidgetReader *)this,param_1);
  lVar10 = stExpCocoNode::GetChildArray(param_3,param_2);
  pvVar14 = (void *)((ulong)local_e0 | 1);
  lVar17 = 0;
  pcVar15 = (char *)((ulong)&local_110 | 1);
  local_90 = 0;
  local_88 = (void *)0x0;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (void *)0x0;
  local_c8 = 0;
  do {
    iVar7 = stExpCocoNode::GetChildNum(param_3);
    if (iVar7 <= lVar17) {
      if (local_16c == 0) {
        cocos2d::ui::TextAtlas::setProperty
                  ((TextAtlas *)param_1,(basic_string *)&local_b0,(basic_string *)&local_98,
                   (int)unaff_s9,(int)unaff_s8,(basic_string *)&local_c8);
      }
      WidgetReader::endSetBasicProperties((WidgetReader *)this,param_1);
      if ((local_c8 & 1) != 0) {
        operator_delete(local_b8);
      }
      if ((local_b0 & 1) != 0) {
        operator_delete(local_a0);
      }
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      if (*(long *)(lVar3 + 0x28) == local_80) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    this_00 = (stExpCocoNode *)(lVar10 + lVar17 * 0x10);
    pcVar11 = (char *)stExpCocoNode::GetName(this_00,param_2);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_e0,pcVar11);
    pcVar11 = (char *)stExpCocoNode::GetValue(this_00,param_2);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_f8,pcVar11);
    puVar4 = P_IgnoreSize;
    sVar12 = strlen(P_IgnoreSize);
    bVar5 = local_e0[0];
    sVar1 = (ulong)((byte)local_e0[0] >> 1);
    if (((byte)local_e0[0] & 1) != 0) {
      sVar1 = local_d8;
    }
    if (sVar12 == sVar1) {
      if (sVar12 != 0) {
        if (sVar12 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        pvVar2 = pvVar14;
        if (((byte)local_e0[0] & 1) != 0) {
          pvVar2 = local_d0;
        }
        iVar7 = memcmp(pvVar2,puVar4,sVar12);
        if (iVar7 != 0) goto LAB_00c93b34;
      }
      plVar13 = *(long **)(this + 0x90);
      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_009d64e4();
      }
      uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
      (**(code **)(*(long *)param_1 + 0x600))(param_1,uVar9 & 1);
switchD_00c94334_caseD_d:
    }
    else {
LAB_00c93b34:
      puVar4 = P_SizeType;
      sVar12 = strlen(P_SizeType);
      if (sVar12 == sVar1) {
        if (sVar1 != 0) {
          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar2 = pvVar14;
          if (((byte)bVar5 & 1) != 0) {
            pvVar2 = local_d0;
          }
          iVar7 = memcmp(pvVar2,puVar4,sVar1);
          if (iVar7 != 0) goto LAB_00c93b7c;
        }
        plVar13 = *(long **)(this + 0x60);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
        cocos2d::ui::Widget::setSizeType(param_1,uVar19);
        goto switchD_00c94334_caseD_d;
      }
LAB_00c93b7c:
      puVar4 = P_PositionType;
      sVar12 = strlen(P_PositionType);
      if (sVar12 == sVar1) {
        if (sVar1 != 0) {
          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar2 = pvVar14;
          if (((byte)bVar5 & 1) != 0) {
            pvVar2 = local_d0;
          }
          iVar7 = memcmp(pvVar2,puVar4,sVar1);
          if (iVar7 != 0) goto LAB_00c93bc4;
        }
        plVar13 = *(long **)(this + 0x60);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
        cocos2d::ui::Widget::setPositionType(param_1,uVar19);
        goto switchD_00c94334_caseD_d;
      }
LAB_00c93bc4:
      puVar4 = P_SizePercentX;
      sVar12 = strlen(P_SizePercentX);
      if (sVar12 == sVar1) {
        if (sVar1 != 0) {
          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar2 = pvVar14;
          if (((byte)bVar5 & 1) != 0) {
            pvVar2 = local_d0;
          }
          iVar7 = memcmp(pvVar2,puVar4,sVar1);
          if (iVar7 != 0) goto LAB_00c93c0c;
        }
        plVar13 = *(long **)(this + 0xc0);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
        *(undefined4 *)(this + 0xd0) = uVar19;
      }
      else {
LAB_00c93c0c:
        puVar4 = P_SizePercentY;
        sVar12 = strlen(P_SizePercentY);
        if (sVar12 == sVar1) {
          if (sVar1 != 0) {
            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            pvVar2 = pvVar14;
            if (((byte)bVar5 & 1) != 0) {
              pvVar2 = local_d0;
            }
            iVar7 = memcmp(pvVar2,puVar4,sVar1);
            if (iVar7 != 0) goto LAB_00c93c54;
          }
          plVar13 = *(long **)(this + 0xc0);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
          *(undefined4 *)(this + 0xd4) = uVar19;
        }
        else {
LAB_00c93c54:
          puVar4 = P_PositionPercentX;
          sVar12 = strlen(P_PositionPercentX);
          if (sVar12 == sVar1) {
            if (sVar1 != 0) {
              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              pvVar2 = pvVar14;
              if (((byte)bVar5 & 1) != 0) {
                pvVar2 = local_d0;
              }
              iVar7 = memcmp(pvVar2,puVar4,sVar1);
              if (iVar7 != 0) goto LAB_00c93c9c;
            }
            plVar13 = *(long **)(this + 0xc0);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
            *(undefined4 *)(this + 0xd8) = uVar19;
          }
          else {
LAB_00c93c9c:
            puVar4 = P_PositionPercentY;
            sVar12 = strlen(P_PositionPercentY);
            if (sVar12 == sVar1) {
              if (sVar1 != 0) {
                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                pvVar2 = pvVar14;
                if (((byte)bVar5 & 1) != 0) {
                  pvVar2 = local_d0;
                }
                iVar7 = memcmp(pvVar2,puVar4,sVar1);
                if (iVar7 != 0) goto LAB_00c93ce4;
              }
              plVar13 = *(long **)(this + 0xc0);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
              *(undefined4 *)(this + 0xdc) = uVar19;
            }
            else {
LAB_00c93ce4:
              puVar4 = P_Width;
              sVar12 = strlen(P_Width);
              if (sVar12 == sVar1) {
                if (sVar1 != 0) {
                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  pvVar2 = pvVar14;
                  if (((byte)bVar5 & 1) != 0) {
                    pvVar2 = local_d0;
                  }
                  iVar7 = memcmp(pvVar2,puVar4,sVar1);
                  if (iVar7 != 0) goto LAB_00c93d2c;
                }
                plVar13 = *(long **)(this + 0xc0);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_009d64e4();
                }
                uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                *(undefined4 *)(this + 0xe0) = uVar19;
              }
              else {
LAB_00c93d2c:
                puVar4 = P_Height;
                sVar12 = strlen(P_Height);
                if (sVar12 != sVar1) {
LAB_00c93d74:
                  puVar4 = P_Tag;
                  sVar12 = strlen(P_Tag);
                  if (sVar12 == sVar1) {
                    if (sVar1 != 0) {
                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      pvVar2 = pvVar14;
                      if (((byte)bVar5 & 1) != 0) {
                        pvVar2 = local_d0;
                      }
                      iVar7 = memcmp(pvVar2,puVar4,sVar1);
                      if (iVar7 != 0) goto LAB_00c93dbc;
                    }
                    plVar13 = *(long **)(this + 0x60);
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_009d64e4();
                    }
                    uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                    (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar19);
                    goto switchD_00c94334_caseD_d;
                  }
LAB_00c93dbc:
                  puVar4 = P_ActionTag;
                  sVar12 = strlen(P_ActionTag);
                  if (sVar12 == sVar1) {
                    if (sVar1 != 0) {
                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      pvVar2 = pvVar14;
                      if (((byte)bVar5 & 1) != 0) {
                        pvVar2 = local_d0;
                      }
                      iVar7 = memcmp(pvVar2,puVar4,sVar1);
                      if (iVar7 != 0) goto LAB_00c93e04;
                    }
                    plVar13 = *(long **)(this + 0x60);
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_009d64e4();
                    }
                    iVar7 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                    cocos2d::ui::Widget::setActionTag(param_1,iVar7);
                    goto switchD_00c94334_caseD_d;
                  }
LAB_00c93e04:
                  puVar4 = P_TouchAble;
                  sVar12 = strlen(P_TouchAble);
                  if (sVar12 == sVar1) {
                    if (sVar1 != 0) {
                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      pvVar2 = pvVar14;
                      if (((byte)bVar5 & 1) != 0) {
                        pvVar2 = local_d0;
                      }
                      iVar7 = memcmp(pvVar2,puVar4,sVar1);
                      if (iVar7 != 0) goto LAB_00c93e4c;
                    }
                    plVar13 = *(long **)(this + 0x90);
                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_009d64e4();
                    }
                    uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                    (**(code **)(*(long *)param_1 + 0x588))(param_1,uVar9 & 1);
                    goto switchD_00c94334_caseD_d;
                  }
LAB_00c93e4c:
                  puVar4 = P_Name;
                  sVar12 = strlen(P_Name);
                  if (sVar12 == sVar1) {
                    if (sVar1 != 0) {
                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      pvVar2 = pvVar14;
                      if (((byte)bVar5 & 1) != 0) {
                        pvVar2 = local_d0;
                      }
                      iVar7 = memcmp(pvVar2,puVar4,sVar1);
                      if (iVar7 != 0) goto LAB_00c93e94;
                    }
                    pcVar11 = local_e8;
                    __n = uStack_f0;
                    uVar18 = (ulong)((byte)local_f8 >> 1);
                    if (((byte)local_f8 & 1) != 0) {
                      uVar18 = uStack_f0;
                    }
                    if (uVar18 == 0) {
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_110,"default");
                    }
                    else {
                      sStack_108 = 0;
                      local_100 = (char *)0x0;
                      local_110 = 0;
                      if (((byte)local_f8 & 1) == 0) {
                        local_110 = CONCAT71(uStack_f7,local_f8);
                        sStack_108 = uStack_f0;
                        local_100 = local_e8;
                      }
                      else {
                        if (0xffffffffffffffef < uStack_f0) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_length_error();
                        }
                        if (uStack_f0 < 0x17) {
                          local_110 = (ulong)(byte)((int)uStack_f0 << 1);
                          __dest = pcVar15;
                          if (uStack_f0 != 0) goto LAB_00c946d8;
                        }
                        else {
                          uVar18 = uStack_f0 + 0x10 & 0xfffffffffffffff0;
                          __dest = operator_new(uVar18);
                          local_110 = uVar18 | 1;
                          sStack_108 = __n;
                          local_100 = __dest;
LAB_00c946d8:
                          memcpy(__dest,pcVar11,__n);
                        }
                        __dest[__n] = '\0';
                      }
                    }
                    (**(code **)(*(long *)param_1 + 0x2d0))(param_1,&local_110);
joined_r0x00c94fc8:
                    if ((local_110 & 1) != 0) {
                      operator_delete(local_100);
                      goto joined_r0x00c94494;
                    }
                  }
                  else {
LAB_00c93e94:
                    puVar4 = P_X;
                    sVar12 = strlen(P_X);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c93edc;
                      }
                      plVar13 = *(long **)(this + 0xc0);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      *(undefined4 *)(this + 0xf0) = uVar19;
                      goto joined_r0x00c94494;
                    }
LAB_00c93edc:
                    puVar4 = P_Y;
                    sVar12 = strlen(P_Y);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c93f24;
                      }
                      plVar13 = *(long **)(this + 0xc0);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      *(undefined4 *)(this + 0xf4) = uVar19;
                      goto joined_r0x00c94494;
                    }
LAB_00c93f24:
                    puVar4 = P_ScaleX;
                    sVar12 = strlen(P_ScaleX);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c93f6c;
                      }
                      plVar13 = *(long **)(this + 0xc0);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      (**(code **)(*(long *)param_1 + 0x50))(param_1);
                      goto switchD_00c94334_caseD_d;
                    }
LAB_00c93f6c:
                    puVar4 = P_ScaleY;
                    sVar12 = strlen(P_ScaleY);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c93fb4;
                      }
                      plVar13 = *(long **)(this + 0xc0);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      (**(code **)(*(long *)param_1 + 0x60))(param_1);
                      goto switchD_00c94334_caseD_d;
                    }
LAB_00c93fb4:
                    puVar4 = P_Rotation;
                    sVar12 = strlen(P_Rotation);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c93ffc;
                      }
                      plVar13 = *(long **)(this + 0xc0);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      (**(code **)(*(long *)param_1 + 0x180))(param_1);
                      goto switchD_00c94334_caseD_d;
                    }
LAB_00c93ffc:
                    puVar4 = P_Visbile;
                    sVar12 = strlen(P_Visbile);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c94044;
                      }
                      plVar13 = *(long **)(this + 0x90);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      (**(code **)(*(long *)param_1 + 0x170))(param_1,uVar9 & 1);
                      goto switchD_00c94334_caseD_d;
                    }
LAB_00c94044:
                    puVar4 = P_ZOrder;
                    sVar12 = strlen(P_ZOrder);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c9408c;
                      }
                      plVar13 = *(long **)(this + 0x60);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar19);
                      goto switchD_00c94334_caseD_d;
                    }
LAB_00c9408c:
                    puVar4 = P_LayoutParameter;
                    sVar12 = strlen(P_LayoutParameter);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c940d4;
                      }
                      this_01 = (stExpCocoNode *)stExpCocoNode::GetChildArray(this_00,param_2);
                      this_02 = (LinearLayoutParameter *)
                                cocos2d::ui::LinearLayoutParameter::create();
                      this_03 = (RelativeLayoutParameter *)
                                cocos2d::ui::RelativeLayoutParameter::create();
                      cocos2d::ui::Margin::Margin((Margin *)&local_120);
                      iVar7 = -1;
                      for (lVar16 = 0; iVar8 = stExpCocoNode::GetChildNum(this_00), lVar16 < iVar8;
                          lVar16 = lVar16 + 1) {
                        pcVar11 = (char *)stExpCocoNode::GetName(this_01,param_2);
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>
                                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                    *)&local_110,pcVar11);
                        pcVar11 = (char *)stExpCocoNode::GetValue(this_01,param_2);
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::basic_string<decltype(nullptr)>(local_138,pcVar11);
                        puVar4 = P_Type;
                        sVar12 = strlen(P_Type);
                        uVar18 = local_110;
                        sVar1 = local_110 >> 1 & 0x7f;
                        if ((local_110 & 1) != 0) {
                          sVar1 = sStack_108;
                        }
                        if (sVar12 == sVar1) {
                          if (sVar12 != 0) {
                            if (sVar12 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                            }
                            pcVar11 = pcVar15;
                            if ((local_110 & 1) != 0) {
                              pcVar11 = local_100;
                            }
                            iVar8 = memcmp(pcVar11,puVar4,sVar12);
                            if (iVar8 != 0) goto LAB_00c9488c;
                          }
                          plVar13 = *(long **)(this + 0x60);
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          iVar7 = (**(code **)(*plVar13 + 0x30))(plVar13,local_138);
                        }
                        else {
LAB_00c9488c:
                          puVar4 = P_Gravity;
                          sVar12 = strlen(P_Gravity);
                          if (sVar12 == sVar1) {
                            if (sVar1 != 0) {
                              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                              }
                              pcVar11 = pcVar15;
                              if ((uVar18 & 1) != 0) {
                                pcVar11 = local_100;
                              }
                              iVar8 = memcmp(pcVar11,puVar4,sVar1);
                              if (iVar8 != 0) goto LAB_00c948d4;
                            }
                            plVar13 = *(long **)(this + 0x60);
                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,local_138);
                            cocos2d::ui::LinearLayoutParameter::setGravity(this_02,uVar19);
                          }
                          else {
LAB_00c948d4:
                            puVar4 = P_RelativeName;
                            sVar12 = strlen(P_RelativeName);
                            if (sVar12 == sVar1) {
                              if (sVar1 != 0) {
                                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                                }
                                pcVar11 = pcVar15;
                                if ((uVar18 & 1) != 0) {
                                  pcVar11 = local_100;
                                }
                                iVar8 = memcmp(pcVar11,puVar4,sVar1);
                                if (iVar8 != 0) goto LAB_00c9491c;
                              }
                              cocos2d::ui::RelativeLayoutParameter::setRelativeName
                                        (this_03,(basic_string *)local_138);
                            }
                            else {
LAB_00c9491c:
                              puVar4 = P_RelativeToName;
                              sVar12 = strlen(P_RelativeToName);
                              if (sVar12 == sVar1) {
                                if (sVar1 != 0) {
                                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
                                    ;
                                  }
                                  pcVar11 = pcVar15;
                                  if ((uVar18 & 1) != 0) {
                                    pcVar11 = local_100;
                                  }
                                  iVar8 = memcmp(pcVar11,puVar4,sVar1);
                                  if (iVar8 != 0) goto LAB_00c94964;
                                }
                                cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName
                                          (this_03,(basic_string *)local_138);
                              }
                              else {
LAB_00c94964:
                                puVar4 = P_Align;
                                sVar12 = strlen(P_Align);
                                if (sVar12 == sVar1) {
                                  if (sVar1 != 0) {
                                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range
                                                ();
                                    }
                                    pcVar11 = pcVar15;
                                    if ((uVar18 & 1) != 0) {
                                      pcVar11 = local_100;
                                    }
                                    iVar8 = memcmp(pcVar11,puVar4,sVar1);
                                    if (iVar8 != 0) goto LAB_00c949ac;
                                  }
                                  plVar13 = *(long **)(this + 0x60);
                                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_009d64e4();
                                  }
                                  uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,local_138);
                                  cocos2d::ui::RelativeLayoutParameter::setAlign(this_03,uVar19);
                                }
                                else {
LAB_00c949ac:
                                  puVar4 = P_MarginLeft;
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
                                        pcVar11 = local_100;
                                      }
                                      iVar8 = memcmp(pcVar11,puVar4,sVar1);
                                      if (iVar8 != 0) goto LAB_00c949f4;
                                    }
                                    plVar13 = *(long **)(this + 0xc0);
                                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_009d64e4();
                                    }
                                    local_120 = (**(code **)(*plVar13 + 0x30))(plVar13,local_138);
                                  }
                                  else {
LAB_00c949f4:
                                    puVar4 = P_MarginTop;
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
                                          pcVar11 = local_100;
                                        }
                                        iVar8 = memcmp(pcVar11,puVar4,sVar1);
                                        if (iVar8 != 0) goto LAB_00c94a3c;
                                      }
                                      plVar13 = *(long **)(this + 0xc0);
                                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_009d64e4();
                                      }
                                      local_11c = (**(code **)(*plVar13 + 0x30))(plVar13,local_138);
                                    }
                                    else {
LAB_00c94a3c:
                                      puVar4 = P_MarginRight;
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
                                            pcVar11 = local_100;
                                          }
                                          iVar8 = memcmp(pcVar11,puVar4,sVar1);
                                          if (iVar8 != 0) goto LAB_00c94a84;
                                        }
                                        plVar13 = *(long **)(this + 0xc0);
                                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_009d64e4();
                                        }
                                        local_118 = (**(code **)(*plVar13 + 0x30))
                                                              (plVar13,local_138);
                                      }
                                      else {
LAB_00c94a84:
                                        puVar4 = P_MarginDown;
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
                                              pcVar11 = local_100;
                                            }
                                            iVar8 = memcmp(pcVar11,puVar4,sVar1);
                                            if (iVar8 != 0) goto joined_r0x00c94bf4;
                                          }
                                          plVar13 = *(long **)(this + 0xc0);
                                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          local_114 = (**(code **)(*plVar13 + 0x30))
                                                                (plVar13,local_138);
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
joined_r0x00c94bf4:
                        if (((byte)local_138[0] & 1) != 0) {
                          operator_delete(local_128);
                        }
                        if ((local_110 & 1) != 0) {
                          operator_delete(local_100);
                        }
                        this_01 = this_01 + 0x10;
                      }
                      cocos2d::ui::LayoutParameter::setMargin
                                ((LayoutParameter *)this_02,(Margin *)&local_120);
                      cocos2d::ui::LayoutParameter::setMargin
                                ((LayoutParameter *)this_03,(Margin *)&local_120);
                      if (iVar7 == 1) {
                        cocos2d::ui::Widget::setLayoutParameter(param_1,(LayoutParameter *)this_02);
                      }
                      else if (iVar7 == 2) {
                        cocos2d::ui::Widget::setLayoutParameter(param_1,(LayoutParameter *)this_03);
                      }
                      goto switchD_00c94334_caseD_d;
                    }
LAB_00c940d4:
                    puVar4 = P_Opacity;
                    sVar12 = strlen(P_Opacity);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c9411c;
                      }
                      plVar13 = *(long **)(this + 0x60);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      *(undefined4 *)(this + 0xec) = uVar19;
                      goto joined_r0x00c94494;
                    }
LAB_00c9411c:
                    puVar4 = P_ColorR;
                    sVar12 = strlen(P_ColorR);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c94164;
                      }
                      plVar13 = *(long **)(this + 0x60);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      TVar6 = (TextAtlasReader)(**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      this[0xe8] = TVar6;
                      goto joined_r0x00c94494;
                    }
LAB_00c94164:
                    puVar4 = P_ColorG;
                    sVar12 = strlen(P_ColorG);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c941ac;
                      }
                      plVar13 = *(long **)(this + 0x60);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      TVar6 = (TextAtlasReader)(**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      this[0xe9] = TVar6;
                      goto joined_r0x00c94494;
                    }
LAB_00c941ac:
                    puVar4 = P_ColorB;
                    sVar12 = strlen(P_ColorB);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c941f4;
                      }
                      plVar13 = *(long **)(this + 0x60);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      TVar6 = (TextAtlasReader)(**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      this[0xea] = TVar6;
                      goto joined_r0x00c94494;
                    }
LAB_00c941f4:
                    puVar4 = P_FlipX;
                    sVar12 = strlen(P_FlipX);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c9423c;
                      }
                      plVar13 = *(long **)(this + 0x90);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      (**(code **)(*(long *)param_1 + 0x598))(param_1,uVar9 & 1);
                      goto switchD_00c94334_caseD_d;
                    }
LAB_00c9423c:
                    puVar4 = P_FlipY;
                    sVar12 = strlen(P_FlipY);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c94284;
                      }
                      plVar13 = *(long **)(this + 0x90);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      (**(code **)(*(long *)param_1 + 0x5a8))(param_1,uVar9 & 1);
                      goto switchD_00c94334_caseD_d;
                    }
LAB_00c94284:
                    puVar4 = P_AnchorPointX;
                    sVar12 = strlen(P_AnchorPointX);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c942cc;
                      }
                      plVar13 = *(long **)(this + 0xc0);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      *(undefined4 *)(this + 0xfc) = uVar19;
                      goto joined_r0x00c94494;
                    }
LAB_00c942cc:
                    puVar4 = P_AnchorPointY;
                    sVar12 = strlen(P_AnchorPointY);
                    if (sVar12 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_d0;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c94314;
                      }
                      plVar13 = *(long **)(this + 0xc0);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                      *(undefined4 *)(this + 0x100) = uVar19;
                      goto joined_r0x00c94494;
                    }
LAB_00c94314:
                    switch(sVar1) {
                    case 9:
                      pvVar2 = pvVar14;
                      if (((byte)bVar5 & 1) != 0) {
                        pvVar2 = local_d0;
                      }
                      iVar7 = memcmp(pvVar2,"itemWidth",9);
                      if (iVar7 == 0) {
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        unaff_s9 = (float)(**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                        goto joined_r0x00c94494;
                      }
                      break;
                    case 10:
                      pvVar2 = pvVar14;
                      if (((byte)bVar5 & 1) != 0) {
                        pvVar2 = local_d0;
                      }
                      iVar7 = memcmp(pvVar2,"itemHeight",10);
                      if (iVar7 == 0) {
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        unaff_s8 = (float)(**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                        goto joined_r0x00c94494;
                      }
                      break;
                    case 0xb:
                      pvVar2 = pvVar14;
                      if (((byte)bVar5 & 1) != 0) {
                        pvVar2 = local_d0;
                      }
                      iVar7 = memcmp(pvVar2,"stringValue",0xb);
                      if (iVar7 == 0) {
                        pcVar11 = (char *)((ulong)&local_f8 | 1);
                        uVar18 = (ulong)((byte)local_f8 >> 1);
                        if (((byte)local_f8 & 1) != 0) {
                          pcVar11 = local_e8;
                          uVar18 = uStack_f0;
                        }
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_b0,pcVar11,uVar18);
                      }
                      break;
                    case 0xc:
                      pvVar2 = pvVar14;
                      if (((byte)bVar5 & 1) != 0) {
                        pvVar2 = local_d0;
                      }
                      iVar7 = memcmp(pvVar2,"startCharMap",0xc);
                      if (iVar7 == 0) {
                        pcVar11 = (char *)((ulong)&local_f8 | 1);
                        uVar18 = (ulong)((byte)local_f8 >> 1);
                        if (((byte)local_f8 & 1) != 0) {
                          pcVar11 = local_e8;
                          uVar18 = uStack_f0;
                        }
                        std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_c8,pcVar11,uVar18);
                      }
                      break;
                    case 0xf:
                      pvVar2 = pvVar14;
                      if (((byte)bVar5 & 1) != 0) {
                        pvVar2 = local_d0;
                      }
                      iVar7 = memcmp(pvVar2,"charMapFileData",0xf);
                      if (iVar7 != 0) break;
                      lVar16 = stExpCocoNode::GetChildArray(this_00,param_2);
                      pcVar11 = (char *)stExpCocoNode::GetValue
                                                  ((stExpCocoNode *)(lVar16 + 0x20),param_2);
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::basic_string<decltype(nullptr)>
                                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  *)&local_110,pcVar11);
                      plVar13 = *(long **)(this + 0x60);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      local_16c = (**(code **)(*plVar13 + 0x30))(plVar13,&local_110);
                      WidgetReader::getResourcePath(local_138,this,param_2,this_00,local_16c);
                      pcVar11 = (char *)((ulong)local_138 | 1);
                      uVar18 = (ulong)((byte)local_138[0] >> 1);
                      if (((byte)local_138[0] & 1) != 0) {
                        pcVar11 = local_128;
                        uVar18 = local_130;
                      }
                      std::__ndk1::
                      basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                *)&local_98,pcVar11,uVar18);
                      if (((byte)local_138[0] & 1) != 0) {
                        operator_delete(local_128);
                      }
                      goto joined_r0x00c94fc8;
                    }
                  }
                  goto switchD_00c94334_caseD_d;
                }
                if (sVar1 != 0) {
                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  pvVar2 = pvVar14;
                  if (((byte)bVar5 & 1) != 0) {
                    pvVar2 = local_d0;
                  }
                  iVar7 = memcmp(pvVar2,puVar4,sVar1);
                  if (iVar7 != 0) goto LAB_00c93d74;
                }
                plVar13 = *(long **)(this + 0xc0);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_009d64e4();
                }
                uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_f8);
                *(undefined4 *)(this + 0xe4) = uVar19;
              }
            }
          }
        }
      }
    }
joined_r0x00c94494:
    if (((byte)local_f8 & 1) != 0) {
      operator_delete(local_e8);
    }
    if (((byte)local_e0[0] & 1) != 0) {
      operator_delete(local_d0);
    }
    lVar17 = lVar17 + 1;
  } while( true );
}

