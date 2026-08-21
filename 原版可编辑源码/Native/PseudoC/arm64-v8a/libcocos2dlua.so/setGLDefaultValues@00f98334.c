
/* cocos2d::Director::setGLDefaultValues() */

void __thiscall cocos2d::Director::setGLDefaultValues(Director *this)

{
                    /* try { // try from 00f98334 to 0109833f has its CatchHandler @ 00f984c8 */
  GL::blendFunc(1,0x303);
  Renderer::setDepthTest(*(Renderer **)(this + 0x1b0),false);
                    /* try { // try from 00f9835c to 01098363 has its CatchHandler @ 00f984c4 */
                    /* try { // try from 00f9836c to 010983d7 has its CatchHandler @ 00f984d8 */
  setProjection(this,*(undefined4 *)(this + 0x194));
  return;
}

