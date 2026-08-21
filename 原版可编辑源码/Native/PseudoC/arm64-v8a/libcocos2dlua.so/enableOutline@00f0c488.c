
/* cocos2d::Label::enableOutline(cocos2d::Color4B const&, int) */

void __thiscall cocos2d::Label::enableOutline(Label *this,Color4B *param_1,int param_2)

{
  ulong uVar1;
  Color4B CVar2;
  float fVar3;
  
  if ((0 < param_2) || (*(int *)(this + 0x49c) == 1)) {
    if (*(int *)(this + 0x308) == 0) {
      fVar3 = (float)NEON_ucvtf((uint)(byte)*param_1);
      *(float *)(this + 0x4a0) = fVar3 / 255.0;
      fVar3 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
      *(float *)(this + 0x4a4) = fVar3 / 255.0;
      fVar3 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
      *(float *)(this + 0x4a8) = fVar3 / 255.0;
      fVar3 = (float)NEON_ucvtf((uint)(byte)param_1[3]);
      *(float *)(this + 0x4ac) = fVar3 / 255.0;
      if ((0 < param_2) && (*(int *)(this + 0x38c) != param_2)) {
        *(int *)(this + 0x38c) = param_2;
        (**(code **)(*(long *)this + 0x530))(this,this + 0x360);
      }
    }
    else {
      uVar1 = Color4F::operator!=((Color4F *)(this + 0x4a0),param_1);
      if (((uVar1 & 1) != 0) || (*(float *)(this + 0x398) != (float)param_2)) {
        fVar3 = (float)NEON_ucvtf((uint)(byte)*param_1);
        *(float *)(this + 0x4a0) = fVar3 / 255.0;
        fVar3 = (float)NEON_ucvtf((uint)(byte)param_1[1]);
        *(float *)(this + 0x4a4) = fVar3 / 255.0;
        fVar3 = (float)NEON_ucvtf((uint)(byte)param_1[2]);
        *(float *)(this + 0x4a8) = fVar3 / 255.0;
        CVar2 = param_1[3];
        *(undefined4 *)(this + 0x49c) = 1;
        this[0x30c] = (Label)0x1;
        fVar3 = (float)NEON_ucvtf((uint)(byte)CVar2);
        *(float *)(this + 0x4ac) = fVar3 / 255.0;
      }
    }
    *(float *)(this + 0x398) = (float)param_2;
  }
  return;
}

