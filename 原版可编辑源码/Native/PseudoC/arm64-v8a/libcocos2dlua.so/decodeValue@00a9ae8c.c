
/* fairygui::Transition::decodeValue(fairygui::TransitionItem*, fairygui::ByteBuffer*, void*) */

Transition * __thiscall
fairygui::Transition::decodeValue
          (Transition *this,TransitionItem *param_1,ByteBuffer *param_2,void *param_3)

{
  ulong uVar1;
  Transition *pTVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 uVar7;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
  case 1:
  case 3:
  case 0xd:
    bVar4 = ByteBuffer::readBool(param_2);
    *(byte *)((long)param_3 + 0x10) = bVar4 & 1;
    bVar4 = ByteBuffer::readBool(param_2);
    *(byte *)((long)param_3 + 0x11) = bVar4 & 1;
    uVar7 = ByteBuffer::readFloat(param_2);
    *(undefined4 *)param_3 = uVar7;
    this = (Transition *)ByteBuffer::readFloat(param_2);
    *(undefined4 *)((long)param_3 + 4) = extraout_s0;
    if ((1 < *(int *)param_2) && (*(int *)(param_1 + 0x20) == 0)) {
      this = (Transition *)ByteBuffer::readBool(param_2);
      *(byte *)((long)param_3 + 0x12) = (byte)this & 1;
    }
    break;
  case 2:
  case 0xb:
    uVar7 = ByteBuffer::readFloat(param_2);
    *(undefined4 *)param_3 = uVar7;
    this = (Transition *)ByteBuffer::readFloat(param_2);
    *(undefined4 *)((long)param_3 + 4) = extraout_s0_00;
    break;
  case 4:
  case 5:
    this = (Transition *)ByteBuffer::readFloat(param_2);
    *(undefined4 *)param_3 = extraout_s0_01;
    break;
  case 6:
    this = (Transition *)ByteBuffer::readColor(param_2);
    uVar5 = (uint)this;
    *(float *)param_3 = (float)(uVar5 & 0xff);
    *(float *)((long)param_3 + 4) = (float)(uVar5 >> 8 & 0xff);
    *(float *)((long)param_3 + 8) = (float)(uVar5 >> 0x10 & 0xff);
    *(float *)((long)param_3 + 0xc) = (float)((ulong)this >> 0x18 & 0xff);
    break;
  case 7:
    bVar4 = ByteBuffer::readBool(param_2);
    *(byte *)((long)param_3 + 4) = bVar4 & 1;
    this = (Transition *)ByteBuffer::readInt(param_2);
    *(int *)param_3 = (int)this;
    break;
  case 8:
    this = (Transition *)ByteBuffer::readBool(param_2);
    *(byte *)param_3 = (byte)this & 1;
    break;
  case 9:
    pbVar6 = (byte *)ByteBuffer::readS(param_2);
    if (pbVar6 != param_3) {
      uVar1 = *(ulong *)(pbVar6 + 8);
      pbVar3 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar3 = pbVar6 + 1;
        uVar1 = (ulong)(*pbVar6 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_3,(char *)pbVar3,uVar1);
    }
    this = (Transition *)ByteBuffer::readFloat(param_2);
    *(undefined4 *)((long)param_3 + 0x18) = extraout_s0_02;
    break;
  case 10:
    pbVar6 = (byte *)ByteBuffer::readS(param_2);
    if (pbVar6 != param_3) {
      uVar1 = *(ulong *)(pbVar6 + 8);
      pbVar3 = *(byte **)(pbVar6 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        pbVar3 = pbVar6 + 1;
        uVar1 = (ulong)(*pbVar6 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(param_3,(char *)pbVar3,uVar1);
    }
    this = (Transition *)ByteBuffer::readInt(param_2);
    *(int *)((long)param_3 + 0x18) = (int)this;
    break;
  case 0xc:
    uVar7 = ByteBuffer::readFloat(param_2);
    *(undefined4 *)param_3 = uVar7;
    uVar7 = ByteBuffer::readFloat(param_2);
    *(undefined4 *)((long)param_3 + 4) = uVar7;
    uVar7 = ByteBuffer::readFloat(param_2);
    *(undefined4 *)((long)param_3 + 8) = uVar7;
    this = (Transition *)ByteBuffer::readFloat(param_2);
    *(undefined4 *)((long)param_3 + 0xc) = extraout_s0_03;
    break;
  case 0xe:
  case 0xf:
    this = (Transition *)ByteBuffer::readS(param_2);
    if (this != param_3) {
      uVar1 = *(ulong *)(this + 8);
      pTVar2 = *(Transition **)(this + 0x10);
      if (((byte)*this & 1) == 0) {
        pTVar2 = this + 1;
        uVar1 = (ulong)((byte)*this >> 1);
      }
      this = (Transition *)
             std::__ndk1::
             basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                       (param_3,(char *)pTVar2,uVar1);
    }
  }
  return this;
}

