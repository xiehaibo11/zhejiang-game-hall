
/* fairygui::GLoader::setup_beforeAdd(fairygui::ByteBuffer*, int) */

void __thiscall fairygui::GLoader::setup_beforeAdd(GLoader *this,ByteBuffer *param_1,int param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  ulong uVar7;
  FUISprite *pFVar8;
  float fVar9;
  undefined4 local_54;
  Color3B aCStack_50 [8];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  GObject::setup_beforeAdd((GObject *)this,param_1,param_2);
  ByteBuffer::seek(param_1,param_2,5);
  pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           ByteBuffer::readS(param_1);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x1d8);
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
  cVar3 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x1f0) = (int)cVar3;
  cVar3 = ByteBuffer::readByte(param_1);
  *(int *)(this + 500) = (int)cVar3;
  cVar3 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x1fc) = (int)cVar3;
  bVar4 = ByteBuffer::readBool(param_1);
  this[0x200] = (GLoader)(bVar4 & 1);
  bVar4 = ByteBuffer::readBool(param_1);
  this[0x1f8] = (GLoader)(bVar4 & 1);
  ByteBuffer::readBool(param_1);
  bVar4 = ByteBuffer::readBool(param_1);
  this[0x214] = (GLoader)(bVar4 & 1);
  uVar5 = ByteBuffer::readInt(param_1);
  *(undefined4 *)(this + 0x218) = uVar5;
  uVar7 = ByteBuffer::readBool(param_1);
  if ((uVar7 & 1) != 0) {
    local_54 = ByteBuffer::readColor(param_1);
    cocos2d::Color3B::Color3B(aCStack_50,(Color4B *)&local_54);
    (**(code **)(**(long **)(this + 0x220) + 0x4c0))(*(long **)(this + 0x220),aCStack_50);
  }
  cVar3 = ByteBuffer::readByte(param_1);
  if (cVar3 != '\0') {
    FUISprite::setFillMethod(*(FUISprite **)(this + 0x220),(int)cVar3);
    pFVar8 = *(FUISprite **)(this + 0x220);
    cVar3 = ByteBuffer::readByte(param_1);
    FUISprite::setFillOrigin(pFVar8,(int)cVar3);
    pFVar8 = *(FUISprite **)(this + 0x220);
    bVar4 = ByteBuffer::readBool(param_1);
    FUISprite::setFillClockwise(pFVar8,(bool)(bVar4 & 1));
    pFVar8 = *(FUISprite **)(this + 0x220);
    fVar9 = (float)ByteBuffer::readFloat(param_1);
    FUISprite::setFillAmount(pFVar8,fVar9);
  }
  if (((byte)*this_00 & 1) == 0) {
    if ((byte)*this_00 >> 1 == 0) goto LAB_00a7f9dc;
  }
  else if (*(long *)(this + 0x1e0) == 0) goto LAB_00a7f9dc;
  loadContent(this);
LAB_00a7f9dc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

