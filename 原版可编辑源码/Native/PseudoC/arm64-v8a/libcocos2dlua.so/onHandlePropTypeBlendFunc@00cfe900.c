
/* cocosbuilder::Scale9SpriteLoader::onHandlePropTypeBlendFunc(cocos2d::Node*, cocos2d::Node*, char
   const*, cocos2d::BlendFunc, cocosbuilder::CCBReader*) */

void __thiscall
cocosbuilder::Scale9SpriteLoader::onHandlePropTypeBlendFunc
          (Scale9SpriteLoader *this,undefined8 param_1,undefined8 param_2,char *param_3,
          undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = strcmp(param_3,"blendFunc");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeBlendFunc(this,param_1,param_2,param_3,param_5,param_6);
    return;
  }
  return;
}

