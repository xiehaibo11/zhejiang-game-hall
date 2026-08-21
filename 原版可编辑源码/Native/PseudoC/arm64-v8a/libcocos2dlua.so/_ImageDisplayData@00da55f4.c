
/* dragonBones::ImageDisplayData::~ImageDisplayData() */

void __thiscall dragonBones::ImageDisplayData::~ImageDisplayData(ImageDisplayData *this)

{
  ImageDisplayData IVar1;
  ImageDisplayData *pIVar2;
  ImageDisplayData *pIVar3;
  ImageDisplayData *pIVar4;
  undefined8 uVar5;
  
  *(undefined ***)this = &PTR__ImageDisplayData_016d8430;
  pIVar4 = this + 0x18;
  if (((byte)*pIVar4 & 1) == 0) {
    pIVar2 = this + 0x19;
  }
  else {
    pIVar2 = *(ImageDisplayData **)(this + 0x28);
  }
  *pIVar2 = (ImageDisplayData)0x0;
  if (((byte)*pIVar4 & 1) == 0) {
    *pIVar4 = (ImageDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
  pIVar2 = this + 0x30;
  if (((byte)*pIVar2 & 1) == 0) {
    pIVar3 = this + 0x31;
  }
  else {
    pIVar3 = *(ImageDisplayData **)(this + 0x40);
  }
  *pIVar3 = (ImageDisplayData)0x0;
  IVar1 = *pIVar2;
  if (((byte)IVar1 & 1) == 0) {
    *pIVar2 = (ImageDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x38) = 0;
  }
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  uVar5 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x58) = uVar5;
  *(undefined ***)this = &PTR__DisplayData_016d83e8;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00da55c0 with catch @ 00da56a8
                        */
  if (((byte)IVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x40));
  }
  if (((byte)*pIVar4 & 1) == 0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00da5558 with catch @ 00da56c0
                        */
    return;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00da53f4 with catch @ 00da56d4
                        */
  operator_delete(*(void **)(this + 0x28));
  return;
}

