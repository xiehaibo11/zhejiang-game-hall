
/* flatbuffers::CreateProjectNodeOptions(flatbuffers::FlatBufferBuilder&,
   flatbuffers::Offset<flatbuffers::WidgetOptions>, flatbuffers::Offset<flatbuffers::String>, float)
    */

undefined4
flatbuffers::CreateProjectNodeOptions
          (float param_1_00,FlatBufferBuilder *param_1,int param_3,undefined4 param_4)

{
  float fVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  float local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x10);
  if ((param_1_00 != 0.0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_50 = param_1_00;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_50,4);
    uStack_4c = 8;
    local_50 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_50);
    }
    else {
      *puVar2 = CONCAT26(uStack_4a,CONCAT24(8,local_50));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  FlatBufferBuilder::AddOffset<flatbuffers::String>(param_1,6,param_4);
  if (param_3 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    fVar1 = (float)((((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10))
                    - param_3) + 4);
    if ((fVar1 != 0.0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_50 = fVar1;
      FlatBufferBuilder::Align(param_1,4);
      FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_50,4);
      uStack_4c = 4;
      local_50 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) +
                        *(int *)(param_1 + 0x10));
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_50);
      }
      else {
        *puVar2 = CONCAT26(uStack_4a,CONCAT24(4,local_50));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  uVar7 = FlatBufferBuilder::EndTable(param_1,(iVar3 - iVar4) + iVar5,3);
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

