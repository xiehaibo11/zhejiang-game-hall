
/* fairygui::GObject::getGear(int) */

void __thiscall fairygui::GObject::getGear(GObject *this,int param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(this + (long)param_1 * 8 + 0x140) == 0) {
    uVar1 = GearBase::create(this,param_1);
    *(undefined8 *)(this + (long)param_1 * 8 + 0x140) = uVar1;
  }
  return;
}

