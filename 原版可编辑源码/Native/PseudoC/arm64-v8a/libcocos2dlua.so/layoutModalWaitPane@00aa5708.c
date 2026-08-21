
/* fairygui::Window::layoutModalWaitPane() */

void fairygui::Window::layoutModalWaitPane(void)

{
  long lVar1;
  Vec2 *in_x0;
  GObject *this;
  long lVar2;
  float fVar3;
  float in_s1;
  float fVar4;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(in_x0 + 0x2b0) == 0) {
    this = *(GObject **)(in_x0 + 0x298);
    fVar3 = *(float *)(in_x0 + 200);
    fVar4 = *(float *)(in_x0 + 0xcc);
  }
  else {
    GObject::localToGlobal(*(GObject **)(in_x0 + 0x290),(Vec2 *)&cocos2d::Vec2::ZERO);
    fVar3 = (float)GObject::globalToLocal(in_x0);
    GObject::setPosition
              (*(GObject **)(in_x0 + 0x298),
               *(float *)(*(long *)(in_x0 + 0x2b0) + 0xc0) + (float)(int)fVar3,
               *(float *)(*(long *)(in_x0 + 0x2b0) + 0xc4) + (float)(int)in_s1);
    this = *(GObject **)(in_x0 + 0x298);
    fVar3 = *(float *)(*(long *)(in_x0 + 0x2b0) + 200);
    fVar4 = *(float *)(*(long *)(in_x0 + 0x2b0) + 0xcc);
  }
  GObject::setSize(this,fVar3,fVar4,false);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

