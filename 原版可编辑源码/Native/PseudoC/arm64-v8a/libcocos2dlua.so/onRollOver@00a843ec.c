
/* fairygui::GObject::onRollOver(fairygui::EventContext*) */

void fairygui::GObject::onRollOver(EventContext *param_1)

{
  EventContext *pEVar1;
  GRoot *this;
  EventContext *pEVar2;
  
  pEVar1 = param_1;
  do {
    pEVar2 = pEVar1;
    pEVar1 = *(EventContext **)(pEVar2 + 0xa0);
  } while (*(EventContext **)(pEVar2 + 0xa0) != (EventContext *)0x0);
  if ((pEVar2 == (EventContext *)0x0) ||
     (this = (GRoot *)__dynamic_cast(pEVar2,&typeinfo,&GRoot::typeinfo,0), this == (GRoot *)0x0)) {
    this = GRoot::_inst;
  }
  GRoot::showTooltips(this,(basic_string *)(param_1 + 0x108));
  return;
}

