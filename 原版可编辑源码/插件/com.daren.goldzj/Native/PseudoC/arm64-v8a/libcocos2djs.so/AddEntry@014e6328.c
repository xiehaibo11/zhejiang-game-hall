
/* v8::internal::SourcePositionTableBuilder::AddEntry(v8::internal::PositionTableEntry const&) */

void __thiscall
v8::internal::SourcePositionTableBuilder::AddEntry
          (SourcePositionTableBuilder *this,PositionTableEntry *param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte local_38 [4];
  byte local_34 [4];
  
  lVar2 = *(long *)(param_1 + 8);
  lVar4 = *(long *)(this + 0x28);
  uVar5 = *(int *)param_1 - *(int *)(this + 0x20) ^ (int)(char)param_1[0x10] - 1U;
  uVar5 = uVar5 << 1 ^ (int)uVar5 >> 0x1f;
  do {
    local_38[0] = (byte)uVar5 & 0x7f | (0x7f < uVar5) << 7;
    if (*(byte **)(this + 0x10) == *(byte **)(this + 0x18)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>
                ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 8),local_38)
      ;
    }
    else {
      **(byte **)(this + 0x10) = local_38[0];
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    bVar1 = 0x7f < uVar5;
    uVar5 = uVar5 >> 7;
  } while (bVar1);
  uVar3 = (lVar2 - lVar4) * 2 ^ lVar2 - lVar4 >> 0x3f;
  do {
    local_34[0] = (byte)uVar3 & 0x7f | (0x7f < uVar3) << 7;
    if (*(byte **)(this + 0x10) == *(byte **)(this + 0x18)) {
      std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
      __push_back_slow_path<unsigned_char_const&>
                ((vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)(this + 8),local_34)
      ;
    }
    else {
      **(byte **)(this + 0x10) = local_34[0];
      *(long *)(this + 0x10) = *(long *)(this + 0x10) + 1;
    }
    bVar1 = 0x7f < uVar3;
    uVar3 = uVar3 >> 7;
  } while (bVar1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  uVar6 = *(undefined8 *)param_1;
  this[0x30] = *(SourcePositionTableBuilder *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x28) = uVar7;
  *(undefined8 *)(this + 0x20) = uVar6;
  return;
}

