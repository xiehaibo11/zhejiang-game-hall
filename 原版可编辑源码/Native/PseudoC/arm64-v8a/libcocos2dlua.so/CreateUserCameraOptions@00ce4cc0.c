
/* WARNING: Type propagation algorithm not settling */
/* flatbuffers::CreateUserCameraOptions(flatbuffers::FlatBufferBuilder&,
   flatbuffers::Offset<flatbuffers::Node3DOption>, float, float, float, int, unsigned char,
   flatbuffers::Offset<flatbuffers::ResourceData>, flatbuffers::Offset<flatbuffers::ResourceData>,
   flatbuffers::Offset<flatbuffers::ResourceData>, flatbuffers::Offset<flatbuffers::ResourceData>,
   flatbuffers::Offset<flatbuffers::ResourceData>, flatbuffers::Offset<flatbuffers::ResourceData>)
    */

undefined4
flatbuffers::CreateUserCameraOptions
          (float param_1_00,float param_2,float param_3,FlatBufferBuilder *param_1,int param_5,
          int param_6,char param_7,int param_8,int param_9,int param_10,int param_11,int param_12,
          int param_13)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  void *__dest;
  uint local_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x10);
  if (param_13 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_13) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_90 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_8c = 0x1a;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_90);
      }
      else {
        *puVar2 = CONCAT26(uStack_8a,CONCAT24(0x1a,local_90));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if (param_12 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_12) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_90 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_8c = 0x18;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_90);
      }
      else {
        *puVar2 = CONCAT26(uStack_8a,CONCAT24(0x18,local_90));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if (param_11 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_11) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_90 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_8c = 0x16;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_90);
      }
      else {
        *puVar2 = CONCAT26(uStack_8a,CONCAT24(0x16,local_90));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if (param_10 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_10) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_90 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_8c = 0x14;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_90);
      }
      else {
        *puVar2 = CONCAT26(uStack_8a,CONCAT24(0x14,local_90));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if (param_9 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_9) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_90 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_8c = 0x12;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_90);
      }
      else {
        *puVar2 = CONCAT26(uStack_8a,CONCAT24(0x12,local_90));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if (param_8 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_8) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_90 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_8c = 0x10;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_90);
      }
      else {
        *puVar2 = CONCAT26(uStack_8a,CONCAT24(0x10,local_90));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  FlatBufferBuilder::AddElement<int>(param_1,0xc,param_6,0);
  FlatBufferBuilder::AddElement<float>(param_1,10,param_3,1000.0);
  FlatBufferBuilder::AddElement<float>(param_1,8,param_2,1.0);
  FlatBufferBuilder::AddElement<float>(param_1,6,param_1_00,60.0);
  if (param_5 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_5) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_90 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_8c = 4;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_90);
      }
      else {
        *puVar2 = CONCAT26(uStack_8a,CONCAT24(4,local_90));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if ((param_7 != '\0') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    FlatBufferBuilder::Align(param_1,1);
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 - 1U < *(ulong *)(param_1 + 0x10)) {
      uVar10 = *(ulong *)(param_1 + 8);
      uVar11 = uVar10 >> 1 & 0x7ffffffffffffff8;
      if ((uVar10 >> 1 & 0x7ffffffffffffff8) == 0) {
        uVar11 = 1;
      }
      *(ulong *)(param_1 + 8) = uVar11 + uVar10;
      uVar11 = (ulong)(uint)(((int)*(ulong *)(param_1 + 0x10) - (int)lVar9) + (int)uVar10);
      lVar8 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))();
      __dest = (void *)((lVar8 + *(long *)(param_1 + 8)) - uVar11);
      memcpy(__dest,*(void **)(param_1 + 0x18),uVar11);
      *(void **)(param_1 + 0x18) = __dest;
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))
                (*(long **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10));
      lVar9 = *(long *)(param_1 + 0x18);
      *(long *)(param_1 + 0x10) = lVar8;
    }
    *(long *)(param_1 + 0x18) = lVar9 + -1;
    *(char *)(lVar9 + -1) = param_7;
    uStack_8c = 0xe;
    local_90 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_90);
    }
    else {
      *puVar2 = CONCAT26(uStack_8a,CONCAT24(0xe,local_90));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  uVar7 = FlatBufferBuilder::EndTable(param_1,(iVar3 - iVar4) + iVar5,0xc);
  if (*(long *)(lVar6 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

