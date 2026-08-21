
/* WARNING: Type propagation algorithm not settling */
/* cocostudio::LoadingBarReader::setPropsFromBinary(cocos2d::ui::Widget*, cocostudio::CocoLoader*,
   cocostudio::stExpCocoNode*) */

void __thiscall
cocostudio::LoadingBarReader::setPropsFromBinary
          (LoadingBarReader *this,Widget *param_1,CocoLoader *param_2,stExpCocoNode *param_3)

{
  LoadingBarReader *pLVar1;
  stExpCocoNode *this_00;
  size_t sVar2;
  void *pvVar3;
  long lVar4;
  undefined *puVar5;
  ulong __n;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar6;
  LoadingBarReader LVar7;
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
  void *pvVar16;
  void *pvVar17;
  long lVar18;
  long lVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  int local_124;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_108 [16];
  void *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  ulong local_e0;
  size_t sStack_d8;
  void *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0;
  undefined7 uStack_bf;
  ulong uStack_b8;
  void *local_b0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a8 [8];
  size_t local_a0;
  void *local_98;
  long local_90;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  WidgetReader::setPropsFromBinary((WidgetReader *)this,param_1,param_2,param_3);
  WidgetReader::beginSetBasicProperties((WidgetReader *)this,param_1);
  fVar20 = (float)cocos2d::ui::LoadingBar::getPercent((LoadingBar *)param_1);
  local_124 = (int)fVar20;
  lVar11 = stExpCocoNode::GetChildArray(param_3,param_2);
  iVar8 = stExpCocoNode::GetChildNum(param_3);
  if (iVar8 < 1) {
    fVar23 = 0.0;
    fVar22 = 0.0;
    fVar24 = 0.0;
    fVar20 = 0.0;
  }
  else {
    pLVar1 = this + 0xc0;
    pvVar16 = (void *)((ulong)local_a8 | 1);
    lVar18 = 0;
    fVar20 = 0.0;
    fVar24 = 0.0;
    fVar22 = 0.0;
    fVar23 = 0.0;
    pvVar17 = (void *)((ulong)&local_e0 | 1);
    do {
      this_00 = (stExpCocoNode *)(lVar11 + lVar18 * 0x10);
      pcVar12 = (char *)stExpCocoNode::GetName(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_a8,pcVar12);
      pcVar12 = (char *)stExpCocoNode::GetValue(this_00,param_2);
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(&local_c0,pcVar12);
      puVar5 = P_IgnoreSize;
      sVar13 = strlen(P_IgnoreSize);
      bVar6 = local_a8[0];
      sVar2 = (ulong)((byte)local_a8[0] >> 1);
      if (((byte)local_a8[0] & 1) != 0) {
        sVar2 = local_a0;
      }
      if (sVar13 == sVar2) {
        if (sVar13 != 0) {
          if (sVar13 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)local_a8[0] & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar13);
          if (iVar8 != 0) goto LAB_00c8666c;
        }
        plVar14 = *(long **)(this + 0x90);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        (**(code **)(*(long *)param_1 + 0x600))(param_1,uVar10 & 1);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c8666c:
      puVar5 = P_SizeType;
      sVar13 = strlen(P_SizeType);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c866b4;
        }
        plVar14 = *(long **)(this + 0x60);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        cocos2d::ui::Widget::setSizeType(param_1,uVar21);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c866b4:
      puVar5 = P_PositionType;
      sVar13 = strlen(P_PositionType);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c866fc;
        }
        plVar14 = *(long **)(this + 0x60);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        cocos2d::ui::Widget::setPositionType(param_1,uVar21);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c866fc:
      puVar5 = P_SizePercentX;
      sVar13 = strlen(P_SizePercentX);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86744;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        *(undefined4 *)(this + 0xd0) = uVar21;
        goto joined_r0x00c86fd0;
      }
LAB_00c86744:
      puVar5 = P_SizePercentY;
      sVar13 = strlen(P_SizePercentY);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c8678c;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        *(undefined4 *)(this + 0xd4) = uVar21;
        goto joined_r0x00c86fd0;
      }
