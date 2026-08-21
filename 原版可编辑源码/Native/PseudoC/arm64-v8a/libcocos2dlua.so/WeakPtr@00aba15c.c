
/* fairygui::WeakPtr::WeakPtr(fairygui::WeakPtr&&) */

void __thiscall fairygui::WeakPtr::WeakPtr(WeakPtr *this,WeakPtr *param_1)

{
  *(undefined8 *)this = 0;
  if (this != param_1) {
    *(undefined8 *)this = *(undefined8 *)param_1;
    *(undefined8 *)param_1 = 0;
  }
  return;
}

