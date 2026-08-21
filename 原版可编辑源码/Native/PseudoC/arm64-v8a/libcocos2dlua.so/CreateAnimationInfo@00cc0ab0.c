
/* flatbuffers::CreateAnimationInfo(flatbuffers::FlatBufferBuilder&,
   flatbuffers::Offset<flatbuffers::String>, int, int) */

undefined4
flatbuffers::CreateAnimationInfo
          (FlatBufferBuilder *param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  int local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x10);
  if ((param_4 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_50 = param_4;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_50,4);
    uStack_4c = 8;
    local_50 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_50);
    }
    else {
      *puVar1 = CONCAT26(uStack_4a,CONCAT24(8,local_50));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_3 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_50 = param_3;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_50,4);
    uStack_4c = 6;
    local_50 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_50);
    }
    else {
      *puVar1 = CONCAT26(uStack_4a,CONCAT24(6,local_50));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  FlatBufferBuilder::AddOffset<flatbuffers::String>(param_1,4,param_2);
  uVar6 = FlatBufferBuilder::EndTable(param_1,(iVar2 - iVar3) + iVar4,3);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

