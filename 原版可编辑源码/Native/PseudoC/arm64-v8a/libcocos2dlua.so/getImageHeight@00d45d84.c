
/* cocos2d::Terrain::getImageHeight(int, int) const */

float __thiscall cocos2d::Terrain::getImageHeight(Terrain *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  
                    /* try { // try from 00d45da0 to 00e45e17 has its CatchHandler @ 00d45da0
                       catch() { ... } // from try @ 00d45da0 with catch @ 00d45da0
                       catch() { ... } // from try @ 00d45e30 with catch @ 00d45da0 */
  iVar3 = *(int *)(*(long *)(this + 0x80540) + 0x48);
  iVar2 = iVar3;
  if (iVar3 != 3) {
    iVar2 = 1;
  }
  iVar1 = 4;
  if (iVar3 != 1) {
    iVar1 = iVar2;
  }
  dVar4 = (double)NEON_ucvtf((ulong)*(byte *)(*(long *)(this + 0x440) +
                                             (long)((param_1 + *(int *)(this + 0x80528) * param_2) *
                                                   iVar1)));
  return (float)((dVar4 / 255.0) * (double)*(float *)(this + 0x428) +
                (double)*(float *)(this + 0x428) * -0.5);
}

