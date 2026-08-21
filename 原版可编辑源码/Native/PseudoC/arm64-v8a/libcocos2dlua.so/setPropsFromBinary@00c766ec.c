
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::CheckBoxReader::setPropsFromBinary(cocos2d::ui::Widget*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::CheckBoxReader::setPropsFromBinary
          (CheckBoxReader *this,Widget *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  stExpCocoNode *this_00;
  size_t sVar1;
  void *pvVar2;
  long lVar3;
  undefined *puVar4;
  ulong __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar5;
  CheckBoxReader CVar6;
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
  void *pvVar14;
  void *pvVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined4 uVar19;
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
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  size_t local_80;
  void *local_78;
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  WidgetReader::beginSetBasicProperties((WidgetReader *)this,param_1);
  lVar10 = stExpCocoNode::GetChildArray(param_3,param_2);
  iVar7 = stExpCocoNode::GetChildNum(param_3);
  if (0 < iVar7) {
    pvVar14 = (void *)((ulong)local_88 | 1);
    lVar16 = 0;
    pvVar15 = (void *)((ulong)&local_c0 | 1);
    do {
      this_00 = (stExpCocoNode *)(lVar10 + lVar16 * 0x10);
      pcVar11 = (char *)stExpCocoNode::GetName(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_88,pcVar11);
      pcVar11 = (char *)stExpCocoNode::GetValue(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_a0,pcVar11);
      puVar4 = P_IgnoreSize;
      sVar12 = strlen(P_IgnoreSize);
      bVar5 = local_88[0];
      sVar1 = (ulong)((byte)local_88[0] >> 1);
      if (((byte)local_88[0] & 1) != 0) {
        sVar1 = local_80;
      }
      if (sVar12 == sVar1) {
        if (sVar12 != 0) {
          if (sVar12 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar2 = pvVar14;
          if (((byte)local_88[0] & 1) != 0) {
            pvVar2 = local_78;
          }
          iVar7 = memcmp(pvVar2,puVar4,sVar12);
          if (iVar7 != 0) goto LAB_00c76818;
        }
        plVar13 = *(long **)(this + 0x90);
        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
        (**(code **)(*(long *)param_1 + 0x600))(param_1,uVar9 & 1);
switchD_00c77018_caseD_f:
      }
      else {
LAB_00c76818:
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
              pvVar2 = local_78;
            }
            iVar7 = memcmp(pvVar2,puVar4,sVar1);
            if (iVar7 != 0) goto LAB_00c76860;
          }
          plVar13 = *(long **)(this + 0x60);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
          cocos2d::ui::Widget::setSizeType(param_1,uVar19);
          goto switchD_00c77018_caseD_f;
        }
LAB_00c76860:
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
              pvVar2 = local_78;
            }
            iVar7 = memcmp(pvVar2,puVar4,sVar1);
            if (iVar7 != 0) goto LAB_00c768a8;
          }
          plVar13 = *(long **)(this + 0x60);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
          cocos2d::ui::Widget::setPositionType(param_1,uVar19);
          goto switchD_00c77018_caseD_f;
        }
