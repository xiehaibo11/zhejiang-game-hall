
/* cocos2d::AutoPolygon::findFirstNoneTransparentPixel(cocos2d::Rect const&, float) */

float __thiscall
cocos2d::AutoPolygon::findFirstNoneTransparentPixel(AutoPolygon *this,Rect *param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = fVar3 + *(float *)(param_1 + 0xc);
  if (fVar4 <= fVar3) {
    return 0.0;
  }
  fVar2 = *(float *)param_1;
  do {
    fVar6 = fVar2;
    if (fVar2 < *(float *)(param_1 + 8) + fVar2) {
      fVar5 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(this + 8) + 3 +
                                               (ulong)(uint)((*(int *)(this + 0x28) * (int)fVar3 +
                                                             (int)fVar2) * 4)));
      bVar1 = param_2 < fVar5;
      while( true ) {
        if (param_2 < fVar5) {
          return fVar6;
        }
        fVar6 = fVar6 + 1.0;
        if (*(float *)(param_1 + 8) + fVar2 <= fVar6) break;
        fVar5 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(this + 8) + 3 +
                                                 (ulong)(uint)((*(int *)(this + 0x28) * (int)fVar3 +
                                                               (int)fVar6) * 4)));
        bVar1 = (bool)(bVar1 | param_2 < fVar5);
      }
      if (bVar1) {
        return fVar6;
      }
    }
    fVar3 = fVar3 + 1.0;
    if (fVar4 <= fVar3) {
      return fVar6;
    }
  } while( true );
}

