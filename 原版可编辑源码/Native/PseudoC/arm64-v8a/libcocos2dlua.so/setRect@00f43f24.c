
/* cocos2d::SpriteFrame::setRect(cocos2d::Rect const&) */

void __thiscall cocos2d::SpriteFrame::setRect(SpriteFrame *this,Rect *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  Rect aRStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  Rect::operator=((Rect *)(this + 0x5c),(Rect *)param_1);
  fVar6 = *(float *)(this + 0x5c);
  lVar2 = Director::getInstance();
  fVar3 = *(float *)(lVar2 + 0x1a0);
  fVar7 = *(float *)(this + 0x60);
  lVar2 = Director::getInstance();
  fVar4 = *(float *)(lVar2 + 0x1a0);
  fVar8 = *(float *)(this + 100);
  lVar2 = Director::getInstance();
  fVar5 = *(float *)(lVar2 + 0x1a0);
  fVar9 = *(float *)(this + 0x68);
  lVar2 = Director::getInstance();
  Rect::Rect(aRStack_58,fVar6 * fVar3,fVar7 * fVar4,fVar8 * fVar5,fVar9 * *(float *)(lVar2 + 0x1a0))
  ;
  Rect::operator=((Rect *)(this + 0x48),aRStack_58);
                    /* try { // try from 00f43fb4 to 0104400f has its CatchHandler @ 00f43fb4
                       catch(type#1 @ 00000000) { ... } // from try @ 00f43fb4 with catch @ 00f43fb4
                       catch(type#1 @ 00000000) { ... } // from try @ 00f44018 with catch @ 00f43fb4
                       catch(type#1 @ 00000000) { ... } // from try @ 00f440a8 with catch @ 00f43fb4
                        */
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