LAB_00c768a8:
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
              pvVar2 = local_78;
            }
            iVar7 = memcmp(pvVar2,puVar4,sVar1);
            if (iVar7 != 0) goto LAB_00c768f0;
          }
          plVar13 = *(long **)(this + 0xc0);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
          *(undefined4 *)(this + 0xd0) = uVar19;
        }
        else {
LAB_00c768f0:
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
                pvVar2 = local_78;
              }
              iVar7 = memcmp(pvVar2,puVar4,sVar1);
              if (iVar7 != 0) goto LAB_00c76938;
            }
            plVar13 = *(long **)(this + 0xc0);
            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
            *(undefined4 *)(this + 0xd4) = uVar19;
          }
          else {
LAB_00c76938:
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
                  pvVar2 = local_78;
                }
                iVar7 = memcmp(pvVar2,puVar4,sVar1);
                if (iVar7 != 0) goto LAB_00c76980;
              }
              plVar13 = *(long **)(this + 0xc0);
              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
              *(undefined4 *)(this + 0xd8) = uVar19;
            }
            else {
LAB_00c76980:
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
                    pvVar2 = local_78;
                  }
                  iVar7 = memcmp(pvVar2,puVar4,sVar1);
                  if (iVar7 != 0) goto LAB_00c769c8;
                }
                plVar13 = *(long **)(this + 0xc0);
                if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_009d64e4();
                }
                uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                *(undefined4 *)(this + 0xdc) = uVar19;
              }
              else {
LAB_00c769c8:
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
                      pvVar2 = local_78;
                    }
                    iVar7 = memcmp(pvVar2,puVar4,sVar1);
                    if (iVar7 != 0) goto LAB_00c76a10;
                  }
                  plVar13 = *(long **)(this + 0xc0);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_009d64e4();
                  }
                  uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                  *(undefined4 *)(this + 0xe0) = uVar19;
                }
                else {
LAB_00c76a10:
                  puVar4 = P_Height;
                  sVar12 = strlen(P_Height);
                  if (sVar12 != sVar1) {
LAB_00c76a58:
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
                          pvVar2 = local_78;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c76aa0;
                      }
                      plVar13 = *(long **)(this + 0x60);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                      (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar19);
                      goto switchD_00c77018_caseD_f;
                    }
LAB_00c76aa0:
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
                          pvVar2 = local_78;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c76ae8;
                      }
                      plVar13 = *(long **)(this + 0x60);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      iVar7 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                      cocos2d::ui::Widget::setActionTag(param_1,iVar7);
                      goto switchD_00c77018_caseD_f;
                    }
LAB_00c76ae8:
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
                          pvVar2 = local_78;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c76b30;
                      }
                      plVar13 = *(long **)(this + 0x90);
                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                      (**(code **)(*(long *)param_1 + 0x588))(param_1,uVar9 & 1);
                      goto switchD_00c77018_caseD_f;
                    }
LAB_00c76b30:
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
                          pvVar2 = local_78;
                        }
                        iVar7 = memcmp(pvVar2,puVar4,sVar1);
                        if (iVar7 != 0) goto LAB_00c76b78;
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
                            std::__ndk1::__basic_string_common<true>::__throw_length_error();
                          }
                          if (uStack_98 < 0x17) {
                            local_c0 = (ulong)(byte)((int)uStack_98 << 1);
                            __dest = pvVar15;
                            if (uStack_98 != 0) goto LAB_00c77400;
                          }
                          else {
                            uVar18 = uStack_98 + 0x10 & 0xfffffffffffffff0;
                            __dest = operator_new(uVar18);
                            local_c0 = uVar18 | 1;
                            sStack_b8 = __n;
                            local_b0 = __dest;
LAB_00c77400:
                            memcpy(__dest,pvVar2,__n);
                          }
                          *(undefined1 *)((long)__dest + __n) = 0;
                        }
                      }
                      (**(code **)(*(long *)param_1 + 0x2d0))(param_1,&local_c0);
joined_r0x00c7742c:
                      if ((local_c0 & 1) != 0) {
                        operator_delete(local_b0);
                        goto joined_r0x00c7716c;
                      }
                    }
                    else {
LAB_00c76b78:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76bc0;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        *(undefined4 *)(this + 0xf0) = uVar19;
                        goto joined_r0x00c7716c;
                      }
LAB_00c76bc0:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76c08;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        *(undefined4 *)(this + 0xf4) = uVar19;
                        goto joined_r0x00c7716c;
                      }
LAB_00c76c08:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76c50;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        (**(code **)(*(long *)param_1 + 0x50))(param_1);
                        goto switchD_00c77018_caseD_f;
                      }
LAB_00c76c50:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76c98;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        (**(code **)(*(long *)param_1 + 0x60))(param_1);
                        goto switchD_00c77018_caseD_f;
                      }
LAB_00c76c98:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76ce0;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        (**(code **)(*(long *)param_1 + 0x180))(param_1);
                        goto switchD_00c77018_caseD_f;
                      }
