
/* cocos2d::FontAtlas::listenRendererRecreated(cocos2d::EventCustom*) */

void cocos2d::FontAtlas::listenRendererRecreated(EventCustom *param_1)

{
  purgeTexturesAtlas((FontAtlas *)param_1);
  return;
}

