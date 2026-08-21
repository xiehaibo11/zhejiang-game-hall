
/* cocos2d::ccBindFramebuffer(unsigned int, unsigned int) */

void cocos2d::ccBindFramebuffer(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2;
  if (((param_1 == 0x8d40) && (Application::_instance[0x2b] != (Application)0x0)) &&
     (uVar1 = Application::getMainFBO(Application::_instance), uVar2 = DAT_01d36d28,
     uVar1 != param_2)) {
    uVar2 = param_2;
  }
  glBindFramebuffer(param_1,uVar2);
  return;
}

