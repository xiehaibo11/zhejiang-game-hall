
/* cocos2d::ui::Layout::isLastWidgetInContainer(cocos2d::ui::Widget*,
   cocos2d::ui::Widget::FocusDirection) const */

undefined8 __thiscall
cocos2d::ui::Layout::isLastWidgetInContainer(undefined8 param_1_00,long *param_1,undefined4 param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  lVar4 = (**(code **)(*param_1 + 0x260))(param_1);
joined_r0x00db1a98:
  if ((lVar4 == 0) ||
     (plVar5 = (long *)__dynamic_cast(lVar4,&Node::typeinfo,&typeinfo,0), plVar5 == (long *)0x0)) {
    uVar7 = 1;
  }
  else {
    plVar6 = (long *)(**(code **)(*plVar5 + 0x240))();
    plVar1 = (long *)*plVar6;
    plVar2 = (long *)plVar6[1];
    plVar10 = plVar2;
    plVar11 = plVar1;
    if (plVar1 != plVar2) {
      plVar8 = (long *)*plVar1;
      plVar9 = plVar1;
      while ((plVar10 = plVar9, plVar11 = plVar9, plVar8 != param_1 &&
             (plVar9 = plVar9 + 1, plVar10 = plVar2, plVar11 = plVar2, plVar2 != plVar9))) {
        plVar8 = (long *)*plVar9;
      }
    }
    lVar4 = (long)plVar11 - (long)plVar1 >> 3;
    if (plVar10 == plVar2) {
      lVar4 = -1;
    }
    iVar3 = (**(code **)(*plVar5 + 0x698))(plVar5);
    if (iVar3 != 2) {
      iVar3 = (**(code **)(*plVar5 + 0x698))(plVar5);
      if (iVar3 == 1) {
        switch(param_3) {
        case 0:
          goto switchD_00db1bb8_caseD_3;
        case 1:
          goto switchD_00db1bf8_caseD_1;
        case 2:
          if (lVar4 == 0) goto switchD_00db1bb8_caseD_2;
          break;
        case 3:
          if (lVar4 == (plVar6[1] - *plVar6 >> 3) + -1) {
            param_3 = 3;
            goto switchD_00db1bb8_caseD_3;
          }
        }
      }
      goto switchD_00db1bb8_default;
    }
    switch(param_3) {
    case 0:
      param_3 = 0;
      if (lVar4 == 0) goto switchD_00db1bb8_caseD_3;
      break;
    case 1:
      if (lVar4 == (plVar6[1] - *plVar6 >> 3) + -1) {
switchD_00db1bf8_caseD_1:
        param_3 = 1;
        goto switchD_00db1bb8_caseD_3;
      }
      break;
    case 2:
switchD_00db1bb8_caseD_2:
      param_3 = 2;
    case 3:
      goto switchD_00db1bb8_caseD_3;
    }
switchD_00db1bb8_default:
    uVar7 = 0;
  }
  return uVar7;
switchD_00db1bb8_caseD_3:
  lVar4 = (**(code **)(*plVar5 + 0x260))(plVar5);
  param_1 = plVar5;
  goto joined_r0x00db1a98;
}

