
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::TextBMFontReader::setPropsFromBinary(cocos2d::ui::Widget*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::TextBMFontReader::setPropsFromBinary
          (TextBMFontReader *this,Widget *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  stExpCocoNode *this_00;
  int *piVar1;
  size_t sVar2;
  void *pvVar3;
  long lVar4;
  undefined *puVar5;
  ulong __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  TextBMFontReader TVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  char *pcVar12;
  size_t sVar13;
  long lVar14;
  long *plVar15;
  void *__dest;
  stExpCocoNode *this_01;
  LinearLayoutParameter *this_02;
  RelativeLayoutParameter *this_03;
  int *piVar16;
  void *pvVar17;
  long lVar18;
  ulong uVar19;
  undefined4 uVar20;
  basic_string local_e8 [16];
  void *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  ulong local_c0;
  size_t sStack_b8;
  void *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0;
  undefined7 uStack_9f;
  ulong uStack_98;
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  size_t local_80;
  int *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  WidgetReader::beginSetBasicProperties((WidgetReader *)this,param_1);
  lVar11 = stExpCocoNode::GetChildArray(param_3,param_2);
  iVar8 = stExpCocoNode::GetChildNum(param_3);
  if (0 < iVar8) {
    piVar16 = (int *)((ulong)local_88 | 1);
    lVar18 = 0;
    pvVar17 = (void *)((ulong)&local_c0 | 1);
    do {
      this_00 = (stExpCocoNode *)(lVar11 + lVar18 * 0x10);
      pcVar12 = (char *)stExpCocoNode::GetName(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_88,pcVar12);
      pcVar12 = (char *)stExpCocoNode::GetValue(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_a0,pcVar12);
      puVar5 = P_IgnoreSize;
      sVar13 = strlen(P_IgnoreSize);
      bVar6 = local_88[0];
      sVar2 = (ulong)((byte)local_88[0] >> 1);
      if (((byte)local_88[0] & 1) != 0) {
        sVar2 = local_80;
      }
      if (sVar13 == sVar2) {
        if (sVar13 != 0) {
          if (sVar13 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          piVar1 = piVar16;
          if (((byte)local_88[0] & 1) != 0) {
            piVar1 = local_78;
          }
          iVar8 = memcmp(piVar1,puVar5,sVar13);
          if (iVar8 != 0) goto LAB_00c978cc;
        }
        plVar15 = *(long **)(this + 0x90);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar10 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
        (**(code **)(*(long *)param_1 + 0x600))(param_1,uVar10 & 1);
      }
      else {
LAB_00c978cc:
        puVar5 = P_SizeType;
        sVar13 = strlen(P_SizeType);
        if (sVar13 == sVar2) {
          if (sVar2 != 0) {
            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            piVar1 = piVar16;
            if (((byte)bVar6 & 1) != 0) {
              piVar1 = local_78;
            }
            iVar8 = memcmp(piVar1,puVar5,sVar2);
            if (iVar8 != 0) goto LAB_00c97914;
          }
          plVar15 = *(long **)(this + 0x60);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
          cocos2d::ui::Widget::setSizeType(param_1,uVar20);
        }
        else {
LAB_00c97914:
          puVar5 = P_PositionType;
          sVar13 = strlen(P_PositionType);
          if (sVar13 == sVar2) {
            if (sVar2 != 0) {
              if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              piVar1 = piVar16;
              if (((byte)bVar6 & 1) != 0) {
                piVar1 = local_78;
              }
              iVar8 = memcmp(piVar1,puVar5,sVar2);
              if (iVar8 != 0) goto LAB_00c9795c;
            }
            plVar15 = *(long **)(this + 0x60);
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
            cocos2d::ui::Widget::setPositionType(param_1,uVar20);
          }
          else {
LAB_00c9795c:
            puVar5 = P_SizePercentX;
            sVar13 = strlen(P_SizePercentX);
            if (sVar13 == sVar2) {
              if (sVar2 != 0) {
                if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                piVar1 = piVar16;
                if (((byte)bVar6 & 1) != 0) {
                  piVar1 = local_78;
                }
                iVar8 = memcmp(piVar1,puVar5,sVar2);
                if (iVar8 != 0) goto LAB_00c979a4;
              }
              plVar15 = *(long **)(this + 0xc0);
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
              *(undefined4 *)(this + 0xd0) = uVar20;
            }
            else {
LAB_00c979a4:
              puVar5 = P_SizePercentY;
              sVar13 = strlen(P_SizePercentY);
              if (sVar13 == sVar2) {
                if (sVar2 != 0) {
                  if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  piVar1 = piVar16;
                  if (((byte)bVar6 & 1) != 0) {
                    piVar1 = local_78;
                  }
                  iVar8 = memcmp(piVar1,puVar5,sVar2);
                  if (iVar8 != 0) goto LAB_00c979ec;
                }
                plVar15 = *(long **)(this + 0xc0);
                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_009d64e4();
                }
                uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                *(undefined4 *)(this + 0xd4) = uVar20;
              }
              else {
LAB_00c979ec:
                puVar5 = P_PositionPercentX;
                sVar13 = strlen(P_PositionPercentX);
                if (sVar13 == sVar2) {
                  if (sVar2 != 0) {
                    if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    piVar1 = piVar16;
                    if (((byte)bVar6 & 1) != 0) {
                      piVar1 = local_78;
                    }
                    iVar8 = memcmp(piVar1,puVar5,sVar2);
                    if (iVar8 != 0) goto LAB_00c97a34;
                  }
                  plVar15 = *(long **)(this + 0xc0);
                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_009d64e4();
                  }
                  uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                  *(undefined4 *)(this + 0xd8) = uVar20;
                }
                else {
LAB_00c97a34:
                  puVar5 = P_PositionPercentY;
                  sVar13 = strlen(P_PositionPercentY);
                  if (sVar13 == sVar2) {
                    if (sVar2 != 0) {
                      if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      piVar1 = piVar16;
                      if (((byte)bVar6 & 1) != 0) {
                        piVar1 = local_78;
                      }
                      iVar8 = memcmp(piVar1,puVar5,sVar2);
                      if (iVar8 != 0) goto LAB_00c97a7c;
                    }
                    plVar15 = *(long **)(this + 0xc0);
                    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_009d64e4();
                    }
                    uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                    *(undefined4 *)(this + 0xdc) = uVar20;
                  }
                  else {
LAB_00c97a7c:
                    puVar5 = P_Width;
                    sVar13 = strlen(P_Width);
                    if (sVar13 == sVar2) {
                      if (sVar2 != 0) {
                        if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        piVar1 = piVar16;
                        if (((byte)bVar6 & 1) != 0) {
                          piVar1 = local_78;
                        }
                        iVar8 = memcmp(piVar1,puVar5,sVar2);
                        if (iVar8 != 0) goto LAB_00c97ac4;
                      }
                      plVar15 = *(long **)(this + 0xc0);
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                      *(undefined4 *)(this + 0xe0) = uVar20;
                    }
                    else {
LAB_00c97ac4:
                      puVar5 = P_Height;
                      sVar13 = strlen(P_Height);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          piVar1 = piVar16;
                          if (((byte)bVar6 & 1) != 0) {
                            piVar1 = local_78;
                          }
                          iVar8 = memcmp(piVar1,puVar5,sVar2);
                          if (iVar8 != 0) goto LAB_00c97b0c;
                        }
                        plVar15 = *(long **)(this + 0xc0);
                        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                        *(undefined4 *)(this + 0xe4) = uVar20;
                      }
                      else {
LAB_00c97b0c:
                        puVar5 = P_Tag;
                        sVar13 = strlen(P_Tag);
                        if (sVar13 == sVar2) {
                          if (sVar2 != 0) {
                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                            }
                            piVar1 = piVar16;
                            if (((byte)bVar6 & 1) != 0) {
                              piVar1 = local_78;
                            }
                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                            if (iVar8 != 0) goto LAB_00c97b54;
                          }
                          plVar15 = *(long **)(this + 0x60);
                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                          (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar20);
                        }
                        else {
LAB_00c97b54:
                          puVar5 = P_ActionTag;
                          sVar13 = strlen(P_ActionTag);
                          if (sVar13 == sVar2) {
                            if (sVar2 != 0) {
                              if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                              }
                              piVar1 = piVar16;
                              if (((byte)bVar6 & 1) != 0) {
                                piVar1 = local_78;
                              }
                              iVar8 = memcmp(piVar1,puVar5,sVar2);
                              if (iVar8 != 0) goto LAB_00c97b9c;
                            }
                            plVar15 = *(long **)(this + 0x60);
                            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            iVar8 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                            cocos2d::ui::Widget::setActionTag(param_1,iVar8);
                          }
                          else {
LAB_00c97b9c:
                            puVar5 = P_TouchAble;
                            sVar13 = strlen(P_TouchAble);
                            if (sVar13 == sVar2) {
                              if (sVar2 != 0) {
                                if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                                }
                                piVar1 = piVar16;
                                if (((byte)bVar6 & 1) != 0) {
                                  piVar1 = local_78;
                                }
                                iVar8 = memcmp(piVar1,puVar5,sVar2);
                                if (iVar8 != 0) goto LAB_00c97be4;
                              }
                              plVar15 = *(long **)(this + 0x90);
                              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_009d64e4();
                              }
                              uVar10 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                              (**(code **)(*(long *)param_1 + 0x588))(param_1,uVar10 & 1);
                            }
                            else {
LAB_00c97be4:
                              puVar5 = P_Name;
                              sVar13 = strlen(P_Name);
                              if (sVar13 == sVar2) {
                                if (sVar2 != 0) {
                                  if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
                                    ;
                                  }
                                  piVar1 = piVar16;
                                  if (((byte)bVar6 & 1) != 0) {
                                    piVar1 = local_78;
                                  }
                                  iVar8 = memcmp(piVar1,puVar5,sVar2);
                                  if (iVar8 != 0) goto LAB_00c97c2c;
                                }
                                pvVar3 = local_90;
                                __n = uStack_98;
                                uVar19 = (ulong)((byte)local_a0 >> 1);
                                if (((byte)local_a0 & 1) != 0) {
                                  uVar19 = uStack_98;
                                }
                                if (uVar19 == 0) {
                                  std::__ndk1::
                                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                  ::basic_string<decltype(nullptr)>
                                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                              *)&local_c0,"default");
                                }
                                else {
                                  sStack_b8 = 0;
                                  local_b0 = (void *)0x0;
                                  local_c0 = 0;
                                  if (((byte)local_a0 & 1) == 0) {
                                    local_c0 = CONCAT71(uStack_9f,local_a0);
                                    sStack_b8 = uStack_98;
                                    local_b0 = local_90;
                                  }
                                  else {
                                    if (0xffffffffffffffef < uStack_98) {
                    /* WARNING: Subroutine does not return */
                                      std::__ndk1::__basic_string_common<true>::__throw_length_error
                                                ();
                                    }
                                    if (uStack_98 < 0x17) {
                                      local_c0 = (ulong)(byte)((int)uStack_98 << 1);
                                      __dest = pvVar17;
                                      if (uStack_98 != 0) goto LAB_00c984b8;
                                    }
                                    else {
                                      uVar19 = uStack_98 + 0x10 & 0xfffffffffffffff0;
                                      __dest = operator_new(uVar19);
                                      local_c0 = uVar19 | 1;
                                      sStack_b8 = __n;
                                      local_b0 = __dest;
LAB_00c984b8:
                                      memcpy(__dest,pvVar3,__n);
                                    }
                                    *(undefined1 *)((long)__dest + __n) = 0;
                                  }
                                }
                                (**(code **)(*(long *)param_1 + 0x2d0))(param_1,&local_c0);
joined_r0x00c9815c:
                                if ((local_c0 & 1) != 0) {
                                  operator_delete(local_b0);
                                }
                              }
                              else {
LAB_00c97c2c:
                                puVar5 = P_X;
                                sVar13 = strlen(P_X);
                                if (sVar13 == sVar2) {
                                  if (sVar2 != 0) {
                                    if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range
                                                ();
                                    }
                                    piVar1 = piVar16;
                                    if (((byte)bVar6 & 1) != 0) {
                                      piVar1 = local_78;
                                    }
                                    iVar8 = memcmp(piVar1,puVar5,sVar2);
                                    if (iVar8 != 0) goto LAB_00c97c74;
                                  }
                                  plVar15 = *(long **)(this + 0xc0);
                                  if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_009d64e4();
                                  }
                                  uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                                  *(undefined4 *)(this + 0xf0) = uVar20;
                                }
                                else {
LAB_00c97c74:
                                  puVar5 = P_Y;
                                  sVar13 = strlen(P_Y);
                                  if (sVar13 == sVar2) {
                                    if (sVar2 != 0) {
                                      if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                        std::__ndk1::__basic_string_common<true>::
                                        __throw_out_of_range();
                                      }
                                      piVar1 = piVar16;
                                      if (((byte)bVar6 & 1) != 0) {
                                        piVar1 = local_78;
                                      }
                                      iVar8 = memcmp(piVar1,puVar5,sVar2);
                                      if (iVar8 != 0) goto LAB_00c97cbc;
                                    }
                                    plVar15 = *(long **)(this + 0xc0);
                                    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_009d64e4();
                                    }
                                    uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                                    *(undefined4 *)(this + 0xf4) = uVar20;
                                  }
                                  else {
LAB_00c97cbc:
                                    puVar5 = P_ScaleX;
                                    sVar13 = strlen(P_ScaleX);
                                    if (sVar13 == sVar2) {
                                      if (sVar2 != 0) {
                                        if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                          std::__ndk1::__basic_string_common<true>::
                                          __throw_out_of_range();
                                        }
                                        piVar1 = piVar16;
                                        if (((byte)bVar6 & 1) != 0) {
                                          piVar1 = local_78;
                                        }
                                        iVar8 = memcmp(piVar1,puVar5,sVar2);
                                        if (iVar8 != 0) goto LAB_00c97d04;
                                      }
                                      plVar15 = *(long **)(this + 0xc0);
                                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_009d64e4();
                                      }
                                      (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                                      (**(code **)(*(long *)param_1 + 0x50))(param_1);
                                    }
                                    else {
LAB_00c97d04:
                                      puVar5 = P_ScaleY;
                                      sVar13 = strlen(P_ScaleY);
                                      if (sVar13 != sVar2) {
LAB_00c97d4c:
                                        puVar5 = P_Rotation;
                                        sVar13 = strlen(P_Rotation);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            piVar1 = piVar16;
                                            if (((byte)bVar6 & 1) != 0) {
                                              piVar1 = local_78;
                                            }
                                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                                            if (iVar8 != 0) goto LAB_00c97d94;
                                          }
                                          plVar15 = *(long **)(this + 0xc0);
                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                                          (**(code **)(*(long *)param_1 + 0x180))(param_1);
                                          goto joined_r0x00c98224;
                                        }
LAB_00c97d94:
                                        puVar5 = P_Visbile;
                                        sVar13 = strlen(P_Visbile);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            piVar1 = piVar16;
                                            if (((byte)bVar6 & 1) != 0) {
                                              piVar1 = local_78;
                                            }
                                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                                            if (iVar8 != 0) goto LAB_00c97ddc;
                                          }
                                          plVar15 = *(long **)(this + 0x90);
                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          uVar10 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0)
                                          ;
                                          (**(code **)(*(long *)param_1 + 0x170))
                                                    (param_1,uVar10 & 1);
                                          goto joined_r0x00c98224;
                                        }
