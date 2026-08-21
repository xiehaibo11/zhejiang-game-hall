
/* cocos2d::AutoPolygon::trace(cocos2d::Rect const&, float) */

void __thiscall cocos2d::AutoPolygon::trace(AutoPolygon *this,Rect *param_1,float param_2)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = *(float *)(param_1 + 4);
  fVar4 = fVar3 + *(float *)(param_1 + 0xc);
  if (fVar3 < fVar4) {
    fVar1 = *(float *)param_1;
    do {
      if (*(float *)(param_1 + 8) + fVar1 <= fVar1) {
        bVar2 = false;
      }
      else {
        fVar5 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(this + 8) + 3 +
                                                 (ulong)(uint)((*(int *)(this + 0x28) * (int)fVar3 +
                                                               (int)fVar1) * 4)));
        if (param_2 < fVar5) break;
        bVar2 = false;
        fVar5 = fVar1;
        while (fVar5 = fVar5 + 1.0, fVar5 < *(float *)(param_1 + 8) + fVar1) {
          fVar6 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(this + 8) + 3 +
                                                   (ulong)(uint)((*(int *)(this + 0x28) * (int)fVar3
                                                                 + (int)fVar5) * 4)));
          bVar2 = (bool)(bVar2 | param_2 < fVar6);
          if (param_2 < fVar6) goto LAB_00f632a8;
        }
      }
      fVar3 = fVar3 + 1.0;
      if ((fVar4 <= fVar3) || (bVar2)) break;
    } while( true );
  }
LAB_00f632a8:
  marchSquare(this,param_1,param_2);
  return;
}