LAB_00c76ce0:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76d28;
                        }
                        plVar13 = *(long **)(this + 0x90);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        (**(code **)(*(long *)param_1 + 0x170))(param_1,uVar9 & 1);
                        goto switchD_00c77018_caseD_f;
                      }
LAB_00c76d28:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76d70;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar19);
                        goto switchD_00c77018_caseD_f;
                      }
LAB_00c76d70:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76db8;
                        }
                        this_01 = (stExpCocoNode *)stExpCocoNode::GetChildArray(this_00,param_2);
                        this_02 = (LinearLayoutParameter *)
                                  cocos2d::ui::LinearLayoutParameter::create();
                        this_03 = (RelativeLayoutParameter *)
                                  cocos2d::ui::RelativeLayoutParameter::create();
                        cocos2d::ui::Margin::Margin((Margin *)&local_d0);
                        iVar7 = -1;
                        for (lVar17 = 0; iVar8 = stExpCocoNode::GetChildNum(this_00), lVar17 < iVar8
                            ; lVar17 = lVar17 + 1) {
                          pcVar11 = (char *)stExpCocoNode::GetName(this_01,param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_c0,pcVar11);
                          pcVar11 = (char *)stExpCocoNode::GetValue(this_01,param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>(local_e8,pcVar11);
                          puVar4 = P_Type;
                          sVar12 = strlen(P_Type);
                          uVar18 = local_c0;
                          sVar1 = local_c0 >> 1 & 0x7f;
                          if ((local_c0 & 1) != 0) {
                            sVar1 = sStack_b8;
                          }
                          if (sVar12 == sVar1) {
                            if (sVar12 != 0) {
                              if (sVar12 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                              }
                              pvVar2 = pvVar15;
                              if ((local_c0 & 1) != 0) {
                                pvVar2 = local_b0;
                              }
                              iVar8 = memcmp(pvVar2,puVar4,sVar12);
                              if (iVar8 != 0) goto LAB_00c775b4;
                            }
                            plVar13 = *(long **)(this + 0x60);
                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            iVar7 = (**(code **)(*plVar13 + 0x30))(plVar13,local_e8);
                          }
                          else {
LAB_00c775b4:
                            puVar4 = P_Gravity;
                            sVar12 = strlen(P_Gravity);
                            if (sVar12 == sVar1) {
                              if (sVar1 != 0) {
                                if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                                }
                                pvVar2 = pvVar15;
                                if ((uVar18 & 1) != 0) {
                                  pvVar2 = local_b0;
                                }
                                iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                if (iVar8 != 0) goto LAB_00c775fc;
                              }
                              plVar13 = *(long **)(this + 0x60);
                              if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_009d64e4();
                              }
                              uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,local_e8);
                              cocos2d::ui::LinearLayoutParameter::setGravity(this_02,uVar19);
                            }
                            else {
LAB_00c775fc:
                              puVar4 = P_RelativeName;
                              sVar12 = strlen(P_RelativeName);
                              if (sVar12 == sVar1) {
                                if (sVar1 != 0) {
                                  if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range()
                                    ;
                                  }
                                  pvVar2 = pvVar15;
                                  if ((uVar18 & 1) != 0) {
                                    pvVar2 = local_b0;
                                  }
                                  iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                  if (iVar8 != 0) goto LAB_00c77644;
                                }
                                cocos2d::ui::RelativeLayoutParameter::setRelativeName
                                          (this_03,(basic_string *)local_e8);
                              }
                              else {
LAB_00c77644:
                                puVar4 = P_RelativeToName;
                                sVar12 = strlen(P_RelativeToName);
                                if (sVar12 == sVar1) {
                                  if (sVar1 != 0) {
                                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range
                                                ();
                                    }
                                    pvVar2 = pvVar15;
                                    if ((uVar18 & 1) != 0) {
                                      pvVar2 = local_b0;
                                    }
                                    iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                    if (iVar8 != 0) goto LAB_00c7768c;
                                  }
                                  cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName
                                            (this_03,(basic_string *)local_e8);
                                }
                                else {
LAB_00c7768c:
                                  puVar4 = P_Align;
                                  sVar12 = strlen(P_Align);
                                  if (sVar12 == sVar1) {
                                    if (sVar1 != 0) {
                                      if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                        std::__ndk1::__basic_string_common<true>::
                                        __throw_out_of_range();
                                      }
                                      pvVar2 = pvVar15;
                                      if ((uVar18 & 1) != 0) {
                                        pvVar2 = local_b0;
                                      }
                                      iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                      if (iVar8 != 0) goto LAB_00c776d4;
                                    }
                                    plVar13 = *(long **)(this + 0x60);
                                    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_009d64e4();
                                    }
                                    uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,local_e8);
                                    cocos2d::ui::RelativeLayoutParameter::setAlign(this_03,uVar19);
                                  }
                                  else {
LAB_00c776d4:
                                    puVar4 = P_MarginLeft;
                                    sVar12 = strlen(P_MarginLeft);
                                    if (sVar12 == sVar1) {
                                      if (sVar1 != 0) {
                                        if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                          std::__ndk1::__basic_string_common<true>::
                                          __throw_out_of_range();
                                        }
                                        pvVar2 = pvVar15;
                                        if ((uVar18 & 1) != 0) {
                                          pvVar2 = local_b0;
                                        }
                                        iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                        if (iVar8 != 0) goto LAB_00c7771c;
                                      }
                                      plVar13 = *(long **)(this + 0xc0);
                                      if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                        FUN_009d64e4();
                                      }
                                      local_d0 = (**(code **)(*plVar13 + 0x30))(plVar13,local_e8);
                                    }
                                    else {
LAB_00c7771c:
                                      puVar4 = P_MarginTop;
                                      sVar12 = strlen(P_MarginTop);
                                      if (sVar12 == sVar1) {
                                        if (sVar1 != 0) {
                                          if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                            std::__ndk1::__basic_string_common<true>::
                                            __throw_out_of_range();
                                          }
                                          pvVar2 = pvVar15;
                                          if ((uVar18 & 1) != 0) {
                                            pvVar2 = local_b0;
                                          }
                                          iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                          if (iVar8 != 0) goto LAB_00c77764;
                                        }
                                        plVar13 = *(long **)(this + 0xc0);
                                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                          FUN_009d64e4();
                                        }
                                        local_cc = (**(code **)(*plVar13 + 0x30))(plVar13,local_e8);
                                      }
                                      else {
LAB_00c77764:
                                        puVar4 = P_MarginRight;
                                        sVar12 = strlen(P_MarginRight);
                                        if (sVar12 == sVar1) {
                                          if (sVar1 != 0) {
                                            if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                              std::__ndk1::__basic_string_common<true>::
                                              __throw_out_of_range();
                                            }
                                            pvVar2 = pvVar15;
                                            if ((uVar18 & 1) != 0) {
                                              pvVar2 = local_b0;
                                            }
                                            iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                            if (iVar8 != 0) goto LAB_00c777ac;
                                          }
                                          plVar13 = *(long **)(this + 0xc0);
                                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                            FUN_009d64e4();
                                          }
                                          local_c8 = (**(code **)(*plVar13 + 0x30))
                                                               (plVar13,local_e8);
                                        }
                                        else {
LAB_00c777ac:
                                          puVar4 = P_MarginDown;
                                          sVar12 = strlen(P_MarginDown);
                                          if (sVar12 == sVar1) {
                                            if (sVar1 != 0) {
                                              if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                                std::__ndk1::__basic_string_common<true>::
                                                __throw_out_of_range();
                                              }
                                              pvVar2 = pvVar15;
                                              if ((uVar18 & 1) != 0) {
                                                pvVar2 = local_b0;
                                              }
                                              iVar8 = memcmp(pvVar2,puVar4,sVar1);
                                              if (iVar8 != 0) goto joined_r0x00c77928;
                                            }
                                            plVar13 = *(long **)(this + 0xc0);
                                            if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                                              FUN_009d64e4();
                                            }
                                            local_c4 = (**(code **)(*plVar13 + 0x30))
                                                                 (plVar13,local_e8);
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
joined_r0x00c77928:
                          if (((byte)local_e8[0] & 1) != 0) {
                            operator_delete(local_d8);
                          }
                          if ((local_c0 & 1) != 0) {
                            operator_delete(local_b0);
                          }
                          this_01 = this_01 + 0x10;
                        }
                        cocos2d::ui::LayoutParameter::setMargin
                                  ((LayoutParameter *)this_02,(Margin *)&local_d0);
                        cocos2d::ui::LayoutParameter::setMargin
                                  ((LayoutParameter *)this_03,(Margin *)&local_d0);
                        if (iVar7 == 1) {
                          cocos2d::ui::Widget::setLayoutParameter
                                    (param_1,(LayoutParameter *)this_02);
                        }
                        else if (iVar7 == 2) {
                          cocos2d::ui::Widget::setLayoutParameter
                                    (param_1,(LayoutParameter *)this_03);
                        }
                        goto switchD_00c77018_caseD_f;
                      }
