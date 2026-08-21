
/* cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeTexture(cocos2d::Node*, cocos2d::Node*,
   char const*, cocos2d::Texture2D*, cocosbuilder::CCBReader*) */

void cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeTexture
               (Node *param_1,Node *param_2,char *param_3,Texture2D *param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)param_4,"texture");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeTexture(param_1,param_2,param_3,param_4,param_5);
    return;
  }
  (**(code **)(*(long *)param_2 + 0x678))(param_2,param_5);
  if (param_5 != (CCBReader *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cfe6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_2 + 0x648))(param_2,1);
    return;
  }
  return;
}

