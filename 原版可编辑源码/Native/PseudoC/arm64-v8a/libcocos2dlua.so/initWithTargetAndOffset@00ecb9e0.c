
/* WARNING: Removing unreachable block (ram,0x00ecbb68) */
/* cocos2d::Follow::initWithTargetAndOffset(cocos2d::Node*, float, float, cocos2d::Rect const&) */

void __thiscall
cocos2d::Follow::initWithTargetAndOffset
          (Follow *this,Node *param_1,float param_2,float param_3,Rect *param_4)

{
  long lVar1;
  byte bVar2;
  Director *this_00;
  Size *pSVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_50;
  float fStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1 == (Node *)0x0) {
    log("Follow::initWithTarget error: followedNode is nullptr!");
    uVar4 = 0;
    goto LAB_00ecbb10;
  }
  Ref::retain((Ref *)param_1);
  *(Node **)(this + 0x50) = param_1;
  Rect::operator=((Rect *)(this + 0x84),(Rect *)param_4);
  bVar2 = Rect::equals((Rect *)param_4,(Rect *)Rect::ZERO);
  this[0x58] = (Follow)(~bVar2 & 1);
  this[0x59] = (Follow)0x0;
  this_00 = (Director *)Director::getInstance();
  pSVar3 = (Size *)Director::getWinSize(this_00);
  Size::Size((Size *)&local_50,pSVar3);
                    /* catch() { ... } // from try @ 00ecbab0 with catch @ 00ecba74 */
  *(float *)(this + 0x7c) = param_2;
  *(float *)(this + 0x80) = param_3;
  *(float *)(this + 100) = local_50;
  *(float *)(this + 0x68) = fStack_4c;
  *(float *)(this + 0x5c) = local_50 * 0.5 + param_2;
  *(float *)(this + 0x60) = fStack_4c * 0.5 + param_3;
  if (this[0x58] != (Follow)0x0) {
    fVar9 = *(float *)param_4;
    local_50 = (fVar9 + *(float *)(param_4 + 8)) - local_50;
    fVar5 = -fVar9;
                    /* try { // try from 00ecbaa8 to 00fcbaaf has its CatchHandler @ 00ecbb18 */
    fVar6 = -local_50;
    *(float *)(this + 0x6c) = fVar6;
    *(float *)(this + 0x70) = fVar5;
                    /* try { // try from 00ecbab0 to 00fcbb33 has its CatchHandler @ 00ecba74 */
    fVar8 = *(float *)(param_4 + 4);
    *(float *)(this + 0x74) = -fVar8;
    fStack_4c = (fVar8 + *(float *)(param_4 + 0xc)) - fStack_4c;
    fVar7 = -fStack_4c;
    *(float *)(this + 0x78) = fVar7;
    if (local_50 < fVar9) {
      fVar5 = (fVar5 - local_50) * 0.5;
      *(float *)(this + 0x6c) = fVar5;
      *(float *)(this + 0x70) = fVar5;
      fVar6 = fVar5;
      if (fVar8 <= fStack_4c) goto LAB_00ecbae0;
LAB_00ecbb50:
      fVar7 = (fVar7 - fVar8) * 0.5;
      *(float *)(this + 0x74) = fVar7;
      *(float *)(this + 0x78) = fVar7;
    }
    else {
      if (fStack_4c < fVar8) goto LAB_00ecbb50;
LAB_00ecbae0:
      if (-fVar8 != fVar7) goto LAB_00ecbaf8;
    }
    if (fVar6 == fVar5) {
      this[0x59] = (Follow)0x1;
    }
  }
LAB_00ecbaf8:
  uVar4 = 1;
LAB_00ecbb10:
                    /* catch() { ... } // from try @ 00ecbaa8 with catch @ 00ecbb18 */
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

