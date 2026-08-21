
/* fairygui::EventTag::TEMPNAMEPLACEHOLDERVALUE(fairygui::EventTag&&) */

void __thiscall fairygui::EventTag::operator=(EventTag *this,EventTag *param_1)

{
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
  }
  return;
}

