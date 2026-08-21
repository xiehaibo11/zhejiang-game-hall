
/* dragonBones::SlotData::~SlotData() */

void __thiscall dragonBones::SlotData::~SlotData(SlotData *this)

{
  undefined1 *puVar1;
  
  *(undefined ***)this = &PTR__SlotData_01c90ca8;
  if (*(BaseObject **)(this + 0x40) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x40));
  }
  puVar1 = *(undefined1 **)(this + 0x38);
  if ((puVar1 != (undefined1 *)0x0) && (puVar1 != DEFAULT_COLOR)) {
    operator_delete(puVar1);
  }
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
         (this + 0x20),"",0);
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  if (((byte)this[0x20] & 1) != 0) {
    operator_delete(*(void **)(this + 0x30));
  }
  BaseObject::~BaseObject((BaseObject *)this);
  return;
}

