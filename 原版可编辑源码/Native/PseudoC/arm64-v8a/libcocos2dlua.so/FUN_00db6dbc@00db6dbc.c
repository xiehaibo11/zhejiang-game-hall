
void FUN_00db6dbc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                 undefined8 *param_5,long param_6,long param_7)

{
  long lVar1;
  undefined8 uVar2;
  Size *pSVar3;
  long lVar4;
  Widget *this;
  float fVar5;
  float fVar6;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (param_7 == param_6) {
    uVar2 = *(undefined8 *)(*param_4 + param_7 * 8);
  }
  else if (param_7 - param_6 == 1) {
    if ((float)param_1 <= (float)param_2) {
      uVar2 = *(undefined8 *)(*param_4 + param_6 * 8);
    }
    else {
      uVar2 = *(undefined8 *)(*param_4 + param_7 * 8);
    }
  }
  else {
    lVar4 = param_7 + param_6;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    lVar4 = lVar4 >> 1;
    this = *(Widget **)(*param_4 + lVar4 * 8);
    fVar5 = (float)cocos2d::ui::Widget::getLeftBoundary(this);
    fVar6 = (float)cocos2d::ui::Widget::getBottomBoundary(this);
    pSVar3 = (Size *)(**(code **)(*(long *)this + 0x168))(this);
    cocos2d::Size::Size((Size *)&local_70,pSVar3);
    local_70 = CONCAT44((float)((ulong)*param_3 >> 0x20) -
                        (fVar6 + (float)((ulong)local_70 >> 0x20) * (float)((ulong)*param_5 >> 0x20)
                        ),(float)*param_3 - (fVar5 + (float)local_70 * (float)*param_5));
    uVar2 = cocos2d::Vec2::length((Vec2 *)&local_70);
    if ((float)param_2 < (float)param_1) {
      param_6 = lVar4;
      lVar4 = param_7;
      param_1 = uVar2;
      uVar2 = param_2;
    }
    uVar2 = FUN_00db6dbc(param_1,uVar2,param_3,param_4,param_5,param_6,lVar4);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