LAB_00c8678c:
      puVar5 = P_PositionPercentX;
      sVar13 = strlen(P_PositionPercentX);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c867d4;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        *(undefined4 *)(this + 0xd8) = uVar21;
        goto joined_r0x00c86fd0;
      }
LAB_00c867d4:
      puVar5 = P_PositionPercentY;
      sVar13 = strlen(P_PositionPercentY);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c8681c;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        *(undefined4 *)(this + 0xdc) = uVar21;
        goto joined_r0x00c86fd0;
      }
LAB_00c8681c:
      puVar5 = P_Width;
      sVar13 = strlen(P_Width);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86864;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        *(undefined4 *)(this + 0xe0) = uVar21;
        goto joined_r0x00c86fd0;
      }
LAB_00c86864:
      puVar5 = P_Height;
      sVar13 = strlen(P_Height);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c868ac;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        *(undefined4 *)(this + 0xe4) = uVar21;
        goto joined_r0x00c86fd0;
      }
LAB_00c868ac:
      puVar5 = P_Tag;
      sVar13 = strlen(P_Tag);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c868f4;
        }
        plVar14 = *(long **)(this + 0x60);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        (**(code **)(*(long *)param_1 + 0x2c0))(param_1,uVar21);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c868f4:
      puVar5 = P_ActionTag;
      sVar13 = strlen(P_ActionTag);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c8693c;
        }
        plVar14 = *(long **)(this + 0x60);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        iVar8 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        cocos2d::ui::Widget::setActionTag(param_1,iVar8);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c8693c:
      puVar5 = P_TouchAble;
      sVar13 = strlen(P_TouchAble);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86984;
        }
        plVar14 = *(long **)(this + 0x90);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        (**(code **)(*(long *)param_1 + 0x588))(param_1,uVar10 & 1);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c86984:
      puVar5 = P_Name;
      sVar13 = strlen(P_Name);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c869cc;
        }
        pvVar3 = local_b0;
        __n = uStack_b8;
        uVar15 = (ulong)((byte)local_c0 >> 1);
        if (((byte)local_c0 & 1) != 0) {
          uVar15 = uStack_b8;
        }
        if (uVar15 == 0) {
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_e0,"default");
        }
        else {
          sStack_d8 = 0;
          local_d0 = (void *)0x0;
          local_e0 = 0;
          if (((byte)local_c0 & 1) == 0) {
            local_e0 = CONCAT71(uStack_bf,local_c0);
            sStack_d8 = uStack_b8;
            local_d0 = local_b0;
          }
          else {
            if (0xffffffffffffffef < uStack_b8) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_b8 < 0x17) {
              local_e0 = (ulong)(byte)((int)uStack_b8 << 1);
              __dest = pvVar17;
              if (uStack_b8 != 0) goto LAB_00c87230;
            }
            else {
              uVar15 = uStack_b8 + 0x10 & 0xfffffffffffffff0;
              __dest = operator_new(uVar15);
              local_e0 = uVar15 | 1;
              sStack_d8 = __n;
              local_d0 = __dest;
LAB_00c87230:
              memcpy(__dest,pvVar3,__n);
            }
            *(undefined1 *)((long)__dest + __n) = 0;
          }
        }
        (**(code **)(*(long *)param_1 + 0x2d0))(param_1,&local_e0);
joined_r0x00c87ba8:
        if ((local_e0 & 1) == 0) goto switchD_00c86e6c_caseD_8;
        operator_delete(local_d0);
        goto joined_r0x00c86fd0;
      }
LAB_00c869cc:
      puVar5 = P_X;
      sVar13 = strlen(P_X);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86a14;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        *(undefined4 *)(this + 0xf0) = uVar21;
        goto joined_r0x00c86fd0;
      }
LAB_00c86a14:
      puVar5 = P_Y;
      sVar13 = strlen(P_Y);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86a5c;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        *(undefined4 *)(this + 0xf4) = uVar21;
        goto joined_r0x00c86fd0;
      }
