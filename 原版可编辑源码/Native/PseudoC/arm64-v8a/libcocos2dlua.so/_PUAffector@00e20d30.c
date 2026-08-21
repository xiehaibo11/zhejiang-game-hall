
/* cocos2d::PUAffector::~PUAffector() */

void __thiscall cocos2d::PUAffector::~PUAffector(PUAffector *this)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined ***)this = &PTR__PUAffector_016eeb38;
  if (((byte)this[0x90] & 1) != 0) {
    operator_delete(*(void **)(this + 0xa0));
  }
  pbVar4 = *(byte **)(this + 0x78);
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x80);
    pbVar2 = pbVar4;
    if (pbVar3 != pbVar4) {
      bVar1 = pbVar3[-0x18];
      pbVar2 = pbVar3 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar3 + -8));
        }
        if (pbVar4 == pbVar2) break;
        bVar1 = pbVar2[-0x18];
        pbVar3 = pbVar2;
        pbVar2 = pbVar2 + -0x18;
      }
      pbVar2 = *(byte **)(this + 0x78);
    }
    *(byte **)(this + 0x80) = pbVar4;
    operator_delete(pbVar2);
  }
  if (((byte)this[0x60] & 1) != 0) {
    operator_delete(*(void **)(this + 0x70));
  }
  Particle3DAffector::~Particle3DAffector((Particle3DAffector *)this);
  return;
}

