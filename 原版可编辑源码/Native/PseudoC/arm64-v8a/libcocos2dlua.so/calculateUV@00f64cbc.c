
/* cocos2d::AutoPolygon::calculateUV(cocos2d::Rect const&, cocos2d::V3F_C4B_T2F*, long) */

void __thiscall
cocos2d::AutoPolygon::calculateUV(AutoPolygon *this,Rect *param_1,V3F_C4B_T2F *param_2,long param_3)

{
  V3F_C4B_T2F *pVVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_3 != 0) {
    fVar3 = *(float *)param_1;
    fVar6 = *(float *)(param_1 + 4);
    fVar7 = *(float *)(param_1 + 0xc);
    fVar2 = *(float *)(this + 0x30);
    pVVar1 = param_2 + param_3 * 0x18;
    fVar4 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x28));
    fVar5 = (float)NEON_ucvtf(*(undefined4 *)(this + 0x2c));
    do {
      *(float *)(param_2 + 0x10) = (*(float *)param_2 * fVar2 + fVar3) / fVar4;
      *(float *)(param_2 + 0x14) = ((fVar6 + fVar7) - fVar2 * *(float *)(param_2 + 4)) / fVar5;
      param_2 = param_2 + 0x18;
    } while (param_2 != pVVar1);
  }
  return;
}

