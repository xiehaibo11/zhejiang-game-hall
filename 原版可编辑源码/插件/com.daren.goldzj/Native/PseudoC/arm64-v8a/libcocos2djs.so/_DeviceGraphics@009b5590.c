
/* cocos2d::renderer::DeviceGraphics::~DeviceGraphics() */

void __thiscall cocos2d::renderer::DeviceGraphics::~DeviceGraphics(DeviceGraphics *this)

{
  undefined8 *puVar1;
  State *pSVar2;
  void *pvVar3;
  
                    /* try { // try from 009b55a8 to 00ab55ab has its CatchHandler @ 009b5678 */
  *(undefined ***)this = &PTR__DeviceGraphics_01c6ad88;
  if (*(Ref **)(this + 0x58) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x58));
  }
  pSVar2 = *(State **)(this + 0xc0);
                    /* try { // try from 009b55c4 to 00ab55ff has its CatchHandler @ 009b56ac */
  if (pSVar2 != (State *)0x0) {
    State::~State(pSVar2);
    operator_delete(pSVar2);
  }
  pSVar2 = *(State **)(this + 0xb8);
  if (pSVar2 != (State *)0x0) {
    State::~State(pSVar2);
    operator_delete(pSVar2);
  }
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  puVar1 = *(void **)(this + 0xa0);
  while (puVar1 != (void *)0x0) {
                    /* try { // try from 009b5600 to 00ab5703 has its CatchHandler @ 009b53c4 */
    pvVar3 = (void *)*puVar1;
    if ((void *)puVar1[3] != (void *)0x0) {
      free((void *)puVar1[3]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x90);
  *(undefined8 *)(this + 0x90) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x78);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x60);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar3;
    operator_delete(pvVar3);
  }
  Ref::~Ref((Ref *)this);
  return;
}

