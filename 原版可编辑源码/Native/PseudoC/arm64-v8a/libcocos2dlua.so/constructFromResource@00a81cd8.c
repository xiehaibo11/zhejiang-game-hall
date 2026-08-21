
/* fairygui::GMovieClip::constructFromResource() */

void __thiscall fairygui::GMovieClip::constructFromResource(GMovieClip *this)

{
  PackageItem *pPVar1;
  Size *pSVar2;
  undefined8 uVar3;
  
  pPVar1 = (PackageItem *)PackageItem::getBranch(*(PackageItem **)(this + 0xb0));
  uVar3 = NEON_scvtf(*(undefined8 *)(pPVar1 + 0x68),4);
  pSVar2 = (Size *)(this + 0x78);
  *(undefined8 *)pSVar2 = uVar3;
  cocos2d::Size::operator=((Size *)(this + 0x80),pSVar2);
  pPVar1 = (PackageItem *)PackageItem::getHighResolution(pPVar1);
  PackageItem::load(pPVar1);
  ActionMovieClip::setAnimation
            (*(ActionMovieClip **)(this + 0x1e0),*(Animation **)(pPVar1 + 200),
             *(float *)(pPVar1 + 0xd4),(bool)pPVar1[0xd8]);
  (**(code **)(**(long **)(this + 0x1d8) + 0x3a8))
            (*(long **)(this + 0x1d8),*(undefined8 *)(this + 0x1e0));
  GObject::setSize((GObject *)this,*(float *)pSVar2,*(float *)(this + 0x7c),false);
  return;
}

