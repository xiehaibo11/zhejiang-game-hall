
/* cocos2d::TMXLayer::setupTileSprite(cocos2d::Sprite*, cocos2d::Vec2 const&, unsigned int) */

void cocos2d::TMXLayer::setupTileSprite(Sprite *param_1,Vec2 *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  float *pfVar3;
  uint in_w3;
  int iVar4;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  float in_s1;
  undefined8 local_60;
  long local_58;
  
  pfVar3 = (float *)(ulong)param_3;
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar5 = getPositionAt((TMXLayer *)param_1,(Vec2 *)pfVar3);
  local_60 = CONCAT44(in_s1,uVar5);
  (**(code **)(*(long *)param_2 + 0x98))(param_2,&local_60);
  if (param_1[0x3c0] == (Sprite)0x0) {
                    /* try { // try from 00f4cf70 to 0104cf87 has its CatchHandler @ 00f4d5b4 */
    iVar4 = *(int *)(param_1 + 0x3bc);
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x400)) {
    case 0:
    case 1:
    case 3:
      fVar6 = *(float *)(param_1 + 0x3e0);
      in_s1 = pfVar3[1];
      break;
    case 2:
      fVar6 = (float)(int)(*(float *)(param_1 + 0x3dc) + *(float *)(param_1 + 0x3e0));
      in_s1 = *pfVar3 + pfVar3[1];
      break;
    default:
      iVar4 = 0;
      goto LAB_00f4cfa0;
    }
                    /* try { // try from 00f4cf94 to 0104cfaf has its CatchHandler @ 00f4d414 */
    iVar4 = (int)-(fVar6 - in_s1);
  }
LAB_00f4cfa0:
  (**(code **)(*(long *)param_2 + 0x108))((float)iVar4,param_2);
  (**(code **)(*(long *)param_2 + 0x148))(param_2,&Vec2::ZERO);
  (**(code **)(*(long *)param_2 + 0x490))(param_2,param_1[0x3b8]);
  Sprite::setFlippedX((Sprite *)param_2,false);
  Sprite::setFlippedY((Sprite *)param_2,false);
  (**(code **)(*(long *)param_2 + 0x180))(0,param_2);
  local_60 = 0;
  (**(code **)(*(long *)param_2 + 0x148))(param_2,&local_60);
  if ((in_w3 >> 0x1d & 1) == 0) {
    if ((int)in_w3 < 0) {
      Sprite::setFlippedX((Sprite *)param_2,true);
    }
    if ((in_w3 >> 0x1e & 1) != 0) {
      Sprite::setFlippedY((Sprite *)param_2,true);
    }
  }
  else {
    local_60 = 0x3f0000003f000000;
    (**(code **)(*(long *)param_2 + 0x148))(param_2,&local_60);
    fVar6 = (float)getPositionAt((TMXLayer *)param_1,(Vec2 *)pfVar3);
    lVar2 = (**(code **)(*(long *)param_2 + 0x168))(param_2);
    fVar7 = *(float *)(lVar2 + 4);
    getPositionAt((TMXLayer *)param_1,(Vec2 *)pfVar3);
    pfVar3 = (float *)(**(code **)(*(long *)param_2 + 0x168))(param_2);
                    /* try { // try from 00f4d0bc to 0104d0d3 has its CatchHandler @ 00f4d5b4 */
    (**(code **)(*(long *)param_2 + 200))(fVar6 + fVar7 * 0.5,in_s1 + *pfVar3 * 0.5,param_2);
    if ((in_w3 & 0xc0000000) == 0x40000000) {
      lVar2 = *(long *)param_2;
      uVar5 = 0x43870000;
    }
    else {
      if ((in_w3 & 0xc0000000) != 0x80000000) {
        if (in_w3 >> 0x1e < 3) {
          uVar5 = 0x43870000;
        }
        else {
          uVar5 = 0x42b40000;
        }
        (**(code **)(*(long *)param_2 + 0x180))(uVar5,param_2);
        Sprite::setFlippedX((Sprite *)param_2,true);
        goto LAB_00f4d164;
      }
      lVar2 = *(long *)param_2;
                    /* try { // try from 00f4d0e0 to 0104d0fb has its CatchHandler @ 00f4d410 */
      uVar5 = 0x42b40000;
    }
    (**(code **)(lVar2 + 0x180))(uVar5,param_2);
  }
LAB_00f4d164:
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

