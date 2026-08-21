
/* v8::internal::Serializer::ObjectSerializer::VisitExternalReference(v8::internal::Code,
   v8::internal::RelocInfo*) */

void __thiscall
v8::internal::Serializer::ObjectSerializer::VisitExternalReference
          (ObjectSerializer *this,undefined8 param_2,RelocInfo *param_3)

{
  Instruction IVar1;
  undefined8 *puVar2;
  ulong uVar3;
  uchar *puVar4;
  int iVar5;
  vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> *this_00;
  undefined1 uVar6;
  undefined1 *puVar7;
  uchar local_18 [4];
  uchar local_14 [4];
  
  IVar1 = (*(Instruction **)param_3)[3];
  puVar2 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)param_3);
  if (IVar1 == (Instruction)0x58) {
    puVar2 = (undefined8 *)*puVar2;
  }
  uVar3 = ExternalReferenceEncoder::Encode
                    ((ExternalReferenceEncoder *)(*(long *)(this + 8) + 0x88),(ulong)puVar2);
  this_00 = *(vector<unsigned_char,std::__ndk1::allocator<unsigned_char>> **)(this + 0x18);
  if ((int)uVar3 < 0) {
    uVar6 = 0x20;
    local_18[0] = ' ';
    puVar7 = *(undefined1 **)(this_00 + 8);
    if (puVar7 != *(undefined1 **)(this_00 + 0x10)) goto LAB_011ee87c;
    puVar4 = local_18;
  }
  else {
    uVar6 = 0x21;
    local_14[0] = '!';
    puVar7 = *(undefined1 **)(this_00 + 8);
    if (puVar7 != *(undefined1 **)(this_00 + 0x10)) {
LAB_011ee87c:
      *puVar7 = uVar6;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 1;
      goto LAB_011ee89c;
    }
    puVar4 = local_14;
  }
  std::__ndk1::vector<unsigned_char,std::__ndk1::allocator<unsigned_char>>::
  __push_back_slow_path<unsigned_char_const&>(this_00,puVar4);
LAB_011ee89c:
  SnapshotByteSink::PutInt(*(ulong *)(this + 0x18),(char *)(uVar3 & 0x7fffffff));
  uVar3 = RelocInfo::IsCodedSpecially(param_3);
  if ((uVar3 & 1) == 0) {
    iVar5 = 4;
    if (*(char *)(*(long *)param_3 + 3) != '\x18') {
      iVar5 = 8;
    }
  }
  else {
    iVar5 = 0;
  }
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + iVar5;
  return;
}

