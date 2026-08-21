
/* cocos2d::Sprite::setTextureCoords(cocos2d::Rect const&, cocos2d::V3F_C4B_T2F_Quad*) */

void __thiscall
cocos2d::Sprite::setTextureCoords(Sprite *this,Rect *param_1,V3F_C4B_T2F_Quad *param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  Texture2D *this_00;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00f3fef4 to 0103ff3f has its CatchHandler @ 00f3fef4
                       catch() { ... } // from try @ 00f3fef4 with catch @ 00f3fef4
                       catch() { ... } // from try @ 00f3ff88 with catch @ 00f3fef4 */
  if (*(int *)(this + 0x42c) == 3) {
    this_00 = (Texture2D *)TextureAtlas::getTexture(*(TextureAtlas **)(this + 0x300));
  }
  else {
    this_00 = *(Texture2D **)(this + 0x368);
  }
  if (this_00 != (Texture2D *)0x0) {
    fVar8 = *(float *)param_1;
    lVar4 = Director::getInstance();
    fVar5 = *(float *)(lVar4 + 0x1a0);
    fVar9 = *(float *)(param_1 + 4);
    lVar4 = Director::getInstance();
    fVar6 = *(float *)(lVar4 + 0x1a0);
                    /* try { // try from 00f3ff40 to 0103ff4f has its CatchHandler @ 00f40000 */
    fVar10 = *(float *)(param_1 + 8);
    lVar4 = Director::getInstance();
    fVar7 = *(float *)(lVar4 + 0x1a0);
    fVar11 = *(float *)(param_1 + 0xc);
                    /* try { // try from 00f3ff54 to 0103ff63 has its CatchHandler @ 00f3ffe8 */
    lVar4 = Director::getInstance();
                    /* try { // try from 00f3ff68 to 0103ff77 has its CatchHandler @ 00f3ffd8 */
    Rect::Rect((Rect *)&local_78,fVar8 * fVar5,fVar9 * fVar6,fVar10 * fVar7,
               fVar11 * *(float *)(lVar4 + 0x1a0));
                    /* try { // try from 00f3ff7c to 0103ff87 has its CatchHandler @ 00f3ffc4 */
    iVar2 = Texture2D::getPixelsWide(this_00);
                    /* try { // try from 00f3ff88 to 01040033 has its CatchHandler @ 00f3fef4 */
    iVar3 = Texture2D::getPixelsHigh(this_00);
    fVar5 = fStack_6c;
    if (this[0x418] != (Sprite)0x0) {
      fVar5 = local_70;
      local_70 = fStack_6c;
    }
    fVar8 = local_78 / (float)iVar2;
    fVar9 = (local_78 + local_70) / (float)iVar2;
    fVar7 = fStack_74 / (float)iVar3;
                    /* catch() { ... } // from try @ 00f3ff7c with catch @ 00f3ffc4 */
    fVar6 = (fStack_74 + fVar5) / (float)iVar3;
                    /* catch() { ... } // from try @ 00f3ff68 with catch @ 00f3ffd8 */
    fVar5 = fVar7;
    if (this[0x418] == (Sprite)0x0) {
      fVar11 = fVar8;
      fVar10 = fVar9;
      if (this[0x509] != (Sprite)0x0) {
        fVar11 = fVar9;
        fVar10 = fVar8;
      }
      if (this[0x50a] != (Sprite)0x0) {
        fVar5 = fVar6;
        fVar6 = fVar7;
      }
      *(float *)(param_2 + 0x28) = fVar11;
      fVar8 = fVar6;
      fVar7 = fVar10;
      fVar9 = fVar5;
    }
    else {
      fVar10 = fVar8;
      fVar11 = fVar9;
                    /* catch() { ... } // from try @ 00f3ff54 with catch @ 00f3ffe8 */
      if (this[0x50a] != (Sprite)0x0) {
        fVar10 = fVar9;
        fVar11 = fVar8;
      }
      if (this[0x509] != (Sprite)0x0) {
        fVar5 = fVar6;
        fVar6 = fVar7;
      }
                    /* catch() { ... } // from try @ 00f3ff40 with catch @ 00f40000 */
      *(float *)(param_2 + 0x28) = fVar10;
      fVar8 = fVar5;
      fVar7 = fVar11;
      fVar9 = fVar6;
    }
    *(float *)(param_2 + 0x2c) = fVar8;
    *(float *)(param_2 + 0x58) = fVar10;
    *(float *)(param_2 + 0x5c) = fVar6;
    *(float *)(param_2 + 0x10) = fVar11;
    *(float *)(param_2 + 0x14) = fVar5;
    *(float *)(param_2 + 0x40) = fVar7;
    *(float *)(param_2 + 0x44) = fVar9;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00f40064 to 01040067 has its CatchHandler @ 00f400a8 */
  return;
}

