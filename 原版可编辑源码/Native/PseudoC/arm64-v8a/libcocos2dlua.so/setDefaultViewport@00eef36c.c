
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::Camera::setDefaultViewport(cocos2d::experimental::Viewport const&) */

void cocos2d::Camera::setDefaultViewport(Viewport *param_1)

{
  _DAT_0178f738 = *(undefined8 *)(param_1 + 8);
  __defaultViewport = *(undefined8 *)param_1;
  return;
}

