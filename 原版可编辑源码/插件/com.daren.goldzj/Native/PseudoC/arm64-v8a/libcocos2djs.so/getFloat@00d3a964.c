
/* dragonBones::UserData::getFloat(unsigned int) const */

undefined4 __thiscall dragonBones::UserData::getFloat(UserData *this,uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((ulong)param_1 < (ulong)(*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 2)) {
    uVar1 = *(undefined4 *)(*(long *)(this + 0x28) + (ulong)param_1 * 4);
  }
  return uVar1;
}

