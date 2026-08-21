
/* void flatbuffers::FlatBufferBuilder::AddOffset<flatbuffers::EasingData>(unsigned short,
   flatbuffers::Offset<flatbuffers::EasingData>) */

void __thiscall
flatbuffers::FlatBufferBuilder::AddOffset<flatbuffers::EasingData>
          (FlatBufferBuilder *this,undefined2 param_1,int param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  int local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_3 != 0) {
    Align(this,4);
    iVar1 = (((*(int *)(this + 8) - *(int *)(this + 0x18)) + *(int *)(this + 0x10)) - param_3) + 4;
    if ((iVar1 != 0) || (this[0x60] != (FlatBufferBuilder)0x0)) {
      local_40 = iVar1;
      Align(this,4);
      PushBytes(this,(uchar *)&local_40,4);
      local_40 = (*(int *)(this + 8) - *(int *)(this + 0x18)) + *(int *)(this + 0x10);
      puVar2 = *(undefined8 **)(this + 0x30);
      uStack_3c = param_1;
      if (puVar2 == *(undefined8 **)(this + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(this + 0x28),(FieldLoc *)&local_40);
      }
      else {
        *puVar2 = CONCAT26(uStack_3a,CONCAT24(param_1,local_40));
        *(undefined8 **)(this + 0x30) = puVar2 + 1;
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

