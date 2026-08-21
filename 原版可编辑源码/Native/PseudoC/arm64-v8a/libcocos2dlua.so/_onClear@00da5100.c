
/* dragonBones::ImageDisplayData::_onClear() */

void __thiscall dragonBones::ImageDisplayData::_onClear(ImageDisplayData *this)

{
  ImageDisplayData *pIVar1;
  ImageDisplayData *pIVar2;
  undefined8 uVar3;
  
  pIVar1 = this + 0x18;
  if (((byte)*pIVar1 & 1) == 0) {
    pIVar2 = this + 0x19;
  }
  else {
    pIVar2 = *(ImageDisplayData **)(this + 0x28);
  }
  *pIVar2 = (ImageDisplayData)0x0;
  if (((byte)*pIVar1 & 1) == 0) {
    *pIVar1 = (ImageDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
  pIVar1 = this + 0x30;
  if (((byte)*pIVar1 & 1) == 0) {
    pIVar2 = this + 0x31;
  }
  else {
    pIVar2 = *(ImageDisplayData **)(this + 0x40);
  }
  *pIVar2 = (ImageDisplayData)0x0;
  if (((byte)*pIVar1 & 1) == 0) {
    *pIVar1 = (ImageDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x38) = 0;
  }
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x58) = uVar3;
  *(undefined8 *)(this + 0x60) = 0;
  return;
}