LAB_00c76db8:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76e00;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        *(undefined4 *)(this + 0xec) = uVar19;
                        goto joined_r0x00c7716c;
                      }
LAB_00c76e00:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76e48;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        CVar6 = (CheckBoxReader)(**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        this[0xe8] = CVar6;
                        goto joined_r0x00c7716c;
                      }
LAB_00c76e48:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76e90;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        CVar6 = (CheckBoxReader)(**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        this[0xe9] = CVar6;
                        goto joined_r0x00c7716c;
                      }
LAB_00c76e90:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76ed8;
                        }
                        plVar13 = *(long **)(this + 0x60);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        CVar6 = (CheckBoxReader)(**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        this[0xea] = CVar6;
                        goto joined_r0x00c7716c;
                      }
LAB_00c76ed8:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76f20;
                        }
                        plVar13 = *(long **)(this + 0x90);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        (**(code **)(*(long *)param_1 + 0x598))(param_1,uVar9 & 1);
                        goto switchD_00c77018_caseD_f;
                      }
LAB_00c76f20:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76f68;
                        }
                        plVar13 = *(long **)(this + 0x90);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar9 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        (**(code **)(*(long *)param_1 + 0x5a8))(param_1,uVar9 & 1);
                        goto switchD_00c77018_caseD_f;
                      }
