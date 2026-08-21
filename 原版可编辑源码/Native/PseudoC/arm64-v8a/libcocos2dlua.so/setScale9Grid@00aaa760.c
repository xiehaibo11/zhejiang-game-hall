
/* fairygui::FUISprite::setScale9Grid(cocos2d::Rect*) */

void __thiscall fairygui::FUISprite::setScale9Grid(FUISprite *this,Rect *param_1)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Rect aRStack_48 [16];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_1 == (Rect *)0x0) {
    cocos2d::Rect::Rect((Rect *)&local_38,0.0,0.0,1.0,1.0);
    pcVar3 = *(code **)(*(long *)this + 0x570);
  }
  else {
    cocos2d::Rect::Rect((Rect *)&local_38,(Rect *)param_1);
    uVar2 = cocos2d::Rect::equals((Rect *)&local_38,(Rect *)cocos2d::Rect::ZERO);
    if ((uVar2 & 1) != 0) {
      cocos2d::Rect::Rect(aRStack_48,*(float *)(this + 0x438) / 3.0,*(float *)(this + 0x43c) / 3.0,
                          *(float *)(this + 0x438) / 3.0,*(float *)(this + 0x43c) / 3.0);
      cocos2d::Rect::operator=((Rect *)&local_38,aRStack_48);
    }
    fVar5 = *(float *)(this + 0x438);
    if (fVar5 < local_38) {
      local_38 = 0.0;
    }
    fVar4 = *(float *)(this + 0x43c);
    if (fVar4 < local_34) {
      local_34 = 0.0;
    }
    if (fVar5 < local_30) {
      local_30 = 1.0;
    }
    if (fVar4 < local_2c) {
      local_2c = 1.0;
    }
    local_38 = local_38 - (*(float *)(this + 0x448) + (fVar5 - *(float *)(this + 0x410)) * 0.5);
    fVar7 = *(float *)(this + 0x410) + 0.0;
    fVar5 = local_38;
    if (local_38 <= 0.0) {
      fVar5 = 0.0;
    }
    if (local_38 + local_30 <= fVar7) {
      fVar7 = local_38 + local_30;
    }
    fVar6 = *(float *)(this + 0x414) + 0.0;
    local_34 = local_34 - ((fVar4 - *(float *)(this + 0x414)) * 0.5 - *(float *)(this + 0x44c));
    fVar4 = local_34;
    if (local_34 <= 0.0) {
      fVar4 = 0.0;
    }
    if (local_34 + local_2c <= fVar6) {
      fVar6 = local_34 + local_2c;
    }
    cocos2d::Rect::setRect((Rect *)&local_38,fVar5,fVar4,fVar7 - fVar5,fVar6 - fVar4);
    pcVar3 = *(code **)(*(long *)this + 0x580);
  }
  (*pcVar3)(this,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

