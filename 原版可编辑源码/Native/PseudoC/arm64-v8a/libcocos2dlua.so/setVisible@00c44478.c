
/* cocostudio::DisplayManager::setVisible(bool) */

void __thiscall cocostudio::DisplayManager::setVisible(DisplayManager *this,bool param_1)

{
  if (*(long **)(this + 0x40) != (long *)0x0) {
    this[0x5d] = (DisplayManager)param_1;
                    /* WARNING: Could not recover jumptable at 0x00c44494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x40) + 0x170))();
    return;
  }
  return;
}

