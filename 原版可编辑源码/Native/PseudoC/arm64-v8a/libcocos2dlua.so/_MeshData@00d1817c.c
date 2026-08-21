
/* cocos2d::MeshData::~MeshData() */

void __thiscall cocos2d::MeshData::~MeshData(MeshData *this)

{
  byte bVar1;
  void *pvVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  void *pvVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)(this + 0x20);
  puVar7 = *(undefined8 **)(this + 0x28);
  *(undefined8 *)(this + 8) = *(undefined8 *)this;
  if (puVar7 != puVar9) {
    pvVar2 = (void *)puVar7[-3];
    puVar4 = puVar7 + -3;
    while( true ) {
      if (pvVar2 != (void *)0x0) {
        puVar7[-2] = pvVar2;
        operator_delete(pvVar2);
      }
      if (puVar9 == puVar4) break;
      pvVar2 = (void *)puVar4[-3];
      puVar7 = puVar4;
      puVar4 = puVar4 + -3;
    }
  }
  pvVar2 = *(void **)(this + 0x50);
  pvVar5 = *(void **)(this + 0x70);
  *(undefined8 **)(this + 0x28) = puVar9;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x68) = 0;
  *(void **)(this + 0x58) = pvVar2;
  *(void **)(this + 0x78) = pvVar5;
  *(undefined4 *)(this + 0x88) = 0;
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x78) = pvVar5;
    operator_delete(pvVar5);
    pvVar2 = *(void **)(this + 0x50);
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x58) = pvVar2;
    operator_delete(pvVar2);
  }
  pbVar8 = *(byte **)(this + 0x38);
  if (pbVar8 != (byte *)0x0) {
    pbVar6 = *(byte **)(this + 0x40);
    pbVar3 = pbVar8;
    if (pbVar6 != pbVar8) {
      bVar1 = pbVar6[-0x18];
      pbVar3 = pbVar6 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
        if (pbVar8 == pbVar3) break;
        bVar1 = pbVar3[-0x18];
        pbVar6 = pbVar3;
        pbVar3 = pbVar3 + -0x18;
      }
      pbVar3 = *(byte **)(this + 0x38);
    }
    *(byte **)(this + 0x40) = pbVar8;
    operator_delete(pbVar3);
  }
  puVar9 = *(undefined8 **)(this + 0x20);
  if (puVar9 != (undefined8 *)0x0) {
    puVar7 = *(undefined8 **)(this + 0x28);
    puVar4 = puVar9;
    if (puVar7 != puVar9) {
      pvVar2 = (void *)puVar7[-3];
      puVar4 = puVar7 + -3;
      while( true ) {
        if (pvVar2 != (void *)0x0) {
          puVar7[-2] = pvVar2;
          operator_delete(pvVar2);
        }
        if (puVar9 == puVar4) break;
        pvVar2 = (void *)puVar4[-3];
        puVar7 = puVar4;
        puVar4 = puVar4 + -3;
      }
      puVar4 = *(undefined8 **)(this + 0x20);
    }
    *(undefined8 **)(this + 0x28) = puVar9;
    operator_delete(puVar4);
  }
  pvVar2 = *(void **)this;
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 8) = pvVar2;
    operator_delete(pvVar2);
    return;
  }
  return;
}

