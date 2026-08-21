
/* flatbuffers::CreateResourceItemData(flatbuffers::FlatBufferBuilder&, int,
   flatbuffers::Offset<flatbuffers::String>) */

undefined4 flatbuffers::CreateResourceItemData(FlatBufferBuilder *param_1,int param_2,int param_3)

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
  uint local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x10);
  if (param_3 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_3) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_60 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_5c = 6;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_60);
      }
      else {
        *puVar2 = CONCAT26(uStack_5a,CONCAT24(6,local_60));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if ((param_2 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
    FlatBufferBuilder::Align(param_1,4);
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 - 4U < *(ulong *)(param_1 + 0x10)) {
      uVar10 = *(ulong *)(param_1 + 8);
      uVar11 = 4;
      if ((uVar10 >> 1 & 0x7ffffffffffffff8) != 0) {
        uVar11 = uVar10 >> 1 & 0x7ffffffffffffff8;
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
    *(long *)(param_1 + 0x18) = lVar9 + -4;
    *(int *)(lVar9 + -4) = param_2;
    uStack_5c = 4;
    local_60 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_60);
    }
    else {
      *puVar2 = CONCAT26(uStack_5a,CONCAT24(4,local_60));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  uVar7 = FlatBufferBuilder::EndTable(param_1,(iVar3 - iVar4) + iVar5,2);
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

