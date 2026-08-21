
/* fairygui::GObject::transformRect(cocos2d::Rect const&, fairygui::GObject*) */

void fairygui::GObject::transformRect(Rect *param_1,GObject *param_2)

{
  long lVar1;
  GObject *in_x2;
  Rect *in_x8;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_78;
  undefined4 local_74;
  float local_70 [6];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (in_x2 == (GObject *)param_1) {
    cocos2d::Rect::Rect(in_x8,(Rect *)param_2);
  }
  else {
    if (*(GObject **)(param_1 + 0xa0) == in_x2) {
      fVar5 = *(float *)(param_1 + 0xe0) * *(float *)(param_2 + 8);
      fVar3 = (*(float *)(param_1 + 0xc0) + *(float *)param_2) * *(float *)(param_1 + 0xe0);
      fVar4 = (*(float *)(param_1 + 0xc4) + *(float *)(param_2 + 4)) * *(float *)(param_1 + 0xe4);
      fVar6 = *(float *)(param_1 + 0xe4) * *(float *)(param_2 + 0xc);
    }
    else {
      local_70[2] = -3.4028235e+38;
      local_70[3] = -3.4028235e+38;
      local_70[0] = 3.4028235e+38;
      local_70[1] = 3.4028235e+38;
      transformRectPoint((GObject *)param_1,param_2,local_70,in_x2);
      local_78 = cocos2d::Rect::getMaxX((Rect *)param_2);
      local_74 = *(undefined4 *)(param_2 + 4);
      transformRectPoint((GObject *)param_1,(Vec2 *)&local_78,local_70,in_x2);
      uVar2 = *(undefined4 *)param_2;
      local_74 = cocos2d::Rect::getMaxY((Rect *)param_2);
      local_78 = uVar2;
      transformRectPoint((GObject *)param_1,(Vec2 *)&local_78,local_70,in_x2);
      uVar2 = cocos2d::Rect::getMaxX((Rect *)param_2);
      local_74 = cocos2d::Rect::getMaxY((Rect *)param_2);
      local_78 = uVar2;
      transformRectPoint((GObject *)param_1,(Vec2 *)&local_78,local_70,in_x2);
      fVar5 = local_70[2] - local_70[0];
      fVar6 = local_70[3] - local_70[1];
      fVar4 = local_70[1];
      fVar3 = local_70[0];
    }
    cocos2d::Rect::Rect(in_x8,fVar3,fVar4,fVar5,fVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