LAB_00c86a5c:
      puVar5 = P_ScaleX;
      sVar13 = strlen(P_ScaleX);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86aa4;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        (**(code **)(*(long *)param_1 + 0x50))(param_1);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c86aa4:
      puVar5 = P_ScaleY;
      sVar13 = strlen(P_ScaleY);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86aec;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        (**(code **)(*(long *)param_1 + 0x60))(param_1);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c86aec:
      puVar5 = P_Rotation;
      sVar13 = strlen(P_Rotation);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86b34;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        (**(code **)(*(long *)param_1 + 0x180))(param_1);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c86b34:
      puVar5 = P_Visbile;
      sVar13 = strlen(P_Visbile);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86b7c;
        }
        plVar14 = *(long **)(this + 0x90);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        (**(code **)(*(long *)param_1 + 0x170))(param_1,uVar10 & 1);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c86b7c:
      puVar5 = P_ZOrder;
      sVar13 = strlen(P_ZOrder);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86bc4;
        }
        plVar14 = *(long **)(this + 0x60);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        (**(code **)(*(long *)param_1 + 0x18))(param_1,uVar21);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c86bc4:
      puVar5 = P_LayoutParameter;
      sVar13 = strlen(P_LayoutParameter);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86c0c;
        }
        this_01 = (stExpCocoNode *)stExpCocoNode::GetChildArray(this_00,param_2);
        this_02 = (LinearLayoutParameter *)cocos2d::ui::LinearLayoutParameter::create();
        this_03 = (RelativeLayoutParameter *)cocos2d::ui::RelativeLayoutParameter::create();
        cocos2d::ui::Margin::Margin((Margin *)&local_f0);
        iVar8 = -1;
        for (lVar19 = 0; iVar9 = stExpCocoNode::GetChildNum(this_00), lVar19 < iVar9;
            lVar19 = lVar19 + 1) {
          pcVar12 = (char *)stExpCocoNode::GetName(this_01,param_2);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_e0,pcVar12);
          pcVar12 = (char *)stExpCocoNode::GetValue(this_01,param_2);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_108,pcVar12);
          puVar5 = P_Type;
          sVar13 = strlen(P_Type);
          uVar15 = local_e0;
          sVar2 = local_e0 >> 1 & 0x7f;
          if ((local_e0 & 1) != 0) {
            sVar2 = sStack_d8;
          }
          if (sVar13 == sVar2) {
            if (sVar13 != 0) {
              if (sVar13 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
              }
              pvVar3 = pvVar17;
              if ((local_e0 & 1) != 0) {
                pvVar3 = local_d0;
              }
              iVar9 = memcmp(pvVar3,puVar5,sVar13);
              if (iVar9 != 0) goto LAB_00c873e8;
            }
            plVar14 = *(long **)(this + 0x60);
            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_009d64e4();
            }
            iVar8 = (**(code **)(*plVar14 + 0x30))(plVar14,local_108);
          }
          else {
LAB_00c873e8:
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
                  pvVar3 = local_d0;
                }
                iVar9 = memcmp(pvVar3,puVar5,sVar2);
                if (iVar9 != 0) goto LAB_00c87430;
              }
              plVar14 = *(long **)(this + 0x60);
              if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_009d64e4();
              }
              uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,local_108);
              cocos2d::ui::LinearLayoutParameter::setGravity(this_02,uVar21);
            }
            else {
LAB_00c87430:
              puVar5 = P_RelativeName;
              sVar13 = strlen(P_RelativeName);
              if (sVar13 == sVar2) {
                if (sVar2 != 0) {
                  if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                  }
                  pvVar3 = pvVar17;
                  if ((uVar15 & 1) != 0) {
                    pvVar3 = local_d0;
                  }
                  iVar9 = memcmp(pvVar3,puVar5,sVar2);
                  if (iVar9 != 0) goto LAB_00c87478;
                }
                cocos2d::ui::RelativeLayoutParameter::setRelativeName
                          (this_03,(basic_string *)local_108);
              }
              else {
LAB_00c87478:
                puVar5 = P_RelativeToName;
                sVar13 = strlen(P_RelativeToName);
                if (sVar13 == sVar2) {
                  if (sVar2 != 0) {
                    if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                    }
                    pvVar3 = pvVar17;
                    if ((uVar15 & 1) != 0) {
                      pvVar3 = local_d0;
                    }
                    iVar9 = memcmp(pvVar3,puVar5,sVar2);
                    if (iVar9 != 0) goto LAB_00c874c0;
                  }
                  cocos2d::ui::RelativeLayoutParameter::setRelativeToWidgetName
                            (this_03,(basic_string *)local_108);
                }
                else {
LAB_00c874c0:
                  puVar5 = P_Align;
                  sVar13 = strlen(P_Align);
                  if (sVar13 == sVar2) {
                    if (sVar2 != 0) {
                      if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                      }
                      pvVar3 = pvVar17;
                      if ((uVar15 & 1) != 0) {
                        pvVar3 = local_d0;
                      }
                      iVar9 = memcmp(pvVar3,puVar5,sVar2);
                      if (iVar9 != 0) goto LAB_00c87508;
                    }
                    plVar14 = *(long **)(this + 0x60);
                    if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_009d64e4();
                    }
                    uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,local_108);
                    cocos2d::ui::RelativeLayoutParameter::setAlign(this_03,uVar21);
                  }
                  else {
LAB_00c87508:
                    puVar5 = P_MarginLeft;
                    sVar13 = strlen(P_MarginLeft);
                    if (sVar13 == sVar2) {
                      if (sVar2 != 0) {
                        if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                        }
                        pvVar3 = pvVar17;
                        if ((uVar15 & 1) != 0) {
                          pvVar3 = local_d0;
                        }
                        iVar9 = memcmp(pvVar3,puVar5,sVar2);
                        if (iVar9 != 0) goto LAB_00c87550;
                      }
                      plVar14 = *(long **)pLVar1;
                      if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        FUN_009d64e4();
                      }
                      local_f0 = (**(code **)(*plVar14 + 0x30))(plVar14,local_108);
                    }
                    else {
LAB_00c87550:
                      puVar5 = P_MarginTop;
                      sVar13 = strlen(P_MarginTop);
                      if (sVar13 == sVar2) {
                        if (sVar2 != 0) {
                          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                          }
                          pvVar3 = pvVar17;
                          if ((uVar15 & 1) != 0) {
                            pvVar3 = local_d0;
                          }
                          iVar9 = memcmp(pvVar3,puVar5,sVar2);
                          if (iVar9 != 0) goto LAB_00c87598;
                        }
                        plVar14 = *(long **)pLVar1;
                        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_009d64e4();
                        }
                        local_ec = (**(code **)(*plVar14 + 0x30))(plVar14,local_108);
                      }
                      else {
LAB_00c87598:
                        puVar5 = P_MarginRight;
                        sVar13 = strlen(P_MarginRight);
                        if (sVar13 == sVar2) {
                          if (sVar2 != 0) {
                            if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                            }
                            pvVar3 = pvVar17;
                            if ((uVar15 & 1) != 0) {
                              pvVar3 = local_d0;
                            }
                            iVar9 = memcmp(pvVar3,puVar5,sVar2);
                            if (iVar9 != 0) goto LAB_00c875e0;
                          }
                          plVar14 = *(long **)pLVar1;
                          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_009d64e4();
                          }
                          local_e8 = (**(code **)(*plVar14 + 0x30))(plVar14,local_108);
                        }
                        else {
LAB_00c875e0:
                          puVar5 = P_MarginDown;
                          sVar13 = strlen(P_MarginDown);
                          if (sVar13 == sVar2) {
                            if (sVar2 != 0) {
                              if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
                                std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
                              }
                              pvVar3 = pvVar17;
                              if ((uVar15 & 1) != 0) {
                                pvVar3 = local_d0;
                              }
                              iVar9 = memcmp(pvVar3,puVar5,sVar2);
                              if (iVar9 != 0) goto joined_r0x00c87760;
                            }
                            plVar14 = *(long **)pLVar1;
                            if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                              FUN_009d64e4();
                            }
                            local_e4 = (**(code **)(*plVar14 + 0x30))(plVar14,local_108);
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
joined_r0x00c87760:
          if (((byte)local_108[0] & 1) != 0) {
            operator_delete(local_f8);
          }
          if ((local_e0 & 1) != 0) {
            operator_delete(local_d0);
          }
          this_01 = this_01 + 0x10;
        }
        cocos2d::ui::LayoutParameter::setMargin((LayoutParameter *)this_02,(Margin *)&local_f0);
        cocos2d::ui::LayoutParameter::setMargin((LayoutParameter *)this_03,(Margin *)&local_f0);
        if (iVar8 == 1) {
          cocos2d::ui::Widget::setLayoutParameter(param_1,(LayoutParameter *)this_02);
        }
        else if (iVar8 == 2) {
          cocos2d::ui::Widget::setLayoutParameter(param_1,(LayoutParameter *)this_03);
        }
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c86c0c:
      puVar5 = P_Opacity;
      sVar13 = strlen(P_Opacity);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86c54;
        }
        plVar14 = *(long **)(this + 0x60);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        *(undefined4 *)(this + 0xec) = uVar21;
        goto joined_r0x00c86fd0;
      }
