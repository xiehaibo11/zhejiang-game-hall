
/* WARNING: Type propagation algorithm not settling */
/* flatbuffers::CreateWidgetOptions(flatbuffers::FlatBufferBuilder&,
   flatbuffers::Offset<flatbuffers::String>, int, flatbuffers::RotationSkew const*, int, unsigned
   char, unsigned char, int, flatbuffers::Position const*, flatbuffers::Scale const*,
   flatbuffers::AnchorPoint const*, flatbuffers::Color const*, flatbuffers::FlatSize const*,
   unsigned char, unsigned char, unsigned char, unsigned char,
   flatbuffers::Offset<flatbuffers::String>, flatbuffers::Offset<flatbuffers::String>,
   flatbuffers::Offset<flatbuffers::String>, flatbuffers::Offset<flatbuffers::String>,
   flatbuffers::Offset<flatbuffers::LayoutComponentTable>) */

undefined4
flatbuffers::CreateWidgetOptions
          (FlatBufferBuilder *param_1,undefined4 param_2,int param_3,uchar *param_4,int param_5,
          char param_6,char param_7,int param_8,uchar *param_9,uchar *param_10,uchar *param_11,
          uchar *param_12,uchar *param_13,char param_14,char param_15,char param_16,char param_17,
          undefined4 param_18,undefined4 param_19,undefined4 param_20,undefined4 param_21,
          int param_22)

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
  if (param_22 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    iVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_22) + 4;
    if ((iVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_70 = iVar1;
      FlatBufferBuilder::Align(param_1,4);
      FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,4);
      uStack_6c = 0x2c;
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
        *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x2c,local_70));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  FlatBufferBuilder::AddOffset<flatbuffers::String>(param_1,0x2a,param_21);
  FlatBufferBuilder::AddOffset<flatbuffers::String>(param_1,0x28,param_20);
  FlatBufferBuilder::AddOffset<flatbuffers::String>(param_1,0x26,param_19);
  FlatBufferBuilder::AddOffset<flatbuffers::String>(param_1,0x24,param_18);
  if (param_13 != (uchar *)0x0) {
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,param_13,8);
    uStack_6c = 0x1a;
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
      *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x1a,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  if (param_12 != (uchar *)0x0) {
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,param_12,4);
    uStack_6c = 0x18;
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
      *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x18,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  if (param_11 != (uchar *)0x0) {
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,param_11,8);
    uStack_6c = 0x16;
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
      *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x16,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  if (param_10 != (uchar *)0x0) {
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,param_10,8);
    uStack_6c = 0x14;
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
      *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x14,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  if (param_9 != (uchar *)0x0) {
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,param_9,8);
    uStack_6c = 0x12;
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
      *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x12,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  if ((param_8 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = param_8;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,4);
    uStack_6c = 0x10;
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
      *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x10,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  if ((param_5 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = param_5;
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
  if (param_4 != (uchar *)0x0) {
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,param_4,8);
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
  if ((param_3 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = param_3;
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
  FlatBufferBuilder::AddOffset<flatbuffers::String>(param_1,4,param_2);
  if ((param_17 != '\0') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = CONCAT31(local_70._1_3_,param_17);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,1);
    uStack_6c = 0x22;
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
      *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x22,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  if ((param_16 != '\0') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = CONCAT31(local_70._1_3_,param_16);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,1);
    uStack_6c = 0x20;
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
      *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x20,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  if ((param_15 != '\0') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = CONCAT31(local_70._1_3_,param_15);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,1);
    uStack_6c = 0x1e;
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
      *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x1e,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  if ((param_14 != '\0') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = CONCAT31(local_70._1_3_,param_14);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,1);
    uStack_6c = 0x1c;
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
      *puVar2 = CONCAT26(uStack_6a,CONCAT24(0x1c,local_70));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  if ((param_7 != -1) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = CONCAT31(local_70._1_3_,param_7);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,1);
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
  if ((param_6 != '\x01') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_70 = CONCAT31(local_70._1_3_,param_6);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_70,1);
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
  uVar7 = FlatBufferBuilder::EndTable(param_1,(iVar3 - iVar4) + iVar5,0x15);
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

