
/* cocosbuilder::NodeLoader::parsePropTypeFlip(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

void cocosbuilder::NodeLoader::parsePropTypeFlip(Node *param_1,Node *param_2,CCBReader *param_3)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  CCBReader *in_x3;
  
  bVar1 = CCBReader::readBool(in_x3);
  bVar2 = CCBReader::readBool(in_x3);
  pbVar3 = operator_new__(2,(nothrow_t *)&std::nothrow);
  *pbVar3 = bVar1 & 1;
  pbVar3[1] = bVar2 & 1;
  return;
}

