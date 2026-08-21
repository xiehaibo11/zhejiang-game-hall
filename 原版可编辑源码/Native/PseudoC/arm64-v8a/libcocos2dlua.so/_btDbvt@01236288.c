
/* btDbvt::~btDbvt() */

void __thiscall btDbvt::~btDbvt(btDbvt *this)

{
  bool bVar1;
  void *pvVar2;
  btDbvt *pbVar3;
  
  if (*(long *)this != 0) {
    FUN_0123645c(this);
  }
  btAlignedFreeInternal(*(void **)(this + 8));
  pbVar3 = this + 0x30;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  if (*(void **)pbVar3 != (void *)0x0) {
    if (this[0x38] != (btDbvt)0x0) {
      btAlignedFreeInternal(*(void **)pbVar3);
    }
    *(undefined8 *)pbVar3 = 0;
  }
  this[0x38] = (btDbvt)0x1;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  if (*(void **)(this + 0x50) == (void *)0x0) {
    this[0x58] = (btDbvt)0x1;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x44) = 0;
  }
  else {
    if (this[0x58] == (btDbvt)0x0) {
      pvVar2 = (void *)0x0;
      bVar1 = true;
    }
    else {
      btAlignedFreeInternal(*(void **)(this + 0x50));
      pvVar2 = *(void **)pbVar3;
      bVar1 = pvVar2 == (void *)0x0;
    }
    this[0x58] = (btDbvt)0x1;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x44) = 0;
    if (!bVar1) {
      if (this[0x38] != (btDbvt)0x0) {
        btAlignedFreeInternal(pvVar2);
      }
      *(undefined8 *)pbVar3 = 0;
    }
  }
  *(undefined8 *)(this + 0x30) = 0;
  this[0x38] = (btDbvt)0x1;
  *(undefined8 *)(this + 0x24) = 0;
  return;
}

