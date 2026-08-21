
/* cocosbuilder::NodeLoader::parsePropTypeSize(cocos2d::Node*, cocos2d::Node*,
   cocosbuilder::CCBReader*) */

void cocosbuilder::NodeLoader::parsePropTypeSize(Node *param_1,Node *param_2,CCBReader *param_3)

{
  long lVar1;
  undefined4 uVar2;
  CCBAnimationManager *this;
  Size *pSVar3;
  CCBReader *in_x3;
  Size *in_x8;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  fVar4 = (float)CCBReader::readFloat(in_x3);
  fVar5 = (float)CCBReader::readFloat(in_x3);
  uVar2 = CCBReader::readInt(in_x3,false);
  this = (CCBAnimationManager *)CCBReader::getAnimationManager(in_x3);
  pSVar3 = (Size *)CCBAnimationManager::getContainerSize(this,(Node *)param_3);
  cocos2d::Size::Size((Size *)&local_60,pSVar3);
  switch(uVar2) {
  case 0:
    break;
  case 1:
    fVar4 = (float)(int)((fVar4 * local_60) / 100.0);
    fVar5 = (float)(int)((fVar5 * local_5c) / 100.0);
    break;
  case 2:
    fVar4 = local_60 - fVar4;
    fVar5 = local_5c - fVar5;
    break;
  case 3:
    fVar4 = (float)(int)((fVar4 * local_60) / 100.0);
    break;
  case 4:
    fVar5 = (float)(int)((fVar5 * local_5c) / 100.0);
    break;
  case 5:
    fVar6 = (float)CCBReader::getResolutionScale();
    fVar4 = fVar4 * fVar6;
    fVar5 = fVar5 * fVar6;
    break;
  default:
    cocos2d::log("Unknown CCB type.");
  }
  cocos2d::Size::Size(in_x8,fVar4,fVar5);
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

