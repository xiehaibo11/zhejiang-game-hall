
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::LayoutReader::setPropsFromBinary(cocos2d::ui::Widget*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::LayoutReader::setPropsFromBinary
          (LayoutReader *this,Widget *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  LayoutReader *pLVar1;
  LayoutReader *pLVar2;
  stExpCocoNode *this_00;
  size_t sVar3;
  void *pvVar4;
  long lVar5;
  undefined *puVar6;
  ulong __n;
  LayoutReader LVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  char *pcVar13;
  size_t sVar14;
  void *__dest;
  stExpCocoNode *this_01;
  LinearLayoutParameter *this_02;
  RelativeLayoutParameter *this_03;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  void *pvVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  uchar local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  uchar local_138;
  uchar local_134;
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
  uint local_b8;
  undefined4 uStack_b4;
  size_t local_b0;
  long *local_a8;
  long local_a0;
  
  lVar5 = tpidr_el0;
  local_a0 = *(long *)(lVar5 + 0x28);
  WidgetReader::setPropsFromBinary((WidgetReader *)this,param_1,param_2,param_3);
  lVar12 = stExpCocoNode::GetChildArray(param_3,param_2);
  WidgetReader::beginSetBasicProperties((WidgetReader *)this,param_1);
  local_134 = cocos2d::ui::Layout::getBackGroundColorOpacity((Layout *)param_1);
  iVar9 = stExpCocoNode::GetChildNum(param_3);
  if (iVar9 < 1) {
    uVar25 = 0;
    uVar21 = 0;
    fVar26 = 0.0;
    fVar27 = 0.0;
    fVar23 = 0.0;
    fVar24 = 0.0;
    local_158 = 0;
    local_150 = 0;
    local_138 = '\0';
    local_148 = 0;
    local_140 = 0;
    local_15c = '\0';
  }
  else {
    pLVar1 = this + 0x60;
    pLVar2 = this + 0xc0;
    plVar17 = (long *)((ulong)&local_b8 | 1);
    lVar19 = 0;
    fVar24 = 0.0;
    fVar23 = 0.0;
    fVar27 = 0.0;
    fVar26 = 0.0;
    uVar21 = 0;
    uVar25 = 0;
    pvVar18 = (void *)((ulong)&local_f0 | 1);
    local_148 = 0;
    local_140 = 0;
    local_158 = 0;
    local_150 = 0;
    local_15c = '\0';
    local_138 = '\0';
    do {
      this_00 = (stExpCocoNode *)(lVar12 + lVar19 * 0x10);
      pcVar13 = (char *)stExpCocoNode::GetName(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>
                ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_b8,pcVar13);
      pcVar13 = (char *)stExpCocoNode::GetValue(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_d0,pcVar13);
      puVar6 = P_IgnoreSize;
      sVar14 = strlen(P_IgnoreSize);
      uVar11 = local_b8;
      sVar3 = (ulong)((byte)local_b8._0_1_ >> 1);
      if ((local_b8 & 1) != 0) {
        sVar3 = local_b0;
      }
      if (sVar14 == sVar3) {
        if (sVar14 != 0) {
          if (sVar14 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((local_b8 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar14);
          if (iVar9 != 0) goto LAB_00c7f4b8;
        }
        plVar15 = *(long **)(this + 0x90);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar11 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        (**(code **)(*(long *)param_1 + 0x600))(param_1,uVar11 & 1);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7f4b8:
      puVar6 = P_SizeType;
      sVar14 = strlen(P_SizeType);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f500;
        }
        plVar15 = *(long **)pLVar1;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        cocos2d::ui::Widget::setSizeType(param_1,uVar22);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7f500:
      puVar6 = P_PositionType;
      sVar14 = strlen(P_PositionType);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f548;
        }
        plVar15 = *(long **)pLVar1;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        cocos2d::ui::Widget::setPositionType(param_1,uVar22);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7f548:
      puVar6 = P_SizePercentX;
      sVar14 = strlen(P_SizePercentX);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f590;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        *(undefined4 *)(this + 0xd0) = uVar22;
        goto joined_r0x00c7feec;
      }
LAB_00c7f590:
      puVar6 = P_SizePercentY;
      sVar14 = strlen(P_SizePercentY);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f5d8;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        *(undefined4 *)(this + 0xd4) = uVar22;
        goto joined_r0x00c7feec;
      }
LAB_00c7f5d8:
      puVar6 = P_PositionPercentX;
      sVar14 = strlen(P_PositionPercentX);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f620;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        *(undefined4 *)(this + 0xd8) = uVar22;
        goto joined_r0x00c7feec;
      }
LAB_00c7f620:
      puVar6 = P_PositionPercentY;
      sVar14 = strlen(P_PositionPercentY);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f668;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        *(undefined4 *)(this + 0xdc) = uVar22;
        goto joined_r0x00c7feec;
      }
LAB_00c7f668:
      puVar6 = P_Width;
      sVar14 = strlen(P_Width);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f6b0;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        *(undefined4 *)(this + 0xe0) = uVar22;
        goto joined_r0x00c7feec;
      }
