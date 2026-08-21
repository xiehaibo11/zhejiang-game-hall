
/* cocosbuilder::NodeLoader::parsePropTypePointLock(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

undefined1  [16]
cocosbuilder::NodeLoader::parsePropTypePointLock(Node *param_1,Node *param_2,CCBReader *param_3)

{
  CCBReader *in_x3;
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  auVar1 = CCBReader::readFloat(in_x3);
  uVar2 = auVar1._8_8_;
  CCBReader::readFloat(in_x3);
  auVar1._8_8_ = uVar2;
  return auVar1;
}

