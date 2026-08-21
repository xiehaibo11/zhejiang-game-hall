
/* cocos2d::ui::TextAtlas::labelAtlasScaleChangedWithSize() */

void __thiscall cocos2d::ui::TextAtlas::labelAtlasScaleChangedWithSize(TextAtlas *this)

{
  long lVar1;
  Size *pSVar2;
  code *pcVar3;
  float fVar4;
  float local_40;
  float local_3c;
  long local_38;
  
                    /* try { // try from 00dc9674 to 00ec967b has its CatchHandler @ 00dc9880 */
                    /* try { // try from 00dc967c to 00ec969f has its CatchHandler @ 00dc94e4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (this[0x387] == (TextAtlas)0x0) {
                    /* try { // try from 00dc96d0 to 00ec96db has its CatchHandler @ 00dc9894 */
    pSVar2 = (Size *)(**(code **)(**(long **)(this + 0x4f0) + 0x168))();
    Size::Size((Size *)&local_40,pSVar2);
    if ((local_40 <= 0.0) || (local_3c <= 0.0)) {
      (**(code **)(**(long **)(this + 0x4f0) + 0x80))(0x3f800000);
      goto LAB_00dc9748;
    }
    fVar4 = *(float *)(this + 0x84) / local_3c;
    (**(code **)(**(long **)(this + 0x4f0) + 0x50))(*(float *)(this + 0x80) / local_40);
                    /* try { // try from 00dc9720 to 00ec9727 has its CatchHandler @ 00dc9890 */
    pcVar3 = *(code **)(**(long **)(this + 0x4f0) + 0x60);
  }
  else {
    fVar4 = 1.0;
                    /* try { // try from 00dc96a0 to 00ec96bb has its CatchHandler @ 00dc98f8 */
    pcVar3 = *(code **)(**(long **)(this + 0x4f0) + 0x80);
  }
  (*pcVar3)(fVar4);
                    /* try { // try from 00dc96bc to 00ec96c7 has its CatchHandler @ 00dc9898 */
  (**(code **)(**(long **)(this + 0x4f0) + 200))
            (*(float *)(this + 0x80) * 0.5,*(float *)(this + 0x84) * 0.5);
LAB_00dc9748:
                    /* try { // try from 00dc9754 to 00ec984b has its CatchHandler @ 00dc98b0 */
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

