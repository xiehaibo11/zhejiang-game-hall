
/* fairygui::GTweener::setRepeat(int, bool) */

void __thiscall fairygui::GTweener::setRepeat(GTweener *this,int param_1,bool param_2)

{
  *(int *)(this + 0xb8) = param_1;
  this[0xbc] = (GTweener)param_2;
  return;
}