LAB_00c97ddc:
                                        puVar5 = P_ZOrder;
                                        sVar13 = strlen(P_ZOrder);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            piVar1 = piVar16;
                                            if (((byte)bVar6 & 1) != 0) {
                                              piVar1 = local_78;
                                            }
                                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                                            if (iVar8 != 0) goto LAB_00c97e24;
                                          }
                                          plVar15 = *(long **)(this + 0x60);
                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0)
                                          ;
                                          (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar20);
                                          goto joined_r0x00c98224;
                                        }
LAB_00c97e24:
                                        puVar5 = P_LayoutParameter;
                                        sVar13 = strlen(P_LayoutParameter);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            piVar1 = piVar16;
                                            if (((byte)bVar6 & 1) != 0) {
                                              piVar1 = local_78;
                                            }
                                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                                            if (iVar8 != 0) goto LAB_00c97e6c;
                                          }
                                          this_01 = (stExpCocoNode *)
                                                    stExpCocoNode::GetChildArray(this_00,param_2);
                                          this_02 = (LinearLayoutParameter *)
                                                    cocos2d::ui::LinearLayoutParameter::create();
                                          this_03 = (RelativeLayoutParameter *)
                                                    cocos2d::ui::RelativeLayoutParameter::create();
                                          cocos2d::ui::Margin::Margin((Margin *)&local_d0);
                                          iVar8 = -1;
                                          for (lVar14 = 0;
                                              iVar9 = stExpCocoNode::GetChildNum(this_00),
                                              lVar14 < iVar9; lVar14 = lVar14 + 1) {
                                            pcVar12 = (char *)stExpCocoNode::GetName
                                                                        (this_01,param_2);
                                            std::__ndk1::
                                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                            ::basic_string<decltype(nullptr)>
                                                      ((
                                                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                                  *)&local_c0,pcVar12);
                                            pcVar12 = (char *)stExpCocoNode::GetValue
                                                                        (this_01,param_2);
                                            std::__ndk1::
                                            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                            ::basic_string<decltype(nullptr)>
                                                      ((
                                                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                                  *)local_e8,pcVar12);
                                            puVar5 = P_Type;
                                            sVar13 = strlen(P_Type);
                                            uVar19 = local_c0;
                                            sVar2 = local_c0 >> 1 & 0x7f;
                                            if ((local_c0 & 1) != 0) {
                                              sVar2 = sStack_b8;
                                            }
                                            if (sVar13 == sVar2) {
                                              if (sVar13 != 0) {
                                                if (sVar13 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                  std::__ndk1::__basic_string_common<true>::
                                                  __throw_out_of_range();
                                                }
                                                pvVar3 = pvVar17;
                                                if ((local_c0 & 1) != 0) {
                                                  pvVar3 = local_b0;
                                                }
                                                iVar9 = memcmp(pvVar3,puVar5,sVar13);
                                                if (iVar9 != 0) goto LAB_00c9866c;
                                              }
                                              plVar15 = *(long **)(this + 0x60);
                                              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_009d64e4();
                                              }
                                              iVar8 = (**(code **)(*plVar15 + 0x30))
                                                                (plVar15,local_e8);
                                            }
                                            else {
LAB_00c9866c:
                                              puVar5 = P_Gravity;
                                              sVar13 = strlen(P_Gravity);
                                              if (sVar13 == sVar2) {
                                                if (sVar2 != 0) {
                                                  if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                    std::__ndk1::__basic_string_common<true>::
                                                    __throw_out_of_range();
                                                  }
                                                  pvVar3 = pvVar17;
                                                  if ((uVar19 & 1) != 0) {
                                                    pvVar3 = local_b0;
                                                  }
                                                  iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                                  if (iVar9 != 0) goto LAB_00c986b4;
                                                }
                                                plVar15 = *(long **)(this + 0x60);
                                                if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                  FUN_009d64e4();
                                                }
                                                uVar20 = (**(code **)(*plVar15 + 0x30))
                                                                   (plVar15,local_e8);
                                                cocos2d::ui::LinearLayoutParameter::setGravity
                                                          (this_02,uVar20);
                                              }
                                              else {
LAB_00c986b4:
                                                puVar5 = P_RelativeName;
                                                sVar13 = strlen(P_RelativeName);
                                                if (sVar13 == sVar2) {
                                                  if (sVar2 != 0) {
                                                    if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                      std::__ndk1::__basic_string_common<true>::
                                                      __throw_out_of_range();
                                                    }
                                                    pvVar3 = pvVar17;
                                                    if ((uVar19 & 1) != 0) {
                                                      pvVar3 = local_b0;
                                                    }
                                                    iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                                    if (iVar9 != 0) goto LAB_00c986fc;
                                                  }
                                                  cocos2d::ui::RelativeLayoutParameter::
                                                  setRelativeName(this_03,local_e8);
                                                }
                                                else {
LAB_00c986fc:
                                                  puVar5 = P_RelativeToName;
                                                  sVar13 = strlen(P_RelativeToName);
                                                  if (sVar13 == sVar2) {
                                                    if (sVar2 != 0) {
                                                      if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                        std::__ndk1::__basic_string_common<true>::
                                                        __throw_out_of_range();
                                                      }
                                                      pvVar3 = pvVar17;
                                                      if ((uVar19 & 1) != 0) {
                                                        pvVar3 = local_b0;
                                                      }
                                                      iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                                      if (iVar9 != 0) goto LAB_00c98744;
                                                    }
                                                    cocos2d::ui::RelativeLayoutParameter::
                                                    setRelativeToWidgetName(this_03,local_e8);
                                                  }
                                                  else {
LAB_00c98744:
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
                                                        if ((uVar19 & 1) != 0) {
                                                          pvVar3 = local_b0;
                                                        }
                                                        iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                                        if (iVar9 != 0) goto LAB_00c9878c;
                                                      }
                                                      plVar15 = *(long **)(this + 0x60);
                                                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_009d64e4();
                                                      }
                                                      uVar20 = (**(code **)(*plVar15 + 0x30))
                                                                         (plVar15,local_e8);
                                                      cocos2d::ui::RelativeLayoutParameter::setAlign
                                                                (this_03,uVar20);
                                                    }
                                                    else {
LAB_00c9878c:
                                                      puVar5 = P_MarginLeft;
                                                      sVar13 = strlen(P_MarginLeft);
                                                      if (sVar13 == sVar2) {
                                                        if (sVar2 != 0) {
                                                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                            std::__ndk1::__basic_string_common<true>
                                                            ::__throw_out_of_range();
                                                          }
                                                          pvVar3 = pvVar17;
                                                          if ((uVar19 & 1) != 0) {
                                                            pvVar3 = local_b0;
                                                          }
                                                          iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                                          if (iVar9 != 0) goto LAB_00c987d4;
                                                        }
                                                        plVar15 = *(long **)(this + 0xc0);
                                                        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                          FUN_009d64e4();
                                                        }
                                                        local_d0 = (**(code **)(*plVar15 + 0x30))
                                                                             (plVar15,local_e8);
                                                      }
                                                      else {
LAB_00c987d4:
                                                        puVar5 = P_MarginTop;
                                                        sVar13 = strlen(P_MarginTop);
                                                        if (sVar13 == sVar2) {
                                                          if (sVar2 != 0) {
                                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                              std::__ndk1::
                                                              __basic_string_common<true>::
                                                              __throw_out_of_range();
                                                            }
                                                            pvVar3 = pvVar17;
                                                            if ((uVar19 & 1) != 0) {
                                                              pvVar3 = local_b0;
                                                            }
                                                            iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                                            if (iVar9 != 0) goto LAB_00c9881c;
                                                          }
                                                          plVar15 = *(long **)(this + 0xc0);
                                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                            FUN_009d64e4();
                                                          }
                                                          local_cc = (**(code **)(*plVar15 + 0x30))
                                                                               (plVar15,local_e8);
                                                        }
                                                        else {
LAB_00c9881c:
                                                          puVar5 = P_MarginRight;
                                                          sVar13 = strlen(P_MarginRight);
                                                          if (sVar13 == sVar2) {
                                                            if (sVar2 != 0) {
                                                              if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                                std::__ndk1::
                                                                __basic_string_common<true>::
                                                                __throw_out_of_range();
                                                              }
                                                              pvVar3 = pvVar17;
                                                              if ((uVar19 & 1) != 0) {
                                                                pvVar3 = local_b0;
                                                              }
                                                              iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                                              if (iVar9 != 0) goto LAB_00c98864;
                                                            }
                                                            plVar15 = *(long **)(this + 0xc0);
                                                            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                              FUN_009d64e4();
                                                            }
                                                            local_c8 = (**(code **)(*plVar15 + 0x30)
                                                                       )(plVar15,local_e8);
                                                          }
                                                          else {
LAB_00c98864:
                                                            puVar5 = P_MarginDown;
                                                            sVar13 = strlen(P_MarginDown);
                                                            if (sVar13 == sVar2) {
                                                              if (sVar2 != 0) {
                                                                if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                                  std::__ndk1::
                                                                  __basic_string_common<true>::
                                                                  __throw_out_of_range();
                                                                }
                                                                pvVar3 = pvVar17;
                                                                if ((uVar19 & 1) != 0) {
                                                                  pvVar3 = local_b0;
                                                                }
                                                                iVar9 = memcmp(pvVar3,puVar5,sVar2);
                                                                if (iVar9 != 0)
                                                                goto joined_r0x00c989e0;
                                                              }
                                                              plVar15 = *(long **)(this + 0xc0);
                                                              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                                FUN_009d64e4();
                                                              }
                                                              local_c4 = (**(code **)(*plVar15 +
                                                                                     0x30))(plVar15,
                                                  local_e8);
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
joined_r0x00c989e0:
                                            if (((byte)local_e8[0] & 1) != 0) {
                                              operator_delete(local_d8);
                                            }
                                            if ((local_c0 & 1) != 0) {
                                              operator_delete(local_b0);
                                            }
                                            this_01 = this_01 + 0x10;
                                          }
                                          cocos2d::ui::LayoutParameter::setMargin
                                                    ((LayoutParameter *)this_02,(Margin *)&local_d0)
                                          ;
                                          cocos2d::ui::LayoutParameter::setMargin
                                                    ((LayoutParameter *)this_03,(Margin *)&local_d0)
                                          ;
                                          if (iVar8 == 1) {
                                            cocos2d::ui::Widget::setLayoutParameter
                                                      (param_1,(LayoutParameter *)this_02);
                                          }
                                          else if (iVar8 == 2) {
                                            cocos2d::ui::Widget::setLayoutParameter
                                                      (param_1,(LayoutParameter *)this_03);
                                          }
                                          goto joined_r0x00c98224;
                                        }
