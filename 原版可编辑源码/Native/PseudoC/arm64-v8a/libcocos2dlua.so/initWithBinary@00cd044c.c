
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::ActionNode::initWithBinary(cocostudio::CocoLoader*, cocostudio::stExpCocoNode*,
   cocos2d::Ref*) */

void __thiscall
cocostudio::ActionNode::initWithBinary
          (ActionNode *this,CocoLoader *param_1,stExpCocoNode *param_2,Ref *param_3)

{
  float *pfVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  stExpCocoNode *psVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  stExpCocoNode *psVar11;
  char *pcVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  ActionTintFrame *this_00;
  ActionRotationFrame *this_01;
  ActionFadeFrame *this_02;
  ActionMoveFrame *this_03;
  vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>> *pvVar16;
  long lVar17;
  ActionScaleFrame *this_04;
  stExpCocoNode *this_05;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  double dVar21;
  ulong unaff_d8;
  float unaff_s9;
  int local_130;
  int local_12c;
  int local_118;
  int local_114;
  Color3B local_110 [4];
  float local_10c;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_108 [16];
  char *local_f8;
  Ref *local_f0 [2];
  void *local_e0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [16];
  char *local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [8];
  ulong local_b8;
  long *local_b0;
  float *local_a8;
  float *local_a0;
  float *local_98;
  long local_90;
  
  lVar5 = tpidr_el0;
  local_90 = *(long *)(lVar5 + 0x28);
  uVar8 = stExpCocoNode::GetChildNum(param_2);
  uVar19 = (ulong)uVar8;
  psVar11 = (stExpCocoNode *)stExpCocoNode::GetChildArray(param_2,param_1);
  if ((int)uVar8 < 1) {
    this_05 = (stExpCocoNode *)0x0;
  }
  else {
    this_05 = (stExpCocoNode *)0x0;
    do {
      pcVar12 = (char *)stExpCocoNode::GetName(psVar11,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_a8,pcVar12);
      pcVar12 = (char *)stExpCocoNode::GetValue(psVar11,param_1);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c0,pcVar12);
      bVar6 = local_a8._0_1_;
      pfVar1 = (float *)(ulong)((byte)local_a8._0_1_ >> 1);
      if (((ulong)local_a8 & 1) != 0) {
        pfVar1 = local_a0;
      }
      psVar7 = this_05;
      if (pfVar1 == (float *)0xf) {
        pfVar1 = (float *)((ulong)&local_a8 | 1);
        if (((ulong)local_a8 & 1) != 0) {
          pfVar1 = local_98;
        }
        iVar9 = memcmp(pfVar1,"actionframelist",0xf);
        psVar7 = psVar11;
        if (iVar9 != 0) {
          psVar7 = this_05;
        }
      }
      else if (pfVar1 == (float *)0x9) {
        pfVar1 = (float *)((ulong)&local_a8 | 1);
        if (((ulong)local_a8 & 1) != 0) {
          pfVar1 = local_98;
        }
        iVar9 = memcmp(pfVar1,"ActionTag",9);
        if (iVar9 == 0) {
          plVar20 = (long *)((ulong)local_c0 | 1);
          if (((byte)local_c0[0] & 1) != 0) {
            plVar20 = local_b0;
          }
          iVar9 = atoi((char *)plVar20);
          *(int *)(this + 0x30) = iVar9;
        }
      }
      this_05 = psVar7;
      if (((byte)local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
        bVar6 = local_a8._0_1_;
      }
      if (((byte)bVar6 & 1) != 0) {
        operator_delete(local_98);
      }
      uVar19 = uVar19 - 1;
      psVar11 = psVar11 + 0x10;
    } while (uVar19 != 0);
  }
  uVar8 = stExpCocoNode::GetChildNum(this_05);
  lVar13 = stExpCocoNode::GetChildArray(this_05,param_1);
  if (0 < (int)uVar8) {
    uVar19 = 0;
    plVar20 = (long *)((ulong)local_c0 | 1);
    pcVar12 = (char *)((ulong)local_d8 | 1);
    do {
      local_a0 = (float *)0x0;
      local_98 = (float *)0x0;
      local_a8 = (float *)0x0;
      psVar11 = (stExpCocoNode *)(lVar13 + uVar19 * 0x10);
      uVar10 = stExpCocoNode::GetChildNum(psVar11);
      lVar14 = stExpCocoNode::GetChildArray(psVar11,param_1);
      if (0 < (int)uVar10) {
        uVar18 = 0;
        local_130 = -1;
        local_12c = -1;
        do {
          psVar11 = (stExpCocoNode *)(lVar14 + uVar18 * 0x10);
          pcVar15 = (char *)stExpCocoNode::GetName(psVar11,param_1);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_c0,pcVar15);
          pcVar15 = (char *)stExpCocoNode::GetValue(psVar11,param_1);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_d8,pcVar15);
          uVar2 = (ulong)((byte)local_c0[0] >> 1);
          if (((byte)local_c0[0] & 1) != 0) {
            uVar2 = local_b8;
          }
          switch(uVar2) {
          case 6:
            plVar3 = plVar20;
            if (((byte)local_c0[0] & 1) != 0) {
              plVar3 = local_b0;
            }
            iVar9 = memcmp(plVar3,"scalex",6);
            if (iVar9 == 0) {
              pcVar15 = pcVar12;
              if (((byte)local_d8[0] & 1) != 0) {
                pcVar15 = local_c8;
              }
              dVar21 = (double)cocos2d::utils::atof(pcVar15);
              unaff_s9 = (float)dVar21;
            }
            else {
              iVar9 = memcmp(plVar3,"scaley",6);
              if (iVar9 == 0) {
                pcVar15 = pcVar12;
                if (((byte)local_d8[0] & 1) != 0) {
                  pcVar15 = local_c8;
                }
                dVar21 = (double)cocos2d::utils::atof(pcVar15);
                this_04 = operator_new(0x58,(nothrow_t *)&std::nothrow);
                if (this_04 != (ActionScaleFrame *)0x0) {
                  ActionScaleFrame::ActionScaleFrame(this_04);
                }
                cocos2d::Ref::autorelease((Ref *)this_04);
                ActionFrame::setEasingType((ActionFrame *)this_04,local_114);
                (**(code **)(*(long *)this_04 + 0x20))(this_04,&local_a8);
                ActionFrame::setFrameIndex((ActionFrame *)this_04,local_118);
                ActionScaleFrame::setScaleX(this_04,unaff_s9);
                ActionScaleFrame::setScaleY(this_04,(float)dVar21);
                if ((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) < 2) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
                }
                pvVar16 = *(vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                            **)(*(long *)(this + 0x50) + 8);
                puVar4 = *(undefined8 **)(pvVar16 + 8);
                local_f0[0] = (Ref *)this_04;
                if (puVar4 == *(undefined8 **)(pvVar16 + 0x10)) {
                  std::__ndk1::
                  vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                  ::__push_back_slow_path<cocostudio::ActionFrame*const&>
                            (pvVar16,(ActionFrame **)local_f0);
                }
                else {
                  *puVar4 = this_04;
                  *(undefined8 **)(pvVar16 + 8) = puVar4 + 1;
                }
                cocos2d::Ref::retain(local_f0[0]);
                goto switchD_00cd0708_caseD_a;
              }
              iVar9 = memcmp(plVar3,"colorb",6);
              if (iVar9 == 0) {
                pcVar15 = pcVar12;
                if (((byte)local_d8[0] & 1) != 0) {
                  pcVar15 = local_c8;
                }
                local_12c = atoi(pcVar15);
              }
              else {
                iVar9 = memcmp(plVar3,"colorg",6);
                if (iVar9 != 0) {
                  iVar9 = memcmp(plVar3,"colorr",6);
                  if (iVar9 == 0) {
                    pcVar15 = pcVar12;
                    if (((byte)local_d8[0] & 1) != 0) {
                      pcVar15 = local_c8;
                    }
                    iVar9 = atoi(pcVar15);
                    this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
                    if (this_00 != (ActionTintFrame *)0x0) {
                      ActionTintFrame::ActionTintFrame(this_00);
                    }
                    cocos2d::Ref::autorelease((Ref *)this_00);
                    ActionFrame::setEasingType((ActionFrame *)this_00,local_114);
                    (**(code **)(*(long *)this_00 + 0x20))(this_00,&local_a8);
                    ActionFrame::setFrameIndex((ActionFrame *)this_00,local_118);
                    cocos2d::Color3B::Color3B
                              (local_110,(uchar)iVar9,(uchar)local_130,(uchar)local_12c);
                    ActionTintFrame::setColor(this_00);
                    if ((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) < 4) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
                    }
                    pvVar16 = *(vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                                **)(*(long *)(this + 0x50) + 0x18);
                    puVar4 = *(undefined8 **)(pvVar16 + 8);
                    local_f0[0] = (Ref *)this_00;
                    if (puVar4 == *(undefined8 **)(pvVar16 + 0x10)) {
                      std::__ndk1::
                      vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                      ::__push_back_slow_path<cocostudio::ActionFrame*const&>
                                (pvVar16,(ActionFrame **)local_f0);
                    }
                    else {
                      *puVar4 = this_00;
                      *(undefined8 **)(pvVar16 + 8) = puVar4 + 1;
                    }
                    cocos2d::Ref::retain(local_f0[0]);
                  }
                  goto switchD_00cd0708_caseD_a;
                }
                pcVar15 = pcVar12;
                if (((byte)local_d8[0] & 1) != 0) {
                  pcVar15 = local_c8;
                }
                local_130 = atoi(pcVar15);
              }
            }
            break;
          case 7:
            plVar3 = plVar20;
            if (((byte)local_c0[0] & 1) != 0) {
              plVar3 = local_b0;
            }
            iVar9 = memcmp(plVar3,"frameid",7);
            if (iVar9 != 0) {
              iVar9 = memcmp(plVar3,"opacity",7);
              if (iVar9 == 0) {
                pcVar15 = pcVar12;
                if (((byte)local_d8[0] & 1) != 0) {
                  pcVar15 = local_c8;
                }
                iVar9 = atoi(pcVar15);
                this_02 = operator_new(0x58,(nothrow_t *)&std::nothrow);
                if (this_02 != (ActionFadeFrame *)0x0) {
                  ActionFadeFrame::ActionFadeFrame(this_02);
                }
                cocos2d::Ref::autorelease((Ref *)this_02);
                ActionFrame::setEasingType((ActionFrame *)this_02,local_114);
                (**(code **)(*(long *)this_02 + 0x20))(this_02,&local_a8);
                ActionFrame::setFrameIndex((ActionFrame *)this_02,local_118);
                ActionFadeFrame::setOpacity(this_02,iVar9);
                if ((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) < 5) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
                }
                pvVar16 = *(vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                            **)(*(long *)(this + 0x50) + 0x20);
                puVar4 = *(undefined8 **)(pvVar16 + 8);
                local_f0[0] = (Ref *)this_02;
                if (puVar4 == *(undefined8 **)(pvVar16 + 0x10)) {
                  std::__ndk1::
                  vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                  ::__push_back_slow_path<cocostudio::ActionFrame*const&>
                            (pvVar16,(ActionFrame **)local_f0);
                }
                else {
                  *puVar4 = this_02;
                  *(undefined8 **)(pvVar16 + 8) = puVar4 + 1;
                }
                cocos2d::Ref::retain(local_f0[0]);
              }
              goto switchD_00cd0708_caseD_a;
            }
            pcVar15 = pcVar12;
            if (((byte)local_d8[0] & 1) != 0) {
              pcVar15 = local_c8;
            }
            local_118 = atoi(pcVar15);
            break;
          case 8:
            plVar3 = plVar20;
            if (((byte)local_c0[0] & 1) != 0) {
              plVar3 = local_b0;
            }
            if (*plVar3 == 0x6e6f697461746f72) {
              pcVar15 = pcVar12;
              if (((byte)local_d8[0] & 1) != 0) {
                pcVar15 = local_c8;
              }
              dVar21 = (double)cocos2d::utils::atof(pcVar15);
              this_01 = operator_new(0x58,(nothrow_t *)&std::nothrow);
              if (this_01 != (ActionRotationFrame *)0x0) {
                ActionRotationFrame::ActionRotationFrame(this_01);
              }
              cocos2d::Ref::autorelease((Ref *)this_01);
              ActionFrame::setEasingType((ActionFrame *)this_01,local_114);
              (**(code **)(*(long *)this_01 + 0x20))(this_01,&local_a8);
              ActionFrame::setFrameIndex((ActionFrame *)this_01,local_118);
              ActionRotationFrame::setRotation(this_01,(float)dVar21);
              if ((ulong)(*(long *)(this + 0x58) - *(long *)(this + 0x50) >> 3) < 3) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
              }
              pvVar16 = *(vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                          **)(*(long *)(this + 0x50) + 0x10);
              puVar4 = *(undefined8 **)(pvVar16 + 8);
              local_f0[0] = (Ref *)this_01;
              if (puVar4 == *(undefined8 **)(pvVar16 + 0x10)) {
                std::__ndk1::
                vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>::
                __push_back_slow_path<cocostudio::ActionFrame*const&>
                          (pvVar16,(ActionFrame **)local_f0);
              }
              else {
                *puVar4 = this_01;
                *(undefined8 **)(pvVar16 + 8) = puVar4 + 1;
              }
              cocos2d::Ref::retain(local_f0[0]);
            }
          default:
