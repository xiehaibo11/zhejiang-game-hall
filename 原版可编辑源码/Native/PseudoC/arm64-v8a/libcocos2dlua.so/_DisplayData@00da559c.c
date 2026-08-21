
/* dragonBones::DisplayData::~DisplayData() */

void __thiscall dragonBones::DisplayData::~DisplayData(DisplayData *this)

{
  *(undefined ***)this = &PTR__DisplayData_016d83e8;
                    /* try { // try from 00da55c0 to 00ea55c7 has its CatchHandler @ 00da56a8 */
  if (((byte)this[0x30] & 1) != 0) {
                    /* try { // try from 00da55c8 to 00ea56d7 has its CatchHandler @ 00da53a0 */
    operator_delete(*(void **)(this + 0x40));
  }
  if (((byte)this[0x18] & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x28));
  return;
}

