
/* cocos2d::renderer::Camera::Camera() */

void __thiscall cocos2d::renderer::Camera::Camera(Camera *this)

{
                    /* try { // try from 009be1e8 to 00abe23f has its CatchHandler @ 009be1e8
                       catch() { ... } // from try @ 009be1e8 with catch @ 009be1e8
                       catch() { ... } // from try @ 009be494 with catch @ 009be1e8 */
  Ref::Ref((Ref *)this);
  *(undefined8 *)(this + 0x10) = 0;
  this[0x18] = (Camera)0x0;
  *(undefined ***)this = &PTR__Camera_01c6b168;
                    /* try { // try from 009be240 to 00abe257 has its CatchHandler @ 009be4b4 */
  Color4F::Color4F((Color4F *)(this + 0x1c),0.2,0.3,0.47,1.0);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0x100000001;
                    /* try { // try from 009be260 to 00abe26b has its CatchHandler @ 009be4b0 */
  *(undefined4 *)(this + 0x2c) = 0x3f800000;
                    /* try { // try from 009be26c to 00abe277 has its CatchHandler @ 009be4ac */
  this[0x38] = (Camera)0x3;
                    /* try { // try from 009be278 to 00abe27f has its CatchHandler @ 009be4dc */
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x68) = 0x3f490fdb;
  *(undefined8 *)(this + 0x60) = 0x447a00003c23d70a;
  Rect::Rect((Rect *)(this + 0x6c),0.0,0.0,1.0,1.0);
  *(undefined4 *)(this + 0x7c) = 0x41200000;
                    /* try { // try from 009be2b0 to 00abe2b7 has its CatchHandler @ 009be4c4 */
  Mat4::Mat4((Mat4 *)(this + 0x80));
  Vec3::Vec3((Vec3 *)(this + 0xc0));
  Mat4::Mat4((Mat4 *)(this + 0xcc));
                    /* try { // try from 009be2cc to 00abe30f has its CatchHandler @ 009be4dc */
  Mat4::Mat4((Mat4 *)(this + 0x10c));
  Mat4::Mat4((Mat4 *)(this + 0x14c));
  Mat4::Mat4((Mat4 *)(this + 0x18c));
  Vec3::Vec3((Vec3 *)(this + 0x1cc));
  Mat4::Mat4((Mat4 *)(this + 0x1d8));
  *(undefined4 *)(this + 0x218) = 0;
  return;
}

