
/* fairygui::GProgressBar::constructExtension(fairygui::ByteBuffer*) */

void __thiscall fairygui::GProgressBar::constructExtension(GProgressBar *this,ByteBuffer *param_1)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  ByteBuffer::seek(param_1,0,6);
  cVar2 = ByteBuffer::readByte(param_1);
  *(int *)(this + 0x298) = (int)cVar2;
  bVar3 = ByteBuffer::readBool(param_1);
  this[0x29c] = (GProgressBar)(bVar3 & 1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"title");
  uVar4 = GComponent::getChild((GComponent *)this,(basic_string *)local_50);
  *(undefined8 *)(this + 0x2a0) = uVar4;
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"bar");
  uVar4 = GComponent::getChild((GComponent *)this,(basic_string *)local_50);
  *(undefined8 *)(this + 0x2a8) = uVar4;
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_50,"bar_v");
  uVar4 = GComponent::getChild((GComponent *)this,(basic_string *)local_50);
  *(undefined8 *)(this + 0x2b0) = uVar4;
  if (((byte)local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  lVar5 = *(long *)(this + 0x2a8);
  if (lVar5 != 0) {
    fVar6 = *(float *)(lVar5 + 200);
    *(float *)(this + 0x2b8) = fVar6;
    *(float *)(this + 0x2c0) = *(float *)(this + 200) - fVar6;
    *(undefined4 *)(this + 0x2c8) = *(undefined4 *)(lVar5 + 0xc0);
  }
  lVar5 = *(long *)(this + 0x2b0);
  if (lVar5 != 0) {
    fVar6 = *(float *)(lVar5 + 0xcc);
    *(float *)(this + 700) = fVar6;
    *(float *)(this + 0x2c4) = *(float *)(this + 0xcc) - fVar6;
    *(undefined4 *)(this + 0x2cc) = *(undefined4 *)(lVar5 + 0xc4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00a87d08 to 00b87d53 has its CatchHandler @ 00a8810c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

