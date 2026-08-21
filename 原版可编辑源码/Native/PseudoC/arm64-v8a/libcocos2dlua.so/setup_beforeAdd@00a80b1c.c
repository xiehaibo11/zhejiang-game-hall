
/* fairygui::GLoader3D::setup_beforeAdd(fairygui::ByteBuffer*, int) */

void __thiscall
fairygui::GLoader3D::setup_beforeAdd(GLoader3D *this,ByteBuffer *param_1,int param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar2;
  long lVar3;
  char cVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar8;
  ulong uVar9;
  long *plVar10;
  GLoader3D *__s1;
  undefined4 local_44;
  undefined2 local_40;
  GLoader3D local_3e;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
                    /* catch() { ... } // from try @ 00a80a78 with catch @ 00a80b48
                       catch() { ... } // from try @ 00a80af4 with catch @ 00a80b48 */
  GObject::setup_beforeAdd((GObject *)this,param_1,param_2);
  ByteBuffer::seek(param_1,param_2,5);
  pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x1d8);
  if (this_00 != pbVar8) {
    uVar9 = *(ulong *)(pbVar8 + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar8 + 0x10);
    if (((byte)*pbVar8 & 1) == 0) {
      pbVar1 = pbVar8 + 1;
      uVar9 = (ulong)((byte)*pbVar8 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar1,uVar9);
  }
  cVar4 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x1f0) = (int)cVar4;
  cVar4 = ByteBuffer::readByte(param_1);
  *(int *)(this + 500) = (int)cVar4;
  cVar4 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x1fc) = (int)cVar4;
  bVar5 = ByteBuffer::readBool(param_1);
  this[0x200] = (GLoader3D)(bVar5 & 1);
  bVar5 = ByteBuffer::readBool(param_1);
  this[0x1f8] = (GLoader3D)(bVar5 & 1);
  pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x220) != pbVar8) {
    uVar9 = *(ulong *)(pbVar8 + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar8 + 0x10);
    if (((byte)*pbVar8 & 1) == 0) {
      pbVar1 = pbVar8 + 1;
      uVar9 = (ulong)((byte)*pbVar8 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x220),(char *)pbVar1,uVar9);
  }
  pbVar8 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x238) != pbVar8) {
    uVar9 = *(ulong *)(pbVar8 + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar8 + 0x10);
    if (((byte)*pbVar8 & 1) == 0) {
      pbVar1 = pbVar8 + 1;
      uVar9 = (ulong)((byte)*pbVar8 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x238),(char *)pbVar1,uVar9);
  }
  bVar5 = ByteBuffer::readBool(param_1);
  this[0x210] = (GLoader3D)(bVar5 & 1);
  uVar6 = ByteBuffer::readInt(param_1);
  *(undefined4 *)(this + 0x214) = uVar6;
  bVar5 = ByteBuffer::readBool(param_1);
  this[0x218] = (GLoader3D)(bVar5 & 1);
  uVar9 = ByteBuffer::readBool(param_1);
  if ((uVar9 & 1) != 0) {
    local_44 = ByteBuffer::readColor(param_1);
    cocos2d::Color3B::Color3B((Color3B *)&local_40,(Color4B *)&local_44);
    plVar10 = *(long **)(this + 0x260);
    *(undefined2 *)(this + 0x250) = local_40;
    this[0x252] = local_3e;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x4c0))(plVar10,this + 0x250);
    }
  }
  bVar2 = *this_00;
  if (((byte)bVar2 & 1) == 0) {
    if ((byte)bVar2 >> 1 == 0) goto LAB_00a80d64;
  }
  else if (*(long *)(this + 0x1e0) == 0) goto LAB_00a80d64;
  *(undefined8 *)(this + 0x208) = 0;
  if (((byte)bVar2 & 1) == 0) {
    if ((byte)bVar2 >> 1 == 0) goto LAB_00a80d64;
  }
  else if (*(long *)(this + 0x1e0) == 0) goto LAB_00a80d64;
  if (((byte)bVar2 & 1) == 0) {
    __s1 = this + 0x1d9;
    if ((byte)bVar2 < 10) {
      uVar9 = (ulong)((byte)bVar2 >> 1);
      if (uVar9 == 0) goto LAB_00a80d54;
    }
    else {
LAB_00a80d28:
      uVar9 = 5;
    }
LAB_00a80d2c:
    iVar7 = memcmp(__s1,"ui://",uVar9);
    if ((4 < uVar9) && (iVar7 == 0)) {
      loadFromPackage(this);
      goto LAB_00a80d64;
    }
  }
  else {
    uVar9 = *(ulong *)(this + 0x1e0);
    __s1 = *(GLoader3D **)(this + 0x1e8);
    if (4 < uVar9) goto LAB_00a80d28;
    if (uVar9 != 0) goto LAB_00a80d2c;
  }
LAB_00a80d54:
                    /* try { // try from 00a80d58 to 00b80da7 has its CatchHandler @ 00a80d58
                       catch() { ... } // from try @ 00a80d58 with catch @ 00a80d58
                       catch() { ... } // from try @ 00a80de0 with catch @ 00a80d58
                       catch() { ... } // from try @ 00a80e24 with catch @ 00a80d58 */
  (**(code **)(*(long *)this + 0xb0))(this);
LAB_00a80d64:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

