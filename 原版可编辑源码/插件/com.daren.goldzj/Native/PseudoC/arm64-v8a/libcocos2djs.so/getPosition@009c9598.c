
/* cocos2d::renderer::View::getPosition(cocos2d::Vec3&) const */

void __thiscall cocos2d::renderer::View::getPosition(View *this,Vec3 *param_1)

{
  long lVar1;
  Mat4 aMStack_68 [64];
  long local_28;
  
                    /* try { // try from 009c9598 to 00ac95af has its CatchHandler @ 009c97b0 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 009c95b8 to 00ac95c3 has its CatchHandler @ 009c9794 */
  Mat4::getInversed();
                    /* try { // try from 009c95c4 to 00ac95cf has its CatchHandler @ 009c9790 */
  Mat4::getTranslation(aMStack_68,param_1);
                    /* try { // try from 009c95d0 to 00ac95fb has its CatchHandler @ 009c97c0 */
  Mat4::~Mat4(aMStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

