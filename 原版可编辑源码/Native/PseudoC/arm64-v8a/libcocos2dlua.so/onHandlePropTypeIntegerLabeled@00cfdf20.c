
/* cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeIntegerLabeled(cocos2d::Node*,
   cocos2d::Node*, char const*, int, cocosbuilder::CCBReader*) */

void cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeIntegerLabeled
               (Node *param_1,Node *param_2,char *param_3,int param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)(ulong)(uint)param_4,"emitterMode");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeIntegerLabeled
              (param_1,param_2,param_3,param_4,(CCBReader *)((ulong)param_5 & 0xffffffff));
    return;
  }
  *(int *)(param_2 + 0x4a0) = (int)param_5;
  return;
}

