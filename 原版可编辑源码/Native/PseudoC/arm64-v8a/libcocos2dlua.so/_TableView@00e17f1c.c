
/* cocos2d::extension::TableView::~TableView() */

void __thiscall cocos2d::extension::TableView::~TableView(TableView *this)

{
  void *pvVar1;
  __tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *this_00;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  this_00 = *(__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> **)(this + 0x480);
  *(undefined ***)this = &PTR__TableView_016ed758;
  *(undefined ***)(this + 800) = &PTR__TableView_016eddd8;
  *(undefined ***)(this + 0x468) = &PTR__TableView_016ede00;
  if (this_00 != (__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>> *)0x0) {
    std::__ndk1::__tree<long,std::__ndk1::less<long>,std::__ndk1::allocator<long>>::destroy
              (this_00,*(__tree_node **)(this_00 + 8));
    operator_delete(this_00);
  }
  puVar2 = *(undefined8 **)(this + 0x4b8);
  puVar3 = *(undefined8 **)(this + 0x4c0);
  *(undefined8 *)(this + 0x480) = 0;
  if (puVar2 != puVar3) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar3 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x4b8);
  }
  *(undefined8 **)(this + 0x4c0) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x4c0) = puVar2;
    operator_delete(puVar2);
  }
  puVar2 = *(undefined8 **)(this + 0x4a0);
  puVar3 = *(undefined8 **)(this + 0x4a8);
  if (puVar2 != puVar3) {
    do {
      Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar3 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x4a0);
  }
  *(undefined8 **)(this + 0x4a8) = puVar2;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x4a8) = puVar2;
    operator_delete(puVar2);
  }
  pvVar1 = *(void **)(this + 0x488);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x490) = pvVar1;
    operator_delete(pvVar1);
  }
  ScrollView::~ScrollView((ScrollView *)this);
  return;
}

