
/* void flatbuffers::FlatBufferBuilder::AddStruct<flatbuffers::ColorVector>(unsigned short,
   flatbuffers::ColorVector const*) */

void __thiscall
flatbuffers::FlatBufferBuilder::AddStruct<flatbuffers::ColorVector>
          (FlatBufferBuilder *this,ushort param_1,ColorVector *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ColorVector *pCVar3;
  int local_40;
  ushort uStack_3c;
  undefined2 uStack_3a;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_2 != (ColorVector *)0x0) {
    Align(this,4);
    pCVar3 = (ColorVector *)vector_downward::make_space((vector_downward *)(this + 8),8);
    *pCVar3 = *param_2;
    pCVar3[1] = param_2[1];
    pCVar3[2] = param_2[2];
    pCVar3[3] = param_2[3];
    pCVar3[4] = param_2[4];
    pCVar3[5] = param_2[5];
    pCVar3[6] = param_2[6];
    pCVar3[7] = param_2[7];
    local_40 = (*(int *)(this + 8) - *(int *)(this + 0x18)) + *(int *)(this + 0x10);
    puVar1 = *(undefined8 **)(this + 0x30);
    uStack_3c = param_1;
    if (puVar1 == *(undefined8 **)(this + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(this + 0x28),(FieldLoc *)&local_40);
    }
    else {
      *puVar1 = CONCAT26(uStack_3a,CONCAT24(param_1,local_40));
      *(undefined8 **)(this + 0x30) = puVar1 + 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

