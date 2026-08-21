
/* cocos2d::ui::LoadingBar::loadTexture(cocos2d::SpriteFrame*) */

void cocos2d::ui::LoadingBar::loadTexture(SpriteFrame *param_1)

{
  (**(code **)(**(long **)(param_1 + 0x500) + 0x610))();
                    /* try { // try from 00dcad10 to 00ecad17 has its CatchHandler @ 00dcaecc */
  setupTexture((LoadingBar *)param_1);
  return;
}

