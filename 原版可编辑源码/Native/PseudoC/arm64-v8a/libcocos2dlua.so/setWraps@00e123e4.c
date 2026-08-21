
/* cocos2d::extension::ControlStepper::setWraps(bool) */

void __thiscall cocos2d::extension::ControlStepper::setWraps(ControlStepper *this,bool param_1)

{
  long lVar1;
  long *plVar2;
  Color3B aCStack_48 [8];
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00e12404 to 00f1240b has its CatchHandler @ 00e12948 */
                    /* try { // try from 00e1240c to 00f124ef has its CatchHandler @ 00e1219c */
  this[0x362] = (ControlStepper)param_1;
  if (param_1) {
    plVar2 = *(long **)(this + 0x3a0);
    Color3B::Color3B(aCStack_40,'7','7','7');
    (**(code **)(*plVar2 + 0x4c0))(plVar2,aCStack_40);
    plVar2 = *(long **)(this + 0x3a8);
    Color3B::Color3B(aCStack_48,'7','7','7');
    (**(code **)(*plVar2 + 0x4c0))(plVar2,aCStack_48);
  }
  (**(code **)(*(long *)this + 0x6d0))(*(undefined8 *)(this + 0x358),this);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

