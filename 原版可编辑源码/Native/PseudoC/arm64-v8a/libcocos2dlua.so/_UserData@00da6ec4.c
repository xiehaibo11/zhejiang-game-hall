
/* dragonBones::UserData::~UserData() */

void __thiscall dragonBones::UserData::~UserData(UserData *this)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  void *pvVar4;
  byte *pbVar5;
  
  pbVar1 = *(byte **)(this + 0x40);
  pbVar3 = *(byte **)(this + 0x48);
  *(undefined ***)this = &PTR__UserData_016d8680;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  pbVar5 = pbVar1;
  if (pbVar3 != pbVar1) {
    bVar2 = pbVar3[-0x18];
    pbVar5 = pbVar3 + -0x18;
    while( true ) {
      if ((bVar2 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -8));
      }
      if (pbVar1 == pbVar5) break;
      bVar2 = pbVar5[-0x18];
      pbVar3 = pbVar5;
      pbVar5 = pbVar5 + -0x18;
    }
    pbVar5 = *(byte **)(this + 0x40);
  }
  *(byte **)(this + 0x48) = pbVar1;
  if (pbVar5 != (byte *)0x0) {
    pbVar3 = pbVar5;
    if (pbVar1 != pbVar5) {
      bVar2 = pbVar1[-0x18];
      pbVar3 = pbVar1 + -0x18;
      while( true ) {
        if ((bVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar1 + -8));
        }
                    /* catch() { ... } // from try @ 00da6f84 with catch @ 00da6f5c */
        if (pbVar5 == pbVar3) break;
        bVar2 = pbVar3[-0x18];
        pbVar1 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
      pbVar3 = *(byte **)(this + 0x40);
    }
                    /* try { // try from 00da6f80 to 00ea6f83 has its CatchHandler @ 00da6fe8 */
    *(byte **)(this + 0x48) = pbVar5;
                    /* try { // try from 00da6f84 to 00ea7003 has its CatchHandler @ 00da6f5c */
    operator_delete(pbVar3);
  }
  pvVar4 = *(void **)(this + 0x28);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar4;
    operator_delete(pvVar4);
  }
  pvVar4 = *(void **)(this + 0x10);
  if (pvVar4 != (void *)0x0) {
    *(void **)(this + 0x18) = pvVar4;
    operator_delete(pvVar4);
    return;
  }
  return;
}

