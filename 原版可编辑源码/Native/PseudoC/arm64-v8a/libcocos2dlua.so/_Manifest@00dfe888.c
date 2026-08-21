
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::extension::Manifest::~Manifest() */

void __thiscall cocos2d::extension::Manifest::~Manifest(Manifest *this)

{
  byte bVar1;
  Manifest MVar2;
  undefined8 *puVar3;
  void *pvVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  *(undefined ***)this = &PTR__Manifest_016e7f10;
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                      *)(this + 0x140));
  pbVar7 = *(byte **)(this + 0x128);
  if (pbVar7 != (byte *)0x0) {
    pbVar6 = *(byte **)(this + 0x130);
    pbVar5 = pbVar7;
    if (pbVar6 != pbVar7) {
      bVar1 = pbVar6[-0x18];
      pbVar5 = pbVar6 + -0x18;
      while( true ) {
        if ((bVar1 & 1) != 0) {
          operator_delete(*(void **)(pbVar6 + -8));
        }
        if (pbVar7 == pbVar5) break;
        bVar1 = pbVar5[-0x18];
        pbVar6 = pbVar5;
        pbVar5 = pbVar5 + -0x18;
      }
      pbVar5 = *(byte **)(this + 0x128);
    }
    *(byte **)(this + 0x130) = pbVar7;
    operator_delete(pbVar5);
  }
  puVar3 = *(void **)(this + 0x110);
  do {
    if (puVar3 == (void *)0x0) {
      pvVar4 = *(void **)(this + 0x100);
      *(undefined8 *)(this + 0x100) = 0;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      if (((byte)this[0xe8] & 1) != 0) {
        operator_delete(*(void **)(this + 0xf8));
      }
      puVar3 = *(void **)(this + 0xd0);
      while (puVar3 != (void *)0x0) {
        pvVar4 = (void *)*puVar3;
        if ((*(byte *)(puVar3 + 5) & 1) != 0) {
          operator_delete((void *)puVar3[7]);
        }
        if ((*(byte *)(puVar3 + 2) & 1) != 0) {
          operator_delete((void *)puVar3[4]);
        }
        operator_delete(puVar3);
        puVar3 = pvVar4;
      }
      pvVar4 = *(void **)(this + 0xc0);
      *(undefined8 *)(this + 0xc0) = 0;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      pbVar7 = *(byte **)(this + 0xa8);
      if (pbVar7 != (byte *)0x0) {
        pbVar6 = *(byte **)(this + 0xb0);
        pbVar5 = pbVar7;
        if (pbVar6 != pbVar7) {
          bVar1 = pbVar6[-0x18];
          pbVar5 = pbVar6 + -0x18;
          while( true ) {
            if ((bVar1 & 1) != 0) {
              operator_delete(*(void **)(pbVar6 + -8));
            }
            if (pbVar7 == pbVar5) break;
            bVar1 = pbVar5[-0x18];
            pbVar6 = pbVar5;
            pbVar5 = pbVar5 + -0x18;
          }
          pbVar5 = *(byte **)(this + 0xa8);
        }
        *(byte **)(this + 0xb0) = pbVar7;
        operator_delete(pbVar5);
      }
      if (((byte)this[0x90] & 1) == 0) {
        MVar2 = this[0x78];
      }
      else {
        operator_delete(*(void **)(this + 0xa0));
        MVar2 = this[0x78];
      }
      if (((byte)MVar2 & 1) == 0) {
        MVar2 = this[0x60];
      }
      else {
        operator_delete(*(void **)(this + 0x88));
        MVar2 = this[0x60];
      }
      if (((byte)MVar2 & 1) == 0) {
        MVar2 = this[0x48];
      }
      else {
        operator_delete(*(void **)(this + 0x70));
        MVar2 = this[0x48];
      }
      if (((byte)MVar2 & 1) == 0) {
        MVar2 = this[0x30];
      }
      else {
        operator_delete(*(void **)(this + 0x58));
        MVar2 = this[0x30];
      }
      if (((byte)MVar2 & 1) != 0) {
        operator_delete(*(void **)(this + 0x40));
      }
      Ref::~Ref((Ref *)this);
      return;
    }
    pvVar4 = (void *)*puVar3;
    if ((*(byte *)(puVar3 + 8) & 1) == 0) {
      if ((*(byte *)(puVar3 + 5) & 1) == 0) goto LAB_00dfe938;
LAB_00dfe954:
      operator_delete((void *)puVar3[7]);
      bVar1 = *(byte *)(puVar3 + 2);
    }
    else {
      operator_delete((void *)puVar3[10]);
      if ((*(byte *)(puVar3 + 5) & 1) != 0) goto LAB_00dfe954;
LAB_00dfe938:
      bVar1 = *(byte *)(puVar3 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    puVar3 = pvVar4;
  } while( true );
}

