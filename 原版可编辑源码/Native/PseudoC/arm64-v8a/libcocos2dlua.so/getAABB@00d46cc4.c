
/* cocos2d::Terrain::getAABB() */

void cocos2d::Terrain::getAABB(void)

{
  long in_x0;
  undefined8 *in_x8;
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(in_x0 + 0x4f0);
  uVar3 = *(undefined8 *)(lVar1 + 0x68);
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  in_x8[2] = *(undefined8 *)(lVar1 + 0x70);
  in_x8[1] = uVar3;
  *in_x8 = uVar2;
  return;
}

