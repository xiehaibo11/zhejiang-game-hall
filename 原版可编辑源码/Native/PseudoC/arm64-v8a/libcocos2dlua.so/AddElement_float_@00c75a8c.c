
/* void flatbuffers::FlatBufferBuilder::AddElement<float>(unsigned short, float, float) */

void __thiscall
flatbuffers::FlatBufferBuilder::AddElement<float>
          (FlatBufferBuilder *this,ushort param_1,float param_2,float param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  void *__dest;
  int local_60;
  ushort uStack_5c;
  undefined2 uStack_5a;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((param_2 != param_3) || (this[0x60] != (FlatBufferBuilder)0x0)) {
    Align(this,4);
    lVar4 = *(long *)(this + 0x18);
    if (lVar4 - 4U < *(ulong *)(this + 0x10)) {
      uVar5 = *(ulong *)(this + 8);
      uVar6 = 4;
      if ((uVar5 >> 1 & 0x7ffffffffffffff8) != 0) {
        uVar6 = uVar5 >> 1 & 0x7ffffffffffffff8;
      }
      *(ulong *)(this + 8) = uVar6 + uVar5;
      uVar6 = (ulong)(uint)(((int)*(ulong *)(this + 0x10) - (int)lVar4) + (int)uVar5);
      lVar3 = (**(code **)(**(long **)(this + 0x20) + 0x10))();
      __dest = (void *)((lVar3 + *(long *)(this + 8)) - uVar6);
      memcpy(__dest,*(void **)(this + 0x18),uVar6);
      *(void **)(this + 0x18) = __dest;
      (**(code **)(**(long **)(this + 0x20) + 0x18))
                (*(long **)(this + 0x20),*(undefined8 *)(this + 0x10));
      lVar4 = *(long *)(this + 0x18);
      *(long *)(this + 0x10) = lVar3;
    }
    *(long *)(this + 0x18) = lVar4 + -4;
    *(float *)(lVar4 + -4) = param_2;
    local_60 = (*(int *)(this + 8) - *(int *)(this + 0x18)) + *(int *)(this + 0x10);
    puVar1 = *(undefined8 **)(this + 0x30);
    uStack_5c = param_1;
    if (puVar1 == *(undefined8 **)(this + 0x38)) {
      std::__ndk1::
      vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
      ::__push_back_slow_path<flatbuffers::FlatBufferBuilder::FieldLoc_const&>
                ((vector<flatbuffers::FlatBufferBuilder::FieldLoc,std::__ndk1::allocator<flatbuffers::FlatBufferBuilder::FieldLoc>>
                  *)(this + 0x28),(FieldLoc *)&local_60);
    }
    else {
      *puVar1 = CONCAT26(uStack_5a,CONCAT24(param_1,local_60));
      *(undefined8 **)(this + 0x30) = puVar1 + 1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

