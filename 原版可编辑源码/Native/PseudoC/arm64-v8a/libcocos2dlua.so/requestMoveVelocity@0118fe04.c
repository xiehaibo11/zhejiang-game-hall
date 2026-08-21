
/* dtCrowd::requestMoveVelocity(int, float const*) */

undefined8 __thiscall dtCrowd::requestMoveVelocity(dtCrowd *this,int param_1,float *param_2)

{
  float fVar1;
  long lVar2;
  
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    lVar2 = *(long *)(this + 8) + (long)param_1 * 0x270;
    *(undefined4 *)(lVar2 + 0x254) = 0;
    *(float *)(lVar2 + 600) = *param_2;
    *(float *)(lVar2 + 0x25c) = param_2[1];
    fVar1 = param_2[2];
    *(undefined4 *)(lVar2 + 0x264) = 0;
    *(undefined1 *)(lVar2 + 0x268) = 0;
    *(undefined1 *)(lVar2 + 0x250) = 6;
    *(float *)(lVar2 + 0x260) = fVar1;
    return 1;
  }
  return 0;
}

