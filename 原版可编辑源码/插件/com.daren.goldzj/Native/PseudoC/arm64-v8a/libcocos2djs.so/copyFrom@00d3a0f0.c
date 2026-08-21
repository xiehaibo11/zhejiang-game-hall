
/* dragonBones::TextureData::copyFrom(dragonBones::TextureData const&) */

void __thiscall dragonBones::TextureData::copyFrom(TextureData *this,TextureData *param_1)

{
  ulong uVar1;
  TextureData *pTVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  this[0xd] = param_1[0xd];
  if (this != param_1) {
    uVar1 = *(ulong *)(param_1 + 0x18);
    pTVar2 = *(TextureData **)(param_1 + 0x20);
    if (((byte)param_1[0x10] & 1) == 0) {
      pTVar2 = param_1 + 0x11;
      uVar1 = (ulong)((byte)param_1[0x10] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x10),(char *)pTVar2,uVar1);
  }
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puVar3 = *(undefined8 **)(this + 0x38);
  *(undefined8 *)(this + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x28) = uVar5;
  *(undefined8 *)(this + 0x40) = *(undefined8 *)(param_1 + 0x40);
  puVar4 = *(undefined8 **)(param_1 + 0x38);
  if (puVar3 == (undefined8 *)0x0) {
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    puVar3 = operator_new(0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    *(undefined8 **)(this + 0x38) = puVar3;
    puVar4 = *(undefined8 **)(param_1 + 0x38);
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
  }
  else if (puVar4 == (undefined8 *)0x0) {
    operator_delete(puVar3);
    *(undefined8 *)(this + 0x38) = 0;
    return;
  }
  uVar5 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar5;
  return;
}

