
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
  
  *(undefined ***)this = &PTR__Manifest_01c6e578;
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                      *)(this + 0x128));
                    /* catch() { ... } // from try @ 00a5a6c0 with catch @ 00a5a658 */
  pbVar6 = *(byte **)(this + 0x110);
  if (pbVar6 != (byte *)0x0) {
    pbVar5 = *(byte **)(this + 0x118);
    pbVar7 = pbVar6;
    if (pbVar5 != pbVar6) {
      do {
        pbVar7 = pbVar5 + -0x18;
        if ((*pbVar7 & 1) != 0) {
          operator_delete(*(void **)(pbVar5 + -8));
        }
        pbVar5 = pbVar7;
      } while (pbVar6 != pbVar7);
      pbVar7 = *(byte **)(this + 0x110);
    }
    *(byte **)(this + 0x118) = pbVar6;
    operator_delete(pbVar7);
  }
  puVar3 = *(void **)(this + 0xf8);
  do {
    if (puVar3 == (void *)0x0) {
      pvVar4 = *(void **)(this + 0xe8);
      *(undefined8 *)(this + 0xe8) = 0;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      if (((byte)this[0xd0] & 1) != 0) {
        operator_delete(*(void **)(this + 0xe0));
      }
      puVar3 = *(void **)(this + 0xb8);
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
      pvVar4 = *(void **)(this + 0xa8);
      *(undefined8 *)(this + 0xa8) = 0;
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
      }
      pbVar6 = *(byte **)(this + 0x90);
      if (pbVar6 != (byte *)0x0) {
        pbVar5 = *(byte **)(this + 0x98);
        pbVar7 = pbVar6;
        if (pbVar5 != pbVar6) {
          do {
            pbVar7 = pbVar5 + -0x18;
            if ((*pbVar7 & 1) != 0) {
              operator_delete(*(void **)(pbVar5 + -8));
            }
            pbVar5 = pbVar7;
          } while (pbVar6 != pbVar7);
          pbVar7 = *(byte **)(this + 0x90);
        }
        *(byte **)(this + 0x98) = pbVar6;
        operator_delete(pbVar7);
      }
      if (((byte)this[0x78] & 1) == 0) {
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
                    /* try { // try from 00a5a810 to 00b5a837 has its CatchHandler @ 00a5a810
                       catch() { ... } // from try @ 00a5a810 with catch @ 00a5a810
                       catch() { ... } // from try @ 00a5a96c with catch @ 00a5a810 */
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
      if (((byte)MVar2 & 1) == 0) {
        MVar2 = this[0x18];
      }
      else {
        operator_delete(*(void **)(this + 0x40));
        MVar2 = this[0x18];
                    /* try { // try from 00a5a838 to 00b5a84b has its CatchHandler @ 00a5a9b0 */
      }
      if (((byte)MVar2 & 1) != 0) {
        operator_delete(*(void **)(this + 0x28));
      }
                    /* catch() { ... } // from try @ 00a5a6b0 with catch @ 00a5a7f4 */
      Ref::~Ref((Ref *)this);
      return;
    }
    pvVar4 = (void *)*puVar3;
    if ((*(byte *)(puVar3 + 8) & 1) == 0) {
      if ((*(byte *)(puVar3 + 5) & 1) == 0) goto LAB_00a5a6e4;
LAB_00a5a6bc:
                    /* try { // try from 00a5a6c0 to 00b5a80f has its CatchHandler @ 00a5a658 */
      operator_delete((void *)puVar3[7]);
      bVar1 = *(byte *)(puVar3 + 2);
    }
    else {
                    /* try { // try from 00a5a6b0 to 00b5a6bf has its CatchHandler @ 00a5a7f4 */
      operator_delete((void *)puVar3[10]);
      if ((*(byte *)(puVar3 + 5) & 1) != 0) goto LAB_00a5a6bc;
LAB_00a5a6e4:
      bVar1 = *(byte *)(puVar3 + 2);
    }
    if ((bVar1 & 1) != 0) {
      operator_delete((void *)puVar3[4]);
    }
    operator_delete(puVar3);
    puVar3 = pvVar4;
  } while( true );
}

