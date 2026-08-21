
/* fairygui::WeakPtr::~WeakPtr() */

void __thiscall fairygui::WeakPtr::~WeakPtr(WeakPtr *this)

{
  if (*(ulong *)this != 0) {
    remove(*(ulong *)this);
    return;
  }
  return;
}

