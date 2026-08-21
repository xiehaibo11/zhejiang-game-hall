
/* cocos2d::Sprite::setVertexCoords(cocos2d::Rect const&, cocos2d::V3F_C4B_T2F_Quad*) */

void __thiscall
cocos2d::Sprite::setVertexCoords(Sprite *this,Rect *param_1,V3F_C4B_T2F_Quad *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f40064 with catch @ 00f400a8
                        */
  fVar1 = *(float *)(this + 0x448);
  if (this[0x509] != (Sprite)0x0) {
    fVar1 = -*(float *)(this + 0x448);
  }
  fVar2 = *(float *)(this + 0x44c);
  if (this[0x50a] != (Sprite)0x0) {
    fVar2 = -*(float *)(this + 0x44c);
  }
  fVar1 = fVar1 + (*(float *)(this + 0x438) - *(float *)(this + 0x410)) * 0.5;
  fVar2 = fVar2 + (*(float *)(this + 0x43c) - *(float *)(this + 0x414)) * 0.5;
  *(float *)(this + 0x440) = fVar1;
  *(float *)(this + 0x444) = fVar2;
  if (*(int *)(this + 0x42c) != 3) {
    if (*(int *)(this + 0x42c) == 0) {
      fVar1 = fVar1 * *(float *)(this + 0x430);
      fVar2 = fVar2 * *(float *)(this + 0x434);
      *(float *)(this + 0x440) = fVar1;
      *(float *)(this + 0x444) = fVar2;
    }
    fVar1 = fVar1 + 0.0 + *(float *)param_1;
    fVar3 = *(float *)(param_1 + 8);
    fVar4 = *(float *)(param_1 + 0xc);
    fVar2 = fVar2 + 0.0 + *(float *)(param_1 + 4);
    *(undefined4 *)(param_2 + 0x20) = 0;
    *(undefined4 *)(param_2 + 0x50) = 0;
    *(undefined4 *)(param_2 + 8) = 0;
    *(float *)(param_2 + 0x18) = fVar1;
    *(float *)(param_2 + 0x1c) = fVar2;
    *(float *)(param_2 + 0x48) = fVar1 + fVar3;
    *(float *)(param_2 + 0x4c) = fVar2;
    *(float *)param_2 = fVar1;
    *(float *)(param_2 + 4) = fVar2 + fVar4;
    *(float *)(param_2 + 0x30) = fVar1 + fVar3;
    *(float *)(param_2 + 0x34) = fVar2 + fVar4;
    *(undefined4 *)(param_2 + 0x38) = 0;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f4015c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x5d8))(this,1);
  return;
}