LAB_00c76f68:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76fb0;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        *(undefined4 *)(this + 0xfc) = uVar19;
                        goto joined_r0x00c7716c;
                      }
LAB_00c76fb0:
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
                            pvVar2 = local_78;
                          }
                          iVar7 = memcmp(pvVar2,puVar4,sVar1);
                          if (iVar7 != 0) goto LAB_00c76ff8;
                        }
                        plVar13 = *(long **)(this + 0xc0);
                        if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                        *(undefined4 *)(this + 0x100) = uVar19;
                        goto joined_r0x00c7716c;
                      }
LAB_00c76ff8:
                      switch(sVar1) {
                      case 0xe:
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_78;
                        }
                        iVar7 = memcmp(pvVar2,"frontCrossData",0xe);
                        if (iVar7 == 0) {
                          lVar17 = stExpCocoNode::GetChildArray(this_00,param_2);
                          pcVar11 = (char *)stExpCocoNode::GetValue
                                                      ((stExpCocoNode *)(lVar17 + 0x20),param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_c0,pcVar11);
                          plVar13 = *(long **)(this + 0x60);
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_c0);
                          WidgetReader::getResourcePath(local_e8,this,param_2,this_00,uVar19);
                          cocos2d::ui::AbstractCheckButton::loadTextureFrontCross
                                    ((AbstractCheckButton *)param_1,local_e8,uVar19);
                          goto LAB_00c77d98;
                        }
                        break;
                      case 0x11:
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_78;
                        }
                        iVar7 = memcmp(pvVar2,"backGroundBoxData",0x11);
                        if (iVar7 == 0) {
                          lVar17 = stExpCocoNode::GetChildArray(this_00,param_2);
                          pcVar11 = (char *)stExpCocoNode::GetValue
                                                      ((stExpCocoNode *)(lVar17 + 0x20),param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_c0,pcVar11);
                          plVar13 = *(long **)(this + 0x60);
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_c0);
                          WidgetReader::getResourcePath(local_e8,this,param_2,this_00,uVar19);
                          cocos2d::ui::AbstractCheckButton::loadTextureBackGround
                                    ((AbstractCheckButton *)param_1,local_e8,uVar19);
                          goto LAB_00c77d98;
                        }
                        break;
                      case 0x16:
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_78;
                        }
                        iVar7 = memcmp(pvVar2,"frontCrossDisabledData",0x16);
                        if (iVar7 == 0) {
                          lVar17 = stExpCocoNode::GetChildArray(this_00,param_2);
                          pcVar11 = (char *)stExpCocoNode::GetValue
                                                      ((stExpCocoNode *)(lVar17 + 0x20),param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_c0,pcVar11);
                          plVar13 = *(long **)(this + 0x60);
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_c0);
                          WidgetReader::getResourcePath(local_e8,this,param_2,this_00,uVar19);
                          cocos2d::ui::AbstractCheckButton::loadTextureFrontCrossDisabled
                                    ((AbstractCheckButton *)param_1,local_e8,uVar19);
                          goto LAB_00c77d98;
                        }
                        break;
                      case 0x19:
                        pvVar2 = pvVar14;
                        if (((byte)bVar5 & 1) != 0) {
                          pvVar2 = local_78;
                        }
                        iVar7 = memcmp(pvVar2,"backGroundBoxSelectedData",0x19);
                        if (iVar7 == 0) {
                          lVar17 = stExpCocoNode::GetChildArray(this_00,param_2);
                          pcVar11 = (char *)stExpCocoNode::GetValue
                                                      ((stExpCocoNode *)(lVar17 + 0x20),param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_c0,pcVar11);
                          plVar13 = *(long **)(this + 0x60);
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_c0);
                          WidgetReader::getResourcePath(local_e8,this,param_2,this_00,uVar19);
                          cocos2d::ui::AbstractCheckButton::loadTextureBackGroundSelected
                                    ((AbstractCheckButton *)param_1,local_e8,uVar19);
                        }
                        else {
                          iVar7 = memcmp(pvVar2,"backGroundBoxDisabledData",0x19);
                          if (iVar7 != 0) break;
                          lVar17 = stExpCocoNode::GetChildArray(this_00,param_2);
                          pcVar11 = (char *)stExpCocoNode::GetValue
                                                      ((stExpCocoNode *)(lVar17 + 0x20),param_2);
                          std::__ndk1::
                          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          ::basic_string<decltype(nullptr)>
                                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                      *)&local_c0,pcVar11);
                          plVar13 = *(long **)(this + 0x60);
                          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_c0);
                          WidgetReader::getResourcePath(local_e8,this,param_2,this_00,uVar19);
                          cocos2d::ui::AbstractCheckButton::loadTextureBackGroundDisabled
                                    ((AbstractCheckButton *)param_1,local_e8,uVar19);
                        }
LAB_00c77d98:
                        if (((byte)local_e8[0] & 1) != 0) {
                          operator_delete(local_d8);
                        }
                        goto joined_r0x00c7742c;
                      }
                    }
                    goto switchD_00c77018_caseD_f;
                  }
                  if (sVar1 != 0) {
                    if (sVar1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    pvVar2 = pvVar14;
                    if (((byte)bVar5 & 1) != 0) {
                      pvVar2 = local_78;
                    }
                    iVar7 = memcmp(pvVar2,puVar4,sVar1);
                    if (iVar7 != 0) goto LAB_00c76a58;
                  }
                  plVar13 = *(long **)(this + 0xc0);
                  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_009d64e4();
                  }
                  uVar19 = (**(code **)(*plVar13 + 0x30))(plVar13,&local_a0);
                  *(undefined4 *)(this + 0xe4) = uVar19;
                }
              }
            }
          }
        }
      }
joined_r0x00c7716c:
      if (((byte)local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if (((byte)local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      lVar16 = lVar16 + 1;
      iVar7 = stExpCocoNode::GetChildNum(param_3);
    } while (lVar16 < iVar7);
  }
  WidgetReader::endSetBasicProperties((WidgetReader *)this,param_1);
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

