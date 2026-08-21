
/* cocos2d::ui::Helper::convertBoundingBoxToScreen(cocos2d::Node*) */

void cocos2d::ui::Helper::convertBoundingBoxToScreen(Node *param_1)

{
  long lVar1;
  Director *this;
  Size *pSVar2;
  Rect *in_x8;
  GLView *this_00;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  float fVar9;
  undefined8 local_98;
  undefined8 local_90;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  this = (Director *)Director::getInstance();
  this_00 = *(GLView **)(this + 0x108);
  (**(code **)(*(long *)this_00 + 0x48))(&local_80,this_00);
  pSVar2 = (Size *)Director::getWinSize(this);
  Size::Size((Size *)&local_88,pSVar2);
  fVar3 = (float)Node::convertToWorldSpace(param_1,(Vec2 *)&Vec2::ZERO);
  fVar9 = in_s1;
  pSVar2 = (Size *)(**(code **)(*(long *)param_1 + 0x168))(param_1);
  Size::Size((Size *)&local_90,pSVar2);
  local_98 = local_90;
  fVar4 = (float)Node::convertToWorldSpace(param_1,(Vec2 *)&local_98);
  fVar5 = (float)GLView::getScaleX(this_00);
  fVar6 = (float)GLView::getScaleY(this_00);
  fVar7 = (float)GLView::getScaleX(this_00);
  fVar8 = (float)GLView::getScaleY(this_00);
  Rect::Rect(in_x8,local_80 * 0.5 + fVar5 * (fVar3 - local_88 * 0.5),
             local_7c * 0.5 - fVar6 * (fVar9 - local_84 * 0.5),(fVar4 - fVar3) * fVar7,
             (fVar9 - in_s1) * fVar8);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db4ef0 with catch @ 00db4e98
                       catch(type#1 @ 00000000) { ... } // from try @ 00db50b0 with catch @ 00db4e98
                        */
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

