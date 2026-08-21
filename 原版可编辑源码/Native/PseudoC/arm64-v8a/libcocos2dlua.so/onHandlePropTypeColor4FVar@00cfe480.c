
/* cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeColor4FVar(cocos2d::Node*,
   cocos2d::Node*, char const*, cocos2d::Color4F*, cocosbuilder::CCBReader*) */

void cocosbuilder::ParticleSystemQuadLoader::onHandlePropTypeColor4FVar
               (Node *param_1,Node *param_2,char *param_3,Color4F *param_4,CCBReader *param_5)

{
  int iVar1;
  Node *pNVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = strcmp((char *)param_4,"startColor");
  if (iVar1 == 0) {
    uVar3 = *(undefined8 *)param_5;
    *(undefined8 *)(param_2 + 0x4bc) = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)(param_2 + 0x4b4) = uVar3;
    uVar4 = *(undefined8 *)(param_5 + 0x18);
    uVar3 = *(undefined8 *)(param_5 + 0x10);
    pNVar2 = param_2 + 0x4c4;
  }
  else {
    iVar1 = strcmp((char *)param_4,"endColor");
    if (iVar1 != 0) {
      NodeLoader::onHandlePropTypeColor4FVar(param_1,param_2,param_3,param_4,param_5);
      return;
    }
    uVar3 = *(undefined8 *)param_5;
    *(undefined8 *)(param_2 + 0x4dc) = *(undefined8 *)(param_5 + 8);
    *(undefined8 *)(param_2 + 0x4d4) = uVar3;
    uVar4 = *(undefined8 *)(param_5 + 0x18);
    uVar3 = *(undefined8 *)(param_5 + 0x10);
    pNVar2 = param_2 + 0x4e4;
  }
  *(undefined8 *)(pNVar2 + 8) = uVar4;
  *(undefined8 *)pNVar2 = uVar3;
  return;
}

