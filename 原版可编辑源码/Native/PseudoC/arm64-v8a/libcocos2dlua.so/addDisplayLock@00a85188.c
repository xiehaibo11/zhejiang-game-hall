
/* fairygui::GObject::addDisplayLock() */

undefined4 __thiscall fairygui::GObject::addDisplayLock(GObject *this)

{
  undefined4 uVar1;
  GearDisplay *this_00;
  
                    /* try { // try from 00a85198 to 00b851eb has its CatchHandler @ 00a85198
                       catch() { ... } // from try @ 00a85198 with catch @ 00a85198
                       catch() { ... } // from try @ 00a85290 with catch @ 00a85198
                       catch() { ... } // from try @ 00a852f0 with catch @ 00a85198 */
  this_00 = *(GearDisplay **)(this + 0x140);
  if ((this_00 == (GearDisplay *)0x0) || (*(long *)(this_00 + 0x10) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = GearDisplay::addLock(this_00);
    checkGearDisplay(this);
  }
  return uVar1;
}

