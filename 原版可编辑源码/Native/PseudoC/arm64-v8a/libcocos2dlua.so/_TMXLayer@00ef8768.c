
/* cocos2d::experimental::TMXLayer::~TMXLayer() */

void __thiscall cocos2d::experimental::TMXLayer::~TMXLayer(TMXLayer *this)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  *(undefined ***)this = &PTR__TMXLayer_016fc550;
  if (*(Ref **)(this + 0x328) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x328));
  }
  if (*(Ref **)(this + 0x360) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x360));
  }
  if (*(void **)(this + 800) != (void *)0x0) {
    free(*(void **)(this + 800));
    *(undefined8 *)(this + 800) = 0;
  }
  if (*(Ref **)(this + 0x498) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x498));
  }
  if (*(Ref **)(this + 0x490) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x490));
  }
  if (*(Ref **)(this + 0x4a0) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x4a0));
  }
  Map<int,cocos2d::Primitive*>::~Map((Map<int,cocos2d::Primitive*> *)(this + 0x4a8));
  puVar4 = *(undefined8 **)(this + 0x470);
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(this + 0x478);
    puVar1 = puVar4;
    if (puVar2 != puVar4) {
      do {
        puVar2 = puVar2 + -0xf;
        (**(code **)*puVar2)(puVar2);
      } while (puVar4 != puVar2);
      puVar1 = *(undefined8 **)(this + 0x470);
    }
    *(undefined8 **)(this + 0x478) = puVar4;
    operator_delete(puVar1);
  }
  puVar4 = *(void **)(this + 0x458);
  while (puVar4 != (void *)0x0) {
    pvVar3 = (void *)*puVar4;
    operator_delete(puVar4);
    puVar4 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x448);
  *(undefined8 *)(this + 0x448) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,int>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,int>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,int>>>
             *)(this + 0x430),*(__tree_node **)(this + 0x438));
  pvVar3 = *(void **)(this + 0x418);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x420) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 0x400);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x408) = pvVar3;
    operator_delete(pvVar3);
  }
  pvVar3 = *(void **)(this + 1000);
  if (pvVar3 != (void *)0x0) {
    *(void **)(this + 0x3f0) = pvVar3;
    operator_delete(pvVar3);
  }
  Mat4::~Mat4((Mat4 *)(this + 0x3a4));
  std::__ndk1::
  __tree<std::__ndk1::__value_type<int,std::__ndk1::pair<cocos2d::Sprite*,int>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::pair<cocos2d::Sprite*,int>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::pair<cocos2d::Sprite*,int>>>>
  ::destroy((__tree<std::__ndk1::__value_type<int,std::__ndk1::pair<cocos2d::Sprite*,int>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,std::__ndk1::pair<cocos2d::Sprite*,int>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,std::__ndk1::pair<cocos2d::Sprite*,int>>>>
             *)(this + 0x368),*(__tree_node **)(this + 0x370));
  puVar4 = *(void **)(this + 0x348);
  while (puVar4 != (void *)0x0) {
    pvVar3 = (void *)*puVar4;
    cocos2d::Value::~Value((Value *)(puVar4 + 5));
    if ((*(byte *)(puVar4 + 2) & 1) != 0) {
      operator_delete((void *)puVar4[4]);
    }
    operator_delete(puVar4);
    puVar4 = pvVar3;
  }
  pvVar3 = *(void **)(this + 0x338);
  *(undefined8 *)(this + 0x338) = 0;
  if (pvVar3 != (void *)0x0) {
    operator_delete(pvVar3);
  }
  if (((byte)this[0x2f8] & 1) != 0) {
    operator_delete(*(void **)(this + 0x308));
  }
  Node::~Node((Node *)this);
  return;
}

