
/* dragonBones::UserData::_onClear() */

void __thiscall dragonBones::UserData::_onClear(UserData *this)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  
                    /* try { // try from 00da6b58 to 00ea6b5f has its CatchHandler @ 00da6ba8 */
                    /* try { // try from 00da6b60 to 00ea6bc3 has its CatchHandler @ 00da6b34 */
  pbVar1 = *(byte **)(this + 0x40);
  pbVar2 = *(byte **)(this + 0x48);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(this + 0x10);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(this + 0x28);
  if (pbVar2 != pbVar1) {
    bVar3 = pbVar2[-0x18];
    pbVar4 = pbVar2 + -0x18;
    while( true ) {
      if ((bVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + -8));
                    /* catch() { ... } // from try @ 00da6b58 with catch @ 00da6ba8 */
      }
      if (pbVar1 == pbVar4) break;
      bVar3 = pbVar4[-0x18];
      pbVar2 = pbVar4;
      pbVar4 = pbVar4 + -0x18;
    }
  }
  *(byte **)(this + 0x48) = pbVar1;
  return;
}

