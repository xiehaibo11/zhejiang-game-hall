
/* flatbuffers::CreateListViewOptions(flatbuffers::FlatBufferBuilder&,
   flatbuffers::Offset<flatbuffers::WidgetOptions>, flatbuffers::Offset<flatbuffers::ResourceData>,
   unsigned char, flatbuffers::Color const*, flatbuffers::Color const*, flatbuffers::Color const*,
   int, unsigned char, flatbuffers::ColorVector const*, flatbuffers::CapInsets const*,
   flatbuffers::FlatSize const*, unsigned char, flatbuffers::FlatSize const*, int, unsigned char,
   int, flatbuffers::Offset<flatbuffers::String>, flatbuffers::Offset<flatbuffers::String>,
   flatbuffers::Offset<flatbuffers::String>) */

undefined4
flatbuffers::CreateListViewOptions
          (FlatBufferBuilder *param_1,int param_2,int param_3,uchar param_4,Color *param_5,
          Color *param_6,Color *param_7,int param_8,uchar param_9,ColorVector *param_10,
          CapInsets *param_11,FlatSize *param_12,uchar param_13,FlatSize *param_14,int param_15,
          uchar param_16,int param_17,int param_18,int param_19,int param_20)

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
  if (param_20 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_20) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_6c = 0x28;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_70);
      }
      else {
        *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x28,local_70));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if (param_19 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_19) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_6c = 0x26;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_70);
      }
      else {
        *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x26,local_70));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if (param_18 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_18) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_6c = 0x24;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_70);
      }
      else {
        *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x24,local_70));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  FlatBufferBuilder::AddElement<int>(param_1,0x22,param_17,0);
  FlatBufferBuilder::AddElement<int>(param_1,0x1e,param_15,0);
  FlatBufferBuilder::AddStruct<flatbuffers::FlatSize>(param_1,0x1c,param_14);
  FlatBufferBuilder::AddStruct<flatbuffers::FlatSize>(param_1,0x18,param_12);
  FlatBufferBuilder::AddStruct<flatbuffers::CapInsets>(param_1,0x16,param_11);
  FlatBufferBuilder::AddStruct<flatbuffers::ColorVector>(param_1,0x14,param_10);
  FlatBufferBuilder::AddElement<int>(param_1,0x10,param_8,0);
  FlatBufferBuilder::AddStruct<flatbuffers::Color>(param_1,0xe,param_7);
  FlatBufferBuilder::AddStruct<flatbuffers::Color>(param_1,0xc,param_6);
  FlatBufferBuilder::AddStruct<flatbuffers::Color>(param_1,10,param_5);
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
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x20,param_16,'\0');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x1a,param_13,'\0');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x12,param_9,0xff);
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,8,param_4,'\0');
  uVar7 = FlatBufferBuilder::EndTable(param_1,(iVar3 - iVar4) + iVar5,0x13);
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

