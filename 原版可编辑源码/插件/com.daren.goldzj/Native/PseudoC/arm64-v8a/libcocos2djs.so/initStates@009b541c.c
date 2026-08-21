
/* cocos2d::renderer::DeviceGraphics::initStates() */

void cocos2d::renderer::DeviceGraphics::initStates(void)

{
                    /* try { // try from 009b541c to 00ab5433 has its CatchHandler @ 009b569c */
  glDisable(0xbe2);
  glBlendFunc(1,0);
                    /* try { // try from 009b543c to 00ab5447 has its CatchHandler @ 009b5680 */
  glBlendEquation(0x8006);
                    /* try { // try from 009b5448 to 00ab5453 has its CatchHandler @ 009b567c */
                    /* try { // try from 009b5454 to 00ab545b has its CatchHandler @ 009b56ac */
  glBlendColor(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  glColorMask(1,1,1,1);
  glEnable(0xb44);
  glCullFace(0x405);
  glDisable(0xb71);
                    /* try { // try from 009b548c to 00ab5493 has its CatchHandler @ 009b5684 */
  glDepthFunc(0x201);
  glDepthMask(0);
  glDisable(0x8037);
                    /* try { // try from 009b54a8 to 00ab54eb has its CatchHandler @ 009b56ac */
  glDepthRangef(0,0x3f800000);
  glDisable(0xb90);
  glStencilFunc(0x207,0,0xff);
  glStencilMask(0xff);
  glStencilOp(0x1e00,0x1e00,0x1e00);
  glClearDepthf(0x3f800000);
  glClearColor(0,0,0,0);
  glClearStencil(0);
                    /* try { // try from 009b5500 to 00ab5577 has its CatchHandler @ 009b5684 */
  glDisable(0xc11);
  return;
}

