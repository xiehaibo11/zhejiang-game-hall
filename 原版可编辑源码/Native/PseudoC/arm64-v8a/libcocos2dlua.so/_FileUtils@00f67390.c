
/* cocos2d::FileUtils::~FileUtils() */

void __thiscall cocos2d::FileUtils::~FileUtils(FileUtils *this)

{
  byte bVar1;
  undefined8 *puVar2;
  void *pvVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  *(undefined ***)this = &PTR__FileUtils_0171ff28;
  if (((byte)this[0x108] & 1) != 0) {
    operator_delete(*(void **)(this + 0x118));
  }
  puVar2 = *(void **)(this + 0xf0);
  while (puVar2 != (void *)0x0) {
    pvVar3 = (void *)*puVar2;
    if ((*(byte *)(puVar2 + 5) & 1) != 0) {
      operator_delete((void *)puVar2[7]);
    }
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0xe0);
  *(undefined8 *)(this + 0xe0) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  puVar2 = *(void **)(this + 200);
  while (puVar2 != (void *)0x0) {
    pvVar3 = (void *)*puVar2;
    if ((*(byte *)(puVar2 + 5) & 1) != 0) {
      operator_delete((void *)puVar2[7]);
    }
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0xb8);
  *(undefined8 *)(this + 0xb8) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (((byte)this[0xa0] & 1) != 0) {
    operator_delete(*(void **)(this + 0xb0));
  }
  pbVar6 = *(byte **)(this + 0x88);
  if (pbVar6 != (byte *)0x0) {
    pbVar5 = *(byte **)(this + 0x90);
    pbVar4 = pbVar6;
    if (pbVar5 != pbVar6) {
      bVar1 = pbVar5[-0x18];
      pbVar4 = pbVar5 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
        if (pbVar6 == pbVar4) break;
        bVar1 = pbVar4[-0x18];
        pbVar5 = pbVar4;
        pbVar4 = pbVar4 + -0x18;
      }
      pbVar4 = *(byte **)(this + 0x88);
    }
    *(byte **)(this + 0x90) = pbVar6;
    operator_delete(pbVar4);
  }
  pbVar6 = *(byte **)(this + 0x70);
  if (pbVar6 != (byte *)0x0) {
    pbVar5 = *(byte **)(this + 0x78);
    pbVar4 = pbVar6;
    if (pbVar5 != pbVar6) {
      bVar1 = pbVar5[-0x18];
      pbVar4 = pbVar5 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
        if (pbVar6 == pbVar4) break;
        bVar1 = pbVar4[-0x18];
        pbVar5 = pbVar4;
        pbVar4 = pbVar4 + -0x18;
      }
      pbVar4 = *(byte **)(this + 0x70);
    }
    *(byte **)(this + 0x78) = pbVar6;
    operator_delete(pbVar4);
  }
  pbVar6 = *(byte **)(this + 0x58);
  if (pbVar6 != (byte *)0x0) {
    pbVar5 = *(byte **)(this + 0x60);
    pbVar4 = pbVar6;
    if (pbVar5 != pbVar6) {
      bVar1 = pbVar5[-0x18];
      pbVar4 = pbVar5 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
        if (pbVar6 == pbVar4) break;
        bVar1 = pbVar4[-0x18];
        pbVar5 = pbVar4;
        pbVar4 = pbVar4 + -0x18;
      }
      pbVar4 = *(byte **)(this + 0x58);
    }
    *(byte **)(this + 0x60) = pbVar6;
    operator_delete(pbVar4);
  }
  puVar2 = *(void **)(this + 0x40);
  while (puVar2 != (void *)0x0) {
    pvVar3 = (void *)*puVar2;
    cocos2d::Value::~Value((Value *)(puVar2 + 5));
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x30);
  *(undefined8 *)(this + 0x30) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::recursive_mutex::~recursive_mutex((recursive_mutex *)(this + 8));
  return;
}

