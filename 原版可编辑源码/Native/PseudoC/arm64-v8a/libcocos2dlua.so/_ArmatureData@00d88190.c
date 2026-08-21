
/* dragonBones::ArmatureData::~ArmatureData() */

void __thiscall dragonBones::ArmatureData::~ArmatureData(ArmatureData *this)

{
                    /* try { // try from 00d8819c to 00e881b7 has its CatchHandler @ 00d882b8 */
  ~ArmatureData(this);
  operator_delete(this);
  return;
}

