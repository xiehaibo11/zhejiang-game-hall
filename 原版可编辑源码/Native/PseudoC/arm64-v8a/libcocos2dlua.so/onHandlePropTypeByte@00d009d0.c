
/* cocosbuilder::LayerGradientLoader::onHandlePropTypeByte(cocos2d::Node*, cocos2d::Node*, char
   const*, unsigned char, cocosbuilder::CCBReader*) */

void cocosbuilder::LayerGradientLoader::onHandlePropTypeByte
               (Node *param_1,Node *param_2,char *param_3,uchar param_4,CCBReader *param_5)

{
  int iVar1;
  uchar uVar2;
  
  iVar1 = strcmp((char *)(ulong)param_4,"startOpacity");
  uVar2 = (uchar)(CCBReader *)((ulong)param_5 & 0xffffffff);
  if (iVar1 == 0) {
    cocos2d::LayerGradient::setStartOpacity((LayerGradient *)param_2,uVar2);
    return;
  }
  iVar1 = strcmp((char *)(ulong)param_4,"endOpacity");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeByte
              (param_1,param_2,param_3,param_4,(CCBReader *)((ulong)param_5 & 0xffffffff));
    return;
  }
  cocos2d::LayerGradient::setEndOpacity((LayerGradient *)param_2,uVar2);
  return;
}