LAB_00c7f6b0:
      puVar6 = P_Height;
      sVar14 = strlen(P_Height);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f6f8;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        *(undefined4 *)(this + 0xe4) = uVar22;
        goto joined_r0x00c7feec;
      }
LAB_00c7f6f8:
      puVar6 = P_Tag;
      sVar14 = strlen(P_Tag);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f740;
        }
        plVar15 = *(long **)pLVar1;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar22);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7f740:
      puVar6 = P_ActionTag;
      sVar14 = strlen(P_ActionTag);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f788;
        }
        plVar15 = *(long **)pLVar1;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        iVar9 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        cocos2d::ui::Widget::setActionTag(param_1,iVar9);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7f788:
      puVar6 = P_TouchAble;
      sVar14 = strlen(P_TouchAble);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f7d0;
        }
        plVar15 = *(long **)(this + 0x90);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar11 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        (**(code **)(*(long *)param_1 + 0x588))(param_1,uVar11 & 1);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7f7d0:
      puVar6 = P_Name;
      sVar14 = strlen(P_Name);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f818;
        }
        pvVar4 = local_c0;
        __n = uStack_c8;
        uVar16 = (ulong)((byte)local_d0 >> 1);
        if (((byte)local_d0 & 1) != 0) {
          uVar16 = uStack_c8;
        }
        if (uVar16 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
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
              __dest = pvVar18;
              if (uStack_c8 != 0) goto LAB_00c800fc;
            }
            else {
              uVar16 = uStack_c8 + 0x10 & 0xfffffffffffffff0;
              __dest = operator_new(uVar16);
              local_f0 = uVar16 | 1;
              sStack_e8 = __n;
              local_e0 = __dest;
LAB_00c800fc:
              memcpy(__dest,pvVar4,__n);
            }
            *(undefined1 *)((long)__dest + __n) = 0;
          }
        }
        (**(code **)(*(long *)param_1 + 0x2d0))(param_1,&local_f0);
joined_r0x00c80128:
        if ((local_f0 & 1) == 0) goto switchD_00c7fd00_caseD_c;
        operator_delete(local_e0);
        goto joined_r0x00c7feec;
      }
LAB_00c7f818:
      puVar6 = P_X;
      sVar14 = strlen(P_X);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f860;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        *(undefined4 *)(this + 0xf0) = uVar22;
        goto joined_r0x00c7feec;
      }
LAB_00c7f860:
      puVar6 = P_Y;
      sVar14 = strlen(P_Y);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f8a8;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        *(undefined4 *)(this + 0xf4) = uVar22;
        goto joined_r0x00c7feec;
      }
