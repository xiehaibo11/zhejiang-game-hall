
/* fairygui::Margin::TEMPNAMEPLACEHOLDERVALUE(fairygui::Margin const&) */

void __thiscall fairygui::Margin::operator=(Margin *this,Margin *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar1;
  return;
}

