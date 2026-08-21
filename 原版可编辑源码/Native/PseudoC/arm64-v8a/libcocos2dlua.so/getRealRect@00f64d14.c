
/* cocos2d::AutoPolygon::getRealRect(cocos2d::Rect const&) */

void cocos2d::AutoPolygon::getRealRect(Rect *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  Rect *in_x1;
  Rect *in_x8;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Rect aRStack_68 [16];
  long local_58;
  
                    /* catch() { ... } // from try @ 00f64d5c with catch @ 00f64d2c */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  Rect::Rect(in_x8,in_x1);
                    /* try { // try from 00f64d54 to 01064d5b has its CatchHandler @ 00f64dbc */
                    /* try { // try from 00f64d5c to 01064dd7 has its CatchHandler @ 00f64d2c */
  uVar2 = Rect::equals(in_x8,(Rect *)Rect::ZERO);
  if ((uVar2 & 1) == 0) {
    fVar6 = *(float *)in_x1;
    lVar3 = Director::getInstance();
    fVar7 = *(float *)(in_x1 + 4);
    fVar6 = fVar6 * *(float *)(lVar3 + 0x1a0);
    lVar3 = Director::getInstance();
    fVar4 = *(float *)(in_x1 + 8);
    fVar7 = fVar7 * *(float *)(lVar3 + 0x1a0);
    lVar3 = Director::getInstance();
    fVar5 = *(float *)(in_x1 + 0xc);
    fVar4 = fVar4 * *(float *)(lVar3 + 0x1a0);
                    /* catch() { ... } // from try @ 00f64d54 with catch @ 00f64dbc */
    lVar3 = Director::getInstance();
    fVar5 = fVar5 * *(float *)(lVar3 + 0x1a0);
  }
  else {
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x28));
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x2c));
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  Rect::Rect(aRStack_68,fVar6,fVar7,fVar4,fVar5);
  Rect::operator=(in_x8,aRStack_68);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

