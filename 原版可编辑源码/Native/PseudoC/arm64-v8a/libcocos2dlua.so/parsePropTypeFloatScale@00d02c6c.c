
/* cocosbuilder::NodeLoader::parsePropTypeFloatScale(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

undefined1  [16]
cocosbuilder::NodeLoader::parsePropTypeFloatScale(Node *param_1,Node *param_2,CCBReader *param_3)

{
  int iVar1;
  CCBReader *in_x3;
  float fVar2;
  undefined1 auVar3 [16];
  ulong uVar4;
  undefined8 uVar5;
  
  auVar3 = CCBReader::readFloat(in_x3);
  uVar5 = auVar3._8_8_;
  uVar4 = auVar3._0_8_;
  iVar1 = CCBReader::readInt(in_x3,false);
  if (iVar1 == 1) {
    fVar2 = (float)CCBReader::getResolutionScale();
    uVar4 = (ulong)(uint)(auVar3._0_4_ * fVar2);
    uVar5 = 0;
  }
  auVar3._8_8_ = uVar5;
  auVar3._0_8_ = uVar4;
  return auVar3;
}

