
/* cocos2d::Mesh::getTexture() const */

undefined8 __thiscall cocos2d::Mesh::getTexture(Mesh *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x30);
joined_r0x00d2f2bc:
  do {
    if (plVar1 == (long *)0x0) {
LAB_00d2f2fc:
                    /* WARNING: Subroutine does not return */
      FUN_007d44e0("map::at:  key not found");
    }
    if (2 < *(int *)(plVar1 + 4)) {
      plVar1 = (long *)*plVar1;
      goto joined_r0x00d2f2bc;
    }
    if (*(int *)(plVar1 + 4) == 2) {
      if (plVar1 != (long *)0x0) {
        return plVar1[5];
      }
      goto LAB_00d2f2fc;
    }
    plVar1 = (long *)plVar1[1];
  } while( true );
}