switchD_00cd0708_caseD_a:
            break;
          case 9:
            plVar3 = plVar20;
            if (((byte)local_c0[0] & 1) != 0) {
              plVar3 = local_b0;
            }
            iVar9 = memcmp(plVar3,"tweenType",9);
            if (iVar9 == 0) {
              pcVar15 = pcVar12;
              if (((byte)local_d8[0] & 1) != 0) {
                pcVar15 = local_c8;
              }
              local_114 = atoi(pcVar15);
            }
            else {
              iVar9 = memcmp(plVar3,"positionx",9);
              if (iVar9 != 0) {
                iVar9 = memcmp(plVar3,"positiony",9);
                if (iVar9 == 0) {
                  pcVar15 = pcVar12;
                  if (((byte)local_d8[0] & 1) != 0) {
                    pcVar15 = local_c8;
                  }
                  dVar21 = (double)cocos2d::utils::atof(pcVar15);
                  this_03 = operator_new(0x58,(nothrow_t *)&std::nothrow);
                  if (this_03 != (ActionMoveFrame *)0x0) {
                    ActionMoveFrame::ActionMoveFrame(this_03);
                  }
                  cocos2d::Ref::autorelease((Ref *)this_03);
                  ActionFrame::setEasingType((ActionFrame *)this_03,local_114);
                  (**(code **)(*(long *)this_03 + 0x20))(this_03,&local_a8);
                  ActionFrame::setFrameIndex((ActionFrame *)this_03,local_118);
                  ActionMoveFrame::setPosition(unaff_d8,(float)dVar21,this_03);
                  if (*(undefined8 **)(this + 0x58) == *(undefined8 **)(this + 0x50)) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__vector_base_common<true>::__throw_out_of_range();
                  }
                  pvVar16 = (vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                             *)**(undefined8 **)(this + 0x50);
                  puVar4 = *(undefined8 **)(pvVar16 + 8);
                  local_f0[0] = (Ref *)this_03;
                  if (puVar4 == *(undefined8 **)(pvVar16 + 0x10)) {
                    std::__ndk1::
                    vector<cocostudio::ActionFrame*,std::__ndk1::allocator<cocostudio::ActionFrame*>>
                    ::__push_back_slow_path<cocostudio::ActionFrame*const&>
                              (pvVar16,(ActionFrame **)local_f0);
                  }
                  else {
                    *puVar4 = this_03;
                    *(undefined8 **)(pvVar16 + 8) = puVar4 + 1;
                  }
                  cocos2d::Ref::retain(local_f0[0]);
                }
                goto switchD_00cd0708_caseD_a;
              }
              pcVar15 = pcVar12;
              if (((byte)local_d8[0] & 1) != 0) {
                pcVar15 = local_c8;
              }
              dVar21 = (double)cocos2d::utils::atof(pcVar15);
              unaff_d8 = (ulong)(uint)(float)dVar21;
            }
            break;
          case 0xe:
            plVar3 = plVar20;
            if (((byte)local_c0[0] & 1) != 0) {
              plVar3 = local_b0;
            }
            iVar9 = memcmp(plVar3,"tweenParameter",0xe);
            if (iVar9 == 0) {
              iVar9 = stExpCocoNode::GetChildNum(psVar11);
              lVar17 = stExpCocoNode::GetChildArray(psVar11,param_1);
              if (0 < iVar9) {
                psVar11 = (stExpCocoNode *)(lVar17 + uVar18 * 0x10);
                do {
                  pcVar15 = (char *)stExpCocoNode::GetName(psVar11,param_1);
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>
                            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              *)local_f0,pcVar15);
                  pcVar15 = (char *)stExpCocoNode::GetValue(psVar11,param_1);
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  basic_string<decltype(nullptr)>(local_108,pcVar15);
                  pcVar15 = (char *)((ulong)local_108 | 1);
                  if (((byte)local_108[0] & 1) != 0) {
                    pcVar15 = local_f8;
                  }
                  dVar21 = (double)cocos2d::utils::atof(pcVar15);
                  local_10c = (float)dVar21;
                  if (local_a0 < local_98) {
                    *local_a0 = local_10c;
                    local_a0 = local_a0 + 1;
                  }
                  else {
                    std::__ndk1::vector<float,std::__ndk1::allocator<float>>::
                    __push_back_slow_path<float>
                              ((vector<float,std::__ndk1::allocator<float>> *)&local_a8,&local_10c);
                  }
                  if (((byte)local_108[0] & 1) != 0) {
                    operator_delete(local_f8);
                  }
                  if (((ulong)local_f0[0] & 1) != 0) {
                    operator_delete(local_e0);
                  }
                  iVar9 = iVar9 + -1;
                } while (iVar9 != 0);
              }
            }
            goto switchD_00cd0708_caseD_a;
          }
          if (((byte)local_d8[0] & 1) != 0) {
            operator_delete(local_c8);
          }
          if (((byte)local_c0[0] & 1) != 0) {
            operator_delete(local_b0);
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != uVar10);
      }
      if (local_a8 != (float *)0x0) {
        local_a0 = local_a8;
        operator_delete(local_a8);
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar8);
  }
  (**(code **)(*(long *)this + 0x58))(this,param_3);
  if (*(long *)(lVar5 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

