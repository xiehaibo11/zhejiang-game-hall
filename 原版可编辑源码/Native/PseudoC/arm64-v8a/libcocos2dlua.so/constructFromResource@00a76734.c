
/* fairygui::GImage::constructFromResource() */

void __thiscall fairygui::GImage::constructFromResource(GImage *this)

{
  PackageItem *pPVar1;
  undefined8 uVar2;
  
  pPVar1 = (PackageItem *)PackageItem::getBranch(*(PackageItem **)(this + 0xb0));
                    /* try { // try from 00a7675c to 00b7681f has its CatchHandler @ 00a768dc */
  uVar2 = NEON_scvtf(*(undefined8 *)(pPVar1 + 0x68),4);
  *(undefined8 *)(this + 0x78) = uVar2;
  cocos2d::Size::operator=((Size *)(this + 0x80),(Size *)(this + 0x78));
  pPVar1 = (PackageItem *)PackageItem::getHighResolution(pPVar1);
  PackageItem::load(pPVar1);
  (**(code **)(**(long **)(this + 0x1d8) + 0x598))
            (*(long **)(this + 0x1d8),*(undefined8 *)(pPVar1 + 0xb8));
  if (*(Rect **)(pPVar1 + 0xa8) == (Rect *)0x0) {
    if (pPVar1[0xb0] != (PackageItem)0x0) {
      FUISprite::setScaleByTile(*(FUISprite **)(this + 0x1d8),true);
    }
  }
  else {
    FUISprite::setScale9Grid(*(FUISprite **)(this + 0x1d8),*(Rect **)(pPVar1 + 0xa8));
  }
  GObject::setSize((GObject *)this,*(float *)(this + 0x78),*(float *)(this + 0x7c),false);
  return;
}

