
/* cocos2d::Image::getBitPerPixel() */

undefined4 __thiscall cocos2d::Image::getBitPerPixel(Image *this)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = Texture2D::getPixelFormatInfoMap();
  plVar2 = *(long **)(lVar1 + 8);
  if (plVar2 != (long *)0x0) {
    do {
      while (*(int *)(this + 0x48) < *(int *)((long)plVar2 + 0x1c)) {
        plVar2 = (long *)*plVar2;
        if (plVar2 == (long *)0x0) goto LAB_00f7f038;
      }
      if (*(int *)(this + 0x48) <= *(int *)((long)plVar2 + 0x1c)) {
        if (plVar2 != (long *)0x0) {
          return *(undefined4 *)((long)plVar2 + 0x2c);
        }
        break;
      }
      plVar2 = (long *)plVar2[1];
    } while (plVar2 != (long *)0x0);
  }
LAB_00f7f038:
                    /* WARNING: Subroutine does not return */
  FUN_007d44e0("map::at:  key not found");
}

