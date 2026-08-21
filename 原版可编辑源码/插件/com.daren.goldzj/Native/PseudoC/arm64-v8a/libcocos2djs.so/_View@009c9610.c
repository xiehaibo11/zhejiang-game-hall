
/* cocos2d::renderer::View::~View() */

void __thiscall cocos2d::renderer::View::~View(View *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  
                    /* try { // try from 009c9610 to 00ac962b has its CatchHandler @ 009c9798 */
  pbVar2 = *(byte **)(this + 0x180);
  *(undefined ***)this = &PTR__View_01c6b2b0;
  if (pbVar2 != (byte *)0x0) {
    pbVar1 = *(byte **)(this + 0x188);
    pbVar3 = pbVar2;
    if (pbVar1 != pbVar2) {
      do {
        pbVar3 = pbVar1 + -0x18;
        if ((*pbVar3 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
        pbVar1 = pbVar3;
      } while (pbVar2 != pbVar3);
      pbVar3 = *(byte **)(this + 0x180);
    }
    *(byte **)(this + 0x188) = pbVar2;
    operator_delete(pbVar3);
  }
  Mat4::~Mat4((Mat4 *)(this + 0x140));
  Mat4::~Mat4((Mat4 *)(this + 0x100));
  Mat4::~Mat4((Mat4 *)(this + 0xc0));
  Mat4::~Mat4((Mat4 *)(this + 0x80));
  Mat4::~Mat4((Mat4 *)(this + 0x40));
  Ref::~Ref((Ref *)this);
  return;
}

