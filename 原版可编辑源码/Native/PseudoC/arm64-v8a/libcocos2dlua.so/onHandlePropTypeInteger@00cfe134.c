
/* cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeInteger(cocos2d::Node*, cocos2d::Node*,
   char const*, int, cocosbuilder::CCBReader*) */

void cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeInteger
               (Node *param_1,Node *param_2,char *param_3,int param_4,CCBReader *param_5)

{
  int iVar1;
  
  iVar1 = strcmp((char *)(ulong)(uint)param_4,"totalParticles");
  if (iVar1 != 0) {
    NodeLoader::onHandlePropTypeInteger
              (param_1,param_2,param_3,param_4,(CCBReader *)((ulong)param_5 & 0xffffffff));
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00cfe1c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_2 + 0x668))(param_2,(CCBReader *)((ulong)param_5 & 0xffffffff));
  return;
}

