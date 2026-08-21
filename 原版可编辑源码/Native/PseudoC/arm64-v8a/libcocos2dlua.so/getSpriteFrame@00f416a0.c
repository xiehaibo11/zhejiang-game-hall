
/* cocos2d::Sprite::getSpriteFrame() const */

void __thiscall cocos2d::Sprite::getSpriteFrame(Sprite *this)

{
  Sprite SVar1;
  long lVar2;
  long lVar3;
  Texture2D *pTVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  Size aSStack_78 [8];
  float local_70;
  float fStack_6c;
  Rect aRStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x370) == 0) {
    pTVar4 = *(Texture2D **)(this + 0x368);
    fVar8 = *(float *)(this + 0x408);
    lVar3 = Director::getInstance();
    fVar5 = *(float *)(lVar3 + 0x1a0);
    fVar9 = *(float *)(this + 0x40c);
    lVar3 = Director::getInstance();
    fVar6 = *(float *)(lVar3 + 0x1a0);
    fVar10 = *(float *)(this + 0x410);
    lVar3 = Director::getInstance();
    fVar7 = *(float *)(lVar3 + 0x1a0);
    fVar11 = *(float *)(this + 0x414);
    lVar3 = Director::getInstance();
    Rect::Rect(aRStack_68,fVar8 * fVar5,fVar9 * fVar6,fVar10 * fVar7,
               fVar11 * *(float *)(lVar3 + 0x1a0));
    SVar1 = this[0x418];
    fVar6 = *(float *)(this + 0x448);
    lVar3 = Director::getInstance();
    fVar5 = *(float *)(lVar3 + 0x1a0);
    fVar7 = *(float *)(this + 0x44c);
    lVar3 = Director::getInstance();
    fStack_6c = fVar7 * *(float *)(lVar3 + 0x1a0);
    fVar7 = *(float *)(this + 0x438);
    local_70 = fVar6 * fVar5;
    lVar3 = Director::getInstance();
    fVar5 = *(float *)(lVar3 + 0x1a0);
    fVar6 = *(float *)(this + 0x43c);
    lVar3 = Director::getInstance();
    Size::Size(aSStack_78,fVar7 * fVar5,fVar6 * *(float *)(lVar3 + 0x1a0));
    SpriteFrame::createWithTexture(pTVar4,aRStack_68,(bool)SVar1,(Vec2 *)&local_70,aSStack_78);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

