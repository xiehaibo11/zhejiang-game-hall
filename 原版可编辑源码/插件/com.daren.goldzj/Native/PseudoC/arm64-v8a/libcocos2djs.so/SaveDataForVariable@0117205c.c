
/* v8::internal::PreparseDataBuilder::SaveDataForVariable(v8::internal::Variable*) */

void __thiscall
v8::internal::PreparseDataBuilder::SaveDataForVariable(PreparseDataBuilder *this,Variable *param_1)

{
  ushort uVar1;
  int iVar2;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *pvVar3;
  uint uVar4;
  undefined1 local_14 [4];
  
  pvVar3 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 8);
  uVar1 = *(ushort *)(param_1 + 0x28);
  if (*(long *)(pvVar3 + 8) - *(long *)pvVar3 == (long)*(int *)(this + 0x10)) {
    local_14[0] = 0;
    std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::insert
              (pvVar3,*(long *)(pvVar3 + 8),1,local_14);
  }
  if ((byte)this[0x18] == 0) {
    iVar2 = *(int *)(this + 0x10);
    *(int *)(this + 0x10) = iVar2 + 1;
    *(undefined1 *)(**(long **)(this + 8) + (long)iVar2) = 0;
    uVar4 = 3;
  }
  else {
    uVar4 = (byte)this[0x18] - 1;
  }
  this[0x18] = SUB41(uVar4,0);
  *(byte *)((long)*(int *)(this + 0x10) + **(long **)(this + 8) + -1) =
       *(byte *)((long)*(int *)(this + 0x10) + **(long **)(this + 8) + -1) |
       (byte)((uVar1 >> 9 & 2 | uVar1 >> 0xe & 1) << (ulong)((uVar4 & 0xf) << 1));
  return;
}

