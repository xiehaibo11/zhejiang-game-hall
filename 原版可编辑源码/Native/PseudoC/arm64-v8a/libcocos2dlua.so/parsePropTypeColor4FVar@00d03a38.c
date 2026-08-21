
/* cocosbuilder::NodeLoader::parsePropTypeColor4FVar(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

Color4F * cocosbuilder::NodeLoader::parsePropTypeColor4FVar
                    (Node *param_1,Node *param_2,CCBReader *param_3)

{
  Color4F *this;
  CCBReader *in_x3;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar1 = CCBReader::readFloat(in_x3);
  uVar2 = CCBReader::readFloat(in_x3);
  uVar3 = CCBReader::readFloat(in_x3);
  uVar4 = CCBReader::readFloat(in_x3);
  uVar5 = CCBReader::readFloat(in_x3);
  uVar6 = CCBReader::readFloat(in_x3);
  uVar7 = CCBReader::readFloat(in_x3);
  uVar8 = CCBReader::readFloat(in_x3);
  this = operator_new__(0x20,(nothrow_t *)&std::nothrow);
  if (this != (Color4F *)0x0) {
    cocos2d::Color4F::Color4F(this);
    cocos2d::Color4F::Color4F(this + 0x10);
  }
  *(undefined4 *)this = uVar1;
  *(undefined4 *)(this + 4) = uVar2;
  *(undefined4 *)(this + 8) = uVar3;
  *(undefined4 *)(this + 0xc) = uVar4;
  *(undefined4 *)(this + 0x10) = uVar5;
  *(undefined4 *)(this + 0x14) = uVar6;
  *(undefined4 *)(this + 0x18) = uVar7;
  *(undefined4 *)(this + 0x1c) = uVar8;
  return this;
}

