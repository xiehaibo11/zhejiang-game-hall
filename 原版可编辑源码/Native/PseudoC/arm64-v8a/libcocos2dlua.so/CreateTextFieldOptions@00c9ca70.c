
/* flatbuffers::CreateTextFieldOptions(flatbuffers::FlatBufferBuilder&,
   flatbuffers::Offset<flatbuffers::WidgetOptions>, flatbuffers::Offset<flatbuffers::ResourceData>,
   flatbuffers::Offset<flatbuffers::String>, int, flatbuffers::Offset<flatbuffers::String>,
   flatbuffers::Offset<flatbuffers::String>, unsigned char,
   flatbuffers::Offset<flatbuffers::String>, unsigned char, int, int, int, unsigned char, unsigned
   char) */

undefined4
flatbuffers::CreateTextFieldOptions
          (FlatBufferBuilder *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
          int param_7,uchar param_8,int param_9,uchar param_10,int param_11,int param_12,
          int param_13,uchar param_14,uchar param_15)

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
  iVar3 = *(int *)(param_1 + 0x10);
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0x18);
  FlatBufferBuilder::AddElement<int>(param_1,0x1a,param_13,0);
  FlatBufferBuilder::AddElement<int>(param_1,0x18,param_12,0);
  FlatBufferBuilder::AddElement<int>(param_1,0x16,param_11,0);
  if (param_9 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_9) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_6c = 0x12;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_70);
      }
      else {
        *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x12,local_70));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
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
  if (param_6 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_6) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_6c = 0xc;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_70);
      }
      else {
        *puVar2 = CONCAT26(uStack_6a,CONCAT24(0xc,local_70));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  FlatBufferBuilder::AddElement<int>(param_1,10,param_5,0);
  if (param_4 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_4) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_6c = 8;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_70);
      }
      else {
        *puVar2 = CONCAT26(uStack_6a,CONCAT24(8,local_70));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
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
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x1e,param_15,'\0');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x1c,param_14,'\0');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x14,param_10,'\0');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x10,param_8,'\0');
  uVar7 = FlatBufferBuilder::EndTable(param_1,(iVar4 - iVar5) + iVar3,0xe);
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

