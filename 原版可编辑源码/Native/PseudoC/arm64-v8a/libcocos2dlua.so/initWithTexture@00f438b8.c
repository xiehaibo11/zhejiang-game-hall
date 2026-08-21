
/* cocos2d::SpriteFrame::initWithTexture(cocos2d::Texture2D*, cocos2d::Rect const&, bool,
   cocos2d::Vec2 const&, cocos2d::Size const&) */

undefined8 __thiscall
cocos2d::SpriteFrame::initWithTexture
          (SpriteFrame *this,Texture2D *param_1,Rect *param_2,bool param_3,Vec2 *param_4,
          Size *param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  Rect aRStack_78 [16];
  long local_68;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f43758 with catch @ 00f438c0
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f43748 with catch @ 00f438d8
                        */
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f435e4 with catch @ 00f438ec
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f43948 with catch @ 00f438f0
                       catch(type#1 @ 00000000) { ... } // from try @ 00f43b10 with catch @ 00f438f0
                        */
  *(Texture2D **)(this + 0x90) = param_1;
  if (param_1 != (Texture2D *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  Rect::operator=((Rect *)(this + 0x48),(Rect *)param_2);
  fVar7 = *(float *)param_2;
  lVar2 = Director::getInstance();
  fVar4 = *(float *)(lVar2 + 0x1a0);
  fVar8 = *(float *)(param_2 + 4);
  lVar2 = Director::getInstance();
  fVar5 = *(float *)(lVar2 + 0x1a0);
  fVar9 = *(float *)(param_2 + 8);
  lVar2 = Director::getInstance();
  fVar6 = *(float *)(lVar2 + 0x1a0);
                    /* try { // try from 00f43940 to 01043947 has its CatchHandler @ 00f43c5c */
  fVar10 = *(float *)(param_2 + 0xc);
                    /* try { // try from 00f43948 to 01043a9f has its CatchHandler @ 00f438f0 */
  lVar2 = Director::getInstance();
  Rect::Rect(aRStack_78,fVar7 / fVar4,fVar8 / fVar5,fVar9 / fVar6,fVar10 / *(float *)(lVar2 + 0x1a0)
            );
  Rect::operator=((Rect *)(this + 0x5c),aRStack_78);
  uVar3 = *(undefined8 *)param_4;
  *(undefined8 *)(this + 0x7c) = uVar3;
  lVar2 = Director::getInstance();
  fVar4 = *(float *)(lVar2 + 0x1a0);
  fVar6 = *(float *)(this + 0x80);
  lVar2 = Director::getInstance();
  fVar5 = *(float *)(lVar2 + 0x1a0);
  *(float *)(this + 0x30) = (float)uVar3 / fVar4;
  *(float *)(this + 0x34) = fVar6 / fVar5;
  Size::operator=((Size *)(this + 0x84),param_5);
  fVar5 = *(float *)(this + 0x84);
  lVar2 = Director::getInstance();
  fVar4 = *(float *)(lVar2 + 0x1a0);
  fVar6 = *(float *)(this + 0x88);
  lVar2 = Director::getInstance();
  Size::Size((Size *)aRStack_78,fVar5 / fVar4,fVar6 / *(float *)(lVar2 + 0x1a0));
  Size::operator=((Size *)(this + 0x40),(Size *)aRStack_78);
  *(undefined8 *)(this + 0x38) = 0x7fc000007fc00000;
  this[0x58] = (SpriteFrame)param_3;
  Rect::Rect(aRStack_78,NAN,NAN,NAN,NAN);
  Rect::operator=((Rect *)(this + 0x6c),aRStack_78);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

