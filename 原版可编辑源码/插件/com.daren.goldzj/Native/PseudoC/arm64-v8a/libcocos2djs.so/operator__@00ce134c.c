
/* spine::AnimationStateData::AnimationPair::TEMPNAMEPLACEHOLDERVALUE(spine::AnimationStateData::AnimationPair
   const&) const */

bool __thiscall
spine::AnimationStateData::AnimationPair::operator==(AnimationPair *this,AnimationPair *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(*(long *)(this + 8) + 0x58);
  pcVar2 = *(char **)(*(long *)(param_1 + 8) + 0x58);
  if (pcVar3 != pcVar2) {
    if (*(long *)(*(long *)(this + 8) + 0x50) != *(long *)(*(long *)(param_1 + 8) + 0x50)) {
      return false;
    }
    if (pcVar3 == (char *)0x0) {
      return false;
    }
    if (pcVar2 == (char *)0x0) {
      return false;
    }
    iVar1 = strcmp(pcVar3,pcVar2);
    if (iVar1 != 0) {
      return false;
    }
  }
  pcVar3 = *(char **)(*(long *)(this + 0x10) + 0x58);
  pcVar2 = *(char **)(*(long *)(param_1 + 0x10) + 0x58);
  if (pcVar3 == pcVar2) {
    return true;
  }
  if (*(long *)(*(long *)(this + 0x10) + 0x50) != *(long *)(*(long *)(param_1 + 0x10) + 0x50)) {
    return false;
  }
  if (pcVar3 == (char *)0x0) {
    return false;
  }
  if (pcVar2 != (char *)0x0) {
    iVar1 = strcmp(pcVar3,pcVar2);
    return iVar1 == 0;
  }
  return false;
}