LAB_00c97e6c:
                                        puVar5 = P_Opacity;
                                        sVar13 = strlen(P_Opacity);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            piVar1 = piVar16;
                                            if (((byte)bVar6 & 1) != 0) {
                                              piVar1 = local_78;
                                            }
                                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                                            if (iVar8 != 0) goto LAB_00c97eb4;
                                          }
                                          plVar15 = *(long **)(this + 0x60);
                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0)
                                          ;
                                          *(undefined4 *)(this + 0xec) = uVar20;
                                          goto joined_r0x00c98224;
                                        }
LAB_00c97eb4:
                                        puVar5 = P_ColorR;
                                        sVar13 = strlen(P_ColorR);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            piVar1 = piVar16;
                                            if (((byte)bVar6 & 1) != 0) {
                                              piVar1 = local_78;
                                            }
                                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                                            if (iVar8 != 0) goto LAB_00c97efc;
                                          }
                                          plVar15 = *(long **)(this + 0x60);
                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          TVar7 = (TextBMFontReader)
                                                  (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                                          this[0xe8] = TVar7;
                                          goto joined_r0x00c98224;
                                        }
LAB_00c97efc:
                                        puVar5 = P_ColorG;
                                        sVar13 = strlen(P_ColorG);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            piVar1 = piVar16;
                                            if (((byte)bVar6 & 1) != 0) {
                                              piVar1 = local_78;
                                            }
                                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                                            if (iVar8 != 0) goto LAB_00c97f44;
                                          }
                                          plVar15 = *(long **)(this + 0x60);
                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          TVar7 = (TextBMFontReader)
                                                  (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                                          this[0xe9] = TVar7;
                                          goto joined_r0x00c98224;
                                        }
