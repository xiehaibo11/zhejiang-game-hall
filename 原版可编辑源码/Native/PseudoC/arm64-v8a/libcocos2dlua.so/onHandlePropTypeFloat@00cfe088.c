
/* cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeFloat(cocos2d::Node*, cocos2d::Node*,
   char const*, float, cocosbuilder::CCBReader*) */

void cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeFloat
               (Node *param_1,Node *param_2,char *param_3,float param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)param_5,"emissionRate");
  if (iVar1 == 0) {
    *(float *)(param_2 + 0x504) = param_4;
  }
  else {
    iVar1 = strcmp((char *)param_5,"duration");
    if (iVar1 != 0) {
      NodeLoader::onHandlePropTypeFloat(param_1,param_2,param_3,param_4,param_5);
      return;
    }
    *(float *)(param_2 + 0x47c) = param_4;
  }
  return;
}

