
/* cocostudio::SpriteDisplayData::copy(cocostudio::DisplayData*) */

void __thiscall cocostudio::SpriteDisplayData::copy(SpriteDisplayData *this,DisplayData *param_1)

{
  ulong uVar1;
  DisplayData *pDVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (this == (SpriteDisplayData *)param_1) {
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
    if (param_1 == (DisplayData *)0x0) {
      return;
    }
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x30);
    pDVar2 = *(DisplayData **)(param_1 + 0x38);
    if (((byte)param_1[0x28] & 1) == 0) {
      pDVar2 = param_1 + 0x29;
      uVar1 = (ulong)((byte)param_1[0x28] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this + 0x28),(char *)pDVar2,uVar1);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  }
  lVar3 = __dynamic_cast(param_1,&DisplayData::typeinfo,&typeinfo,0);
  if (lVar3 != 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x51);
    uVar6 = *(undefined8 *)(lVar3 + 0x50);
    uVar5 = *(undefined8 *)(lVar3 + 0x48);
    *(undefined8 *)(this + 0x59) = *(undefined8 *)(lVar3 + 0x59);
    *(undefined8 *)(this + 0x51) = uVar4;
    *(undefined8 *)(this + 0x50) = uVar6;
    *(undefined8 *)(this + 0x48) = uVar5;
    uVar5 = *(undefined8 *)(lVar3 + 0x8c);
    uVar4 = *(undefined8 *)(lVar3 + 0x84);
    uVar7 = *(undefined8 *)(lVar3 + 0x7c);
    uVar6 = *(undefined8 *)(lVar3 + 0x74);
    uVar9 = *(undefined8 *)(lVar3 + 0x6c);
    uVar8 = *(undefined8 *)(lVar3 + 100);
    *(undefined4 *)(this + 0x94) = *(undefined4 *)(lVar3 + 0x94);
    *(undefined8 *)(this + 0x8c) = uVar5;
    *(undefined8 *)(this + 0x84) = uVar4;
    *(undefined8 *)(this + 0x7c) = uVar7;
    *(undefined8 *)(this + 0x74) = uVar6;
    *(undefined8 *)(this + 0x6c) = uVar9;
    *(undefined8 *)(this + 100) = uVar8;
  }
  return;
}

