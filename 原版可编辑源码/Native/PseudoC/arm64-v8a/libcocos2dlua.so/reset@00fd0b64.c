
/* cocos2d::GLProgram::reset() */

void __thiscall cocos2d::GLProgram::reset(GLProgram *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  
  plVar4 = *(long **)(this + 0xd0);
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
                    /* catch() { ... } // from try @ 00fd0bbc with catch @ 00fd0b8c */
  *(undefined8 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  for (; plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
    free((void *)plVar4[3]);
  }
  if (*(long *)(this + 0xd8) != 0) {
    puVar1 = *(void **)(this + 0xd0);
    while (puVar1 != (void *)0x0) {
                    /* try { // try from 00fd0bb4 to 010d0bbb has its CatchHandler @ 00fd0c24 */
      pvVar5 = (void *)*puVar1;
      operator_delete(puVar1);
                    /* try { // try from 00fd0bbc to 010d0c3f has its CatchHandler @ 00fd0b8c */
      puVar1 = pvVar5;
    }
    lVar2 = *(long *)(this + 200);
    *(undefined8 *)(this + 0xd0) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0xc0) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0xd8) = 0;
  }
  return;
}

