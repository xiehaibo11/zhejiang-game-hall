
/* cocos2d::SpriteFrame::createWithTexture(cocos2d::Texture2D*, cocos2d::Rect const&) */

SpriteFrame * cocos2d::SpriteFrame::createWithTexture(Texture2D *param_1,Rect *param_2)

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
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  this = operator_new(0xf8,(nothrow_t *)&std::nothrow);
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
  Rect::Rect(aRStack_68,fVar6 * fVar3,fVar7 * fVar4,fVar8 * fVar5,fVar9 * *(float *)(lVar2 + 0x1a0))
  ;
  initWithTexture(this,param_1,aRStack_68,false,(Vec2 *)&Vec2::ZERO,aSStack_60);
  Ref::autorelease((Ref *)this);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

