
/* dtCrowd::requestMoveTargetReplan(int, unsigned int, float const*) */

undefined8 __thiscall
dtCrowd::requestMoveTargetReplan(dtCrowd *this,int param_1,uint param_2,float *param_3)

{
  float fVar1;
  long lVar2;
  undefined1 uVar3;
  
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    lVar2 = *(long *)(this + 8) + (long)param_1 * 0x270;
    *(uint *)(lVar2 + 0x254) = param_2;
    uVar3 = 3;
    if (param_2 == 0) {
      uVar3 = 1;
    }
    *(float *)(lVar2 + 600) = *param_3;
    *(float *)(lVar2 + 0x25c) = param_3[1];
    fVar1 = param_3[2];
    *(undefined4 *)(lVar2 + 0x264) = 0;
    *(undefined1 *)(lVar2 + 0x268) = 1;
    *(undefined1 *)(lVar2 + 0x250) = uVar3;
    *(float *)(lVar2 + 0x260) = fVar1;
    return 1;
  }
  return 0;
}

