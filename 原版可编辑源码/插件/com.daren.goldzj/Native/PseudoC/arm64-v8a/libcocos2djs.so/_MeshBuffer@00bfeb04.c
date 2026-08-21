
/* cocos2d::middleware::MeshBuffer::~MeshBuffer() */

void __thiscall cocos2d::middleware::MeshBuffer::~MeshBuffer(MeshBuffer *this)

{
  long lVar1;
  MeshBuffer *pMVar2;
  void *pvVar3;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  
  lVar4 = *(long *)(this + 0x20);
  lVar1 = *(long *)(this + 0x28);
  *(undefined ***)this = &PTR__MeshBuffer_01c8ca60;
  if (lVar1 - lVar4 != 0) {
    uVar6 = 0;
    do {
      Ref::release(*(Ref **)(*(long *)(this + 8) + uVar6 * 8));
      Ref::release(*(Ref **)(*(long *)(this + 0x20) + uVar6 * 8));
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulong)(lVar1 - lVar4 >> 3));
    lVar4 = *(long *)(this + 0x20);
  }
  *(long *)(this + 0x28) = lVar4;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(this + 8);
  *(undefined ***)(this + 0xe0) = &PTR__IOBuffer_01c8e178;
  if (*(void **)(this + 0xe8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xe8));
    *(undefined8 *)(this + 0xe8) = 0;
  }
  pMVar2 = *(MeshBuffer **)(this + 0x170);
  if (this + 0x150 == pMVar2) {
    pcVar5 = *(code **)(*(long *)pMVar2 + 0x20);
LAB_00bfebbc:
    (*pcVar5)();
  }
  else if (pMVar2 != (MeshBuffer *)0x0) {
    pcVar5 = *(code **)(*(long *)pMVar2 + 0x28);
    goto LAB_00bfebbc;
  }
  pMVar2 = *(MeshBuffer **)(this + 0x140);
  if (this + 0x120 == pMVar2) {
    pcVar5 = *(code **)(*(long *)pMVar2 + 0x20);
LAB_00bfebe8:
    (*pcVar5)();
  }
  else if (pMVar2 != (MeshBuffer *)0x0) {
    pcVar5 = *(code **)(*(long *)pMVar2 + 0x28);
    goto LAB_00bfebe8;
  }
  *(undefined ***)(this + 0x40) = &PTR__IOBuffer_01c8e178;
  if (*(void **)(this + 0x48) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x48));
    *(undefined8 *)(this + 0x48) = 0;
  }
  pMVar2 = *(MeshBuffer **)(this + 0xd0);
  if (this + 0xb0 == pMVar2) {
    pcVar5 = *(code **)(*(long *)pMVar2 + 0x20);
LAB_00bfec2c:
    (*pcVar5)();
  }
  else if (pMVar2 != (MeshBuffer *)0x0) {
    pcVar5 = *(code **)(*(long *)pMVar2 + 0x28);
    goto LAB_00bfec2c;
  }
  pMVar2 = *(MeshBuffer **)(this + 0xa0);
  if (this + 0x80 == pMVar2) {
    pcVar5 = *(code **)(*(long *)pMVar2 + 0x20);
  }
  else {
    if (pMVar2 == (MeshBuffer *)0x0) goto LAB_00bfec5c;
    pcVar5 = *(code **)(*(long *)pMVar2 + 0x28);
  }
  (*pcVar5)();
LAB_00bfec5c:
  pvVar3 = *(void **)(this + 0x20);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar3;
    operator_delete(pvVar3);
    return;
  }
  return;
}

