
/* cocos2d::Texture2D::getBitsPerPixelForFormat() const */

undefined4 __thiscall cocos2d::Texture2D::getBitsPerPixelForFormat(Texture2D *this)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(this + 0x24);
  plVar2 = DAT_017928b8;
  if (iVar1 + 1U < 2) {
    return 0;
  }
  for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    while (*(int *)((long)plVar2 + 0x1c) <= iVar1) {
      if (iVar1 <= *(int *)((long)plVar2 + 0x1c)) {
        if (plVar2 != (long *)0x0) {
          return *(undefined4 *)((long)plVar2 + 0x2c);
        }
        goto LAB_00feccd4;
      }
      plVar2 = (long *)plVar2[1];
      if (plVar2 == (long *)0x0) goto LAB_00feccd4;
    }
  }
LAB_00feccd4:
                    /* WARNING: Subroutine does not return */
  FUN_007d44e0("map::at:  key not found");
}

