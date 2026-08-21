
/* fairygui::GTextField::setup_beforeAdd(fairygui::ByteBuffer*, int) */

void __thiscall
fairygui::GTextField::setup_beforeAdd(GTextField *this,ByteBuffer *param_1,int param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  short sVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 local_58;
  float fStack_54;
  undefined2 local_50;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_4e;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  GObject::setup_beforeAdd((GObject *)this,param_1,param_2);
  ByteBuffer::seek(param_1,param_2,5);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (**(code **)(*(long *)this + 0xd0))(this);
  pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  if (this_00 != pbVar6) {
    uVar7 = *(ulong *)(pbVar6 + 8);
    pbVar1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
              (pbVar6 + 0x10);
    if (((byte)*pbVar6 & 1) == 0) {
      pbVar1 = pbVar6 + 1;
      uVar7 = (ulong)((byte)*pbVar6 >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar1,uVar7);
  }
  sVar5 = ByteBuffer::readShort(param_1);
  *(float *)(this_00 + 0x18) = (float)(int)sVar5;
  local_58 = ByteBuffer::readColor(param_1);
  cocos2d::Color3B::Color3B((Color3B *)&local_50,(Color4B *)&local_58);
  this_00[0x1e] = local_4e;
  *(undefined2 *)(this_00 + 0x1c) = local_50;
  cVar3 = ByteBuffer::readByte(param_1);
  *(int *)(this_00 + 0x2c) = (int)cVar3;
  cVar3 = ByteBuffer::readByte(param_1);
  *(int *)(this_00 + 0x30) = (int)cVar3;
  sVar5 = ByteBuffer::readShort(param_1);
  *(int *)(this_00 + 0x24) = (int)sVar5;
  sVar5 = ByteBuffer::readShort(param_1);
  *(int *)(this_00 + 0x28) = (int)sVar5;
  bVar4 = ByteBuffer::readBool(param_1);
  this[0x1f0] = (GTextField)(bVar4 & 1);
  cVar3 = ByteBuffer::readByte(param_1);
  (**(code **)(*(long *)this + 0xb8))(this,(int)cVar3);
  bVar4 = ByteBuffer::readBool(param_1);
  this_00[0x21] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)(bVar4 & 1);
  bVar4 = ByteBuffer::readBool(param_1);
  this_00[0x20] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)(bVar4 & 1);
  bVar4 = ByteBuffer::readBool(param_1);
  this_00[0x1f] =
       (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>)(bVar4 & 1);
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) != 0) {
    (**(code **)(*(long *)this + 200))(this,1);
  }
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) != 0) {
    local_58 = ByteBuffer::readColor(param_1);
    cocos2d::Color3B::Color3B((Color3B *)&local_50,(Color4B *)&local_58);
    this_00[0x3a] = local_4e;
    *(undefined2 *)(this_00 + 0x38) = local_50;
    fVar9 = (float)ByteBuffer::readFloat(param_1);
    *(int *)(this_00 + 0x3c) = (int)fVar9;
    *(uint *)(this_00 + 0x34) = *(uint *)(this_00 + 0x34) | 1;
  }
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) != 0) {
    local_58 = ByteBuffer::readColor(param_1);
    cocos2d::Color3B::Color3B((Color3B *)&local_50,(Color4B *)&local_58);
    this_00[0x42] = local_4e;
    *(undefined2 *)(this_00 + 0x40) = local_50;
    uVar10 = ByteBuffer::readFloat(param_1);
    fStack_54 = (float)ByteBuffer::readFloat(param_1);
    fStack_54 = -fStack_54;
    local_58 = uVar10;
    cocos2d::Size::operator=((Size *)(this_00 + 0x44),(Vec2 *)&local_58);
    *(uint *)(this_00 + 0x34) = *(uint *)(this_00 + 0x34) | 2;
  }
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) != 0) {
    puVar8 = operator_new(0x28);
    puVar8[1] = 0;
    *puVar8 = 0;
    puVar8[3] = 0;
    puVar8[2] = 0;
    *(undefined4 *)(puVar8 + 4) = 0x3f800000;
    *(undefined8 **)(this + 0x1f8) = puVar8;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

