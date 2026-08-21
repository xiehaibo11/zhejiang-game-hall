
/* fairygui::ByteBuffer::writeS(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

void __thiscall fairygui::ByteBuffer::writeS(ByteBuffer *this,basic_string *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  basic_string *pbVar3;
  int iVar4;
  ushort uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  
  iVar4 = *(int *)(this + 0x1c);
  *(int *)(this + 0x1c) = iVar4 + 2;
  puVar1 = (undefined1 *)(*(long *)(this + 8) + (long)iVar4 + (long)*(int *)(this + 0x10));
  if (this[0x18] == (ByteBuffer)0x0) {
    uVar5 = CONCAT11(*puVar1,puVar1[1]);
  }
  else {
    uVar5 = CONCAT11(puVar1[1],*puVar1);
  }
  if ((1 < (uVar5 + 3 & 0xffff)) &&
     (this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (**(long **)(this + 0x20) + (ulong)(uint)uVar5 * 0x18),
     this_00 !=
     (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1)) {
                    /* try { // try from 00ab6ce8 to 00bb6d23 has its CatchHandler @ 00ab6ce8
                       catch() { ... } // from try @ 00ab6ce8 with catch @ 00ab6ce8
                       catch() { ... } // from try @ 00ab6d8c with catch @ 00ab6ce8
                       catch() { ... } // from try @ 00ab6e0c with catch @ 00ab6ce8 */
    uVar2 = *(ulong *)(param_1 + 8);
    pbVar3 = *(basic_string **)(param_1 + 0x10);
    if (((byte)*param_1 & 1) == 0) {
      pbVar3 = param_1 + 1;
      uVar2 = (ulong)((byte)*param_1 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar3,uVar2);
  }
  return;
}

