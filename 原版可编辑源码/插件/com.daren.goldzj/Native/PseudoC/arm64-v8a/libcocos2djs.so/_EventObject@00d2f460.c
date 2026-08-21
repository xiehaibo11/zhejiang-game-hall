
/* dragonBones::EventObject::~EventObject() */

void __thiscall dragonBones::EventObject::~EventObject(EventObject *this)

{
  ~EventObject(this);
  operator_delete(this);
  return;
}

