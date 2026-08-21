
/* cocos2d::Texture2D::getBitsPerPixelForFormat(cocos2d::Texture2D::PixelFormat) const */

undefined4 __thiscall cocos2d::Texture2D::getBitsPerPixelForFormat(undefined8 param_1,int param_2)

{
  long *plVar1;
  
  plVar1 = DAT_017928b8;
  if (param_2 + 1U < 2) {
    return 0;
  }
  for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
    while (*(int *)((long)plVar1 + 0x1c) <= param_2) {
      if (param_2 <= *(int *)((long)plVar1 + 0x1c)) {
        if (plVar1 != (long *)0x0) {
                    /* try { // try from 00fecc54 to 010ecc57 has its CatchHandler @ 00fecf74 */
                    /* try { // try from 00fecc58 to 010ecc8b has its CatchHandler @ 00fecbac */
          return *(undefined4 *)((long)plVar1 + 0x2c);
        }
        goto LAB_00fecc5c;
      }
      plVar1 = (long *)plVar1[1];
      if (plVar1 == (long *)0x0) goto LAB_00fecc5c;
    }
  }
LAB_00fecc5c:
                    /* WARNING: Subroutine does not return */
  FUN_007d44e0("map::at:  key not found");
}

