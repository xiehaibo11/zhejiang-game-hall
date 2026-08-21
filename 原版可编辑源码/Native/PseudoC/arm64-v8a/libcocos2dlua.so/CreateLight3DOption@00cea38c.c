
/* flatbuffers::CreateLight3DOption(flatbuffers::FlatBufferBuilder&,
   flatbuffers::Offset<flatbuffers::Node3DOption>, unsigned char, int, int, float, float, float) */

undefined4
flatbuffers::CreateLight3DOption
          (float param_1_00,float param_2,float param_3,FlatBufferBuilder *param_1,int param_5,
          char param_6,int param_7,int param_8)

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
  uint local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x10);
  FlatBufferBuilder::AddElement<float>(param_1,0x10,param_3,0.0);
  FlatBufferBuilder::AddElement<float>(param_1,0xe,param_2,0.0);
  FlatBufferBuilder::AddElement<float>(param_1,0xc,param_1_00,0.0);
  FlatBufferBuilder::AddElement<int>(param_1,10,param_8,0);
  FlatBufferBuilder::AddElement<int>(param_1,8,param_7,0);
  if (param_5 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_5) + 4;
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
  if ((param_6 != '\0') || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
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
    *(char *)(lVar9 + -1) = param_6;
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
  uVar7 = FlatBufferBuilder::EndTable(param_1,(iVar3 - iVar4) + iVar5,7);
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

