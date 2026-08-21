
/* dragonBones::UserData::~UserData() */

void __thiscall dragonBones::UserData::~UserData(UserData *this)

{
  ~UserData(this);
  operator_delete(this);
  return;
}

