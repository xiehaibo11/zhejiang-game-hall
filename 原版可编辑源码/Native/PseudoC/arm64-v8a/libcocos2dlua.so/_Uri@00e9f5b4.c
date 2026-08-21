
/* cocos2d::network::Uri::~Uri() */

void __thiscall cocos2d::network::Uri::~Uri(Uri *this)

{
  Uri UVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  
  pvVar2 = *(void **)(this + 0x100);
  if (pvVar2 != (void *)0x0) {
    pvVar4 = pvVar2;
    pvVar3 = *(void **)(this + 0x108);
    if (*(void **)(this + 0x108) != pvVar2) {
      do {
        if ((*(byte *)((long)pvVar3 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar3 + -8));
        }
        pvVar4 = (void *)((long)pvVar3 + -0x30);
        if ((*(byte *)((long)pvVar3 + -0x30) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar3 + -0x20));
        }
        pvVar3 = pvVar4;
      } while (pvVar2 != pvVar4);
      pvVar4 = *(void **)(this + 0x100);
    }
    *(void **)(this + 0x108) = pvVar2;
    operator_delete(pvVar4);
  }
  if (((byte)this[0xe8] & 1) == 0) {
    UVar1 = this[0xd0];
  }
  else {
    operator_delete(*(void **)(this + 0xf8));
    UVar1 = this[0xd0];
  }
  if (((byte)UVar1 & 1) == 0) {
    UVar1 = this[0xb8];
  }
  else {
    operator_delete(*(void **)(this + 0xe0));
    UVar1 = this[0xb8];
  }
  if (((byte)UVar1 & 1) == 0) {
    UVar1 = this[0xa0];
  }
  else {
    operator_delete(*(void **)(this + 200));
    UVar1 = this[0xa0];
  }
  if (((byte)UVar1 & 1) == 0) {
    UVar1 = this[0x88];
  }
  else {
    operator_delete(*(void **)(this + 0xb0));
    UVar1 = this[0x88];
  }
  if (((byte)UVar1 & 1) == 0) {
    UVar1 = this[0x68];
  }
  else {
    operator_delete(*(void **)(this + 0x98));
    UVar1 = this[0x68];
  }
  if (((byte)UVar1 & 1) == 0) {
    UVar1 = this[0x50];
  }
  else {
    operator_delete(*(void **)(this + 0x78));
    UVar1 = this[0x50];
  }
  if (((byte)UVar1 & 1) == 0) {
    UVar1 = this[0x38];
  }
  else {
    operator_delete(*(void **)(this + 0x60));
    UVar1 = this[0x38];
  }
  if (((byte)UVar1 & 1) == 0) {
    UVar1 = this[0x20];
  }
  else {
    operator_delete(*(void **)(this + 0x48));
    UVar1 = this[0x20];
  }
  if (((byte)UVar1 & 1) == 0) {
    UVar1 = this[8];
  }
  else {
    operator_delete(*(void **)(this + 0x30));
    UVar1 = this[8];
  }
  if (((byte)UVar1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(this + 0x18));
  return;
}