LAB_00c7f8a8:
      puVar6 = P_ScaleX;
      sVar14 = strlen(P_ScaleX);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f8f0;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        (**(code **)(*(long *)param_1 + 0x50))(param_1);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7f8f0:
      puVar6 = P_ScaleY;
      sVar14 = strlen(P_ScaleY);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f938;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        (**(code **)(*(long *)param_1 + 0x60))(param_1);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7f938:
      puVar6 = P_Rotation;
      sVar14 = strlen(P_Rotation);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f980;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        (**(code **)(*(long *)param_1 + 0x180))(param_1);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7f980:
      puVar6 = P_Visbile;
      sVar14 = strlen(P_Visbile);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7f9c8;
        }
        plVar15 = *(long **)(this + 0x90);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar11 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        (**(code **)(*(long *)param_1 + 0x170))(param_1,uVar11 & 1);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7f9c8:
      puVar6 = P_ZOrder;
      sVar14 = strlen(P_ZOrder);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7fa10;
        }
        plVar15 = *(long **)pLVar1;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar22);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7fa10:
      puVar6 = P_LayoutParameter;
      sVar14 = strlen(P_LayoutParameter);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7fa58;
        }
        this_01 = (stExpCocoNode *)stExpCocoNode::GetChildArray(this_00,param_2);
        this_02 = (LinearLayoutParameter *)cocos2d::ui::LinearLayoutParameter::create();
        this_03 = (RelativeLayoutParameter *)cocos2d::ui::RelativeLayoutParameter::create();
        cocos2d::ui::Margin::Margin((Margin *)&local_100);
        iVar9 = -1;
        for (lVar20 = 0; iVar10 = stExpCocoNode::GetChildNum(this_00), lVar20 < iVar10;
            lVar20 = lVar20 + 1) {
          pcVar13 = (char *)stExpCocoNode::GetName(this_01,param_2);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_f0,pcVar13);
          pcVar13 = (char *)stExpCocoNode::GetValue(this_01,param_2);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_118,pcVar13);
          puVar6 = P_Type;
          sVar14 = strlen(P_Type);
          uVar16 = local_f0;
          sVar3 = local_f0 >> 1 & 0x7f;
          if ((local_f0 & 1) != 0) {
            sVar3 = sStack_e8;
          }
          if (sVar14 == sVar3) {
            if (sVar14 != 0) {
              if (sVar14 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              pvVar4 = pvVar18;
              if ((local_f0 & 1) != 0) {
                pvVar4 = local_e0;
              }
              iVar10 = memcmp(pvVar4,puVar6,sVar14);
              if (iVar10 != 0) goto LAB_00c802b4;
            }
            plVar15 = *(long **)pLVar1;
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            iVar9 = (**(code **)(*plVar15 + 0x30))(plVar15,local_118);
          }
          else {
LAB_00c802b4:
            puVar6 = P_Gravity;
            sVar14 = strlen(P_Gravity);
            if (sVar14 == sVar3) {
              if (sVar3 != 0) {
                if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                }
                pvVar4 = pvVar18;
                if ((uVar16 & 1) != 0) {
                  pvVar4 = local_e0;
                }
                iVar10 = memcmp(pvVar4,puVar6,sVar3);
                if (iVar10 != 0) goto LAB_00c802fc;
              }
              plVar15 = *(long **)pLVar1;
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,local_118);
              cocos2d::ui::LinearLayoutParameter::setGravity(this_02,uVar22);
            }
            else {
LAB_00c802fc:
              puVar6 = P_RelativeName;
              sVar14 = strlen(P_RelativeName);
              if (sVar14 == sVar3) {
                if (sVar3 != 0) {
                  if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  pvVar4 = pvVar18;
                  if ((uVar16 & 1) != 0) {
                    pvVar4 = local_e0;
                  }
                  iVar10 = memcmp(pvVar4,puVar6,sVar3);
                  if (iVar10 != 0) goto LAB_00c80344;
                }
                cocos2d::ui::RelativeLayoutParameter::setRelativeName
                          (this_03,(basic_string *)local_118);
              }
              else {
LAB_00c80344:
                puVar6 = P_RelativeToName;
                sVar14 = strlen(P_RelativeToName);
                if (sVar14 == sVar3) {
                  if (sVar3 != 0) {
                    if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    pvVar4 = pvVar18;
                    if ((uVar16 & 1) != 0) {
                      pvVar4 = local_e0;
                    }
                    iVar10 = memcmp(pvVar4,puVar6,sVar3);
                    if (iVar10 != 0) goto LAB_00c8038c;
                  }
                  cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName
                            (this_03,(basic_string *)local_118);
                }
                else {
LAB_00c8038c:
                  puVar6 = P_Align;
                  sVar14 = strlen(P_Align);
                  if (sVar14 == sVar3) {
                    if (sVar3 != 0) {
                      if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      pvVar4 = pvVar18;
                      if ((uVar16 & 1) != 0) {
                        pvVar4 = local_e0;
                      }
                      iVar10 = memcmp(pvVar4,puVar6,sVar3);
                      if (iVar10 != 0) goto LAB_00c803d4;
                    }
                    plVar15 = *(long **)pLVar1;
                    if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_009d64e4();
                    }
                    uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,local_118);
                    cocos2d::ui::RelativeLayoutParameter::setAlign(this_03,uVar22);
                  }
                  else {
LAB_00c803d4:
                    puVar6 = P_MarginLeft;
                    sVar14 = strlen(P_MarginLeft);
                    if (sVar14 == sVar3) {
                      if (sVar3 != 0) {
                        if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar4 = pvVar18;
                        if ((uVar16 & 1) != 0) {
                          pvVar4 = local_e0;
                        }
                        iVar10 = memcmp(pvVar4,puVar6,sVar3);
                        if (iVar10 != 0) goto LAB_00c8041c;
                      }
                      plVar15 = *(long **)pLVar2;
                      if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      local_100 = (**(code **)(*plVar15 + 0x30))(plVar15,local_118);
                    }
                    else {
LAB_00c8041c:
                      puVar6 = P_MarginTop;
                      sVar14 = strlen(P_MarginTop);
                      if (sVar14 == sVar3) {
                        if (sVar3 != 0) {
                          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar4 = pvVar18;
                          if ((uVar16 & 1) != 0) {
                            pvVar4 = local_e0;
                          }
                          iVar10 = memcmp(pvVar4,puVar6,sVar3);
                          if (iVar10 != 0) goto LAB_00c80464;
                        }
                        plVar15 = *(long **)pLVar2;
                        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        local_fc = (**(code **)(*plVar15 + 0x30))(plVar15,local_118);
                      }
                      else {
LAB_00c80464:
                        puVar6 = P_MarginRight;
                        sVar14 = strlen(P_MarginRight);
                        if (sVar14 == sVar3) {
                          if (sVar3 != 0) {
                            if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                            }
                            pvVar4 = pvVar18;
                            if ((uVar16 & 1) != 0) {
                              pvVar4 = local_e0;
                            }
                            iVar10 = memcmp(pvVar4,puVar6,sVar3);
                            if (iVar10 != 0) goto LAB_00c804ac;
                          }
                          plVar15 = *(long **)pLVar2;
                          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          local_f8 = (**(code **)(*plVar15 + 0x30))(plVar15,local_118);
                        }
                        else {
LAB_00c804ac:
                          puVar6 = P_MarginDown;
                          sVar14 = strlen(P_MarginDown);
                          if (sVar14 == sVar3) {
                            if (sVar3 != 0) {
                              if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                              }
                              pvVar4 = pvVar18;
                              if ((uVar16 & 1) != 0) {
                                pvVar4 = local_e0;
                              }
                              iVar10 = memcmp(pvVar4,puVar6,sVar3);
                              if (iVar10 != 0) goto joined_r0x00c8061c;
                            }
                            plVar15 = *(long **)pLVar2;
                            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            local_f4 = (**(code **)(*plVar15 + 0x30))(plVar15,local_118);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
joined_r0x00c8061c:
          if (((byte)local_118[0] & 1) != 0) {
            operator_delete(local_108);
          }
          if ((local_f0 & 1) != 0) {
            operator_delete(local_e0);
          }
          this_01 = this_01 + 0x10;
        }
        cocos2d::ui::LayoutParameter::setMargin((LayoutParameter *)this_02,(Margin *)&local_100);
        cocos2d::ui::LayoutParameter::setMargin((LayoutParameter *)this_03,(Margin *)&local_100);
        if (iVar9 == 1) {
          cocos2d::ui::Widget::setLayoutParameter(param_1,(LayoutParameter *)this_02);
        }
        else if (iVar9 == 2) {
          cocos2d::ui::Widget::setLayoutParameter(param_1,(LayoutParameter *)this_03);
        }
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7fa58:
      puVar6 = P_Opacity;
      sVar14 = strlen(P_Opacity);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7faa0;
        }
        plVar15 = *(long **)pLVar1;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        *(undefined4 *)(this + 0xec) = uVar22;
        goto joined_r0x00c7feec;
      }
LAB_00c7faa0:
      puVar6 = P_ColorR;
      sVar14 = strlen(P_ColorR);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7fae8;
        }
        plVar15 = *(long **)pLVar1;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        LVar7 = (LayoutReader)(**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        this[0xe8] = LVar7;
        goto joined_r0x00c7feec;
      }
