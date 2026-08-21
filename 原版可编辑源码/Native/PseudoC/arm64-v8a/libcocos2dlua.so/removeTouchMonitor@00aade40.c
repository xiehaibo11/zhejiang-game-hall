
/* fairygui::InputProcessor::removeTouchMonitor(fairygui::GObject*) */

void __thiscall fairygui::InputProcessor::removeTouchMonitor(InputProcessor *this,GObject *param_1)

{
  WeakPtr *pWVar1;
  ulong uVar2;
  WeakPtr *this_00;
  WeakPtr *this_01;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x18);
  if (plVar3 != *(long **)(this + 0x20)) {
    do {
      this_00 = *(WeakPtr **)(*plVar3 + 0x58);
      pWVar1 = *(WeakPtr **)(*plVar3 + 0x60);
      this_01 = this_00;
      if (this_00 != pWVar1) {
        uVar2 = WeakPtr::operator==(this_00,param_1);
        while ((this_01 = this_00, (uVar2 & 1) == 0 &&
               (this_00 = this_00 + 8, this_01 = pWVar1, pWVar1 != this_00))) {
          uVar2 = WeakPtr::operator==(this_00,param_1);
        }
      }
      if (*(WeakPtr **)(*plVar3 + 0x60) != this_01) {
        WeakPtr::operator=(this_01,(GObject *)0x0);
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != *(long **)(this + 0x20));
  }
  return;
}