LAB_00c97f44:
                                        puVar5 = P_ColorB;
                                        sVar13 = strlen(P_ColorB);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            piVar1 = piVar16;
                                            if (((byte)bVar6 & 1) != 0) {
                                              piVar1 = local_78;
                                            }
                                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                                            if (iVar8 != 0) goto LAB_00c97f8c;
                                          }
                                          plVar15 = *(long **)(this + 0x60);
                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          TVar7 = (TextBMFontReader)
                                                  (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                                          this[0xea] = TVar7;
                                          goto joined_r0x00c98224;
                                        }
LAB_00c97f8c:
                                        puVar5 = P_FlipX;
                                        sVar13 = strlen(P_FlipX);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            piVar1 = piVar16;
                                            if (((byte)bVar6 & 1) != 0) {
                                              piVar1 = local_78;
                                            }
                                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                                            if (iVar8 != 0) goto LAB_00c97fd4;
                                          }
                                          plVar15 = *(long **)(this + 0x90);
                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          uVar10 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0)
                                          ;
                                          (**(code **)(*(long *)param_1 + 0x598))
                                                    (param_1,uVar10 & 1);
                                          goto joined_r0x00c98224;
                                        }
LAB_00c97fd4:
                                        puVar5 = P_FlipY;
                                        sVar13 = strlen(P_FlipY);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            piVar1 = piVar16;
                                            if (((byte)bVar6 & 1) != 0) {
                                              piVar1 = local_78;
                                            }
                                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                                            if (iVar8 != 0) goto LAB_00c9801c;
                                          }
                                          plVar15 = *(long **)(this + 0x90);
                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          uVar10 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0)
                                          ;
                                          (**(code **)(*(long *)param_1 + 0x5a8))
                                                    (param_1,uVar10 & 1);
                                          goto joined_r0x00c98224;
                                        }
