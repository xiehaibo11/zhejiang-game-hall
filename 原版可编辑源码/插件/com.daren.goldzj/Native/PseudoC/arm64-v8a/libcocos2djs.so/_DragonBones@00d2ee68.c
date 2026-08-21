
/* dragonBones::DragonBones::~DragonBones() */

void __thiscall dragonBones::DragonBones::~DragonBones(DragonBones *this)

{
  Ref *this_00;
  void *pvVar1;
  
  *(undefined ***)this = &PTR__DragonBones_01c909c8;
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  *(undefined8 *)(this + 0x38) = 0;
  if ((*(long *)(this + 0x40) != 0) &&
     (this_00 = (Ref *)__dynamic_cast(*(long *)(this + 0x40),&IEventDispatcher::typeinfo,
                                      &CCArmatureDisplay::typeinfo,0xffffffffffffffff),
     this_00 != (Ref *)0x0)) {
    cocos2d::Ref::release(this_00);
  }
  pvVar1 = *(void **)(this + 0x20);
  *(undefined8 *)(this + 0x40) = 0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  std::__ndk1::
  __tree<std::__ndk1::__value_type<dragonBones::BaseObject*,bool>,std::__ndk1::__map_value_compare<dragonBones::BaseObject*,std::__ndk1::__value_type<dragonBones::BaseObject*,bool>,std::__ndk1::less<dragonBones::BaseObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<dragonBones::BaseObject*,bool>>>
  ::destroy((__tree<std::__ndk1::__value_type<dragonBones::BaseObject*,bool>,std::__ndk1::__map_value_compare<dragonBones::BaseObject*,std::__ndk1::__value_type<dragonBones::BaseObject*,bool>,std::__ndk1::less<dragonBones::BaseObject*>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<dragonBones::BaseObject*,bool>>>
             *)(this + 8),*(__tree_node **)(this + 0x10));
  return;
}

