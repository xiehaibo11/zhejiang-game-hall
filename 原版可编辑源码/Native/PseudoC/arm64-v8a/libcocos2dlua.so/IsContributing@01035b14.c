
/* ClipperLib::Clipper::IsContributing(ClipperLib::TEdge const&) const */

uint __thiscall ClipperLib::Clipper::IsContributing(Clipper *this,TEdge *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  
  iVar2 = *(int *)(param_1 + 0x48);
  lVar1 = 0xa0;
  if (iVar2 != 0) {
    lVar1 = 0x9c;
  }
  iVar3 = *(int *)(this + lVar1);
                    /* catch() { ... } // from try @ 01035b9c with catch @ 01035b2c */
  lVar1 = 0x9c;
  if (iVar2 != 0) {
    lVar1 = 0xa0;
  }
  uVar4 = *(uint *)(this + lVar1);
  if (iVar3 == 2) {
LAB_01035b50:
                    /* try { // try from 01035b58 to 01135b5f has its CatchHandler @ 01035c00 */
    if (*(int *)(param_1 + 0x54) != 1) {
      return 0;
    }
  }
  else if (iVar3 == 1) {
                    /* try { // try from 01035b98 to 01135b9b has its CatchHandler @ 01035bf0 */
    lVar5 = (long)*(int *)(param_1 + 0x54);
                    /* try { // try from 01035b9c to 01135c1b has its CatchHandler @ 01035b2c */
    lVar1 = -lVar5;
    if (-1 < lVar5) {
      lVar1 = lVar5;
    }
    if (lVar1 != 1) {
      return 0;
    }
  }
  else if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x50) == 0) goto LAB_01035b50;
  }
  else if (*(int *)(param_1 + 0x54) != -1) {
    return 0;
  }
  switch(*(undefined4 *)(this + 0x68)) {
  case 0:
    break;
  case 2:
    if (iVar2 == 0) goto joined_r0x01035c18;
    break;
  case 3:
    if (*(int *)(param_1 + 0x50) != 0) {
      return 1;
    }
  case 1:
joined_r0x01035c18:
    if (uVar4 < 2) {
                    /* catch() { ... } // from try @ 01035b58 with catch @ 01035c00 */
      return (uint)(*(int *)(param_1 + 0x58) == 0);
    }
                    /* catch() { ... } // from try @ 01035c8c with catch @ 01035c1c */
    if (uVar4 != 2) {
      return ~*(uint *)(param_1 + 0x58) >> 0x1f;
    }
    return (uint)(*(int *)(param_1 + 0x58) < 1);
  default:
                    /* catch() { ... } // from try @ 01035b98 with catch @ 01035bf0 */
    return 1;
  }
  if (uVar4 < 2) {
    return (uint)(*(int *)(param_1 + 0x58) != 0);
  }
  if (uVar4 != 2) {
    return *(uint *)(param_1 + 0x58) >> 0x1f;
  }
  return (uint)(0 < *(int *)(param_1 + 0x58));
}

