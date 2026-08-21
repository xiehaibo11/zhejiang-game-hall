
/* cocostudio::MovementData::~MovementData() */

void __thiscall cocostudio::MovementData::~MovementData(MovementData *this)

{
  undefined8 *puVar1;
  void *pvVar2;
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementBoneData*>
  *this_00;
  
  this_00 = (Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementBoneData*>
             *)(this + 0x58);
  *(undefined ***)this = &PTR__MovementData_016c8eb8;
  cocos2d::
  Map<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocostudio::MovementBoneData*>
  ::clear(this_00);
  puVar1 = *(void **)(this + 0x68);
  while (puVar1 != (void *)0x0) {
    pvVar2 = (void *)*puVar1;
    if ((*(byte *)(puVar1 + 2) & 1) != 0) {
      operator_delete((void *)puVar1[4]);
    }
    operator_delete(puVar1);
    puVar1 = pvVar2;
  }
  pvVar2 = *(void **)this_00;
  *(undefined8 *)this_00 = 0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (((byte)this[0x28] & 1) != 0) {
    operator_delete(*(void **)(this + 0x38));
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

