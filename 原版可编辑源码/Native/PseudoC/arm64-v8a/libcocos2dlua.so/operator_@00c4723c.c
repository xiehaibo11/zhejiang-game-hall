
/* cocostudio::RelativeData::TEMPNAMEPLACEHOLDERVALUE(cocostudio::RelativeData&&) */

RelativeData * __thiscall
cocostudio::RelativeData::operator=(RelativeData *this,RelativeData *param_1)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  RelativeData *pRVar5;
  undefined8 uVar6;
  
  pbVar4 = *(byte **)this;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 8);
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
      pbVar2 = *(byte **)this;
    }
    *(byte **)(this + 8) = pbVar4;
    operator_delete(pbVar2);
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)(this + 0x10) = 0;
  }
  uVar6 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)this = uVar6;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  pRVar5 = this + 0x18;
  pbVar4 = *(byte **)pRVar5;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x20);
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
      pbVar2 = *(byte **)pRVar5;
    }
    *(byte **)(this + 0x20) = pbVar4;
    operator_delete(pbVar2);
    *(undefined8 *)pRVar5 = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 0x28) = 0;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x18) = uVar6;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  pRVar5 = this + 0x30;
  pbVar4 = *(byte **)pRVar5;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x38);
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
      pbVar2 = *(byte **)pRVar5;
    }
    *(byte **)(this + 0x38) = pbVar4;
    operator_delete(pbVar2);
    *(undefined8 *)pRVar5 = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x30) = uVar6;
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  pRVar5 = this + 0x48;
  pbVar4 = *(byte **)pRVar5;
  if (pbVar4 != (byte *)0x0) {
    pbVar3 = *(byte **)(this + 0x50);
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
      pbVar2 = *(byte **)pRVar5;
    }
    *(byte **)(this + 0x50) = pbVar4;
    operator_delete(pbVar2);
    *(undefined8 *)pRVar5 = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x48) = uVar6;
  *(undefined8 *)(this + 0x58) = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return this;
}

