
/* flatbuffers::CreateComAudioOptions(flatbuffers::FlatBufferBuilder&,
   flatbuffers::Offset<flatbuffers::WidgetOptions>, flatbuffers::Offset<flatbuffers::String>,
   unsigned char, unsigned char, int, flatbuffers::Offset<flatbuffers::ResourceData>) */

undefined4
flatbuffers::CreateComAudioOptions
          (FlatBufferBuilder *param_1,int param_2,int param_3,uchar param_4,uchar param_5,
          int param_6,int param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  uint local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x10);
  if (param_7 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_7) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_6c = 0xe;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_70);
      }
      else {
        *puVar2 = CONCAT26(uStack_6a,CONCAT24(0xe,local_70));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  FlatBufferBuilder::AddElement<int>(param_1,0xc,param_6,0);
  if (param_3 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_3) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_6c = 6;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_70);
      }
      else {
        *puVar2 = CONCAT26(uStack_6a,CONCAT24(6,local_70));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if (param_2 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_2) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_6c = 4;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_70);
      }
      else {
        *puVar2 = CONCAT26(uStack_6a,CONCAT24(4,local_70));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,10,param_5,'\0');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,8,param_4,'\0');
  uVar7 = FlatBufferBuilder::EndTable(param_1,(iVar3 - iVar4) + iVar5,6);
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

