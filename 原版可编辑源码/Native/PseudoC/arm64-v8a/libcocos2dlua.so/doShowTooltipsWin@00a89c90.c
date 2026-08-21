
/* fairygui::GRoot::doShowTooltipsWin() */

void __thiscall fairygui::GRoot::doShowTooltipsWin(GRoot *this)

{
  long lVar1;
  GObject *this_00;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
                    /* try { // try from 00a89c98 to 00b89c9f has its CatchHandler @ 00a89f6c */
                    /* try { // try from 00a89ca0 to 00b89cc3 has its CatchHandler @ 00a89b60 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if (*(long *)(this + 0x2d0) != 0) {
    fVar5 = 10.0;
                    /* try { // try from 00a89cc4 to 00b89d4b has its CatchHandler @ 00a89f90 */
    fVar3 = (float)GObject::globalToLocal(this);
    this_00 = *(GObject **)(this + 0x2d0);
    fVar4 = fVar3 - *(float *)(this_00 + 200);
    if (fVar3 + *(float *)(this_00 + 200) <= *(float *)(this + 200)) {
      fVar4 = fVar3;
    }
    if ((*(float *)(this + 0xcc) < fVar5 + *(float *)(this_00 + 0xcc)) &&
       (fVar5 = (fVar5 - *(float *)(this_00 + 0xcc)) + -1.0, fVar5 < 0.0)) {
      fVar5 = 0.0;
    }
    GObject::setPosition(this_00,(float)(int)fVar4,(float)(int)fVar5);
    GComponent::addChild((GComponent *)this,*(GObject **)(this + 0x2d0));
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

