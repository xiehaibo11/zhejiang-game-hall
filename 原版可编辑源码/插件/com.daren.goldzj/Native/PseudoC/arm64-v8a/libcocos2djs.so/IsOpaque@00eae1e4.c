
/* v8::Message::IsOpaque() const */

uint __thiscall v8::Message::IsOpaque(Message *this)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = (ulong)*(uint *)(this + 4) << 0x20;
  uVar1 = *(undefined4 *)(lVar3 + 0x2c60);
  *(undefined4 *)(lVar3 + 0x2c60) = 5;
  uVar2 = *(uint *)((*(ulong *)this & 0xffffffff00000000 | (ulong)*(uint *)(*(ulong *)this + 0x13))
                   + 0x2f);
  *(undefined4 *)(lVar3 + 0x2c60) = uVar1;
  return uVar2 >> 5 & 1;
}

