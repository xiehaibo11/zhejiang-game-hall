
/* cocostudio::Armature::~Armature() */

void __thiscall cocostudio::Armature::~Armature(Armature *this)

{
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>
  *this_00;
  void *pvVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  this_00 = (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>
             *)(this + 800);
  *(undefined ***)this = &PTR__Armature_016c7d00;
  *(undefined ***)(this + 0x2f8) = &PTR__Armature_016c82f0;
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>
  ::clear(this_00);
  puVar2 = *(undefined8 **)(this + 0x348);
  puVar3 = *(undefined8 **)(this + 0x350);
  if (puVar2 != puVar3) {
    do {
      cocos2d::Ref::release((Ref *)*puVar2);
      puVar2 = puVar2 + 1;
    } while (puVar3 != puVar2);
    puVar2 = *(undefined8 **)(this + 0x348);
  }
  *(undefined8 **)(this + 0x350) = puVar2;
  puVar3 = puVar2;
  if (*(long **)(this + 0x378) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x378) + 8))();
    puVar3 = *(undefined8 **)(this + 0x348);
    puVar2 = *(undefined8 **)(this + 0x350);
  }
  *(undefined8 *)(this + 0x378) = 0;
  if (puVar3 != puVar2) {
    do {
      cocos2d::Ref::release((Ref *)*puVar3);
      puVar3 = puVar3 + 1;
    } while (puVar2 != puVar3);
    puVar2 = *(undefined8 **)(this + 0x348);
    puVar3 = puVar2;
  }
  *(undefined8 **)(this + 0x350) = puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x350) = puVar2;
    operator_delete(puVar2);
  }
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::Bone*>
  ::clear(this_00);
  puVar2 = *(void **)(this + 0x330);
  while (puVar2 != (void *)0x0) {
    pvVar1 = (void *)*puVar2;
    if ((*(byte *)(puVar2 + 2) & 1) != 0) {
      operator_delete((void *)puVar2[4]);
    }
    operator_delete(puVar2);
    puVar2 = pvVar1;
  }
  pvVar1 = *(void **)this_00;
  *(undefined8 *)this_00 = 0;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  cocos2d::Node::~Node((Node *)this);
  return;
}