LAB_00c86c54:
      puVar5 = P_ColorR;
      sVar13 = strlen(P_ColorR);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86c9c;
        }
        plVar14 = *(long **)(this + 0x60);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        LVar7 = (LoadingBarReader)(**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        this[0xe8] = LVar7;
        goto joined_r0x00c86fd0;
      }
LAB_00c86c9c:
      puVar5 = P_ColorG;
      sVar13 = strlen(P_ColorG);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86ce4;
        }
        plVar14 = *(long **)(this + 0x60);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        LVar7 = (LoadingBarReader)(**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        this[0xe9] = LVar7;
        goto joined_r0x00c86fd0;
      }
LAB_00c86ce4:
      puVar5 = P_ColorB;
      sVar13 = strlen(P_ColorB);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86d2c;
        }
        plVar14 = *(long **)(this + 0x60);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        LVar7 = (LoadingBarReader)(**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        this[0xea] = LVar7;
        goto joined_r0x00c86fd0;
      }
LAB_00c86d2c:
      puVar5 = P_FlipX;
      sVar13 = strlen(P_FlipX);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86d74;
        }
        plVar14 = *(long **)(this + 0x90);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        (**(code **)(*(long *)param_1 + 0x598))(param_1,uVar10 & 1);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c86d74:
      puVar5 = P_FlipY;
      sVar13 = strlen(P_FlipY);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86dbc;
        }
        plVar14 = *(long **)(this + 0x90);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar10 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        (**(code **)(*(long *)param_1 + 0x5a8))(param_1,uVar10 & 1);
        goto switchD_00c86e6c_caseD_8;
      }
