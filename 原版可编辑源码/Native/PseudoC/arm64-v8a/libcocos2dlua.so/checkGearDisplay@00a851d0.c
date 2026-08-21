
/* fairygui::GObject::checkGearDisplay() */

void __thiscall fairygui::GObject::checkGearDisplay(GObject *this)

{
  byte bVar1;
  long lVar2;
  GearDisplay2 *this_00;
  GGroup *this_01;
  
  if (this[0xf9] == (GObject)0x0) {
                    /* try { // try from 00a851ec to 00b85227 has its CatchHandler @ 00a85330 */
    if (*(GearDisplay **)(this + 0x140) == (GearDisplay *)0x0) {
      bVar1 = 1;
      lVar2 = *(long *)(this + 0x180);
    }
    else {
      bVar1 = GearDisplay::isConnected(*(GearDisplay **)(this + 0x140));
      lVar2 = *(long *)(this + 0x180);
    }
    if (lVar2 != 0) {
      this_00 = (GearDisplay2 *)__dynamic_cast(lVar2,&GearBase::typeinfo,&GearDisplay2::typeinfo,0);
      bVar1 = GearDisplay2::evaluate(this_00,(bool)(bVar1 & 1));
    }
    if ((GObject)(bVar1 & 1) != this[0xf8]) {
                    /* try { // try from 00a85234 to 00b8528f has its CatchHandler @ 00a85334 */
      this[0xf8] = (GObject)(bVar1 & 1);
      if (*(GComponent **)(this + 0xa0) != (GComponent *)0x0) {
        GComponent::childStateChanged(*(GComponent **)(this + 0xa0),this);
      }
      this_01 = *(GGroup **)(this + 0x128);
      if ((this_01 != (GGroup *)0x0) && (this_01[0x1e8] != (GGroup)0x0)) {
        GGroup::setBoundsChangedFlag(this_01,false);
        return;
      }
    }
  }
  return;
}

