
/* cocos2d::PUSphereCollider::preUpdateAffector(float) */

void cocos2d::PUSphereCollider::preUpdateAffector(float param_1)

{
  undefined4 uVar1;
  long in_x0;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)PUAffector::getDerivedPosition();
  uVar1 = *(undefined4 *)(puVar2 + 1);
  *(undefined8 *)(in_x0 + 200) = *puVar2;
  *(undefined4 *)(in_x0 + 0xd0) = uVar1;
  return;
}

