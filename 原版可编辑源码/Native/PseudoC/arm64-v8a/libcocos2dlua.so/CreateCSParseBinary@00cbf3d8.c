
/* WARNING: Type propagation algorithm not settling */
/* flatbuffers::CreateCSParseBinary(flatbuffers::FlatBufferBuilder&,
   flatbuffers::Offset<flatbuffers::String>,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String> > >,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String> > >,
   flatbuffers::Offset<flatbuffers::NodeTree>, flatbuffers::Offset<flatbuffers::NodeAction>,
   flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::AnimationInfo> > >) */

undefined4
flatbuffers::CreateCSParseBinary
          (FlatBufferBuilder *param_1,undefined4 param_2,int param_3,int param_4,int param_5,
          int param_6,int param_7)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  int local_70;
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
    iVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_7) + 4;
    if ((iVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = iVar1;
      FlatBufferBuilder::Align(param_1,4);
      FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,4);
      uStack_6c = 0xe;
      local_70 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
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
    iVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_6) + 4;
    if ((iVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = iVar1;
      FlatBufferBuilder::Align(param_1,4);
      FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,4);
      uStack_6c = 0xc;
      local_70 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
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
  if (param_5 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    iVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_5) + 4;
    if ((iVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = iVar1;
      FlatBufferBuilder::Align(param_1,4);
      FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,4);
      uStack_6c = 10;
      local_70 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_70);
      }
      else {
        *puVar2 = CONCAT26(uStack_6a,CONCAT24(10,local_70));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if (param_4 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    iVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_4) + 4;
    if ((iVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = iVar1;
      FlatBufferBuilder::Align(param_1,4);
      FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,4);
      uStack_6c = 8;
      local_70 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
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
    iVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_3) + 4;
    if ((iVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = iVar1;
      FlatBufferBuilder::Align(param_1,4);
      FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,4);
      uStack_6c = 6;
      local_70 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
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
  FlatBufferBuilder::AddOffset<flatbuffers::String>(param_1,4,param_2);
  uVar7 = FlatBufferBuilder::EndTable(param_1,(iVar3 - iVar4) + iVar5,6);
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

