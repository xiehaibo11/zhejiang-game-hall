
/* WARNING: Type propagation algorithm not settling */
/* fairygui::GObject::handleControllerChanged(fairygui::GController*) */

void __thiscall fairygui::GObject::handleControllerChanged(GObject *this,GController *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x140);
  this[0xf9] = (GObject)0x1;
  if ((plVar1 == (long *)0x0) || ((GController *)plVar1[2] != param_1)) {
    plVar1 = *(long **)(this + 0x148);
  }
  else {
    (**(code **)(*plVar1 + 0x18))();
    plVar1 = *(long **)(this + 0x148);
  }
  if ((plVar1 == (long *)0x0) || (*(GController **)((long)plVar1 + 0x10) != param_1)) {
    plVar1 = *(long **)(this + 0x150);
  }
  else {
    (**(code **)(*plVar1 + 0x18))();
    plVar1 = *(long **)(this + 0x150);
  }
  if ((plVar1 == (long *)0x0) || (*(GController **)((long)plVar1 + 0x10) != param_1)) {
    plVar1 = *(long **)(this + 0x158);
  }
  else {
    (**(code **)(*plVar1 + 0x18))();
    plVar1 = *(long **)(this + 0x158);
  }
  if ((plVar1 == (long *)0x0) || ((GController *)plVar1[2] != param_1)) {
    plVar1 = *(long **)(this + 0x160);
  }
  else {
    (**(code **)(*plVar1 + 0x18))();
    plVar1 = *(long **)(this + 0x160);
  }
  if ((plVar1 == (long *)0x0) || ((GController *)plVar1[2] != param_1)) {
    plVar1 = *(long **)(this + 0x168);
  }
  else {
    (**(code **)(*plVar1 + 0x18))();
    plVar1 = *(long **)(this + 0x168);
  }
  if ((plVar1 == (long *)0x0) || ((GController *)plVar1[2] != param_1)) {
    plVar1 = *(long **)(this + 0x170);
  }
  else {
    (**(code **)(*plVar1 + 0x18))();
    plVar1 = *(long **)(this + 0x170);
  }
  if ((plVar1 == (long *)0x0) || ((GController *)plVar1[2] != param_1)) {
    plVar1 = *(long **)(this + 0x178);
  }
  else {
    (**(code **)(*plVar1 + 0x18))();
    plVar1 = *(long **)(this + 0x178);
  }
  if ((plVar1 == (long *)0x0) || ((GController *)plVar1[2] != param_1)) {
    plVar1 = *(long **)(this + 0x180);
  }
  else {
    (**(code **)(*plVar1 + 0x18))();
    plVar1 = *(long **)(this + 0x180);
  }
  if ((plVar1 == (long *)0x0) || ((GController *)plVar1[2] != param_1)) {
    plVar1 = *(long **)(this + 0x188);
  }
  else {
    (**(code **)(*plVar1 + 0x18))();
    plVar1 = *(long **)(this + 0x188);
  }
  if ((plVar1 != (long *)0x0) && ((GController *)plVar1[2] == param_1)) {
    (**(code **)(*plVar1 + 0x18))();
  }
  this[0xf9] = (GObject)0x0;
  checkGearDisplay(this);
  return;
}

