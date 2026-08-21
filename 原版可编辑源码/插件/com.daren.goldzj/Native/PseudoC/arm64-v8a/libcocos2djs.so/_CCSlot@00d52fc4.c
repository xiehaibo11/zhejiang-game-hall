
/* dragonBones::CCSlot::~CCSlot() */

void __thiscall dragonBones::CCSlot::~CCSlot(CCSlot *this)

{
  ~CCSlot(this);
  operator_delete(this);
  return;
}

