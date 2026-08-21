
/* cocos2d::Rect::merge(cocos2d::Rect const&) */

void __thiscall cocos2d::Rect::merge(Rect *this,Rect *param_1)

{
  ulong uVar1;
  float fVar3;
  ulong uVar2;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar1 = *(ulong *)param_1;
  uVar4 = *(ulong *)this;
  fVar8 = (float)uVar1 + (float)*(undefined8 *)(param_1 + 8);
  fVar3 = (float)(uVar1 >> 0x20);
  fVar9 = fVar3 + (float)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  fVar5 = (float)(uVar4 >> 0x20);
  fVar6 = (float)uVar4 + (float)*(undefined8 *)(this + 8);
  fVar7 = fVar5 + (float)((ulong)*(undefined8 *)(this + 8) >> 0x20);
  uVar2 = CONCAT44(fVar7,fVar6);
  uVar4 = uVar4 ^ (uVar4 ^ uVar1) &
                  CONCAT44(-(uint)(fVar3 < fVar5),-(uint)((float)uVar1 < (float)uVar4));
  uVar2 = uVar2 ^ (uVar2 ^ CONCAT44(fVar9,fVar8)) &
                  CONCAT44(-(uint)(fVar7 < fVar9),-(uint)(fVar6 < fVar8));
  *(ulong *)this = uVar4;
  *(ulong *)(this + 8) =
       CONCAT44((float)(uVar2 >> 0x20) - (float)(uVar4 >> 0x20),(float)uVar2 - (float)uVar4);
  return;
}

