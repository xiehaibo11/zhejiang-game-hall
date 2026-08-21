
/* cocos2d::Bundle3D::~Bundle3D() */

void __thiscall cocos2d::Bundle3D::~Bundle3D(Bundle3D *this)

{
  Bundle3D BVar1;
  long lVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR_clear_016d3420;
  if (this[0x130] == (Bundle3D)0x0) {
    if (((byte)this[0x50] & 1) == 0) {
      *(undefined2 *)(this + 0x50) = 0;
    }
    else {
      **(undefined1 **)(this + 0x60) = 0;
      *(undefined8 *)(this + 0x58) = 0;
    }
  }
  else {
    Data::clear((Data *)(this + 0xd0));
    lVar3 = *(long *)(this + 0x128);
    if (lVar3 != 0) {
      lVar2 = *(long *)(lVar3 + -8);
      if (lVar2 != 0) {
        lVar2 = lVar2 << 5;
        do {
          if ((*(byte *)(lVar3 + lVar2 + -0x20) & 1) != 0) {
            operator_delete(*(void **)(lVar3 + lVar2 + -0x10));
          }
          lVar2 = lVar2 + -0x20;
        } while (lVar2 != 0);
      }
      operator_delete__((long *)(lVar3 + -8));
      *(undefined8 *)(this + 0x128) = 0;
    }
  }
  BundleReader::~BundleReader((BundleReader *)(this + 0xe0));
  Data::~Data((Data *)(this + 0xd0));
  rapidjson::
  GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
  ::~GenericDocument((GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>,rapidjson::CrtAllocator>
                      *)(this + 0x68));
  if (((byte)this[0x50] & 1) == 0) {
    BVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    BVar1 = this[0x38];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    BVar1 = this[0x20];
  }
  if (((byte)BVar1 & 1) == 0) {
    BVar1 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x30));
    BVar1 = this[8];
  }
  if (((byte)BVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x18));
    return;
  }
  return;
}

