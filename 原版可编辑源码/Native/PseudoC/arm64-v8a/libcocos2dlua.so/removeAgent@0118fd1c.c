
/* dtCrowd::removeAgent(int) */

void __thiscall dtCrowd::removeAgent(dtCrowd *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    *(undefined1 *)(*(long *)(this + 8) + (long)param_1 * 0x270) = 0;
  }
  return;
}

