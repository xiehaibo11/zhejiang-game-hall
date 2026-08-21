
/* fairygui::ByteBuffer::readS(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

undefined8 __thiscall fairygui::ByteBuffer::readS(ByteBuffer *this,basic_string *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  basic_string *pbVar5;
  ushort uVar6;
  long lVar7;
  basic_string *pbVar8;
  
  iVar3 = *(int *)(this + 0x1c);
  *(int *)(this + 0x1c) = iVar3 + 2;
  puVar1 = (undefined1 *)(*(long *)(this + 8) + (long)iVar3 + (long)*(int *)(this + 0x10));
  if (this[0x18] == (ByteBuffer)0x0) {
    uVar6 = CONCAT11(*puVar1,puVar1[1]);
  }
  else {
    uVar6 = CONCAT11(puVar1[1],*puVar1);
  }
  uVar4 = (uint)uVar6;
                    /* try { // try from 00ab6a6c to 00bb6a73 has its CatchHandler @ 00ab6a88 */
  if (uVar4 == 0xfffe) {
    return 0;
  }
                    /* try { // try from 00ab6a74 to 00bb6abb has its CatchHandler @ 00ab679c */
  if (uVar4 == 0xfffd) {
    if (((byte)*param_1 & 1) == 0) {
                    /* catch() { ... } // from try @ 00ab694c with catch @ 00ab6a88
                       catch() { ... } // from try @ 00ab6a6c with catch @ 00ab6a88 */
      *(undefined2 *)param_1 = 0;
                    /* catch() { ... } // from try @ 00ab6930 with catch @ 00ab6a8c */
    }
    else {
      **(undefined1 **)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
    }
  }
  else {
                    /* catch() { ... } // from try @ 00ab6800 with catch @ 00ab6aa0 */
    pbVar8 = (basic_string *)(**(long **)(this + 0x20) + (ulong)uVar4 * 0x18);
    if (pbVar8 != param_1) {
      lVar7 = **(long **)(this + 0x20) + (ulong)uVar4 * 0x18;
      uVar2 = (ulong)((byte)*pbVar8 >> 1);
      pbVar5 = pbVar8 + 1;
      if (((byte)*pbVar8 & 1) != 0) {
        uVar2 = *(ulong *)(lVar7 + 8);
        pbVar5 = *(basic_string **)(lVar7 + 0x10);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             param_1,(char *)pbVar5,uVar2);
    }
  }
  return 1;
}

