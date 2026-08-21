
/* cocos2d::ModelData::resetData() */

void __thiscall cocos2d::ModelData::resetData(ModelData *this)

{
  byte *pbVar1;
  Mat4 *pMVar2;
  byte *pbVar3;
  byte bVar4;
  byte *pbVar5;
  Mat4 *this_00;
  
  pbVar1 = *(byte **)(this + 0x38);
  pbVar3 = *(byte **)(this + 0x40);
  if (pbVar3 != pbVar1) {
    bVar4 = pbVar3[-0x18];
    pbVar5 = pbVar3 + -0x18;
    while( true ) {
      if ((bVar4 & 1) != 0) {
        operator_delete(*(void **)(pbVar3 + -8));
      }
      if (pbVar1 == pbVar5) break;
      bVar4 = pbVar5[-0x18];
      pbVar3 = pbVar5;
      pbVar5 = pbVar5 + -0x18;
    }
  }
  pMVar2 = *(Mat4 **)(this + 0x50);
  this_00 = *(Mat4 **)(this + 0x58);
  *(byte **)(this + 0x40) = pbVar1;
  while (this_00 != pMVar2) {
    this_00 = this_00 + -0x40;
    Mat4::~Mat4(this_00);
  }
  *(Mat4 **)(this + 0x58) = pMVar2;
  return;
}

