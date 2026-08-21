
/* fairygui::GObject::releaseDisplayLock(unsigned int) */

void __thiscall fairygui::GObject::releaseDisplayLock(GObject *this,uint param_1)

{
  GearDisplay *this_00;
  
                    /* try { // try from 00a85290 to 00b852c3 has its CatchHandler @ 00a85198 */
  this_00 = *(GearDisplay **)(this + 0x140);
  if ((this_00 != (GearDisplay *)0x0) && (*(long *)(this_00 + 0x10) != 0)) {
    GearDisplay::releaseLock(this_00,param_1);
    checkGearDisplay(this);
    return;
  }
  return;
}

