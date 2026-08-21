
/* cocos2d::experimental::TMXLayer::setupTileSprite(cocos2d::Sprite*, cocos2d::Vec2 const&, unsigned
   int) */

void cocos2d::experimental::TMXLayer::setupTileSprite(Sprite *param_1,Vec2 *param_2,uint param_3)

{
  Mat4 *pMVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  uint in_w3;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float in_s1;
  undefined8 local_70;
  long local_68;
  
  pfVar4 = (float *)(ulong)param_3;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pMVar1 = (Mat4 *)(param_1 + 0x3a4);
  uVar6 = PointApplyTransform((Vec2 *)pfVar4,pMVar1);
  local_70 = CONCAT44(in_s1,uVar6);
  (**(code **)(*(long *)param_2 + 0x98))(param_2,&local_70);
  if (param_1[0x3a0] == (Sprite)0x0) {
    iVar5 = *(int *)(param_1 + 0x39c);
  }
  else {
    if (*(int *)(param_1 + 0x330) == 0) {
      fVar7 = *(float *)(param_1 + 0x314);
      in_s1 = pfVar4[1];
    }
    else {
      if (*(int *)(param_1 + 0x330) != 2) {
        iVar5 = 0;
        goto LAB_00efaba4;
      }
      fVar7 = (float)(int)(*(float *)(param_1 + 0x310) + *(float *)(param_1 + 0x314));
      in_s1 = *pfVar4 + pfVar4[1];
    }
    iVar5 = (int)-(fVar7 - in_s1);
  }
LAB_00efaba4:
  (**(code **)(*(long *)param_2 + 0x108))((float)iVar5,param_2);
  (**(code **)(*(long *)param_2 + 0x148))(param_2,&Vec2::ZERO);
  uVar6 = (**(code **)(*(long *)param_1 + 0x480))(param_1);
  (**(code **)(*(long *)param_2 + 0x490))(param_2,uVar6);
  Sprite::setFlippedX((Sprite *)param_2,false);
  Sprite::setFlippedY((Sprite *)param_2,false);
  (**(code **)(*(long *)param_2 + 0x180))(0,param_2);
  if ((in_w3 >> 0x1d & 1) == 0) {
    if ((int)in_w3 < 0) {
      Sprite::setFlippedX((Sprite *)param_2,true);
    }
    if ((in_w3 >> 0x1e & 1) != 0) {
                    /* try { // try from 00efacf4 to 00ffad3b has its CatchHandler @ 00efb070 */
      Sprite::setFlippedY((Sprite *)param_2,true);
    }
  }
  else {
    local_70 = 0x3f0000003f000000;
    (**(code **)(*(long *)param_2 + 0x148))(param_2,&local_70);
    fVar7 = (float)PointApplyTransform((Vec2 *)pfVar4,pMVar1);
    lVar3 = (**(code **)(*(long *)param_2 + 0x168))(param_2);
    fVar8 = *(float *)(lVar3 + 4);
    PointApplyTransform((Vec2 *)pfVar4,pMVar1);
    pfVar4 = (float *)(**(code **)(*(long *)param_2 + 0x168))(param_2);
    (**(code **)(*(long *)param_2 + 200))(fVar7 + fVar8 * 0.5,in_s1 + *pfVar4 * 0.5,param_2);
                    /* try { // try from 00efacc8 to 00ffacd3 has its CatchHandler @ 00efb060 */
    if ((in_w3 & 0xc0000000) == 0x40000000) {
      lVar3 = *(long *)param_2;
      uVar6 = 0x43870000;
    }
    else {
      if ((in_w3 & 0xc0000000) != 0x80000000) {
        if (in_w3 >> 0x1e < 3) {
          uVar6 = 0x43870000;
        }
        else {
          uVar6 = 0x42b40000;
        }
        (**(code **)(*(long *)param_2 + 0x180))(uVar6,param_2);
        Sprite::setFlippedX((Sprite *)param_2,true);
        goto LAB_00efad58;
      }
      lVar3 = *(long *)param_2;
      uVar6 = 0x42b40000;
    }
    (**(code **)(lVar3 + 0x180))(uVar6,param_2);
  }
LAB_00efad58:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00efad84 to 00ffad8b has its CatchHandler @ 00efb048 */
  return;
}

