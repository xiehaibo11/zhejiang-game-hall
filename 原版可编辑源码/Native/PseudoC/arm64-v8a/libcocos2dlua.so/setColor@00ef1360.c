
/* cocos2d::CameraBackgroundColorBrush::setColor(cocos2d::Color4F const&) */

void __thiscall
cocos2d::CameraBackgroundColorBrush::setColor(CameraBackgroundColorBrush *this,Color4F *param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  Color4B::Color4B((Color4B *)&local_2c,param_1);
  *(undefined4 *)(this + 0x7c) = local_2c;
  *(undefined4 *)(this + 0x4c) = local_2c;
  *(undefined4 *)(this + 0x94) = local_2c;
  *(undefined4 *)(this + 100) = local_2c;
  if (*(int *)(this + 0xa4) != 0) {
    glBindBuffer(0x8892);
    glBufferData(0x8892,0x60,this + 0x40,0x88e4);
    glBindBuffer(0x8892,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

