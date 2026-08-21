
/* spine::SkeletonClipping::SkeletonClipping() */

void __thiscall spine::SkeletonClipping::SkeletonClipping(SkeletonClipping *this)

{
  long *plVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined ***)(this + 8) = &PTR__Triangulator_01c91e88;
  *(undefined ***)this = &PTR__SkeletonClipping_01c91d38;
  *(undefined ***)(this + 0xb8) = &PTR__Vector_01c91d70;
  *(undefined ***)(this + 0xb0) = &PTR__Pool_01c91e18;
  *(undefined ***)(this + 0xe0) = &PTR__Vector_01c91da8;
  *(undefined ***)(this + 0xd8) = &PTR__Pool_01c91e50;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined ***)(this + 0x160) = &PTR__Vector_01c8d128;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined ***)(this + 0x10) = &PTR__Vector_01c91d70;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined ***)(this + 0x30) = &PTR__Vector_01c91da8;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)(this + 0x50) = &PTR__Vector_01c8e510;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined ***)(this + 0x70) = &PTR__Vector_01c91de0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined ***)(this + 0x90) = &PTR__Vector_01c8e510;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined ***)(this + 0x100) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined ***)(this + 0x120) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)(this + 0x140) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined ***)(this + 0x180) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined ***)(this + 0x1a0) = &PTR__Vector_01c8d048;
  *(undefined8 *)(this + 0x1c0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x130) = 0x80;
  plVar1 = (long *)SpineExtension::getInstance();
  uVar2 = (**(code **)(*plVar1 + 0x20))
                    (plVar1,0,0x200,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                     0x5e);
  *(undefined8 *)(this + 0x138) = uVar2;
  if (*(ulong *)(this + 0x150) < 0x80) {
    uVar2 = *(undefined8 *)(this + 0x158);
    *(undefined8 *)(this + 0x150) = 0x80;
    plVar1 = (long *)SpineExtension::getInstance();
    uVar2 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,uVar2,0x200,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(this + 0x158) = uVar2;
  }
  if (*(ulong *)(this + 0x170) < 0x80) {
    uVar2 = *(undefined8 *)(this + 0x178);
    *(undefined8 *)(this + 0x170) = 0x80;
    plVar1 = (long *)SpineExtension::getInstance();
    uVar2 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,uVar2,0x100,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(this + 0x178) = uVar2;
  }
  if (*(ulong *)(this + 400) < 0x80) {
    uVar2 = *(undefined8 *)(this + 0x198);
    *(undefined8 *)(this + 400) = 0x80;
    plVar1 = (long *)SpineExtension::getInstance();
    uVar2 = (**(code **)(*plVar1 + 0x20))
                      (plVar1,uVar2,0x200,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0x5e);
    *(undefined8 *)(this + 0x198) = uVar2;
  }
  return;
}

