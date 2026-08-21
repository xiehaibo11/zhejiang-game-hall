
/* cocos2d::ui::ListView::startAttenuatingAutoScroll(cocos2d::Vec2 const&, cocos2d::Vec2 const&) */

void cocos2d::ui::ListView::startAttenuatingAutoScroll(Vec2 *param_1,Vec2 *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  Widget *this;
  Size *pSVar4;
  Vec2 *in_x2;
  float *pfVar5;
  float *pfVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float in_s1;
  float fVar11;
  undefined8 uVar12;
  float local_60;
  float fStack_5c;
  undefined8 local_58;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = *(undefined8 *)param_2;
  if ((*(long *)(param_1 + 0x8b8) == *(long *)(param_1 + 0x8c0)) || (*(int *)(param_1 + 0x8d4) == 0)
     ) goto LAB_00db80f8;
  uVar7 = ScrollView::flattenVectorByDirection((ScrollView *)param_1,(Vec2 *)&local_58);
  local_58 = CONCAT44(in_s1,uVar7);
  fVar8 = (float)(**(code **)(*(long *)param_1 + 0x7b8))(param_1,&local_58);
  pfVar5 = (float *)&Vec2::ZERO;
  if ((fVar8 != 0.0) || (in_s1 != 0.0)) goto LAB_00db80f8;
  if (*(int *)(param_1 + 0x8d4) == 2) {
    if (*(int *)(param_1 + 0x7c0) == 1) {
      if (0.0 < local_58._4_4_) goto switchD_00db7fbc_caseD_6;
      goto switchD_00db7fbc_caseD_5;
    }
    if (*(int *)(param_1 + 0x7c0) == 2) {
      if ((float)local_58 <= 0.0) goto switchD_00db7fbc_caseD_4;
      goto switchD_00db7fbc_caseD_3;
    }
    pfVar5 = (float *)&Vec2::ANCHOR_TOP_LEFT;
    goto LAB_00db8010;
  }
  pfVar6 = (float *)((long)&Vec2::ZERO + 4);
  switch(*(int *)(param_1 + 0x8d4)) {
  case 1:
    pfVar5 = (float *)&Vec2::ANCHOR_MIDDLE;
    break;
  default:
    goto switchD_00db7fbc_caseD_2;
  case 3:
switchD_00db7fbc_caseD_3:
    pfVar5 = (float *)&Vec2::ANCHOR_MIDDLE_LEFT;
    break;
  case 4:
switchD_00db7fbc_caseD_4:
    pfVar5 = (float *)&Vec2::ANCHOR_MIDDLE_RIGHT;
    break;
  case 5:
switchD_00db7fbc_caseD_5:
    pfVar5 = (float *)&Vec2::ANCHOR_MIDDLE_TOP;
    break;
  case 6:
switchD_00db7fbc_caseD_6:
    pfVar5 = (float *)&Vec2::ANCHOR_MIDDLE_BOTTOM;
  }
LAB_00db8010:
  pfVar6 = pfVar5 + 1;
switchD_00db7fbc_caseD_2:
  fVar8 = *pfVar6;
  fVar10 = *pfVar5;
  local_60 = fVar10;
  fStack_5c = fVar8;
  puVar2 = (undefined8 *)(**(code **)(**(long **)(param_1 + 0x7b8) + 0xb0))();
  uVar12 = *puVar2;
  pfVar5 = (float *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
  fVar9 = *pfVar5;
  lVar3 = (**(code **)(*(long *)param_1 + 0x168))(param_1);
  fVar9 = fVar9 * fVar10 - (float)uVar12;
  fVar11 = *(float *)(lVar3 + 4) * fVar8 - (float)((ulong)uVar12 >> 0x20);
  local_50 = fVar9 - (float)local_58;
  fStack_4c = fVar11 - local_58._4_4_;
  this = (Widget *)getClosestItemToPosition((ListView *)param_1,(Vec2 *)&local_50,(Vec2 *)&local_60)
  ;
  fVar8 = (float)Widget::getLeftBoundary(this);
  fVar10 = (float)Widget::getBottomBoundary(this);
  pSVar4 = (Size *)(**(code **)(*(long *)this + 0x168))(this);
  Size::Size((Size *)&local_50,pSVar4);
  local_58 = CONCAT44(fVar11 - (fVar10 + fStack_4c * fStack_5c),
                      fVar9 - (fVar8 + local_50 * local_60));
LAB_00db80f8:
  ScrollView::startAttenuatingAutoScroll((ScrollView *)param_1,(Vec2 *)&local_58,in_x2);
  if (*(long *)(lVar1 + 0x28) == local_48) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db8170 with catch @ 00db811c
                        */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

