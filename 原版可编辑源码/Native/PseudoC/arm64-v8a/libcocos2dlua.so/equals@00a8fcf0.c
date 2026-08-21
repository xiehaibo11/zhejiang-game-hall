
/* fairygui::Margin::equals(fairygui::Margin const&) const */

bool __thiscall fairygui::Margin::equals(Margin *this,Margin *param_1)

{
  if (((*(float *)this == *(float *)param_1) && (*(float *)(this + 4) == *(float *)(param_1 + 4)))
     && (*(float *)(this + 8) == *(float *)(param_1 + 8))) {
    return *(float *)(this + 0xc) == *(float *)(param_1 + 0xc);
  }
  return false;
}

