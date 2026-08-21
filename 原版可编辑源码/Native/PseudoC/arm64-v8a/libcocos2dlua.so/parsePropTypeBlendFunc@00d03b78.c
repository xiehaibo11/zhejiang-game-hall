
/* cocosbuilder::NodeLoader::parsePropTypeBlendFunc(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

ulong cocosbuilder::NodeLoader::parsePropTypeBlendFunc
                (Node *param_1,Node *param_2,CCBReader *param_3)

{
  ulong uVar1;
  long lVar2;
  CCBReader *in_x3;
  
  uVar1 = CCBReader::readInt(in_x3,false);
  lVar2 = CCBReader::readInt(in_x3,false);
  return uVar1 & 0xffffffff | lVar2 << 0x20;
}

