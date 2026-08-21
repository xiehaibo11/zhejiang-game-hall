
/* cocos2d::PUSlaveBehaviour::updateBehaviour(cocos2d::PUParticle3D*, float) */

void cocos2d::PUSlaveBehaviour::updateBehaviour(PUParticle3D *param_1,float param_2)

{
  long in_x1;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x124) & 1) == 0)) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    *(undefined4 *)(in_x1 + 0x10) = *(undefined4 *)(lVar1 + 0x10);
    *(undefined8 *)(in_x1 + 8) = uVar2;
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x58) + 0xac);
    *(undefined4 *)(in_x1 + 0xb4) = *(undefined4 *)(*(long *)(param_1 + 0x58) + 0xb4);
    *(undefined8 *)(in_x1 + 0xac) = uVar2;
  }
  return;
}

