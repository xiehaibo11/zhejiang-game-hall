
/* cocos2d::Physics3DComponent::~Physics3DComponent() */

void __thiscall cocos2d::Physics3DComponent::~Physics3DComponent(Physics3DComponent *this)

{
                    /* try { // try from 01010e08 to 01110e33 has its CatchHandler @ 01011040 */
  *(undefined ***)this = &PTR__Physics3DComponent_01726580;
  if (*(Ref **)(this + 0xd0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xd0));
  }
  Mat4::~Mat4((Mat4 *)(this + 0x90));
  Mat4::~Mat4((Mat4 *)(this + 0x50));
                    /* try { // try from 01010e48 to 01110e5b has its CatchHandler @ 01010fc8 */
  Component::~Component((Component *)this);
  return;
}

