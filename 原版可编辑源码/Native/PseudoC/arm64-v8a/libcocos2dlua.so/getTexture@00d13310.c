
/* cocos2d::BatchMesh::getTexture() const */

undefined8 __thiscall cocos2d::BatchMesh::getTexture(BatchMesh *this)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x48);
joined_r0x00d1331c:
  do {
    if (plVar1 == (long *)0x0) {
LAB_00d1335c:
                    /* WARNING: Subroutine does not return */
      FUN_007d44e0("map::at:  key not found");
    }
    if (2 < *(int *)(plVar1 + 4)) {
      plVar1 = (long *)*plVar1;
      goto joined_r0x00d1331c;
    }
    if (*(int *)(plVar1 + 4) == 2) {
      if (plVar1 != (long *)0x0) {
        return plVar1[5];
      }
      goto LAB_00d1335c;
    }
    plVar1 = (long *)plVar1[1];
  } while( true );
}

