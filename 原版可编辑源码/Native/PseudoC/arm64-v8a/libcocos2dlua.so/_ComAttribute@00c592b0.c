
/* cocostudio::ComAttribute::~ComAttribute() */

void __thiscall cocostudio::ComAttribute::~ComAttribute(ComAttribute *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  *(undefined ***)this = &PTR__ComAttribute_016c9e80;
  if (*(long *)(this + 0x68) != 0) {
    puVar1 = *(void **)(this + 0x60);
    while (puVar1 != (void *)0x0) {
      pvVar2 = (void *)*puVar1;
      cocos2d::Value::~Value((Value *)(puVar1 + 5));
      if ((*(byte *)(puVar1 + 2) & 1) != 0) {
        operator_delete((void *)puVar1[4]);
      }
      operator_delete(puVar1);
      puVar1 = pvVar2;
    }
    lVar3 = *(long *)(this + 0x58);
    *(undefined8 *)(this + 0x60) = 0;
    if (lVar3 != 0) {
      lVar4 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x50) + lVar4 * 8) = 0;
        lVar4 = lVar4 + 1;
      } while (lVar3 != lVar4);
    }
    *(undefined8 *)(this + 0x68) = 0;
  }
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                      *)(this + 0x78));
  puVar1 = *(void **)(this + 0x60);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    cocos2d::Value::~Value((Value *)(puVar1 + 5));
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)(this + 0x50);
  *(undefined8 *)(this + 0x50) = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  cocos2d::Component::~Component((Component *)this);
  return;
}

