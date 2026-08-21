
/* cocos2d::middleware::Texture2D::~Texture2D() */

void __thiscall cocos2d::middleware::Texture2D::~Texture2D(Texture2D *this)

{
  Texture2D *pTVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__Texture2D_01c8e1b0;
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x50));
  }
  pTVar1 = *(Texture2D **)(this + 0x40);
  *(undefined8 *)(this + 0x40) = 0;
  if (this + 0x20 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
LAB_00cd9b7c:
    (*pcVar2)();
  }
  else if (pTVar1 != (Texture2D *)0x0) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
    goto LAB_00cd9b7c;
  }
  pTVar1 = *(Texture2D **)(this + 0x40);
  if (this + 0x20 == pTVar1) {
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x20);
  }
  else {
    if (pTVar1 == (Texture2D *)0x0) goto LAB_00cd9ba8;
    pcVar2 = *(code **)(*(long *)pTVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00cd9ba8:
  Ref::~Ref((Ref *)this);
  return;
}

