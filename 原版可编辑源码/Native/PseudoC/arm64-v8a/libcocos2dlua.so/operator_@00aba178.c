
/* fairygui::WeakPtr::TEMPNAMEPLACEHOLDERVALUE(fairygui::WeakPtr&&) */

WeakPtr * __thiscall fairygui::WeakPtr::operator=(WeakPtr *this,WeakPtr *param_1)

{
  if (this != param_1) {
    if (*(ulong *)this != 0) {
      remove(*(ulong *)this);
    }
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
  }
  return this;
}

