
/* dragonBones::UserData::getInt(unsigned int) const */

undefined4 __thiscall dragonBones::UserData::getInt(UserData *this,uint param_1)

{
  if ((ulong)param_1 < (ulong)(*(long *)(this + 0x18) - *(long *)(this + 0x10) >> 2)) {
    return *(undefined4 *)(*(long *)(this + 0x10) + (ulong)param_1 * 4);
  }
                    /* catch() { ... } // from try @ 00da6dc8 with catch @ 00da6e18 */
  return 0;
}

