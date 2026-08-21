
/* cocos2d::renderer::Camera::calcMatrices(int, int) */

void __thiscall cocos2d::renderer::Camera::calcMatrices(Camera *this,int param_1,int param_2)

{
  Mat4 *this_00;
  long lVar1;
  float fVar2;
  float fVar3;
  Mat4 aMStack_88 [64];
  long local_48;
  
                    /* catch() { ... } // from try @ 009be5a8 with catch @ 009be754 */
                    /* catch() { ... } // from try @ 009be588 with catch @ 009be758 */
                    /* catch() { ... } // from try @ 009be5c0 with catch @ 009be768 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  NodeProxy::getWorldRT(*(NodeProxy **)(this + 0x10),(Mat4 *)(this + 0x80));
  this_00 = (Mat4 *)(this + 0xcc);
  Mat4::set(this_00,(Mat4 *)(this + 0x80));
  Mat4::inverse(this_00);
  fVar2 = (float)param_1 / (float)param_2;
  if (this[0x18] == (Camera)0x0) {
                    /* try { // try from 009be814 to 00abe82b has its CatchHandler @ 009bea28 */
    Mat4::createPerspective
              ((*(float *)(this + 0x68) / 3.1415925) * 180.0,fVar2,*(float *)(this + 0x60),
               *(float *)(this + 100),(Mat4 *)(this + 0x10c));
  }
  else {
                    /* try { // try from 009be7c0 to 00abe813 has its CatchHandler @ 009be7c0
                       catch() { ... } // from try @ 009be7c0 with catch @ 009be7c0
                       catch() { ... } // from try @ 009be9ac with catch @ 009be7c0 */
    fVar3 = *(float *)(this + 0x7c);
    Mat4::createOrthographicOffCenter
              (-(fVar2 * fVar3),fVar2 * fVar3,-fVar3,fVar3,*(float *)(this + 0x60),
               *(float *)(this + 100),(Mat4 *)(this + 0x10c));
  }
  Mat4::multiply((Mat4 *)(this + 0x10c),this_00,(Mat4 *)(this + 0x14c));
                    /* try { // try from 009be834 to 00abe83f has its CatchHandler @ 009bea24 */
  Mat4::getInversed();
                    /* try { // try from 009be840 to 00abe84b has its CatchHandler @ 009bea20 */
  Mat4::set((Mat4 *)(this + 0x18c),aMStack_88);
                    /* try { // try from 009be84c to 00abe9ab has its CatchHandler @ 009bea38 */
  Mat4::~Mat4(aMStack_88);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

