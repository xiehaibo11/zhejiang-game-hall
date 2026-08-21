
/* cocos2d::renderer::Camera::~Camera() */

void __thiscall cocos2d::renderer::Camera::~Camera(Camera *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
                    /* try { // try from 009be494 to 00abe533 has its CatchHandler @ 009be1e8 */
  *(undefined ***)this = &PTR__Camera_01c6b168;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 009be478 with catch @ 009be4a8 */
    Ref::release(*(Ref **)(this + 0x58));
  }
                    /* catch() { ... } // from try @ 009be26c with catch @ 009be4ac */
                    /* catch() { ... } // from try @ 009be260 with catch @ 009be4b0 */
  if (*(Ref **)(this + 0x10) != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 009be240 with catch @ 009be4b4 */
    Ref::release(*(Ref **)(this + 0x10));
  }
  Mat4::~Mat4((Mat4 *)(this + 0x1d8));
                    /* catch() { ... } // from try @ 009be2b0 with catch @ 009be4c4
                       catch() { ... } // from try @ 009be324 with catch @ 009be4c4 */
  Vec3::~Vec3((Vec3 *)(this + 0x1cc));
  Mat4::~Mat4((Mat4 *)(this + 0x18c));
  Mat4::~Mat4((Mat4 *)(this + 0x14c));
                    /* catch() { ... } // from try @ 009be278 with catch @ 009be4dc
                       catch() { ... } // from try @ 009be2cc with catch @ 009be4dc
                       catch() { ... } // from try @ 009be3ac with catch @ 009be4dc */
  Mat4::~Mat4((Mat4 *)(this + 0x10c));
  Mat4::~Mat4((Mat4 *)(this + 0xcc));
  Vec3::~Vec3((Vec3 *)(this + 0xc0));
  Mat4::~Mat4((Mat4 *)(this + 0x80));
  pbVar2 = *(byte **)(this + 0x40);
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(this + 0x48);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar2 != pbVar3);
      pbVar3 = *(byte **)(this + 0x40);
    }
    *(byte **)(this + 0x48) = pbVar2;
    operator_delete(pbVar3);
  }
  Ref::~Ref((Ref *)this);
  return;
}

