
/* cocos2d::renderer::VertexFormat::VertexFormat() */

void __thiscall cocos2d::renderer::VertexFormat::VertexFormat(VertexFormat *this)

{
  Ref::Ref((Ref *)this);
                    /* try { // try from 009b9508 to 00ab951f has its CatchHandler @ 009b9780 */
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__VertexFormat_01c6af48;
                    /* try { // try from 009b9528 to 00ab9533 has its CatchHandler @ 009b977c */
  *(undefined4 *)(this + 0x48) = 0x3f800000;
                    /* try { // try from 009b9534 to 00ab953f has its CatchHandler @ 009b9778 */
  return;
}

