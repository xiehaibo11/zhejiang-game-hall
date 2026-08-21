
/* dragonBones::MeshDisplayData::~MeshDisplayData() */

void __thiscall dragonBones::MeshDisplayData::~MeshDisplayData(MeshDisplayData *this)

{
  MeshDisplayData MVar1;
  MeshDisplayData *pMVar2;
  MeshDisplayData *pMVar3;
  MeshDisplayData *pMVar4;
  undefined8 uVar5;
  
  *(undefined ***)this = &PTR__MeshDisplayData_016d84c0;
  pMVar3 = this + 0x18;
  if (((byte)*pMVar3 & 1) == 0) {
    pMVar4 = this + 0x19;
  }
  else {
    pMVar4 = *(MeshDisplayData **)(this + 0x28);
  }
  *pMVar4 = (MeshDisplayData)0x0;
  if (((byte)*pMVar3 & 1) == 0) {
    *pMVar3 = (MeshDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x20) = 0;
  }
  pMVar4 = this + 0x30;
  if (((byte)*pMVar4 & 1) == 0) {
    pMVar2 = this + 0x31;
  }
  else {
    pMVar2 = *(MeshDisplayData **)(this + 0x40);
  }
  *pMVar2 = (MeshDisplayData)0x0;
  MVar1 = *pMVar4;
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = (MeshDisplayData)0x0;
    *pMVar4 = (MeshDisplayData)0x0;
  }
  else {
    *(undefined8 *)(this + 0x38) = 0;
  }
  uVar5 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = uVar5;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 0x10) = 2;
  if ((this[0x68] == (MeshDisplayData)0x0) && (*(BaseObject **)(this + 0x78) != (BaseObject *)0x0))
  {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x78));
    MVar1 = *pMVar4;
  }
  *(undefined2 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x6c) = 0;
  *(undefined8 *)(this + 0x7c) = 0;
  *(undefined8 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined ***)this = &PTR__DisplayData_016d83e8;
  if (((byte)MVar1 & 1) == 0) {
    MVar1 = *pMVar3;
  }
  else {
    operator_delete(*(void **)(this + 0x40));
    MVar1 = *pMVar3;
  }
  if (((byte)MVar1 & 1) == 0) {
    return;
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00da5a80 with catch @ 00da5a2c
                        */
  operator_delete(*(void **)(this + 0x28));
  return;
}

