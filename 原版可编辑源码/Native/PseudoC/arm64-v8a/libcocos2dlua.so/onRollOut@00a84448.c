
/* fairygui::GObject::onRollOut(fairygui::EventContext*) */

void fairygui::GObject::onRollOut(EventContext *param_1)

{
  GRoot *this;
  EventContext *pEVar1;
  
  do {
    pEVar1 = param_1;
    param_1 = *(EventContext **)(pEVar1 + 0xa0);
  } while (*(EventContext **)(pEVar1 + 0xa0) != (EventContext *)0x0);
  if ((pEVar1 != (EventContext *)0x0) &&
     (this = (GRoot *)__dynamic_cast(pEVar1,&typeinfo,&GRoot::typeinfo,0), this != (GRoot *)0x0)) {
    GRoot::hideTooltips(this);
    return;
  }
  GRoot::hideTooltips(GRoot::_inst);
  return;
}

