
/* cocos2d::BMFontConfiguration::~BMFontConfiguration() */

void __thiscall cocos2d::BMFontConfiguration::~BMFontConfiguration(BMFontConfiguration *this)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>> *this_00
  ;
  
  *(undefined ***)this = &PTR__BMFontConfiguration_016fd138;
  if (*(long *)(this + 0x40) != 0) {
    puVar1 = *(void **)(this + 0x38);
    while (puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
    lVar2 = *(long *)(this + 0x30);
    *(undefined8 *)(this + 0x38) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x28) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x40) = 0;
  }
  if (*(long *)(this + 0x98) != 0) {
    puVar1 = *(void **)(this + 0x90);
    while (puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
    lVar2 = *(long *)(this + 0x88);
    *(undefined8 *)(this + 0x90) = 0;
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*(long *)(this + 0x80) + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    *(undefined8 *)(this + 0x98) = 0;
  }
  if (((byte)this[0x68] & 1) == 0) {
    *(undefined2 *)(this + 0x68) = 0;
    this_00 = *(__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
                **)(this + 0xa8);
  }
  else {
                    /* try { // try from 00f023a4 to 0100246f has its CatchHandler @ 00f023a4
                       catch(type#1 @ 00000000) { ... } // from try @ 00f023a4 with catch @ 00f023a4
                       catch(type#1 @ 00000000) { ... } // from try @ 00f024ac with catch @ 00f023a4
                        */
    **(undefined1 **)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    this_00 = *(__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>
                **)(this + 0xa8);
  }
  if (this_00 !=
      (__tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>> *)
      0x0) {
    std::__ndk1::
    __tree<unsigned_int,std::__ndk1::less<unsigned_int>,std::__ndk1::allocator<unsigned_int>>::
    destroy(this_00,*(__tree_node **)(this_00 + 8));
    operator_delete(this_00);
  }
  *(undefined8 *)(this + 0xa8) = 0;
  puVar1 = *(void **)(this + 0x90);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x80);
  *(undefined8 *)(this + 0x80) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  if (((byte)this[0x68] & 1) != 0) {
    operator_delete(*(void **)(this + 0x78));
  }
  puVar1 = *(void **)(this + 0x38);
  while (puVar1 != (void *)0x0) {
    pvVar4 = (void *)*puVar1;
    operator_delete(puVar1);
    puVar1 = pvVar4;
  }
  pvVar4 = *(void **)(this + 0x28);
  *(undefined8 *)(this + 0x28) = 0;
  if (pvVar4 != (void *)0x0) {
    operator_delete(pvVar4);
  }
  Ref::~Ref((Ref *)this);
  return;
}

