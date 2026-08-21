
/* dtCrowd::getEditableAgentAnim(int) */

long __thiscall dtCrowd::getEditableAgentAnim(dtCrowd *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)this)) {
    return *(long *)(this + 0x18) + (long)param_1 * 0x34;
  }
  return 0;
}

