
/* cocos2d::SpriteFrame::create(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, cocos2d::Rect const&) */

SpriteFrame * cocos2d::SpriteFrame::create(basic_string *param_1,Rect *param_2)

{
  long lVar1;
  SpriteFrame *this;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Rect aRStack_68 [8];
  Size aSStack_60 [8];
  long local_58;
  
                    /* try { // try from 00f4342c to 01043433 has its CatchHandler @ 00f43458 */
                    /* try { // try from 00f43434 to 0104349f has its CatchHandler @ 00f43400 */
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = operator_new(0xf8,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00f4342c with catch @ 00f43458 */
  if (this != (SpriteFrame *)0x0) {
    SpriteFrame(this);
  }
  fVar6 = *(float *)param_2;
  lVar2 = Director::getInstance();
  fVar3 = *(float *)(lVar2 + 0x1a0);
  fVar7 = *(float *)(param_2 + 4);
  lVar2 = Director::getInstance();
  fVar4 = *(float *)(lVar2 + 0x1a0);
  fVar8 = *(float *)(param_2 + 8);
  lVar2 = Director::getInstance();
  fVar5 = *(float *)(lVar2 + 0x1a0);
  fVar9 = *(float *)(param_2 + 0xc);
  lVar2 = Director::getInstance();
                    /* try { // try from 00f434a0 to 010434e7 has its CatchHandler @ 00f434a0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f434a0 with catch @ 00f434a0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f4352c with catch @ 00f434a0
                        */
  Rect::Rect(aRStack_68,fVar6 * fVar3,fVar7 * fVar4,fVar8 * fVar5,fVar9 * *(float *)(lVar2 + 0x1a0))
  ;
  initWithTextureFilename(this,param_1,aRStack_68,false,(Vec2 *)&Vec2::ZERO,aSStack_60);
  Ref::autorelease((Ref *)this);
                    /* try { // try from 00f434e8 to 010434f3 has its CatchHandler @ 00f43578 */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* try { // try from 00f434fc to 010434ff has its CatchHandler @ 00f43560 */
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

