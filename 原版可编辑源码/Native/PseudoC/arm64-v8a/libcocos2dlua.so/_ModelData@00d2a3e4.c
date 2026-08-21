
/* cocos2d::ModelData::~ModelData() */

void __thiscall cocos2d::ModelData::~ModelData(ModelData *this)

{
  byte bVar1;
  ModelData MVar2;
  byte *pbVar3;
  byte *pbVar4;
  Mat4 *this_00;
  byte *pbVar5;
  Mat4 *pMVar6;
  Mat4 *pMVar7;
  
  pbVar5 = *(byte **)(this + 0x38);
  pbVar4 = *(byte **)(this + 0x40);
  *(undefined ***)this = &PTR__ModelData_016d34c0;
  if (pbVar4 != pbVar5) {
    bVar1 = pbVar4[-0x18];
    pbVar3 = pbVar4 + -0x18;
    while( true ) {
      if ((bVar1 & 1) != 0) {
        operator_delete(*(void **)(pbVar4 + -8));
      }
      if (pbVar5 == pbVar3) break;
      bVar1 = pbVar3[-0x18];
      pbVar4 = pbVar3;
      pbVar3 = pbVar3 + -0x18;
    }
  }
  this_00 = *(Mat4 **)(this + 0x50);
  pMVar6 = *(Mat4 **)(this + 0x58);
  *(byte **)(this + 0x40) = pbVar5;
  pMVar7 = this_00;
  if (pMVar6 != this_00) {
    do {
      pMVar6 = pMVar6 + -0x40;
      Mat4::~Mat4(pMVar6);
    } while (this_00 != pMVar6);
    pMVar7 = *(Mat4 **)(this + 0x50);
  }
  *(Mat4 **)(this + 0x58) = this_00;
  if (pMVar7 != (Mat4 *)0x0) {
    pMVar6 = pMVar7;
    if (this_00 != pMVar7) {
      do {
        this_00 = this_00 + -0x40;
        Mat4::~Mat4(this_00);
      } while (pMVar7 != this_00);
      pMVar6 = *(Mat4 **)(this + 0x50);
    }
    *(Mat4 **)(this + 0x58) = pMVar7;
    operator_delete(pMVar6);
  }
  pbVar5 = *(byte **)(this + 0x38);
  if (pbVar5 != (byte *)0x0) {
    pbVar4 = *(byte **)(this + 0x40);
    pbVar3 = pbVar5;
    if (pbVar4 != pbVar5) {
      bVar1 = pbVar4[-0x18];
      pbVar3 = pbVar4 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + -8));
        }
        if (pbVar5 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar4 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
      pbVar3 = *(byte **)(this + 0x38);
    }
    *(byte **)(this + 0x40) = pbVar5;
    operator_delete(pbVar3);
  }
  if (((byte)this[0x20] & 1) == 0) {
    MVar2 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x30));
    MVar2 = this[8];
  }
  if (((byte)MVar2 & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}

