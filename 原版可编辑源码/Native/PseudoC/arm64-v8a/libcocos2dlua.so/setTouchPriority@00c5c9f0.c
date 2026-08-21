
/* cocostudio::InputDelegate::setTouchPriority(int) */

void __thiscall cocostudio::InputDelegate::setTouchPriority(InputDelegate *this,int param_1)

{
  if ((*(int *)(this + 0x38) != param_1) &&
     (*(int *)(this + 0x38) = param_1, this[8] != (InputDelegate)0x0)) {
    (**(code **)(*(long *)this + 0x18))(this,0);
                    /* WARNING: Could not recover jumptable at 0x00c5ca44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x18))(this,1);
    return;
  }
  return;
}

