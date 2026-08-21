
/* flatbuffers::CreateTextOptions(flatbuffers::FlatBufferBuilder&,
   flatbuffers::Offset<flatbuffers::WidgetOptions>, flatbuffers::Offset<flatbuffers::ResourceData>,
   flatbuffers::Offset<flatbuffers::String>, int, flatbuffers::Offset<flatbuffers::String>, int,
   int, int, int, unsigned char, unsigned char, unsigned char, flatbuffers::Color const*, int,
   unsigned char, flatbuffers::Color const*, float, float, int, unsigned char) */

undefined4
flatbuffers::CreateTextOptions
          (float param_1_00,float param_2,FlatBufferBuilder *param_1,int param_4,int param_5,
          int param_6,int param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
          uchar param_13,uchar param_14,uchar param_15,Color *param_16,int param_17,uchar param_18,
          Color *param_19,int param_20,uchar param_21)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  uint local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x10);
  FlatBufferBuilder::AddElement<int>(param_1,0x28,param_20,0);
  FlatBufferBuilder::AddElement<float>(param_1,0x26,param_2,-2.0);
  FlatBufferBuilder::AddElement<float>(param_1,0x24,param_1_00,2.0);
  FlatBufferBuilder::AddStruct<flatbuffers::Color>(param_1,0x22,param_19);
  FlatBufferBuilder::AddElement<int>(param_1,0x1e,param_17,1);
  FlatBufferBuilder::AddStruct<flatbuffers::Color>(param_1,0x1c,param_16);
  FlatBufferBuilder::AddElement<int>(param_1,0x14,param_12,0);
  FlatBufferBuilder::AddElement<int>(param_1,0x12,param_11,0);
  FlatBufferBuilder::AddElement<int>(param_1,0x10,param_10,0);
  FlatBufferBuilder::AddElement<int>(param_1,0xe,param_9,0);
  if (param_8 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_8) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_80 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_7c = 0xc;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_80);
      }
      else {
        *puVar2 = CONCAT26(uStack_7a,CONCAT24(0xc,local_80));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  FlatBufferBuilder::AddElement<int>(param_1,10,param_7,0);
  if (param_6 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_6) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_80 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_7c = 8;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_80);
      }
      else {
        *puVar2 = CONCAT26(uStack_7a,CONCAT24(8,local_80));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if (param_5 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_5) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_80 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_7c = 6;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_80);
      }
      else {
        *puVar2 = CONCAT26(uStack_7a,CONCAT24(6,local_80));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if (param_4 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_4) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_80 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_7c = 4;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_80);
      }
      else {
        *puVar2 = CONCAT26(uStack_7a,CONCAT24(4,local_80));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x2a,param_21,'\0');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x20,param_18,'\0');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x1a,param_15,'\0');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x18,param_14,'\0');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x16,param_13,'\0');
  uVar7 = FlatBufferBuilder::EndTable(param_1,(iVar3 - iVar4) + iVar5,0x14);
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

