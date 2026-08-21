
/* cocos2d::network::SocketIOPacket::~SocketIOPacket() */

void __thiscall cocos2d::network::SocketIOPacket::~SocketIOPacket(SocketIOPacket *this)

{
  SocketIOPacket SVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  pbVar2 = *(byte **)(this + 200);
  pbVar4 = *(byte **)(this + 0xd0);
  *(undefined ***)this = &PTR__SocketIOPacket_01c6bdd8;
  pbVar3 = pbVar2;
  if (pbVar4 != pbVar2) {
    do {
      pbVar3 = pbVar4 + -0x18;
      if ((*pbVar3 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
      pbVar4 = pbVar3;
    } while (pbVar2 != pbVar3);
    pbVar3 = *(byte **)(this + 200);
  }
  *(byte **)(this + 0xd0) = pbVar2;
  if (pbVar3 != (byte *)0x0) {
    pbVar4 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar4 = pbVar2 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        pbVar2 = pbVar4;
                    /* try { // try from 009dfcd0 to 00adfcdb has its CatchHandler @ 009dfe14 */
      } while (pbVar3 != pbVar4);
      pbVar4 = *(byte **)(this + 200);
    }
    *(byte **)(this + 0xd0) = pbVar3;
    operator_delete(pbVar4);
  }
  if (((byte)this[0xb0] & 1) == 0) {
    SVar1 = this[0x98];
  }
  else {
                    /* try { // try from 009dfd40 to 00adfe27 has its CatchHandler @ 009dfbfc */
    operator_delete(*(void **)(this + 0xc0));
    SVar1 = this[0x98];
  }
  if (((byte)SVar1 & 1) == 0) {
    SVar1 = this[0x80];
  }
  else {
    operator_delete(*(void **)(this + 0xa8));
    SVar1 = this[0x80];
  }
  if (((byte)SVar1 & 1) == 0) {
    SVar1 = this[0x68];
  }
  else {
    operator_delete(*(void **)(this + 0x90));
    SVar1 = this[0x68];
  }
  if (((byte)SVar1 & 1) == 0) {
    pbVar2 = *(byte **)(this + 0x50);
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    pbVar2 = *(byte **)(this + 0x50);
  }
  if (pbVar2 == (byte *)0x0) {
    SVar1 = this[0x38];
  }
  else {
    pbVar3 = *(byte **)(this + 0x58);
    pbVar4 = pbVar2;
    if (pbVar3 != pbVar2) {
      do {
        pbVar4 = pbVar3 + -0x18;
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        pbVar3 = pbVar4;
      } while (pbVar2 != pbVar4);
      pbVar4 = *(byte **)(this + 0x50);
    }
    *(byte **)(this + 0x58) = pbVar2;
    operator_delete(pbVar4);
    SVar1 = this[0x38];
  }
  if (((byte)SVar1 & 1) == 0) {
    SVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    SVar1 = this[0x20];
  }
  if (((byte)SVar1 & 1) == 0) {
    SVar1 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x30));
    SVar1 = this[8];
  }
  if (((byte)SVar1 & 1) == 0) {
                    /* try { // try from 009dfd38 to 00adfd3f has its CatchHandler @ 009dfe04 */
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}

