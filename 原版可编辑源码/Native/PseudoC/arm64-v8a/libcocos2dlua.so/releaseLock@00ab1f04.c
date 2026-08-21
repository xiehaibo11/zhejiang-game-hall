
/* fairygui::GearDisplay::releaseLock(unsigned int) */

void __thiscall fairygui::GearDisplay::releaseLock(GearDisplay *this,uint param_1)

{
  if (*(uint *)(this + 0x3c) == param_1) {
    *(int *)(this + 0x38) = *(int *)(this + 0x38) + -1;
  }
  return;
}

