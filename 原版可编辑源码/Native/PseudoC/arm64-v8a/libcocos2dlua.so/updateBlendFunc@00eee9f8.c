
/* cocos2d::AtlasNode::updateBlendFunc() */

void __thiscall cocos2d::AtlasNode::updateBlendFunc(AtlasNode *this)

{
  bool bVar1;
  Texture2D *this_00;
  ulong uVar2;
  undefined8 *puVar3;
  
  this_00 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x318));
  uVar2 = Texture2D::hasPremultipliedAlpha(this_00);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    puVar3 = &BlendFunc::ALPHA_NON_PREMULTIPLIED;
  }
  else {
                    /* catch() { ... } // from try @ 00eee970 with catch @ 00eeea20 */
    puVar3 = (undefined8 *)&BlendFunc::ALPHA_PREMULTIPLIED;
                    /* catch() { ... } // from try @ 00eee91c with catch @ 00eeea24 */
                    /* catch() { ... } // from try @ 00eee94c with catch @ 00eeea28 */
  }
                    /* try { // try from 00eeea44 to 00feeb03 has its CatchHandler @ 00eeea44
                       catch() { ... } // from try @ 00eeea44 with catch @ 00eeea44
                       catch() { ... } // from try @ 00eeeb10 with catch @ 00eeea44 */
  *(undefined8 *)(this + 0x324) = *puVar3;
                    /* WARNING: Could not recover jumptable at 0x00eeea58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x4e0))(this,!bVar1);
  return;
}

