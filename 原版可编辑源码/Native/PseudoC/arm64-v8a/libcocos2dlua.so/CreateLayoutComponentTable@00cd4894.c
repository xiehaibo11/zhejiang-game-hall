
/* WARNING: Type propagation algorithm not settling */
/* flatbuffers::CreateLayoutComponentTable(flatbuffers::FlatBufferBuilder&, unsigned char, unsigned
   char, float, float, unsigned char, unsigned char, float, float, unsigned char, unsigned char,
   flatbuffers::Offset<flatbuffers::String>, flatbuffers::Offset<flatbuffers::String>, float, float,
   float, float) */

undefined4
flatbuffers::CreateLayoutComponentTable
          (float param_4,float param_5,float param_8,float param_9,float param_5_00,float param_6_00
          ,float param_7_00,float param_8_00,FlatBufferBuilder *param_1,char param_2,char param_3,
          char param_6,char param_7,char param_10,char param_11,undefined4 param_16,
          undefined4 param_17)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 uVar6;
  float local_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  long local_a8;
  
  lVar5 = tpidr_el0;
  local_a8 = *(long *)(lVar5 + 0x28);
  iVar2 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x10);
  if ((param_8_00 != 0.0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0 = param_8_00;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,4);
    uStack_ac = 0x22;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(0x22,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_7_00 != 0.0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0 = param_7_00;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,4);
    uStack_ac = 0x20;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(0x20,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_6_00 != 0.0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0 = param_6_00;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,4);
    uStack_ac = 0x1e;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(0x1e,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_5_00 != 0.0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0 = param_5_00;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,4);
    uStack_ac = 0x1c;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(0x1c,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  FlatBufferBuilder::AddOffset<flatbuffers::String>(param_1,0x1a,param_17);
  FlatBufferBuilder::AddOffset<flatbuffers::String>(param_1,0x18,param_16);
  if ((param_9 != 0.0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0 = param_9;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,4);
    uStack_ac = 0x12;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(0x12,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_8 != 0.0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0 = param_8;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,4);
    uStack_ac = 0x10;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(0x10,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_5 != 0.0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0 = param_5;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,4);
    uStack_ac = 10;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(10,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_4 != 0.0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0 = param_4;
    FlatBufferBuilder::Align(param_1,4);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,4);
    uStack_ac = 8;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(8,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_11 != '\0') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0._1_3_ = (undefined3)((uint)local_b0 >> 8);
    local_b0 = (float)CONCAT31(local_b0._1_3_,param_11);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,1);
    uStack_ac = 0x16;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(0x16,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_10 != '\0') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0._1_3_ = (undefined3)((uint)local_b0 >> 8);
    local_b0 = (float)CONCAT31(local_b0._1_3_,param_10);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,1);
    uStack_ac = 0x14;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(0x14,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_7 != '\0') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0._1_3_ = (undefined3)((uint)local_b0 >> 8);
    local_b0 = (float)CONCAT31(local_b0._1_3_,param_7);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,1);
    uStack_ac = 0xe;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(0xe,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_6 != '\0') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0 = (float)CONCAT31(local_b0._1_3_,param_6);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,1);
    uStack_ac = 0xc;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(0xc,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_3 != '\0') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0 = (float)CONCAT31(local_b0._1_3_,param_3);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,1);
    uStack_ac = 6;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(6,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  if ((param_2 != '\0') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    local_b0._1_3_ = (undefined3)((uint)local_b0 >> 8);
    local_b0 = (float)CONCAT31(local_b0._1_3_,param_2);
    FlatBufferBuilder::Align(param_1,1);
    FlatBufferBuilder::PushBytes(param_1,(uchar *)&local_b0,1);
    uStack_ac = 4;
    local_b0 = (float)((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)
                      );
    puVar1 = *(undefined8 **)(param_1 + 0x30);
    if (puVar1 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_b0);
    }
    else {
      *puVar1 = CONCAT26(uStack_aa,CONCAT24(4,local_b0));
      *(undefined8 **)(param_1 + 0x30) = puVar1 + 1;
    }
  }
  uVar6 = FlatBufferBuilder::EndTable(param_1,(iVar2 - iVar3) + iVar4,0x10);
  if (*(long *)(lVar5 + 0x28) != local_a8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}

