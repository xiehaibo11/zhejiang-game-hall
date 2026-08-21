
/* cocos2d::Physics3DObject::~Physics3DObject() */

void __thiscall cocos2d::Physics3DObject::~Physics3DObject(Physics3DObject *this)

{
  Physics3DObject *pPVar1;
  code *pcVar2;
  
  pPVar1 = *(Physics3DObject **)(this + 0x60);
  *(undefined ***)this = &PTR__Physics3DObject_01726838;
  if (this + 0x40 == pPVar1) {
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x20);
  }
  else {
    if (pPVar1 == (Physics3DObject *)0x0) goto LAB_01016c58;
    pcVar2 = *(code **)(*(long *)pPVar1 + 0x28);
  }
  (*pcVar2)();
LAB_01016c58:
                    /* catch() { ... } // from try @ 01016cc8 with catch @ 01016c64 */
  Ref::~Ref((Ref *)this);
  return;
}

