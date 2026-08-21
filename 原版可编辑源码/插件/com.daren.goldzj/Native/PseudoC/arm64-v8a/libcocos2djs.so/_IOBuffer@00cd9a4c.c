
/* cocos2d::middleware::IOBuffer::~IOBuffer() */

void __thiscall cocos2d::middleware::IOBuffer::~IOBuffer(IOBuffer *this)

{
  IOBuffer *pIVar1;
  code *pcVar2;
  
  *(undefined ***)this = &PTR__IOBuffer_01c8e178;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  pIVar1 = *(IOBuffer **)(this + 0x90);
  if (this + 0x70 == pIVar1) {
    pcVar2 = *(code **)(*(long *)pIVar1 + 0x20);
LAB_00cd9aa4:
    (*pcVar2)();
  }
  else if (pIVar1 != (IOBuffer *)0x0) {
    pcVar2 = *(code **)(*(long *)pIVar1 + 0x28);
    goto LAB_00cd9aa4;
  }
  pIVar1 = *(IOBuffer **)(this + 0x60);
  if (this + 0x40 == pIVar1) {
    pcVar2 = *(code **)(*(long *)pIVar1 + 0x20);
  }
  else {
    if (pIVar1 == (IOBuffer *)0x0) goto LAB_00cd9ad4;
    pcVar2 = *(code **)(*(long *)pIVar1 + 0x28);
  }
  (*pcVar2)();
LAB_00cd9ad4:
  operator_delete(this);
  return;
}

