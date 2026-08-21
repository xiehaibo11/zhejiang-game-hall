
/* fairygui::GImage::setup_beforeAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GImage::setup_beforeAdd(GImage *this,ByteBuffer *param_1,int param_2)

{
  long lVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  FUISprite *pFVar5;
  float fVar6;
  undefined4 local_44;
  Color3B aCStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  GObject::setup_beforeAdd((GObject *)this,param_1,param_2);
  ByteBuffer::seek(param_1,param_2,5);
  uVar4 = ByteBuffer::readBool(param_1);
                    /* try { // try from 00a76820 to 00b7685f has its CatchHandler @ 00a766f8 */
  if ((uVar4 & 1) != 0) {
    local_44 = ByteBuffer::readColor(param_1);
    cocos2d::Color3B::Color3B(aCStack_40,(Color4B *)&local_44);
    (**(code **)(**(long **)(this + 0x1d8) + 0x4c0))(*(long **)(this + 0x1d8),aCStack_40);
  }
  bVar2 = ByteBuffer::readByte(param_1);
                    /* try { // try from 00a76860 to 00b76873 has its CatchHandler @ 00a768dc */
  cocos2d::Sprite::setFlippedX(*(Sprite **)(this + 0x1d8),(bVar2 | 2) == 3);
                    /* try { // try from 00a76874 to 00b7692f has its CatchHandler @ 00a766f8 */
  cocos2d::Sprite::setFlippedY(*(Sprite **)(this + 0x1d8),(bVar2 | 1) == 3);
  cVar3 = ByteBuffer::readByte(param_1);
  if (cVar3 != '\0') {
    FUISprite::setFillMethod(*(FUISprite **)(this + 0x1d8),(int)cVar3);
    pFVar5 = *(FUISprite **)(this + 0x1d8);
    cVar3 = ByteBuffer::readByte(param_1);
    FUISprite::setFillOrigin(pFVar5,(int)cVar3);
    pFVar5 = *(FUISprite **)(this + 0x1d8);
    bVar2 = ByteBuffer::readBool(param_1);
    FUISprite::setFillClockwise(pFVar5,(bool)(bVar2 & 1));
    pFVar5 = *(FUISprite **)(this + 0x1d8);
                    /* catch() { ... } // from try @ 00a7675c with catch @ 00a768dc
                       catch() { ... } // from try @ 00a76860 with catch @ 00a768dc */
    fVar6 = (float)ByteBuffer::readFloat(param_1);
    FUISprite::setFillAmount(pFVar5,fVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

