
/* WARNING: Type propagation algorithm not settling */
/* flatbuffers::CreateNode3DOption(flatbuffers::FlatBufferBuilder&,
   flatbuffers::Offset<flatbuffers::WidgetOptions>, flatbuffers::Vector3 const*,
   flatbuffers::Vector3 const*, flatbuffers::Vector3 const*, int) */

undefined4
flatbuffers::CreateNode3DOption
          (FlatBufferBuilder *param_1,int param_2,uchar *param_3,uchar *param_4,uchar *param_5,
          int param_6)

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
  if ((param_6 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = param_6;
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
  if (param_5 != (uchar *)0x0) {
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,param_5,0xc);
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
  if (param_4 != (uchar *)0x0) {
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,param_4,0xc);
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
  if (param_3 != (uchar *)0x0) {
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,param_3,0xc);
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
  if (param_2 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    iVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_2) + 4;
    if ((iVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = iVar1;
      FlatBufferBuilder::Align(param_1,4);
      FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,4);
      uStack_6c = 4;
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
        *puVar2 = CONCAT26(uStack_6a,CONCAT24(4,local_70));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  uVar7 = FlatBufferBuilder::EndTable(param_1,(iVar3 - iVar4) + iVar5,5);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

