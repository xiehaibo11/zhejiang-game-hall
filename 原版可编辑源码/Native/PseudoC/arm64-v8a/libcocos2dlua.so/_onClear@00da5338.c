
/* dragonBones::MeshDisplayData::_onClear() */

void __thiscall dragonBones::MeshDisplayData::_onClear(MeshDisplayData *this)

{
  MeshDisplayData *pMVar1;
  MeshDisplayData *pMVar2;
  undefined8 uVar3;
  
  pMVar1 = this + 0x18;
  if (((byte)*pMVar1 & 1) == 0) {
    pMVar2 = this + 0x19;
  }
  else {
    pMVar2 = *(MeshDisplayData **)(this + 0x28);
  }
  *pMVar2 = (MeshDisplayData)0x0;
  if (((byte)*pMVar1 & 1) == 0) {
    *pMVar1 = (MeshDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
  pMVar1 = this + 0x30;
  if (((byte)*pMVar1 & 1) == 0) {
    pMVar2 = this + 0x31;
  }
  else {
    pMVar2 = *(MeshDisplayData **)(this + 0x40);
  }
  *pMVar2 = (MeshDisplayData)0x0;
  if (((byte)*pMVar1 & 1) == 0) {
    *pMVar1 = (MeshDisplayData)0x0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00da53fc with catch @ 00da53a0
                       catch(type#1 @ 00000000) { ... } // from try @ 00da55c8 with catch @ 00da53a0
                        */
  }
  else {
    *(undefined8 *)(this + 0x38) = 0;
  }
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = uVar3;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x10) = 2;
  if ((this[0x68] == (MeshDisplayData)0x0) && (*(BaseObject **)(this + 0x78) != (BaseObject *)0x0))
  {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x78));
  }
  *(undefined2 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  return;
}

