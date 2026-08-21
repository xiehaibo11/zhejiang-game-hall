
/* cocosbuilder::LabelTTFLoader::onHandlePropTypeIntegerLabeled(cocos2d::Node*, cocos2d::Node*, char
   const*, int, cocosbuilder::CCBReader*) */

void cocosbuilder::LabelTTFLoader::onHandlePropTypeIntegerLabeled
               (Node *param_1,Node *param_2,char *param_3,int param_4,CCBReader *param_5)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  CCBReader *__s1;
  
  __s1 = (CCBReader *)(ulong)(uint)param_4;
  iVar1 = strcmp((char *)__s1,"horizontalAlignment");
  if (iVar1 == 0) {
    uVar3 = (ulong)*(uint *)(param_2 + 0x454);
    uVar2 = (ulong)param_5 & 0xffffffff;
  }
  else {
    iVar1 = strcmp((char *)__s1,"verticalAlignment");
    if (iVar1 != 0) {
      NodeLoader::onHandlePropTypeFloatScale(param_1,param_2,param_3,(float)(int)param_5,__s1);
      return;
    }
    uVar2 = (ulong)*(uint *)(param_2 + 0x450);
    uVar3 = (ulong)param_5 & 0xffffffff;
  }
  cocos2d::Label::setAlignment((Label *)param_2,uVar2,uVar3);
  return;
}