LAB_00c7fae8:
      puVar6 = P_ColorG;
      sVar14 = strlen(P_ColorG);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7fb30;
        }
        plVar15 = *(long **)pLVar1;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        LVar7 = (LayoutReader)(**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        this[0xe9] = LVar7;
        goto joined_r0x00c7feec;
      }
LAB_00c7fb30:
      puVar6 = P_ColorB;
      sVar14 = strlen(P_ColorB);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7fb78;
        }
        plVar15 = *(long **)pLVar1;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        LVar7 = (LayoutReader)(**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        this[0xea] = LVar7;
        goto joined_r0x00c7feec;
      }
LAB_00c7fb78:
      puVar6 = P_FlipX;
      sVar14 = strlen(P_FlipX);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7fbc0;
        }
        plVar15 = *(long **)(this + 0x90);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar11 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        (**(code **)(*(long *)param_1 + 0x598))(param_1,uVar11 & 1);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7fbc0:
      puVar6 = P_FlipY;
      sVar14 = strlen(P_FlipY);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7fc08;
        }
        plVar15 = *(long **)(this + 0x90);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar11 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        (**(code **)(*(long *)param_1 + 0x5a8))(param_1,uVar11 & 1);
        goto switchD_00c7fd00_caseD_c;
      }
LAB_00c7fc08:
      puVar6 = P_AnchorPointX;
      sVar14 = strlen(P_AnchorPointX);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7fc50;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        *(undefined4 *)(this + 0xfc) = uVar22;
        goto joined_r0x00c7feec;
      }
