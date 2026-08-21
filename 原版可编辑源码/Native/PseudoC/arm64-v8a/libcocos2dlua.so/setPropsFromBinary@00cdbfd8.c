
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::WidgetReader::setPropsFromBinary(cocos2d::ui::Widget*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::WidgetReader::setPropsFromBinary
          (WidgetReader *this,Widget *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  stExpCocoNode *this_00;
  size_t sVar1;
  void *pvVar2;
  long lVar3;
  undefined *puVar4;
  ulong __n;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  undefined8 *puVar11;
  char *pcVar12;
  size_t sVar13;
  stExpCocoNode *this_01;
  LinearLayoutParameter *this_02;
  RelativeLayoutParameter *this_03;
  long *plVar14;
  void *__dest;
  void *pvVar15;
  void *pvVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_e8 [16];
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
  ushort local_88;
  WidgetReader local_86;
  size_t local_80;
  void *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  lVar10 = stExpCocoNode::GetChildArray(param_3,param_2);
  puVar11 = (undefined8 *)(**(code **)(*(long *)param_1 + 0xb0))(param_1);
  *(undefined8 *)(this + 0xf0) = *puVar11;
  cocos2d::Color3B::Color3B((Color3B *)&local_88,0xff,0xff,0xff);
  *(ushort *)(this + 0xe8) = local_88;
  this[0xea] = local_86;
  (**(code **)(*(long *)param_1 + 0x4c0))(param_1,this + 0xe8);
  uVar6 = (**(code **)(*(long *)param_1 + 0x480))(param_1);
  *(uint *)(this + 0xec) = uVar6 & 0xff;
  puVar11 = (undefined8 *)(**(code **)(*(long *)param_1 + 0x150))(param_1);
  *(undefined8 *)(this + 0xfc) = *puVar11;
  iVar7 = stExpCocoNode::GetChildNum(param_3);
  if (0 < iVar7) {
    pvVar15 = (void *)((ulong)&local_88 | 1);
    lVar17 = 0;
    pvVar16 = (void *)((ulong)&local_c0 | 1);
    do {
      this_00 = (stExpCocoNode *)(lVar10 + lVar17 * 0x10);
      pcVar12 = (char *)stExpCocoNode::GetName(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_88,pcVar12);
      pcVar12 = (char *)stExpCocoNode::GetValue(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_a0,pcVar12);
      puVar4 = P_IgnoreSize;
      sVar13 = strlen(P_IgnoreSize);
      uVar5 = local_88;
      sVar1 = (ulong)((byte)local_88._0_1_ >> 1);
      if ((local_88 & 1) != 0) {
        sVar1 = local_80;
      }
      if (sVar13 == sVar1) {
        if (sVar13 != 0) {
          if (sVar13 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar2 = pvVar15;
          if ((local_88 & 1) != 0) {
            pvVar2 = local_78;
          }
          iVar7 = memcmp(pvVar2,puVar4,sVar13);
          if (iVar7 != 0) goto LAB_00cdc180;
        }
        plVar14 = *(long **)(this + 0x90);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar6 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
        (**(code **)(*(long *)param_1 + 0x600))(param_1,uVar6 & 1);
      }
      else {
LAB_00cdc180:
        puVar4 = P_SizeType;
        sVar13 = strlen(P_SizeType);
        if (sVar13 == sVar1) {
          if (sVar1 != 0) {
            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            pvVar2 = pvVar15;
            if ((uVar5 & 1) != 0) {
              pvVar2 = local_78;
            }
            iVar7 = memcmp(pvVar2,puVar4,sVar1);
            if (iVar7 != 0) goto LAB_00cdc1c8;
          }
          plVar14 = *(long **)(this + 0x60);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
          cocos2d::ui::Widget::setSizeType(param_1,uVar9);
        }
        else {
LAB_00cdc1c8:
          puVar4 = P_PositionType;
          sVar13 = strlen(P_PositionType);
          if (sVar13 == sVar1) {
            if (sVar1 != 0) {
              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              pvVar2 = pvVar15;
              if ((uVar5 & 1) != 0) {
                pvVar2 = local_78;
              }
              iVar7 = memcmp(pvVar2,puVar4,sVar1);
              if (iVar7 != 0) goto LAB_00cdc210;
            }
            plVar14 = *(long **)(this + 0x60);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            uVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
            cocos2d::ui::Widget::setPositionType(param_1,uVar9);
          }
          else {
LAB_00cdc210:
            puVar4 = P_SizePercentX;
            sVar13 = strlen(P_SizePercentX);
            if (sVar13 == sVar1) {
              if (sVar1 != 0) {
                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                pvVar2 = pvVar15;
                if ((uVar5 & 1) != 0) {
                  pvVar2 = local_78;
                }
                iVar7 = memcmp(pvVar2,puVar4,sVar1);
                if (iVar7 != 0) goto LAB_00cdc258;
              }
              plVar14 = *(long **)(this + 0xc0);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
              *(undefined4 *)(this + 0xd0) = uVar9;
            }
            else {
LAB_00cdc258:
              puVar4 = P_SizePercentY;
              sVar13 = strlen(P_SizePercentY);
              if (sVar13 == sVar1) {
                if (sVar1 != 0) {
                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  pvVar2 = pvVar15;
                  if ((uVar5 & 1) != 0) {
                    pvVar2 = local_78;
                  }
                  iVar7 = memcmp(pvVar2,puVar4,sVar1);
                  if (iVar7 != 0) goto LAB_00cdc2a0;
                }
                plVar14 = *(long **)(this + 0xc0);
                if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_009d64e4();
                }
                uVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                *(undefined4 *)(this + 0xd4) = uVar9;
              }
              else {
LAB_00cdc2a0:
                puVar4 = P_PositionPercentX;
                sVar13 = strlen(P_PositionPercentX);
                if (sVar13 == sVar1) {
                  if (sVar1 != 0) {
                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    pvVar2 = pvVar15;
                    if ((uVar5 & 1) != 0) {
                      pvVar2 = local_78;
                    }
                    iVar7 = memcmp(pvVar2,puVar4,sVar1);
                    if (iVar7 != 0) goto LAB_00cdc2e8;
                  }
                  plVar14 = *(long **)(this + 0xc0);
                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_009d64e4();
                  }
                  uVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                  *(undefined4 *)(this + 0xd8) = uVar9;
                }
                else {
LAB_00cdc2e8:
                  puVar4 = P_PositionPercentY;
                  sVar13 = strlen(P_PositionPercentY);
                  if (sVar13 == sVar1) {
                    if (sVar1 != 0) {
                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      pvVar2 = pvVar15;
                      if ((uVar5 & 1) != 0) {
                        pvVar2 = local_78;
                      }
                      iVar7 = memcmp(pvVar2,puVar4,sVar1);
                      if (iVar7 != 0) goto LAB_00cdc330;
                    }
                    plVar14 = *(long **)(this + 0xc0);
                    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_009d64e4();
                    }
                    uVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                    *(undefined4 *)(this + 0xdc) = uVar9;
                  }
                  else {
LAB_00cdc330:
                    puVar4 = P_Width;
                    sVar13 = strlen(P_Width);
                    if (sVar13 == sVar1) {
                      if (sVar1 != 0) {
                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar2 = pvVar15;
                        if ((uVar5 & 1) != 0) {
                          pvVar2 = local_78;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00cdc378;
                      }
                      plVar14 = *(long **)(this + 0xc0);
                      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                      *(undefined4 *)(this + 0xe0) = uVar9;
                    }
                    else {
LAB_00cdc378:
                      puVar4 = P_Height;
                      sVar13 = strlen(P_Height);
                      if (sVar13 == sVar1) {
                        if (sVar1 != 0) {
                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar2 = pvVar15;
                          if ((uVar5 & 1) != 0) {
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00cdc3c0;
                        }
                        plVar14 = *(long **)(this + 0xc0);
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                        *(undefined4 *)(this + 0xe4) = uVar9;
                      }
                      else {
LAB_00cdc3c0:
                        puVar4 = P_Tag;
                        sVar13 = strlen(P_Tag);
                        if (sVar13 == sVar1) {
                          if (sVar1 != 0) {
                            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                            }
                            pvVar2 = pvVar15;
                            if ((uVar5 & 1) != 0) {
                              pvVar2 = local_78;
                            }
                            iVar7 = memcmp(pvVar2,puVar4,sVar1);
                            if (iVar7 != 0) goto LAB_00cdc408;
                          }
                          plVar14 = *(long **)(this + 0x60);
                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                          (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar9);
                        }
                        else {
LAB_00cdc408:
                          puVar4 = P_ActionTag;
                          sVar13 = strlen(P_ActionTag);
                          if (sVar13 == sVar1) {
                            if (sVar1 != 0) {
                              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                              }
                              pvVar2 = pvVar15;
                              if ((uVar5 & 1) != 0) {
                                pvVar2 = local_78;
                              }
                              iVar7 = memcmp(pvVar2,puVar4,sVar1);
                              if (iVar7 != 0) goto LAB_00cdc450;
                            }
                            plVar14 = *(long **)(this + 0x60);
                            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            iVar7 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                            cocos2d::ui::Widget::setActionTag(param_1,iVar7);
                          }
                          else {
LAB_00cdc450:
                            puVar4 = P_TouchAble;
                            sVar13 = strlen(P_TouchAble);
                            if (sVar13 == sVar1) {
                              if (sVar1 != 0) {
                                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                                }
                                pvVar2 = pvVar15;
                                if ((uVar5 & 1) != 0) {
                                  pvVar2 = local_78;
                                }
                                iVar7 = memcmp(pvVar2,puVar4,sVar1);
                                if (iVar7 != 0) goto LAB_00cdc498;
                              }
                              plVar14 = *(long **)(this + 0x90);
                              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_009d64e4();
                              }
                              uVar6 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                              (**(code **)(*(long *)param_1 + 0x588))(param_1,uVar6 & 1);
                            }
                            else {
LAB_00cdc498:
                              puVar4 = P_Name;
                              sVar13 = strlen(P_Name);
                              if (sVar13 == sVar1) {
                                if (sVar1 != 0) {
                                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
                                    ;
                                  }
                                  pvVar2 = pvVar15;
                                  if ((uVar5 & 1) != 0) {
                                    pvVar2 = local_78;
                                  }
                                  iVar7 = memcmp(pvVar2,puVar4,sVar1);
                                  if (iVar7 != 0) goto LAB_00cdc4e0;
                                }
                                pvVar2 = local_90;
                                __n = uStack_98;
                                uVar18 = (ulong)((byte)local_a0 >> 1);
                                if (((byte)local_a0 & 1) != 0) {
                                  uVar18 = uStack_98;
                                }
                                if (uVar18 == 0) {
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
                                      __dest = pvVar16;
                                      if (uStack_98 != 0) goto LAB_00cdcf1c;
                                    }
                                    else {
                                      uVar18 = uStack_98 + 0x10 & 0xfffffffffffffff0;
                                      __dest = operator_new(uVar18);
                                      local_c0 = uVar18 | 1;
                                      sStack_b8 = __n;
                                      local_b0 = __dest;
LAB_00cdcf1c:
                                      memcpy(__dest,pvVar2,__n);
                                    }
                                    *(undefined1 *)((long)__dest + __n) = 0;
                                  }
                                }
                                (**(code **)(*(long *)param_1 + 0x2d0))(param_1,&local_c0);
                                if ((local_c0 & 1) != 0) {
                                  operator_delete(local_b0);
                                }
                              }
                              else {
LAB_00cdc4e0:
                                puVar4 = P_X;
                                sVar13 = strlen(P_X);
                                if (sVar13 == sVar1) {
                                  if (sVar1 != 0) {
                                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range
                                                ();
                                    }
                                    pvVar2 = pvVar15;
                                    if ((uVar5 & 1) != 0) {
                                      pvVar2 = local_78;
                                    }
                                    iVar7 = memcmp(pvVar2,puVar4,sVar1);
                                    if (iVar7 != 0) goto LAB_00cdc528;
                                  }
                                  plVar14 = *(long **)(this + 0xc0);
                                  if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_009d64e4();
                                  }
                                  uVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                                  *(undefined4 *)(this + 0xf0) = uVar9;
                                }
                                else {
LAB_00cdc528:
                                  puVar4 = P_Y;
                                  sVar13 = strlen(P_Y);
                                  if (sVar13 == sVar1) {
                                    if (sVar1 != 0) {
                                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                        std::__ndk1::__basic_string_common<true>::
                                        __throw_out_of_range();
                                      }
                                      pvVar2 = pvVar15;
                                      if ((uVar5 & 1) != 0) {
                                        pvVar2 = local_78;
                                      }
                                      iVar7 = memcmp(pvVar2,puVar4,sVar1);
                                      if (iVar7 != 0) goto LAB_00cdc570;
                                    }
                                    plVar14 = *(long **)(this + 0xc0);
                                    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_009d64e4();
                                    }
                                    uVar9 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                                    *(undefined4 *)(this + 0xf4) = uVar9;
                                  }
                                  else {
LAB_00cdc570:
                                    puVar4 = P_ScaleX;
                                    sVar13 = strlen(P_ScaleX);
                                    if (sVar13 == sVar1) {
                                      if (sVar1 != 0) {
                                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                          std::__ndk1::__basic_string_common<true>::
                                          __throw_out_of_range();
                                        }
                                        pvVar2 = pvVar15;
                                        if ((uVar5 & 1) != 0) {
                                          pvVar2 = local_78;
                                        }
                                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                                        if (iVar7 != 0) goto LAB_00cdc5b8;
                                      }
                                      plVar14 = *(long **)(this + 0xc0);
                                      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_009d64e4();
                                      }
                                      (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                                      (**(code **)(*(long *)param_1 + 0x50))(param_1);
                                    }
                                    else {
LAB_00cdc5b8:
                                      puVar4 = P_ScaleY;
                                      sVar13 = strlen(P_ScaleY);
                                      if (sVar13 == sVar1) {
                                        if (sVar1 != 0) {
                                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                            std::__ndk1::__basic_string_common<true>::
                                            __throw_out_of_range();
                                          }
                                          pvVar2 = pvVar15;
                                          if ((uVar5 & 1) != 0) {
                                            pvVar2 = local_78;
                                          }
                                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                                          if (iVar7 != 0) goto LAB_00cdc600;
                                        }
                                        plVar14 = *(long **)(this + 0xc0);
                                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_009d64e4();
                                        }
                                        (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                                        (**(code **)(*(long *)param_1 + 0x60))(param_1);
                                      }
                                      else {
LAB_00cdc600:
                                        puVar4 = P_Rotation;
                                        sVar13 = strlen(P_Rotation);
                                        if (sVar13 == sVar1) {
                                          if (sVar1 != 0) {
                                            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            pvVar2 = pvVar15;
                                            if ((uVar5 & 1) != 0) {
                                              pvVar2 = local_78;
                                            }
                                            iVar7 = memcmp(pvVar2,puVar4,sVar1);
                                            if (iVar7 != 0) goto LAB_00cdc648;
                                          }
                                          plVar14 = *(long **)(this + 0xc0);
                                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          (**(code **)(*plVar14 + 0x30))(plVar14,&local_a0);
                                          (**(code **)(*(long *)param_1 + 0x180))(param_1);
                                        }
                                        else {
LAB_00cdc648:
                                          puVar4 = P_Visbile;
                                          sVar13 = strlen(P_Visbile);
                                          if (sVar13 == sVar1) {
                                            if (sVar1 != 0) {
                                              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                std::__ndk1::__basic_string_common<true>::
                                                __throw_out_of_range();
                                              }
                                              pvVar2 = pvVar15;
                                              if ((uVar5 & 1) != 0) {
                                                pvVar2 = local_78;
                                              }
                                              iVar7 = memcmp(pvVar2,puVar4,sVar1);
                                              if (iVar7 != 0) goto LAB_00cdc690;
                                            }
                                            plVar14 = *(long **)(this + 0x90);
                                            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_009d64e4();
                                            }
                                            uVar6 = (**(code **)(*plVar14 + 0x30))
                                                              (plVar14,&local_a0);
                                            (**(code **)(*(long *)param_1 + 0x170))
                                                      (param_1,uVar6 & 1);
                                          }
                                          else {
LAB_00cdc690:
                                            puVar4 = P_ZOrder;
                                            sVar13 = strlen(P_ZOrder);
                                            if (sVar13 == sVar1) {
                                              if (sVar1 != 0) {
                                                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                  std::__ndk1::__basic_string_common<true>::
                                                  __throw_out_of_range();
                                                }
                                                pvVar2 = pvVar15;
                                                if ((uVar5 & 1) != 0) {
                                                  pvVar2 = local_78;
                                                }
                                                iVar7 = memcmp(pvVar2,puVar4,sVar1);
                                                if (iVar7 != 0) goto LAB_00cdc6d8;
                                              }
                                              plVar14 = *(long **)(this + 0x60);
                                              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                FUN_009d64e4();
                                              }
                                              uVar9 = (**(code **)(*plVar14 + 0x30))
                                                                (plVar14,&local_a0);
                                              (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar9);
                                            }
                                            else {
LAB_00cdc6d8:
                                              puVar4 = P_LayoutParameter;
                                              sVar13 = strlen(P_LayoutParameter);
                                              if (sVar13 == sVar1) {
                                                if (sVar1 != 0) {
                                                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                    std::__ndk1::__basic_string_common<true>::
                                                    __throw_out_of_range();
                                                  }
                                                  pvVar2 = pvVar15;
                                                  if ((uVar5 & 1) != 0) {
                                                    pvVar2 = local_78;
                                                  }
                                                  iVar7 = memcmp(pvVar2,puVar4,sVar1);
                                                  if (iVar7 != 0) goto joined_r0x00cdc7f4;
                                                }
                                                this_01 = (stExpCocoNode *)
                                                          stExpCocoNode::GetChildArray
                                                                    (this_00,param_2);
                                                this_02 = (LinearLayoutParameter *)
                                                          cocos2d::ui::LinearLayoutParameter::create
                                                                    ();
                                                this_03 = (RelativeLayoutParameter *)
                                                          cocos2d::ui::RelativeLayoutParameter::
                                                          create();
                                                cocos2d::ui::Margin::Margin((Margin *)&local_d0);
                                                iVar7 = -1;
                                                for (lVar19 = 0;
                                                    iVar8 = stExpCocoNode::GetChildNum(this_00),
                                                    lVar19 < iVar8; lVar19 = lVar19 + 1) {
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
                                                            (local_e8,pcVar12);
                                                  puVar4 = P_Type;
                                                  sVar13 = strlen(P_Type);
                                                  uVar18 = local_c0;
                                                  sVar1 = local_c0 >> 1 & 0x7f;
                                                  if ((local_c0 & 1) != 0) {
                                                    sVar1 = sStack_b8;
                                                  }
                                                  if (sVar13 == sVar1) {
                                                    if (sVar13 != 0) {
                                                      if (sVar13 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                        std::__ndk1::__basic_string_common<true>::
                                                        __throw_out_of_range();
                                                      }
                                                      pvVar2 = pvVar16;
                                                      if ((local_c0 & 1) != 0) {
                                                        pvVar2 = local_b0;
                                                      }
                                                      iVar8 = memcmp(pvVar2,puVar4,sVar13);
                                                      if (iVar8 != 0) goto LAB_00cdc9f8;
                                                    }
                                                    plVar14 = *(long **)(this + 0x60);
                                                    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                      FUN_009d64e4();
                                                    }
                                                    iVar7 = (**(code **)(*plVar14 + 0x30))
                                                                      (plVar14,local_e8);
                                                  }
                                                  else {
LAB_00cdc9f8:
                                                    puVar4 = P_Gravity;
                                                    sVar13 = strlen(P_Gravity);
                                                    if (sVar13 == sVar1) {
                                                      if (sVar1 != 0) {
                                                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                          std::__ndk1::__basic_string_common<true>::
                                                          __throw_out_of_range();
                                                        }
                                                        pvVar2 = pvVar16;
                                                        if ((uVar18 & 1) != 0) {
                                                          pvVar2 = local_b0;
                                                        }
                                                        iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                                        if (iVar8 != 0) goto LAB_00cdca40;
                                                      }
                                                      plVar14 = *(long **)(this + 0x60);
                                                      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_009d64e4();
                                                      }
                                                      uVar9 = (**(code **)(*plVar14 + 0x30))
                                                                        (plVar14,local_e8);
                                                      cocos2d::ui::LinearLayoutParameter::setGravity
                                                                (this_02,uVar9);
                                                    }
                                                    else {
LAB_00cdca40:
                                                      puVar4 = P_RelativeName;
                                                      sVar13 = strlen(P_RelativeName);
                                                      if (sVar13 == sVar1) {
                                                        if (sVar1 != 0) {
                                                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                            std::__ndk1::__basic_string_common<true>
                                                            ::__throw_out_of_range();
                                                          }
                                                          pvVar2 = pvVar16;
                                                          if ((uVar18 & 1) != 0) {
                                                            pvVar2 = local_b0;
                                                          }
                                                          iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                                          if (iVar8 != 0) goto LAB_00cdca88;
                                                        }
                                                        cocos2d::ui::RelativeLayoutParameter::
                                                        setRelativeName(this_03,(basic_string *)
                                                                                local_e8);
                                                      }
                                                      else {
LAB_00cdca88:
                                                        puVar4 = P_RelativeToName;
                                                        sVar13 = strlen(P_RelativeToName);
                                                        if (sVar13 == sVar1) {
                                                          if (sVar1 != 0) {
                                                            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                              std::__ndk1::
                                                              __basic_string_common<true>::
                                                              __throw_out_of_range();
                                                            }
                                                            pvVar2 = pvVar16;
                                                            if ((uVar18 & 1) != 0) {
                                                              pvVar2 = local_b0;
                                                            }
                                                            iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                                            if (iVar8 != 0) goto LAB_00cdcad0;
                                                          }
                                                          cocos2d::ui::RelativeLayoutParameter::
                                                          setRelativeToWidgetName
                                                                    (this_03,(basic_string *)
                                                                             local_e8);
                                                        }
                                                        else {
LAB_00cdcad0:
                                                          puVar4 = P_Align;
                                                          sVar13 = strlen(P_Align);
                                                          if (sVar13 == sVar1) {
                                                            if (sVar1 != 0) {
                                                              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                                std::__ndk1::
                                                                __basic_string_common<true>::
                                                                __throw_out_of_range();
                                                              }
                                                              pvVar2 = pvVar16;
                                                              if ((uVar18 & 1) != 0) {
                                                                pvVar2 = local_b0;
                                                              }
                                                              iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                                              if (iVar8 != 0) goto LAB_00cdcb18;
                                                            }
                                                            plVar14 = *(long **)(this + 0x60);
                                                            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                              FUN_009d64e4();
                                                            }
                                                            uVar9 = (**(code **)(*plVar14 + 0x30))
                                                                              (plVar14,local_e8);
                                                            cocos2d::ui::RelativeLayoutParameter::
                                                            setAlign(this_03,uVar9);
                                                          }
                                                          else {
LAB_00cdcb18:
                                                            puVar4 = P_MarginLeft;
                                                            sVar13 = strlen(P_MarginLeft);
                                                            if (sVar13 == sVar1) {
                                                              if (sVar1 != 0) {
                                                                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                                  std::__ndk1::
                                                                  __basic_string_common<true>::
                                                                  __throw_out_of_range();
                                                                }
                                                                pvVar2 = pvVar16;
                                                                if ((uVar18 & 1) != 0) {
                                                                  pvVar2 = local_b0;
                                                                }
                                                                iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                                                if (iVar8 != 0) goto LAB_00cdcb60;
                                                              }
                                                              plVar14 = *(long **)(this + 0xc0);
                                                              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                                FUN_009d64e4();
                                                              }
                                                              local_d0 = (**(code **)(*plVar14 +
                                                                                     0x30))(plVar14,
                                                  local_e8);
                                                  }
                                                  else {
LAB_00cdcb60:
                                                    puVar4 = P_MarginTop;
                                                    sVar13 = strlen(P_MarginTop);
                                                    if (sVar13 == sVar1) {
                                                      if (sVar1 != 0) {
                                                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                          std::__ndk1::__basic_string_common<true>::
                                                          __throw_out_of_range();
                                                        }
                                                        pvVar2 = pvVar16;
                                                        if ((uVar18 & 1) != 0) {
                                                          pvVar2 = local_b0;
                                                        }
                                                        iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                                        if (iVar8 != 0) goto LAB_00cdcba8;
                                                      }
                                                      plVar14 = *(long **)(this + 0xc0);
                                                      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                        FUN_009d64e4();
                                                      }
                                                      local_cc = (**(code **)(*plVar14 + 0x30))
                                                                           (plVar14,local_e8);
                                                    }
                                                    else {
LAB_00cdcba8:
                                                      puVar4 = P_MarginRight;
                                                      sVar13 = strlen(P_MarginRight);
                                                      if (sVar13 == sVar1) {
                                                        if (sVar1 != 0) {
                                                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                            std::__ndk1::__basic_string_common<true>
                                                            ::__throw_out_of_range();
                                                          }
                                                          pvVar2 = pvVar16;
                                                          if ((uVar18 & 1) != 0) {
                                                            pvVar2 = local_b0;
                                                          }
                                                          iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                                          if (iVar8 != 0) goto LAB_00cdcbf0;
                                                        }
                                                        plVar14 = *(long **)(this + 0xc0);
                                                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                          FUN_009d64e4();
                                                        }
                                                        local_c8 = (**(code **)(*plVar14 + 0x30))
                                                                             (plVar14,local_e8);
                                                      }
                                                      else {
LAB_00cdcbf0:
                                                        puVar4 = P_MarginDown;
                                                        sVar13 = strlen(P_MarginDown);
                                                        if (sVar13 == sVar1) {
                                                          if (sVar1 != 0) {
                                                            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                              std::__ndk1::
                                                              __basic_string_common<true>::
                                                              __throw_out_of_range();
                                                            }
                                                            pvVar2 = pvVar16;
                                                            if ((uVar18 & 1) != 0) {
                                                              pvVar2 = local_b0;
                                                            }
                                                            iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                                            if (iVar8 != 0) goto joined_r0x00cdcd30;
                                                          }
                                                          plVar14 = *(long **)(this + 0xc0);
                                                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                                            FUN_009d64e4();
                                                          }
                                                          local_c4 = (**(code **)(*plVar14 + 0x30))
                                                                               (plVar14,local_e8);
                                                        }
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
joined_r0x00cdcd30:
                                                  if (((byte)local_e8[0] & 1) != 0) {
                                                    operator_delete(local_d8);
                                                  }
                                                  if ((local_c0 & 1) != 0) {
                                                    operator_delete(local_b0);
                                                  }
                                                  this_01 = this_01 + 0x10;
                                                }
                                                cocos2d::ui::LayoutParameter::setMargin
                                                          ((LayoutParameter *)this_02,
                                                           (Margin *)&local_d0);
                                                cocos2d::ui::LayoutParameter::setMargin
                                                          ((LayoutParameter *)this_03,
                                                           (Margin *)&local_d0);
                                                if (iVar7 == 1) {
                                                  cocos2d::ui::Widget::setLayoutParameter
                                                            (param_1,(LayoutParameter *)this_02);
                                                }
                                                else if (iVar7 == 2) {
                                                  cocos2d::ui::Widget::setLayoutParameter
                                                            (param_1,(LayoutParameter *)this_03);
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
                }
              }
            }
          }
        }
      }
joined_r0x00cdc7f4:
      if (((byte)local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      lVar17 = lVar17 + 1;
      iVar7 = stExpCocoNode::GetChildNum(param_3);
    } while (lVar17 < iVar7);
  }
  endSetBasicProperties(this,param_1);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

