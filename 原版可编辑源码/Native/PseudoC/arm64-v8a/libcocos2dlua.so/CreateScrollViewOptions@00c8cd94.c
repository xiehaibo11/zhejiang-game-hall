
/* flatbuffers::CreateScrollViewOptions(flatbuffers::FlatBufferBuilder&,
   flatbuffers::Offset<flatbuffers::WidgetOptions>, flatbuffers::Offset<flatbuffers::ResourceData>,
   unsigned char, flatbuffers::Color const*, flatbuffers::Color const*, flatbuffers::Color const*,
   int, unsigned char, flatbuffers::ColorVector const*, flatbuffers::CapInsets const*,
   flatbuffers::FlatSize const*, unsigned char, flatbuffers::FlatSize const*, int, unsigned char,
   unsigned char, unsigned char, float) */

undefined4
flatbuffers::CreateScrollViewOptions
          (float param_1_00,FlatBufferBuilder *param_1,int param_3,int param_4,uchar param_5,
          Color *param_6,Color *param_7,Color *param_8,int param_9,uchar param_10,
          ColorVector *param_11,CapInsets *param_12,FlatSize *param_13,uchar param_14,
          FlatSize *param_15,int param_16,uchar param_17,uchar param_18,uchar param_19)

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
  uint local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  iVar3 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(param_1 + 0x10);
  if ((param_1_00 != 0.2) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
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
    *(float *)(lVar9 + -4) = param_1_00;
    uStack_7c = 0x26;
    local_80 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10);
    puVar2 = *(undefined8 **)(param_1 + 0x30);
    if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(param_1 + 0x28),(FieldLoc *)&local_80);
    }
    else {
      *puVar2 = CONCAT26(uStack_7a,CONCAT24(0x26,local_80));
      *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
    }
  }
  FlatBufferBuilder::AddElement<int>(param_1,0x1e,param_16,0);
  FlatBufferBuilder::AddStruct<flatbuffers::FlatSize>(param_1,0x1c,param_15);
  FlatBufferBuilder::AddStruct<flatbuffers::FlatSize>(param_1,0x18,param_13);
  FlatBufferBuilder::AddStruct<flatbuffers::CapInsets>(param_1,0x16,param_12);
  FlatBufferBuilder::AddStruct<flatbuffers::ColorVector>(param_1,0x14,param_11);
  FlatBufferBuilder::AddElement<int>(param_1,0x10,param_9,0);
  FlatBufferBuilder::AddStruct<flatbuffers::Color>(param_1,0xe,param_8);
  FlatBufferBuilder::AddStruct<flatbuffers::Color>(param_1,0xc,param_7);
  FlatBufferBuilder::AddStruct<flatbuffers::Color>(param_1,10,param_6);
  if (param_4 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_4) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_80 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_7c = 6;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_80);
      }
      else {
        *puVar2 = CONCAT26(uStack_7a,CONCAT24(6,local_80));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  if (param_3 != 0) {
    FlatBufferBuilder::Align(param_1,4);
    uVar1 = (((*(int *)(param_1 + 8) - *(int *)(param_1 + 0x18)) + *(int *)(param_1 + 0x10)) -
            param_3) + 4;
    if ((uVar1 != 0) || (param_1[0x60] != (FlatBufferBuilder)0x0)) {
      local_80 = FlatBufferBuilder::PushElement<unsigned_int>(param_1,uVar1);
      uStack_7c = 4;
      puVar2 = *(undefined8 **)(param_1 + 0x30);
      if (puVar2 == *(undefined8 **)(param_1 + 0x38)) {
        std::__ndk1::
        vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
        ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                  ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                    *)(param_1 + 0x28),(FieldLoc *)&local_80);
      }
      else {
        *puVar2 = CONCAT26(uStack_7a,CONCAT24(4,local_80));
        *(undefined8 **)(param_1 + 0x30) = puVar2 + 1;
      }
    }
  }
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x24,param_19,'\x01');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x22,param_18,'\x01');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x20,param_17,'\0');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x1a,param_14,'\0');
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,0x12,param_10,0xff);
  FlatBufferBuilder::AddElement<unsigned_char>(param_1,8,param_5,'\0');
  uVar7 = FlatBufferBuilder::EndTable(param_1,(iVar3 - iVar4) + iVar5,0x12);
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}

