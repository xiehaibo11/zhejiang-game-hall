
/* cocos2d::Image::isCompressed() */

undefined1 __thiscall cocos2d::Image::isCompressed(Image *this)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = Texture2D::getPixelFormatInfoMap();
  plVar2 = *(long **)(lVar1 + 8);
  if (plVar2 != (long *)0x0) {
    do {
      while (*(int *)(this + 0x48) < *(int *)((long)plVar2 + 0x1c)) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) goto LAB_00f7f110;
      }
      if (*(int *)(this + 0x48) <= *(int *)((long)plVar2 + 0x1c)) {
        if (plVar2 != (long *)0x0) {
          return (char)plVar2[6];
        }
        break;
      }
      plVar2 = (long *)plVar2[1];
    } while (plVar2 != (long *)0x0);
  }
LAB_00f7f110:
                    /* WARNING: Subroutine does not return */
  FUN_007d44e0("map::at:  key not found");
}

