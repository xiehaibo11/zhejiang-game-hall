
/* cocostudio::ActionObject::~ActionObject() */

void __thiscall cocostudio::ActionObject::~ActionObject(ActionObject *this)

{
  ~ActionObject(this);
  operator_delete(this);
  return;
}

