
/* fairygui::UIPackage::getItemAsset(fairygui::PackageItem*) */

long __thiscall fairygui::UIPackage::getItemAsset(UIPackage *this,PackageItem *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  switch(*(undefined4 *)(param_1 + 0x30)) {
  case 0:
    lVar1 = *(long *)(param_1 + 0xb8);
    if (lVar1 == 0) {
      loadImage(this,param_1);
      lVar1 = *(long *)(param_1 + 0xb8);
    }
    break;
  case 1:
    lVar1 = *(long *)(param_1 + 200);
    if (lVar1 == 0) {
      loadMovieClip(this,param_1);
      lVar1 = *(long *)(param_1 + 200);
    }
    break;
  case 4:
    lVar1 = *(long *)(param_1 + 0xa0);
    if (lVar1 == 0) {
      loadAtlas((UIPackage *)0x0,param_1);
      lVar1 = *(long *)(param_1 + 0xa0);
    }
    break;
  case 5:
    lVar1 = *(long *)(param_1 + 0x118);
    if (lVar1 == 0) {
      loadFont(this,param_1);
      lVar1 = *(long *)(param_1 + 0x118);
    }
  }
  return lVar1;
}