LAB_00c9801c:
                                        puVar5 = P_AnchorPointX;
                                        sVar13 = strlen(P_AnchorPointX);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            piVar1 = piVar16;
                                            if (((byte)bVar6 & 1) != 0) {
                                              piVar1 = local_78;
                                            }
                                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                                            if (iVar8 != 0) goto LAB_00c98064;
                                          }
                                          plVar15 = *(long **)(this + 0xc0);
                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0)
                                          ;
                                          *(undefined4 *)(this + 0xfc) = uVar20;
                                          goto joined_r0x00c98224;
                                        }
LAB_00c98064:
                                        puVar5 = P_AnchorPointY;
                                        sVar13 = strlen(P_AnchorPointY);
                                        if (sVar13 == sVar2) {
                                          if (sVar2 != 0) {
                                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            piVar1 = piVar16;
                                            if (((byte)bVar6 & 1) != 0) {
                                              piVar1 = local_78;
                                            }
                                            iVar8 = memcmp(piVar1,puVar5,sVar2);
                                            if (iVar8 != 0) goto LAB_00c980ac;
                                          }
                                          plVar15 = *(long **)(this + 0xc0);
                                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          uVar20 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0)
                                          ;
                                          *(undefined4 *)(this + 0x100) = uVar20;
                                          goto joined_r0x00c98224;
                                        }
