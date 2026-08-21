
/* cocos2d::renderer::MaskAssembler::~MaskAssembler() */

void __thiscall cocos2d::renderer::MaskAssembler::~MaskAssembler(MaskAssembler *this)

{
                    /* try { // try from 009ced2c to 00aced43 has its CatchHandler @ 009cefa0 */
  *(undefined ***)this = &PTR__MaskAssembler_01c6b640;
  if (*(Ref **)(this + 0xb0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xb0));
  }
                    /* try { // try from 009ced4c to 00aced57 has its CatchHandler @ 009cef9c */
  if (*(Ref **)(this + 0xb8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xb8));
  }
                    /* try { // try from 009ced58 to 00aced63 has its CatchHandler @ 009cef98 */
                    /* try { // try from 009ced64 to 00acef23 has its CatchHandler @ 009cefb0 */
  SimpleSprite2D::~SimpleSprite2D((SimpleSprite2D *)this);
  return;
}

