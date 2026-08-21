
/* v8::internal::Serializer::ObjectSerializer::OutputCode(int) */

void __thiscall
v8::internal::Serializer::ObjectSerializer::OutputCode(ObjectSerializer *this,int param_1)

{
  ulong uVar1;
  Instruction *this_00;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  ulong uVar5;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *pvVar6;
  long lVar7;
  RelocIterator local_80 [16];
  Instruction *local_70;
  char local_68;
  char local_48;
  
  uVar1 = *(ulong *)(this + 0x10);
  pvVar6 = (vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *)
           (*(long *)(this + 8) + 0xa0);
  *(undefined8 *)(*(long *)(this + 8) + 0xa8) = *(undefined8 *)pvVar6;
  iVar4 = *(int *)(uVar1 + 0x13);
  if ((*(byte *)(uVar1 + 0x17) & 1) != 0) {
    uVar5 = (long)(iVar4 + 0x47) & 0xfffffffffffffff8;
    iVar4 = (int)uVar5 + *(int *)((uVar1 - 1) + uVar5) + -0x38;
  }
  std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::insert<unsigned_char*>
            (pvVar6,*(undefined8 *)pvVar6,uVar1 - 1,
             (uVar1 - 1) + (long)(int)((iVar4 + 3U & 0xfffffffc) + 0x5f & 0xffffffe0));
  lVar7 = *(long *)pvVar6;
  RelocIterator::RelocIterator
            (local_80,lVar7 + 1,uVar1 & 0xffffffff00000000 | (ulong)*(uint *)(uVar1 + 3),0x7cd);
  this_00 = local_70;
  do {
    if (local_48 != '\0') {
      *(undefined4 *)(lVar7 + 4) = 0;
      *(undefined4 *)(lVar7 + 8) = 0;
      *(undefined4 *)(lVar7 + 0xc) = 0;
      *(undefined4 *)(lVar7 + 0x10) = 0;
      pvVar6 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
      local_80[0] = (RelocIterator)0x1e;
      if (*(undefined1 **)(pvVar6 + 8) == *(undefined1 **)(pvVar6 + 0x10)) {
        std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
        __push_back_slow_path<unsigned_char_const&>(pvVar6,(uchar *)local_80);
      }
      else {
        **(undefined1 **)(pvVar6 + 8) = 0x1e;
        *(long *)(pvVar6 + 8) = *(long *)(pvVar6 + 8) + 1;
      }
      SnapshotByteSink::PutInt(*(ulong *)(this + 0x18),(char *)(long)(int)(param_1 - 0x14U));
      SnapshotByteSink::PutRaw
                (*(uchar **)(this + 0x18),(int)lVar7 + 0x14,(char *)(ulong)(param_1 - 0x14U));
      return;
    }
    local_70 = this_00;
    if (local_68 == '\b') {
      *(undefined8 *)this_00 = 0;
    }
    else if (local_68 == '\x02') {
      if (this_00[3] != (Instruction)0x18) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
      }
      puVar2 = (undefined4 *)Instruction::ImmPCOffsetTarget(this_00);
      *puVar2 = 0;
    }
    else if (this_00[3] == (Instruction)0x58) {
      puVar3 = (undefined8 *)Instruction::ImmPCOffsetTarget(this_00);
      *puVar3 = 0;
    }
    else {
      Instruction::SetBranchImmTarget(this_00,this_00);
      FlushInstructionCache(this_00,4);
    }
    RelocIterator::next(local_80);
    this_00 = local_70;
  } while( true );
}

