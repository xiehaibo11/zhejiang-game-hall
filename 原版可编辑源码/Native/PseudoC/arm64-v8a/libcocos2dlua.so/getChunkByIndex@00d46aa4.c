
/* cocos2d::Terrain::getChunkByIndex(int, int) const */

undefined8 __thiscall cocos2d::Terrain::getChunkByIndex(Terrain *this,int param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
                    /* catch() { ... } // from try @ 00d46a3c with catch @ 00d46abc */
  if (((param_2 < 0x100) && (param_1 < 0x100)) && (-1 < (param_2 | param_1))) {
    uVar1 = *(undefined8 *)(this + (long)param_1 * 8 + (long)param_2 * 0x800 + 0x4f8);
  }
  return uVar1;
}