LAB_00c7fc50:
      puVar6 = P_AnchorPointY;
      sVar14 = strlen(P_AnchorPointY);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7fc98;
        }
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        *(undefined4 *)(this + 0x100) = uVar22;
        goto joined_r0x00c7feec;
      }
LAB_00c7fc98:
      puVar6 = P_AdaptScreen;
      sVar14 = strlen(P_AdaptScreen);
      if (sVar14 == sVar3) {
        if (sVar3 != 0) {
          if (sVar3 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          plVar15 = plVar17;
          if ((uVar11 & 1) != 0) {
            plVar15 = local_a8;
          }
          iVar9 = memcmp(plVar15,puVar6,sVar3);
          if (iVar9 != 0) goto LAB_00c7fce0;
        }
        plVar15 = *(long **)(this + 0x90);
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        bVar8 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        this[0xf8] = (LayoutReader)(bVar8 & 1);
        goto joined_r0x00c7feec;
      }
LAB_00c7fce0:
      switch(sVar3) {
      case 7:
        plVar15 = plVar17;
        if ((uVar11 & 1) != 0) {
          plVar15 = local_a8;
        }
        iVar9 = memcmp(plVar15,"vectorX",7);
        if (iVar9 == 0) {
          plVar15 = *(long **)pLVar2;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar25 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        }
        else {
          iVar9 = memcmp(plVar15,"vectorY",7);
          if (iVar9 != 0) break;
          plVar15 = *(long **)pLVar2;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar21 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        }
        goto joined_r0x00c7feec;
      case 8:
        plVar15 = plVar17;
        if ((uVar11 & 1) != 0) {
          plVar15 = local_a8;
        }
        if (*plVar15 == 0x656c624170696c63) {
          plVar15 = *(long **)(this + 0x90);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar11 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
          (**(code **)(*(long *)param_1 + 0x680))(param_1,uVar11 & 1);
        }
        else if (*plVar15 == 0x52726f6c6f436762) {
          plVar15 = *(long **)pLVar1;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
          local_140 = CONCAT44(local_140._4_4_,uVar22);
        }
        else if (*plVar15 == 0x47726f6c6f436762) {
          plVar15 = *(long **)pLVar1;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
          local_150 = CONCAT44(local_150._4_4_,uVar22);
        }
        else if (*plVar15 == 0x42726f6c6f436762) {
          plVar15 = *(long **)pLVar1;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          local_15c = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        }
        break;
      case 9:
        plVar15 = plVar17;
        if ((uVar11 & 1) != 0) {
          plVar15 = local_a8;
        }
        iVar9 = memcmp(plVar15,"colorType",9);
        if (iVar9 == 0) {
          plVar15 = *(long **)pLVar1;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
          cocos2d::ui::Layout::setBackGroundColorType((Layout *)param_1,uVar22);
        }
        break;
      case 10:
        plVar15 = plVar17;
        if ((uVar11 & 1) != 0) {
          plVar15 = local_a8;
        }
        iVar9 = memcmp(plVar15,"capInsetsX",10);
        if (iVar9 == 0) {
          plVar15 = *(long **)pLVar2;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          fVar26 = (float)(**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        }
        else {
          iVar9 = memcmp(plVar15,"capInsetsY",10);
          if (iVar9 != 0) {
            iVar9 = memcmp(plVar15,"layoutType",10);
            if (iVar9 == 0) {
              plVar15 = *(long **)pLVar1;
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
              local_150 = CONCAT44(uVar22,(undefined4)local_150);
            }
            break;
          }
          plVar15 = *(long **)pLVar2;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          fVar27 = (float)(**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        }
        goto joined_r0x00c7feec;
      case 0xb:
        plVar15 = plVar17;
        if ((uVar11 & 1) != 0) {
          plVar15 = local_a8;
        }
        iVar9 = memcmp(plVar15,"bgEndColorR",0xb);
        if (iVar9 == 0) {
          plVar15 = *(long **)pLVar1;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          local_138 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        }
        else {
          iVar9 = memcmp(plVar15,"bgEndColorG",0xb);
          if (iVar9 == 0) {
            plVar15 = *(long **)pLVar1;
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
            local_148 = CONCAT44(uVar22,(undefined4)local_148);
          }
          else {
            iVar9 = memcmp(plVar15,"bgEndColorB",0xb);
            if (iVar9 == 0) {
              plVar15 = *(long **)pLVar1;
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
              local_158 = CONCAT44(uVar22,(undefined4)local_158);
            }
          }
        }
        break;
      case 0xd:
        plVar15 = plVar17;
        if ((uVar11 & 1) != 0) {
          plVar15 = local_a8;
        }
        iVar9 = memcmp(plVar15,"bgStartColorR",0xd);
        if (iVar9 == 0) {
          plVar15 = *(long **)pLVar1;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
          local_140 = CONCAT44(uVar22,(undefined4)local_140);
        }
        else {
          iVar9 = memcmp(plVar15,"bgStartColorG",0xd);
          if (iVar9 == 0) {
            plVar15 = *(long **)pLVar1;
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
            local_148 = CONCAT44(local_148._4_4_,uVar22);
          }
          else {
            iVar9 = memcmp(plVar15,"bgStartColorB",0xd);
            if (iVar9 == 0) {
              plVar15 = *(long **)pLVar1;
              if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
              local_158 = CONCAT44(local_158._4_4_,uVar22);
            }
          }
        }
        break;
      case 0xe:
        plVar15 = plVar17;
        if ((uVar11 & 1) != 0) {
          plVar15 = local_a8;
        }
        iVar9 = memcmp(plVar15,"bgColorOpacity",0xe);
        if (iVar9 == 0) {
          plVar15 = *(long **)pLVar1;
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          local_134 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        }
        else {
          iVar9 = memcmp(plVar15,"capInsetsWidth",0xe);
          if (iVar9 == 0) {
            plVar15 = *(long **)pLVar2;
            if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            fVar23 = (float)(**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
            goto joined_r0x00c7feec;
          }
        }
        break;
      case 0xf:
        plVar15 = plVar17;
        if ((uVar11 & 1) != 0) {
          plVar15 = local_a8;
        }
        iVar9 = memcmp(plVar15,"capInsetsHeight",0xf);
        if (iVar9 != 0) break;
        plVar15 = *(long **)pLVar2;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        fVar24 = (float)(**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
        goto joined_r0x00c7feec;
      case 0x13:
        plVar15 = plVar17;
        if ((uVar11 & 1) != 0) {
          plVar15 = local_a8;
        }
        iVar9 = memcmp(plVar15,"backGroundImageData",0x13);
        if ((iVar9 != 0) || (lVar20 = stExpCocoNode::GetChildArray(this_00,param_2), lVar20 == 0))
        break;
        pcVar13 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar20 + 0x20),param_2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_f0,pcVar13);
        plVar15 = *(long **)pLVar1;
        if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar22 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_f0);
        WidgetReader::getResourcePath(local_118,this,param_2,this_00,uVar22);
        cocos2d::ui::Layout::setBackGroundImage((Layout *)param_1,local_118,uVar22);
        if (((byte)local_118[0] & 1) != 0) {
          operator_delete(local_108);
        }
        goto joined_r0x00c80128;
      case 0x16:
        plVar15 = plVar17;
        if ((uVar11 & 1) != 0) {
          plVar15 = local_a8;
        }
        iVar9 = memcmp(plVar15,"backGroundScale9Enable",0x16);
        if (iVar9 == 0) {
          plVar15 = *(long **)(this + 0x90);
          if (plVar15 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          bVar8 = (**(code **)(*plVar15 + 0x30))(plVar15,&local_d0);
          cocos2d::ui::Layout::setBackGroundImageScale9Enabled((Layout *)param_1,(bool)(bVar8 & 1));
        }
      }
switchD_00c7fd00_caseD_c:
joined_r0x00c7feec:
      if (((byte)local_d0 & 1) != 0) {
        operator_delete(local_c0);
      }
      if ((local_b8 & 1) != 0) {
        operator_delete(local_a8);
      }
      lVar19 = lVar19 + 1;
      iVar9 = stExpCocoNode::GetChildNum(param_3);
    } while (lVar19 < iVar9);
  }
  cocos2d::Color3B::Color3B
            ((Color3B *)&local_b8,(uchar)((ulong)local_140 >> 0x20),(uchar)local_148,
             (uchar)local_158);
  cocos2d::Color3B::Color3B
            ((Color3B *)&local_d0,local_138,(uchar)((ulong)local_148 >> 0x20),
             (uchar)((ulong)local_158 >> 0x20));
  cocos2d::ui::Layout::setBackGroundColor
            ((Layout *)param_1,(Color3B *)&local_b8,(Color3B *)&local_d0);
  cocos2d::Color3B::Color3B((Color3B *)&local_b8,(uchar)local_140,(uchar)local_150,local_15c);
  cocos2d::ui::Layout::setBackGroundColor((Layout *)param_1,(Color3B *)&local_b8);
  local_b8 = uVar25;
  uStack_b4 = uVar21;
  cocos2d::ui::Layout::setBackGroundColorVector((Layout *)param_1,(Vec2 *)&local_b8);
  cocos2d::ui::Layout::setBackGroundColorOpacity((Layout *)param_1,local_134);
  cocos2d::Color3B::Color3B
            ((Color3B *)&local_b8,(uchar)this[0xe8],(uchar)this[0xe9],(uchar)this[0xea]);
  cocos2d::ui::Layout::setBackGroundImageColor((Layout *)param_1,(Color3B *)&local_b8);
  cocos2d::ui::Layout::setBackGroundImageOpacity
            ((Layout *)param_1,(uchar)*(undefined4 *)(this + 0xec));
  uVar16 = cocos2d::ui::Layout::isBackGroundImageScale9Enabled((Layout *)param_1);
  if ((uVar16 & 1) != 0) {
    cocos2d::Rect::Rect((Rect *)&local_b8,fVar26,fVar27,fVar23,fVar24);
    cocos2d::ui::Layout::setBackGroundImageCapInsets((Layout *)param_1,(Rect *)&local_b8);
  }
  (**(code **)(*(long *)param_1 + 0x690))(param_1,local_150._4_4_);
  WidgetReader::endSetBasicProperties((WidgetReader *)this,param_1);
  if (*(long *)(lVar5 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

