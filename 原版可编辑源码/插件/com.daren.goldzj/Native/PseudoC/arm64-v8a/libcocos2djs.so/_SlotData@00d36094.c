
/* dragonBones::SlotData::~SlotData() */

void __thiscall dragonBones::SlotData::~SlotData(SlotData *this)

{
  ~SlotData(this);
  operator_delete(this);
  return;
}

