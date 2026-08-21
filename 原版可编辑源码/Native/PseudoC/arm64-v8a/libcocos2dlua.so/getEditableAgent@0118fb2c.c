
/* dtCrowd::getEditableAgent(int) */

long __thiscall dtCrowd::getEditableAgent(dtCrowd *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    return *(long *)(this + 8) + (long)param_1 * 0x270;
  }
  return 0;
}

