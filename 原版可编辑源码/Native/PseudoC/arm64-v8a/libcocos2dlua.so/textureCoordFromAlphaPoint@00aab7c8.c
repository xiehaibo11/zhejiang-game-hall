
/* fairygui::FUISprite::textureCoordFromAlphaPoint(cocos2d::Vec2) */

float fairygui::FUISprite::textureCoordFromAlphaPoint(float param_1,float param_2,long param_3)

{
  if (*(char *)(param_3 + 0x418) == '\0') {
    param_2 = param_1;
  }
  return *(float *)(param_3 + 0x490) * param_2 + *(float *)(param_3 + 0x478) * (1.0 - param_2);
}

