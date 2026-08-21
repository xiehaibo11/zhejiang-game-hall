
/* cocosbuilder::CCBAnimationManager::setAnimationCompletedCallback(cocos2d::Ref*, void
   (cocos2d::Ref::*)()) */

void cocosbuilder::CCBAnimationManager::setAnimationCompletedCallback
               (Ref *param_1,_func_void *param_2)

{
  undefined8 in_x2;
  undefined8 in_x3;
  
  if (param_2 != (_func_void *)0x0) {
    cocos2d::Ref::retain((Ref *)param_2);
  }
  if (*(Ref **)(param_1 + 0x1e0) != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)(param_1 + 0x1e0));
  }
  *(undefined8 *)(param_1 + 0x1d8) = in_x3;
  *(_func_void **)(param_1 + 0x1e0) = param_2;
  *(undefined8 *)(param_1 + 0x1d0) = in_x2;
  return;
}

