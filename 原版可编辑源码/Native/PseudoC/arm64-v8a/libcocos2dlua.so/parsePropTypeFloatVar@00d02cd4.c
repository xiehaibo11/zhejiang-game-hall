
/* cocosbuilder::NodeLoader::parsePropTypeFloatVar(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

void cocosbuilder::NodeLoader::parsePropTypeFloatVar(Node *param_1,Node *param_2,CCBReader *param_3)

{
  undefined4 *puVar1;
  CCBReader *in_x3;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = CCBReader::readFloat(in_x3);
  uVar3 = CCBReader::readFloat(in_x3);
  puVar1 = operator_new__(8,(nothrow_t *)&std::nothrow);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  return;
}

