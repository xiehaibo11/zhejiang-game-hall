
/* fairygui::GObject::checkGearController(int, fairygui::GController*) */

bool __thiscall
fairygui::GObject::checkGearController(GObject *this,int param_1,GController *param_2)

{
  if (*(long *)(this + (long)param_1 * 8 + 0x140) != 0) {
    return *(GController **)(*(long *)(this + (long)param_1 * 8 + 0x140) + 0x10) == param_2;
  }
  return false;
}

