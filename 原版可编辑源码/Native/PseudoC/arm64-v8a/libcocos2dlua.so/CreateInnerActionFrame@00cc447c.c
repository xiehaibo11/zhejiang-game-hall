
/* flatbuffers::CreateInnerActionFrame(flatbuffers::FlatBufferBuilder&, int, unsigned char, int,
   flatbuffers::Offset<flatbuffers::String>, int, flatbuffers::Offset<flatbuffers::EasingData>) */

undefined4
flatbuffers::CreateInnerActionFrame
          (FlatBufferBuilder *param_1,int param_2,char param_3,int param_4,undefined4 param_5,
          int param_6,undefined4 param_7)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  int local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x10);
  FlatBufferBuilder::AddOffset<flatbuffers::EasingData>(param_1,0xe,param_7);
  if ((param_6 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = param_6;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,4);
    uStack_6c = 0xc;
    local_70 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_70);
    }
    else {
      *puVar1 = CONCAT26(uStack_6a,CONCAT24(0xc,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  FlatBufferBuilder::AddOffset<flatbuffers::String>(param_1,10,param_5);
  if ((param_4 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = param_4;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,4);
    uStack_6c = 8;
    local_70 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_70);
    }
    else {
      *puVar1 = CONCAT26(uStack_6a,CONCAT24(8,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_2 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = param_2;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,4);
    uStack_6c = 4;
    local_70 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_70);
    }
    else {
      *puVar1 = CONCAT26(uStack_6a,CONCAT24(4,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_3 != '\x01') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = CONCAT31(local_70._1_3_,param_3);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,1);
    uStack_6c = 6;
    local_70 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_70);
    }
    else {
      *puVar1 = CONCAT26(uStack_6a,CONCAT24(6,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  uVar6 = FlatBufferBuilder::EndTable(param_1,(iVar2 - iVar3) + iVar4,6);
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

