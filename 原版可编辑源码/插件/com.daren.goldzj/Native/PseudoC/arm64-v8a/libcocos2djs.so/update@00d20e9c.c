
/* dragonBones::BlendState::update(float, int) */

undefined8 __thiscall dragonBones::BlendState::update(BlendState *this,float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  if (*this == (BlendState)0x0) {
    *this = (BlendState)0x1;
    *(int *)(this + 4) = param_2;
    *(undefined4 *)(this + 8) = 0x3f800000;
    *(float *)(this + 0xc) = param_1;
    *(float *)(this + 0x10) = param_1;
    return 1;
  }
  fVar1 = *(float *)(this + 8);
  if (0.0 < fVar1) {
    fVar2 = *(float *)(this + 0xc);
    if (*(int *)(this + 4) != param_2) {
      if (fVar1 <= fVar2) {
        *(undefined4 *)(this + 8) = 0;
        return 0;
      }
      fVar1 = fVar1 - fVar2;
      fVar2 = 0.0;
      *(int *)(this + 4) = param_2;
      *(undefined4 *)(this + 0xc) = 0;
      *(float *)(this + 8) = fVar1;
    }
    *(float *)(this + 0xc) = fVar2 + fVar1 * param_1;
    *(float *)(this + 0x10) = fVar1 * param_1;
    return 2;
  }
  return 0;
}

