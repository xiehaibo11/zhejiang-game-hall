
/* cocos2d::middleware::IOBuffer::~IOBuffer() */

void __thiscall cocos2d::middleware::IOBuffer::~IOBuffer(IOBuffer *this)

{
  IOBuffer *pIVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  *(undefined ***)this = &PTR__IOBuffer_01c8e178;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
    *(undefined8 *)(this + 8) = 0;
  }
  pIVar1 = *(IOBuffer **)(this + 0x90);
  if (this + 0x70 == pIVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x20);
  }
  else {
    if (pIVar1 == (IOBuffer *)0x0) goto LAB_00cd9a0c;
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x28);
  }
  (*UNRECOVERED_JUMPTABLE)();
LAB_00cd9a0c:
  pIVar1 = *(IOBuffer **)(this + 0x60);
  if (this + 0x40 == pIVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x20);
  }
  else {
    if (pIVar1 == (IOBuffer *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)pIVar1 + 0x28);
  }
                    /* WARNING: Could not recover jumptable at 0x00cd9a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