LAB_00c86dbc:
      puVar5 = P_AnchorPointX;
      sVar13 = strlen(P_AnchorPointX);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86e04;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        *(undefined4 *)(this + 0xfc) = uVar21;
        goto joined_r0x00c86fd0;
      }
LAB_00c86e04:
      puVar5 = P_AnchorPointY;
      sVar13 = strlen(P_AnchorPointY);
      if (sVar13 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = pvVar16;
          if (((byte)bVar6 & 1) != 0) {
            pvVar3 = local_98;
          }
          iVar8 = memcmp(pvVar3,puVar5,sVar2);
          if (iVar8 != 0) goto LAB_00c86e4c;
        }
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        *(undefined4 *)(this + 0x100) = uVar21;
        goto joined_r0x00c86fd0;
      }
LAB_00c86e4c:
      switch(sVar2) {
      case 7:
        pvVar3 = pvVar16;
        if (((byte)bVar6 & 1) != 0) {
          pvVar3 = local_98;
        }
        iVar8 = memcmp(pvVar3,"percent",7);
        if (iVar8 == 0) {
          plVar14 = *(long **)(this + 0x60);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          local_124 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        }
        break;
      case 9:
        pvVar3 = pvVar16;
        if (((byte)bVar6 & 1) != 0) {
          pvVar3 = local_98;
        }
        iVar8 = memcmp(pvVar3,"direction",9);
        if (iVar8 == 0) {
          plVar14 = *(long **)(this + 0x60);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
          cocos2d::ui::LoadingBar::setDirection((LoadingBar *)param_1,uVar21);
        }
        break;
      case 10:
        pvVar3 = pvVar16;
        if (((byte)bVar6 & 1) != 0) {
          pvVar3 = local_98;
        }
        iVar8 = memcmp(pvVar3,"capInsetsX",10);
        if (iVar8 == 0) {
          plVar14 = *(long **)pLVar1;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          fVar20 = (float)(**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        }
        else {
          iVar8 = memcmp(pvVar3,"capInsetsY",10);
          if (iVar8 != 0) break;
          plVar14 = *(long **)pLVar1;
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          fVar24 = (float)(**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        }
        goto joined_r0x00c86fd0;
      case 0xb:
        pvVar3 = pvVar16;
        if (((byte)bVar6 & 1) != 0) {
          pvVar3 = local_98;
        }
        iVar8 = memcmp(pvVar3,"textureData",0xb);
        if (iVar8 != 0) break;
        lVar19 = stExpCocoNode::GetChildArray(this_00,param_2);
        pcVar12 = (char *)stExpCocoNode::GetValue((stExpCocoNode *)(lVar19 + 0x20),param_2);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )&local_e0,pcVar12);
        plVar14 = *(long **)(this + 0x60);
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        uVar21 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_e0);
        WidgetReader::getResourcePath(local_108,this,param_2,this_00,uVar21);
        cocos2d::ui::LoadingBar::loadTexture((LoadingBar *)param_1,local_108,uVar21);
        if (((byte)local_108[0] & 1) != 0) {
          operator_delete(local_f8);
        }
        goto joined_r0x00c87ba8;
      case 0xc:
        pvVar3 = pvVar16;
        if (((byte)bVar6 & 1) != 0) {
          pvVar3 = local_98;
        }
        iVar8 = memcmp(pvVar3,"scale9Enable",0xc);
        if (iVar8 == 0) {
          plVar14 = *(long **)(this + 0x90);
          if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_009d64e4();
          }
          (**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
          cocos2d::ui::LoadingBar::setScale9Enabled(SUB81(param_1,0));
        }
        break;
      case 0xe:
        pvVar3 = pvVar16;
        if (((byte)bVar6 & 1) != 0) {
          pvVar3 = local_98;
        }
        iVar8 = memcmp(pvVar3,"capInsetsWidth",0xe);
        if (iVar8 != 0) break;
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        fVar22 = (float)(**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        goto joined_r0x00c86fd0;
      case 0xf:
        pvVar3 = pvVar16;
        if (((byte)bVar6 & 1) != 0) {
          pvVar3 = local_98;
        }
        iVar8 = memcmp(pvVar3,"capInsetsHeight",0xf);
        if (iVar8 != 0) break;
        plVar14 = *(long **)pLVar1;
        if (plVar14 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        fVar23 = (float)(**(code **)(*plVar14 + 0x30))(plVar14,&local_c0);
        goto joined_r0x00c86fd0;
      }
switchD_00c86e6c_caseD_8:
joined_r0x00c86fd0:
      if (((byte)local_c0 & 1) != 0) {
        operator_delete(local_b0);
      }
      if (((byte)local_a8[0] & 1) != 0) {
        operator_delete(local_98);
      }
      lVar18 = lVar18 + 1;
      iVar8 = stExpCocoNode::GetChildNum(param_3);
    } while (lVar18 < iVar8);
  }
  uVar15 = cocos2d::ui::LoadingBar::isScale9Enabled((LoadingBar *)param_1);
  if ((uVar15 & 1) != 0) {
    cocos2d::Rect::Rect((Rect *)local_a8,fVar20,fVar24,fVar22,fVar23);
    cocos2d::ui::LoadingBar::setCapInsets(param_1);
  }
  cocos2d::ui::LoadingBar::setPercent((LoadingBar *)param_1,(float)local_124);
  WidgetReader::endSetBasicProperties((WidgetReader *)this,param_1);
  if (*(long *)(lVar4 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

