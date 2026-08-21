
/* cocos2d::renderer::Light::~Light() */

void __thiscall cocos2d::renderer::Light::~Light(Light *this)

{
                    /* try { // try from 009c035c to 00ac03af has its CatchHandler @ 009c035c
                       catch() { ... } // from try @ 009c035c with catch @ 009c035c
                       catch() { ... } // from try @ 009c0504 with catch @ 009c035c */
  *(undefined ***)this = &PTR__Light_01c6b1e8;
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x60));
  }
  if (*(Ref **)(this + 0x78) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x78));
  }
  if (*(Ref **)(this + 0x168) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x168));
  }
  if (*(Ref **)(this + 0x68) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x68));
  }
  Vec3::~Vec3((Vec3 *)(this + 0x170));
  Mat4::~Mat4((Mat4 *)(this + 0x124));
                    /* try { // try from 009c03b0 to 00ac03c7 has its CatchHandler @ 009c0580 */
  Mat4::~Mat4((Mat4 *)(this + 0xe4));
  Mat4::~Mat4((Mat4 *)(this + 0x9c));
  Vec3::~Vec3((Vec3 *)(this + 0x44));
  Vec3::~Vec3((Vec3 *)(this + 0x38));
                    /* try { // try from 009c03d0 to 00ac03db has its CatchHandler @ 009c057c */
  Vec3::~Vec3((Vec3 *)(this + 0x2c));
                    /* try { // try from 009c03dc to 00ac03e7 has its CatchHandler @ 009c0578 */
  Ref::~Ref((Ref *)this);
  return;
}

