
/* cocostudio::WidgetReader::setLayoutComponentPropsWithFlatBuffers(cocos2d::Node*,
   flatbuffers::Table const*) */

void __thiscall
cocostudio::WidgetReader::setLayoutComponentPropsWithFlatBuffers
          (WidgetReader *this,Node *param_1,Table *param_2)

{
  Table *pTVar1;
  size_t sVar2;
  void *pvVar3;
  ushort uVar4;
  long lVar5;
  undefined *puVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  LayoutComponent *this_00;
  size_t sVar15;
  undefined8 uVar16;
  ulong uVar17;
  Table *pTVar18;
  Table *pTVar19;
  Table TVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d8 [8];
  size_t local_d0;
  void *local_c8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c0 [8];
  size_t local_b8;
  void *local_b0;
  long local_a8;
  
  lVar5 = tpidr_el0;
  local_a8 = *(long *)(lVar5 + 0x28);
  if (((*(ushort *)(param_2 + -(long)*(int *)param_2) < 0x2d) ||
      (uVar17 = (ulong)*(ushort *)(param_2 + -(long)*(int *)param_2 + 0x2c), uVar17 == 0)) ||
     (pTVar1 = param_2 + uVar17 + *(uint *)(param_2 + uVar17), pTVar1 == (Table *)0x0))
  goto LAB_00cdfa48;
  this_00 = (LayoutComponent *)cocos2d::ui::LayoutComponent::bindLayoutComponent(param_1);
  pTVar18 = pTVar1 + -(long)*(int *)pTVar1;
  uVar4 = *(ushort *)pTVar18;
  if (uVar4 < 5) {
    bVar8 = false;
LAB_00cdf65c:
    bVar9 = false;
LAB_00cdf660:
    fVar22 = 0.0;
LAB_00cdf668:
    bVar11 = false;
    bVar10 = false;
    fVar25 = 0.0;
LAB_00cdf66c:
    bVar12 = false;
    fVar21 = 0.0;
    fVar28 = 0.0;
LAB_00cdf670:
    bVar13 = false;
LAB_00cdf674:
    pTVar19 = (Table *)0x0;
  }
  else {
    TVar20 = (Table)0x0;
    if ((ulong)*(ushort *)(pTVar18 + 4) != 0) {
      TVar20 = pTVar1[*(ushort *)(pTVar18 + 4)];
    }
    bVar8 = TVar20 != (Table)0x0;
    if (uVar4 < 7) goto LAB_00cdf65c;
    TVar20 = (Table)0x0;
    if ((ulong)*(ushort *)(pTVar18 + 6) != 0) {
      TVar20 = pTVar1[*(ushort *)(pTVar18 + 6)];
    }
    bVar9 = TVar20 != (Table)0x0;
    if (uVar4 < 9) goto LAB_00cdf660;
    fVar22 = 0.0;
    if ((ulong)*(ushort *)(pTVar18 + 8) != 0) {
      fVar22 = *(float *)(pTVar1 + *(ushort *)(pTVar18 + 8));
    }
    if (uVar4 < 0xb) goto LAB_00cdf668;
    fVar25 = 0.0;
    if ((ulong)*(ushort *)(pTVar18 + 10) != 0) {
      fVar25 = *(float *)(pTVar1 + *(ushort *)(pTVar18 + 10));
    }
    if (uVar4 < 0xd) {
      bVar10 = false;
      bVar11 = false;
      goto LAB_00cdf66c;
    }
    TVar20 = (Table)0x0;
    if ((ulong)*(ushort *)(pTVar18 + 0xc) != 0) {
      TVar20 = pTVar1[*(ushort *)(pTVar18 + 0xc)];
    }
    bVar10 = TVar20 != (Table)0x0;
    if (uVar4 < 0xf) {
      bVar11 = false;
      goto LAB_00cdf66c;
    }
    TVar20 = (Table)0x0;
    if ((ulong)*(ushort *)(pTVar18 + 0xe) != 0) {
      TVar20 = pTVar1[*(ushort *)(pTVar18 + 0xe)];
    }
    bVar11 = TVar20 != (Table)0x0;
    if (uVar4 < 0x11) goto LAB_00cdf66c;
    fVar28 = 0.0;
    fVar21 = 0.0;
    if ((ulong)*(ushort *)(pTVar18 + 0x10) != 0) {
      fVar21 = *(float *)(pTVar1 + *(ushort *)(pTVar18 + 0x10));
    }
    if (uVar4 < 0x13) {
LAB_00cdfad4:
      bVar12 = false;
      goto LAB_00cdf670;
    }
    if ((ulong)*(ushort *)(pTVar18 + 0x12) == 0) {
      fVar28 = 0.0;
    }
    else {
      fVar28 = *(float *)(pTVar1 + *(ushort *)(pTVar18 + 0x12));
    }
    if (uVar4 < 0x15) goto LAB_00cdfad4;
    TVar20 = (Table)0x0;
    if ((ulong)*(ushort *)(pTVar18 + 0x14) != 0) {
      TVar20 = pTVar1[*(ushort *)(pTVar18 + 0x14)];
    }
    bVar12 = TVar20 != (Table)0x0;
    if (uVar4 < 0x17) goto LAB_00cdf670;
    TVar20 = (Table)0x0;
    if ((ulong)*(ushort *)(pTVar18 + 0x16) != 0) {
      TVar20 = pTVar1[*(ushort *)(pTVar18 + 0x16)];
    }
    bVar13 = TVar20 != (Table)0x0;
    if (uVar4 < 0x19) goto LAB_00cdf674;
    pTVar19 = (Table *)0x0;
    if ((ulong)*(ushort *)(pTVar18 + 0x18) != 0) {
      pTVar19 = pTVar1 + *(ushort *)(pTVar18 + 0x18) +
                *(uint *)(pTVar1 + *(ushort *)(pTVar18 + 0x18));
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_c0,(char *)(pTVar19 + 4));
  if (*(ushort *)(pTVar1 + -(long)*(int *)pTVar1) < 0x1b) {
    pTVar18 = (Table *)0x0;
  }
  else {
    uVar17 = (ulong)*(ushort *)(pTVar1 + -(long)*(int *)pTVar1 + 0x1a);
    pTVar18 = (Table *)0x0;
    if (uVar17 != 0) {
      pTVar18 = pTVar1 + uVar17 + *(uint *)(pTVar1 + uVar17);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_d8,(char *)(pTVar18 + 4));
  fVar26 = 0.0;
  fVar23 = 0.0;
  fVar24 = 0.0;
  pTVar18 = pTVar1 + -(long)*(int *)pTVar1;
  uVar4 = *(ushort *)pTVar18;
  fVar27 = 0.0;
  if (0x1c < uVar4) {
    fVar23 = 0.0;
    if ((ulong)*(ushort *)(pTVar18 + 0x1c) != 0) {
      fVar23 = *(float *)(pTVar1 + *(ushort *)(pTVar18 + 0x1c));
    }
    if (uVar4 < 0x1f) {
      fVar24 = 0.0;
    }
    else {
      fVar24 = 0.0;
      if ((ulong)*(ushort *)(pTVar18 + 0x1e) != 0) {
        fVar24 = *(float *)(pTVar1 + *(ushort *)(pTVar18 + 0x1e));
      }
      if (0x20 < uVar4) {
        fVar27 = 0.0;
        fVar26 = 0.0;
        if ((ulong)*(ushort *)(pTVar18 + 0x20) != 0) {
          fVar26 = *(float *)(pTVar1 + *(ushort *)(pTVar18 + 0x20));
        }
        if ((0x22 < uVar4) && ((ulong)*(ushort *)(pTVar18 + 0x22) != 0)) {
          fVar27 = *(float *)(pTVar1 + *(ushort *)(pTVar18 + 0x22));
        }
        goto LAB_00cdf750;
      }
    }
    fVar26 = 0.0;
    fVar27 = 0.0;
  }
LAB_00cdf750:
  cocos2d::ui::LayoutComponent::setPositionPercentXEnabled(this_00,bVar8);
  cocos2d::ui::LayoutComponent::setPositionPercentYEnabled(this_00,bVar9);
  cocos2d::ui::LayoutComponent::setPositionPercentX(this_00,fVar22);
  cocos2d::ui::LayoutComponent::setPositionPercentY(this_00,fVar25);
  cocos2d::ui::LayoutComponent::setPercentWidthEnabled(this_00,bVar10);
  cocos2d::ui::LayoutComponent::setPercentHeightEnabled(this_00,bVar11);
  cocos2d::ui::LayoutComponent::setPercentWidth(this_00,fVar21);
  cocos2d::ui::LayoutComponent::setPercentHeight(this_00,fVar28);
  cocos2d::ui::LayoutComponent::setStretchWidthEnabled(this_00,bVar12);
  cocos2d::ui::LayoutComponent::setStretchHeightEnabled(this_00,bVar13);
  puVar6 = P_Layout_LeftEdge;
  sVar15 = strlen(P_Layout_LeftEdge);
  bVar7 = local_c0[0];
  sVar2 = (ulong)((byte)local_c0[0] >> 1);
  if (((byte)local_c0[0] & 1) != 0) {
    sVar2 = local_b8;
  }
  if (sVar15 == sVar2) {
    if (sVar15 != 0) {
      if (sVar15 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      pvVar3 = (void *)((ulong)local_c0 | 1);
      if (((byte)local_c0[0] & 1) != 0) {
        pvVar3 = local_b0;
      }
      iVar14 = memcmp(pvVar3,puVar6,sVar15);
      if (iVar14 != 0) goto LAB_00cdf830;
    }
    uVar16 = 1;
  }
  else {
LAB_00cdf830:
    puVar6 = P_Layout_RightEdge;
    sVar15 = strlen(P_Layout_RightEdge);
    if (sVar15 == sVar2) {
      if (sVar2 != 0) {
        if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        pvVar3 = (void *)((ulong)local_c0 | 1);
        if (((byte)bVar7 & 1) != 0) {
          pvVar3 = local_b0;
        }
        iVar14 = memcmp(pvVar3,puVar6,sVar2);
        if (iVar14 != 0) goto LAB_00cdf87c;
      }
      uVar16 = 2;
    }
    else {
LAB_00cdf87c:
      puVar6 = P_Layout_BothEdge;
      sVar15 = strlen(P_Layout_BothEdge);
      if (sVar15 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = (void *)((ulong)local_c0 | 1);
          if (((byte)bVar7 & 1) != 0) {
            pvVar3 = local_b0;
          }
          iVar14 = memcmp(pvVar3,puVar6,sVar2);
          if (iVar14 != 0) goto LAB_00cdf8c0;
        }
        uVar16 = 3;
      }
      else {
LAB_00cdf8c0:
        uVar16 = 0;
      }
    }
  }
  cocos2d::ui::LayoutComponent::setHorizontalEdge(this_00,uVar16);
  puVar6 = P_Layout_TopEdge;
  sVar15 = strlen(P_Layout_TopEdge);
  bVar7 = local_d8[0];
  sVar2 = (ulong)((byte)local_d8[0] >> 1);
  if (((byte)local_d8[0] & 1) != 0) {
    sVar2 = local_d0;
  }
  if (sVar15 == sVar2) {
    if (sVar15 != 0) {
      if (sVar15 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      pvVar3 = (void *)((ulong)local_d8 | 1);
      if (((byte)local_d8[0] & 1) != 0) {
        pvVar3 = local_c8;
      }
      iVar14 = memcmp(pvVar3,puVar6,sVar15);
      if (iVar14 != 0) goto LAB_00cdf944;
    }
    uVar16 = 2;
  }
  else {
LAB_00cdf944:
    puVar6 = P_Layout_BottomEdge;
    sVar15 = strlen(P_Layout_BottomEdge);
    if (sVar15 == sVar2) {
      if (sVar2 != 0) {
        if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        pvVar3 = (void *)((ulong)local_d8 | 1);
        if (((byte)bVar7 & 1) != 0) {
          pvVar3 = local_c8;
        }
        iVar14 = memcmp(pvVar3,puVar6,sVar2);
        if (iVar14 != 0) goto LAB_00cdf990;
      }
      uVar16 = 1;
    }
    else {
LAB_00cdf990:
      puVar6 = P_Layout_BothEdge;
      sVar15 = strlen(P_Layout_BothEdge);
      if (sVar15 == sVar2) {
        if (sVar2 != 0) {
          if (sVar2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pvVar3 = (void *)((ulong)local_d8 | 1);
          if (((byte)bVar7 & 1) != 0) {
            pvVar3 = local_c8;
          }
          iVar14 = memcmp(pvVar3,puVar6,sVar2);
          if (iVar14 != 0) goto LAB_00cdf9d4;
        }
        uVar16 = 3;
      }
      else {
LAB_00cdf9d4:
        uVar16 = 0;
      }
    }
  }
  cocos2d::ui::LayoutComponent::setVerticalEdge(this_00,uVar16);
  cocos2d::ui::LayoutComponent::setTopMargin(this_00,fVar26);
  cocos2d::ui::LayoutComponent::setBottomMargin(this_00,fVar27);
  cocos2d::ui::LayoutComponent::setLeftMargin(this_00,fVar23);
  cocos2d::ui::LayoutComponent::setRightMargin(this_00,fVar24);
  if (((byte)local_d8[0] & 1) != 0) {
    operator_delete(local_c8);
  }
  if (((byte)local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
LAB_00cdfa48:
  if (*(long *)(lVar5 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

