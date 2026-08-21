
/* dragonBones::IKConstraintData::~IKConstraintData() */

void __thiscall dragonBones::IKConstraintData::~IKConstraintData(IKConstraintData *this)

{
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined ***)this = &PTR__IKConstraintData_01c90e98;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x18),"",0);
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  *(undefined ***)this = &PTR__ConstraintData_01c90e50;
  if (((byte)this[0x18] & 1) != 0) {
    operator_delete(*(void **)(this + 0x28));
  }
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

