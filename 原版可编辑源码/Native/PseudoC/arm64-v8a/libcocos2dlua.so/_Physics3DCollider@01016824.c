
/* cocos2d::Physics3DCollider::~Physics3DCollider() */

void __thiscall cocos2d::Physics3DCollider::~Physics3DCollider(Physics3DCollider *this)

{
  Physics3DCollider *pPVar1;
  code *pcVar2;
  
                    /* try { // try from 01016830 to 01116837 has its CatchHandler @ 0101691c */
  *(undefined ***)this = &PTR__Physics3DCollider_017267c0;
  if (*(long **)(this + 0xe0) != (long *)0x0) {
                    /* try { // try from 01016854 to 0111686f has its CatchHandler @ 01016924 */
    (**(code **)(**(long **)(this + 0xe0) + 0x10))();
  }
  *(undefined8 *)(this + 0xe0) = 0;
  if (*(Ref **)(this + 0xe8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0xe8));
  }
  pPVar1 = *(Physics3DCollider **)(this + 0xd0);
                    /* try { // try from 01016870 to 01116967 has its CatchHandler @ 010167f0 */
  if (this + 0xb0 == pPVar1) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x20);
LAB_01016890:
    (*pcVar2)();
  }
  else if (pPVar1 != (Physics3DCollider *)0x0) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x28);
    goto LAB_01016890;
  }
  pPVar1 = *(Physics3DCollider **)(this + 0xa0);
  if (this + 0x80 == pPVar1) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x20);
LAB_010168bc:
    (*pcVar2)();
  }
  else if (pPVar1 != (Physics3DCollider *)0x0) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x28);
    goto LAB_010168bc;
  }
  pPVar1 = *(Physics3DCollider **)(this + 0x60);
  *(undefined ***)this = &PTR__Physics3DObject_01726838;
  if (this + 0x40 == pPVar1) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x20);
  }
  else {
    if (pPVar1 == (Physics3DCollider *)0x0) goto LAB_010168fc;
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x28);
  }
  (*pcVar2)();
LAB_010168fc:
  Ref::~Ref((Ref *)this);
  return;
}

