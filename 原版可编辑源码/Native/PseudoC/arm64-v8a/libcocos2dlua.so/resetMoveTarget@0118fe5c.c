
/* dtCrowd::resetMoveTarget(int) */

undefined8 __thiscall dtCrowd::resetMoveTarget(dtCrowd *this,int param_1)

{
  long lVar1;
  
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    lVar1 = *(long *)(this + 8) + (long)param_1 * 0x270;
    *(undefined1 *)(lVar1 + 0x250) = 0;
    *(undefined8 *)(lVar1 + 0x25c) = 0;
    *(undefined8 *)(lVar1 + 0x254) = 0;
    *(undefined8 *)(lVar1 + 0x261) = 0;
    return 1;
  }
  return 0;
}

