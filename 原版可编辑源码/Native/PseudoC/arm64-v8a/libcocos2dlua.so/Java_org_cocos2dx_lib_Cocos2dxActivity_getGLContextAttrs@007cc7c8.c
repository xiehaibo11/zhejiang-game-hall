
undefined8 Java_org_cocos2dx_lib_Cocos2dxActivity_getGLContextAttrs(long *param_1)

{
  long lVar1;
  long *plVar2;
  GLView *this;
  undefined8 uVar3;
  undefined1 local_60 [40];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)cocos2d::Application::getInstance();
  this = (GLView *)(**(code **)(*plVar2 + 0x30))();
  cocos2d::GLView::getGLContextAttrs(this);
  uVar3 = (**(code **)(*param_1 + 0x598))(param_1,7);
  (**(code **)(*param_1 + 0x698))(param_1,uVar3,0,7,local_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

