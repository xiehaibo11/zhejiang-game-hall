
/* cocos2d::AtlasNode::calculateMaxItems() */

void __thiscall cocos2d::AtlasNode::calculateMaxItems(AtlasNode *this)

{
  long lVar1;
  Texture2D *this_00;
  Size *pSVar2;
  undefined8 uVar3;
  Size local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x318));
  Texture2D::getContentSize();
  if (this[0x33c] != (AtlasNode)0x0) {
    this_00 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x318));
    pSVar2 = (Size *)Texture2D::getContentSizeInPixels(this_00);
    Size::operator=(local_30,pSVar2);
  }
  uVar3 = NEON_scvtf(*(undefined8 *)(this + 0x308),4);
  *(ulong *)(this + 0x300) =
       CONCAT44((int)(local_30._4_4_ / (float)((ulong)uVar3 >> 0x20)),
                (int)(local_30._0_4_ / (float)uVar3));
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 00eeeb04 to 00feeb0f has its CatchHandler @ 00eeeb6c */
                    /* try { // try from 00eeeb10 to 00feeb87 has its CatchHandler @ 00eeea44 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

