
/* dragonBones::Slot::setVisible(bool) */

void __thiscall dragonBones::Slot::setVisible(Slot *this,bool param_1)

{
  if (this[0xfd] == (Slot)param_1) {
    return;
  }
  this[0xfd] = (Slot)param_1;
                    /* WARNING: Could not recover jumptable at 0x00d2d180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x78))();
  return;
}

