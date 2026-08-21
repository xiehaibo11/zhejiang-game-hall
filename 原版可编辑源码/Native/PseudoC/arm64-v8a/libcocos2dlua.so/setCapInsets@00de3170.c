
/* cocos2d::ui::Scale9Sprite::setCapInsets(cocos2d::Rect const&) */

void __thiscall cocos2d::ui::Scale9Sprite::setCapInsets(Scale9Sprite *this,Rect *param_1)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
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
  Rect::Rect((Rect *)&local_38,(Rect *)param_1);
  uVar2 = Rect::equals((Rect *)&local_38,(Rect *)Rect::ZERO);
  if ((uVar2 & 1) != 0) {
    Rect::Rect(aRStack_48,*(float *)(this + 0x438) / 3.0,*(float *)(this + 0x43c) / 3.0,
               *(float *)(this + 0x438) / 3.0,*(float *)(this + 0x43c) / 3.0);
    Rect::operator=((Rect *)&local_38,aRStack_48);
  }
  fVar4 = *(float *)(this + 0x438);
  if (fVar4 < local_38) {
    local_38 = 0.0;
  }
  fVar3 = *(float *)(this + 0x43c);
  if (fVar3 < local_34) {
    local_34 = 0.0;
  }
  if (fVar4 < local_30) {
    local_30 = 1.0;
  }
  if (fVar3 < local_2c) {
    local_2c = 1.0;
  }
  *(float *)(this + 0x534) = (fVar4 - local_38) - local_30;
  *(float *)(this + 0x53c) = (fVar3 - local_34) - local_2c;
  fVar5 = local_38 - (*(float *)(this + 0x448) + (fVar4 - *(float *)(this + 0x410)) * 0.5);
  *(float *)(this + 0x530) = local_38;
  *(float *)(this + 0x538) = local_34;
  fVar7 = *(float *)(this + 0x410) + 0.0;
  fVar4 = fVar5;
  if (fVar5 <= 0.0) {
    fVar4 = 0.0;
  }
  if (local_30 + fVar5 <= fVar7) {
    fVar7 = local_30 + fVar5;
  }
  fVar6 = *(float *)(this + 0x414) + 0.0;
  local_34 = local_34 - ((fVar3 - *(float *)(this + 0x414)) * 0.5 - *(float *)(this + 0x44c));
  fVar3 = local_34;
  if (local_34 <= 0.0) {
    fVar3 = 0.0;
  }
  if (local_2c + local_34 <= fVar6) {
    fVar6 = local_2c + local_34;
  }
  local_38 = fVar5;
  Rect::setRect((Rect *)&local_38,fVar4,fVar3,fVar7 - fVar4,fVar6 - fVar3);
  if ((*(int *)(this + 0x544) == 1) && (*(int *)(this + 0x42c) != 1)) {
    (**(code **)(*(long *)this + 0x580))(this,&local_38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