LAB_00c980ac:
                                        if (sVar2 == 4) {
                                          piVar1 = piVar16;
                                          if (((byte)bVar6 & 1) != 0) {
                                            piVar1 = local_78;
                                          }
                                          if (*piVar1 == 0x74786574) {
                                            cocos2d::ui::TextBMFont::setString
                                                      ((TextBMFont *)param_1,
                                                       (basic_string *)&local_a0);
                                          }
                                          goto joined_r0x00c98224;
                                        }
                                        if (sVar2 != 0xc) goto joined_r0x00c98224;
                                        piVar1 = piVar16;
                                        if (((byte)bVar6 & 1) != 0) {
                                          piVar1 = local_78;
                                        }
                                        iVar8 = memcmp(piVar1,"fileNameData",0xc);
                                        if (iVar8 != 0) goto joined_r0x00c98224;
                                        lVar14 = stExpCocoNode::GetChildArray(this_00,param_2);
                                        pcVar12 = (char *)stExpCocoNode::GetValue
                                                                    ((stExpCocoNode *)
                                                                     (lVar14 + 0x20),param_2);
                                        std::__ndk1::
                                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                        ::basic_string<decltype(nullptr)>
                                                  ((
                                                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                                  *)&local_c0,pcVar12);
                                        plVar15 = *(long **)(this + 0x60);
                                        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_009d64e4();
                                        }
                                        iVar8 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_c0);
                                        WidgetReader::getResourcePath
                                                  (local_e8,this,param_2,this_00,iVar8);
                                        if (iVar8 == 0) {
                                          cocos2d::ui::TextBMFont::setFntFile
                                                    ((TextBMFont *)param_1,local_e8);
                                        }
                                        if (((byte)local_e8[0] & 1) != 0) {
                                          operator_delete(local_d8);
                                        }
                                        goto joined_r0x00c9815c;
                                      }
                                      if (sVar2 != 0) {
                                        if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                          std::__ndk1::__basic_string_common<true>::
                                          __throw_out_of_range();
                                        }
                                        piVar1 = piVar16;
                                        if (((byte)bVar6 & 1) != 0) {
                                          piVar1 = local_78;
                                        }
                                        iVar8 = memcmp(piVar1,puVar5,sVar2);
                                        if (iVar8 != 0) goto LAB_00c97d4c;
                                      }
                                      plVar15 = *(long **)(this + 0xc0);
                                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_009d64e4();
                                      }
                                      (**(code **)(*plVar15 + 0x30))(plVar15,&local_a0);
                                      (**(code **)(*(long *)param_1 + 0x60))(param_1);
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
            }
          }
        }
      }
joined_r0x00c98224:
      if (((byte)local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      lVar18 = lVar18 + 1;
      iVar8 = stExpCocoNode::GetChildNum(param_3);
    } while (lVar18 < iVar8);
  }
  WidgetReader::endSetBasicProperties((WidgetReader *)this,param_1);
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

