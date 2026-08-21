
/* dragonBones::SlotData::_onClear() */

void __thiscall dragonBones::SlotData::_onClear(SlotData *this)

{
  undefined1 *puVar1;
  
  if (*(BaseObject **)(this + 0x40) != (BaseObject *)0x0) {
    BaseObject::returnToPool(*(BaseObject **)(this + 0x40));
  }
                    /* try { // try from 00d88020 to 00e880a7 has its CatchHandler @ 00d88020
                       catch() { ... } // from try @ 00d88020 with catch @ 00d88020
                       catch() { ... } // from try @ 00d88254 with catch @ 00d88020 */
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
  return;
}

