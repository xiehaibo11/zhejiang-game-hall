
/* dragonBones::Bone::contains(dragonBones::Bone const*) const */

bool __thiscall dragonBones::Bone::contains(Bone *this,Bone *param_1)

{
  Bone *pBVar1;
  
  if (param_1 == this) {
    return false;
  }
                    /* try { // try from 00d7ec54 to 00e7ec6f has its CatchHandler @ 00d7f00c */
  pBVar1 = (Bone *)0x0;
  if (param_1 != (Bone *)0x0) {
    do {
      pBVar1 = *(Bone **)(param_1 + 0xc0);
      if (pBVar1 == (Bone *)0x0) break;
      param_1 = pBVar1;
    } while (pBVar1 != this);
  }
  return pBVar1 == this;
}

