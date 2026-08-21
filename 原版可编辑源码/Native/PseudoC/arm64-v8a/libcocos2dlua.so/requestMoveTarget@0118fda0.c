
/* dtCrowd::requestMoveTarget(int, unsigned int, float const*) */

undefined8 __thiscall
dtCrowd::requestMoveTarget(dtCrowd *this,int param_1,uint param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (-1 < param_1) {
    uVar2 = 0;
    if ((param_2 != 0) && (param_1 < *(int *)this)) {
      uVar2 = 1;
      lVar3 = *(long *)(this + 8) + (long)param_1 * 0x270;
      *(uint *)(lVar3 + 0x254) = param_2;
      *(float *)(lVar3 + 600) = *param_3;
      *(float *)(lVar3 + 0x25c) = param_3[1];
      fVar1 = param_3[2];
      *(undefined4 *)(lVar3 + 0x264) = 0;
      *(undefined1 *)(lVar3 + 0x268) = 0;
      *(undefined1 *)(lVar3 + 0x250) = 3;
      *(float *)(lVar3 + 0x260) = fVar1;
    }
    return uVar2;
  }
  return 0;
}

