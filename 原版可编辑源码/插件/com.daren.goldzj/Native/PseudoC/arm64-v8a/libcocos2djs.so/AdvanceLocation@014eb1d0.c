
/* v8::internal::EhFrameWriter::AdvanceLocation(int) */

void __thiscall v8::internal::EhFrameWriter::AdvanceLocation(EhFrameWriter *this,int param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  undefined2 local_18 [2];
  uint local_14;
  
  uVar1 = (uint)(param_1 - *(int *)(this + 4)) / 4;
  if (uVar1 < 0x40) {
    WriteByte(this,(byte)uVar1 | 0x40);
  }
  else if (uVar1 < 0x100) {
    WriteByte(this,'\x02');
    WriteByte(this,(byte)uVar1);
  }
  else {
    if (uVar1 >> 0x10 == 0) {
      WriteByte(this,'\x03');
      local_18[0] = (undefined2)uVar1;
      uVar2 = *(undefined8 *)(this + 0x28);
      puVar4 = (undefined1 *)((ulong)local_18 | 2);
      puVar3 = (uint *)local_18;
    }
    else {
      WriteByte(this,'\x04');
      uVar2 = *(undefined8 *)(this + 0x28);
      puVar4 = &stack0xfffffffffffffff0;
      puVar3 = &local_14;
      local_14 = uVar1;
    }
    std::__ndk1::vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>>::
    insert<unsigned_char_const*>
              ((vector<unsigned_char,v8::internal::ZoneAllocator<unsigned_char>> *)(this + 0x20),
               uVar2,puVar3,puVar4);
  }
  *(int *)(this + 4) = param_1;
  return;
}

