
/* cocos2d::FileUtils::~FileUtils() */

void __thiscall cocos2d::FileUtils::~FileUtils(FileUtils *this)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  void *pvVar4;
  byte *pbVar5;
  
  *(undefined ***)this = &PTR__FileUtils_01c66bd8;
  if (((byte)this[0xb8] & 1) != 0) {
    operator_delete(*(void **)(this + 200));
  }
  puVar1 = *(void **)(this + 0xa0);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 5) & 1) != 0) {
      operator_delete((void *)puVar1[7]);
    }
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x90);
  *(undefined8 *)(this + 0x90) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  if (((byte)this[0x78] & 1) != 0) {
    operator_delete(*(void **)(this + 0x88));
  }
  pbVar3 = *(byte **)(this + 0x60);
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = *(byte **)(this + 0x68);
    pbVar5 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar5 = pbVar2 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        pbVar2 = pbVar5;
      } while (pbVar3 != pbVar5);
      pbVar5 = *(byte **)(this + 0x60);
    }
    *(byte **)(this + 0x68) = pbVar3;
    operator_delete(pbVar5);
  }
  pbVar3 = *(byte **)(this + 0x48);
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = *(byte **)(this + 0x50);
    pbVar5 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar5 = pbVar2 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        pbVar2 = pbVar5;
      } while (pbVar3 != pbVar5);
      pbVar5 = *(byte **)(this + 0x48);
    }
    *(byte **)(this + 0x50) = pbVar3;
    operator_delete(pbVar5);
  }
  pbVar3 = *(byte **)(this + 0x30);
  if (pbVar3 != (byte *)0x0) {
    pbVar2 = *(byte **)(this + 0x38);
    pbVar5 = pbVar3;
    if (pbVar2 != pbVar3) {
      do {
        pbVar5 = pbVar2 + -0x18;
        if ((*pbVar5 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        pbVar2 = pbVar5;
      } while (pbVar3 != pbVar5);
      pbVar5 = *(byte **)(this + 0x30);
    }
    *(byte **)(this + 0x38) = pbVar3;
    operator_delete(pbVar5);
  }
  puVar1 = *(void **)(this + 0x18);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    cocos2d::Value::~Value((Value *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = *(void **)(this + 8);
  *(undefined8 *)(this + 8) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
    return;
  }
  return;
}

