
/* v8::internal::RelocInfo::Print(v8::internal::Isolate*, std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::RelocInfo::Print(RelocInfo *this,Isolate *param_1,basic_ostream *param_2)

{
  RelocInfo RVar1;
  Instruction IVar2;
  basic_ostream *pbVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  char *pcVar8;
  uint *puVar9;
  Instruction *pIVar10;
  long lVar11;
  ulong *local_48;
  
  pbVar3 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_2,*(void **)this);
  pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,"  ",2)
  ;
  pcVar8 = "no reloc";
  switch(this[8]) {
  case (RelocInfo)0x0:
    pcVar8 = "code target";
    break;
  case (RelocInfo)0x1:
    pcVar8 = "relative code target";
    break;
  case (RelocInfo)0x2:
    pcVar8 = "compressed embedded object";
    break;
  case (RelocInfo)0x3:
    pcVar8 = "full embedded object";
    break;
  case (RelocInfo)0x4:
    pcVar8 = "internal wasm call";
    break;
  case (RelocInfo)0x5:
    pcVar8 = "wasm stub call";
    break;
  case (RelocInfo)0x6:
    pcVar8 = "runtime entry";
    break;
  case (RelocInfo)0x7:
    pcVar8 = "external reference";
    break;
  case (RelocInfo)0x8:
    pcVar8 = "internal reference";
    break;
  case (RelocInfo)0x9:
    pcVar8 = "encoded internal reference";
    break;
  case (RelocInfo)0xa:
    pcVar8 = "off heap target";
    break;
  case (RelocInfo)0xb:
    pcVar8 = "constant pool";
    break;
  case (RelocInfo)0xc:
    pcVar8 = "veneer pool";
    break;
  case (RelocInfo)0xd:
    pcVar8 = "deopt script offset";
    break;
  case (RelocInfo)0xe:
    pcVar8 = "deopt inlining id";
    break;
  case (RelocInfo)0xf:
    pcVar8 = "deopt reason";
    break;
  case (RelocInfo)0x10:
    pcVar8 = "deopt index";
    break;
  case (RelocInfo)0x11:
  case (RelocInfo)0x12:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case (RelocInfo)0x13:
    break;
  default:
    pcVar8 = "unknown relocation type";
  }
  sVar4 = strlen(pcVar8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,pcVar8,sVar4);
  RVar1 = this[8];
  switch(RVar1) {
  case (RelocInfo)0x2:
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"  (",3);
    pIVar10 = *(Instruction **)this;
    if (this[8] == (RelocInfo)0x2) {
      if (pIVar10[3] != (Instruction)0x18) {
LAB_014e524c:
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","instr->IsLdrLiteralW()");
      }
      lVar11 = *(long *)(this + 0x18);
      puVar9 = (uint *)Instruction::ImmPCOffsetTarget(pIVar10);
      local_48 = (ulong *)(lVar11 - 1U & 0xffffffff00000000 | (ulong)*puVar9);
    }
    else {
      IVar2 = pIVar10[3];
      local_48 = (ulong *)Instruction::ImmPCOffsetTarget(pIVar10);
      if (IVar2 == (Instruction)0x58) {
        local_48 = (ulong *)*local_48;
      }
    }
    pbVar3 = (basic_ostream *)internal::operator<<(pbVar3,(Brief *)&local_48);
    pcVar8 = " compressed)";
    uVar7 = 0xc;
    goto LAB_014e51f0;
  case (RelocInfo)0x3:
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"  (",3);
    pIVar10 = *(Instruction **)this;
    if (this[8] == (RelocInfo)0x2) {
      if (pIVar10[3] != (Instruction)0x18) goto LAB_014e524c;
      lVar11 = *(long *)(this + 0x18);
      puVar9 = (uint *)Instruction::ImmPCOffsetTarget(pIVar10);
      local_48 = (ulong *)(lVar11 - 1U & 0xffffffff00000000 | (ulong)*puVar9);
    }
    else {
      IVar2 = pIVar10[3];
      local_48 = (ulong *)Instruction::ImmPCOffsetTarget(pIVar10);
      if (IVar2 == (Instruction)0x58) {
        local_48 = (ulong *)*local_48;
      }
    }
    pbVar3 = (basic_ostream *)internal::operator<<(pbVar3,(Brief *)&local_48);
    break;
  default:
    if ((char)RVar1 < '\x02') {
      IVar2 = (*(Instruction **)this)[3];
      puVar5 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)this);
      if (IVar2 == (Instruction)0x58) {
        puVar5 = (undefined8 *)*puVar5;
      }
      puVar6 = (undefined8 *)Isolate::CurrentEmbeddedBlob();
      uVar7 = Isolate::CurrentEmbeddedBlobSize();
      if ((puVar6 <= puVar5) && (puVar5 < (undefined8 *)((long)puVar6 + (uVar7 & 0xffffffff)))) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","address < start || address >= end");
      }
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_2," (",2);
      pcVar8 = (char *)Code::Kind2String(*(uint *)(puVar5 + -5) >> 1 & 0x1f);
      sVar4 = strlen(pcVar8);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar3,pcVar8,sVar4);
      uVar7 = Builtins::IsBuiltin((long)puVar5 + -0x3f);
      if ((uVar7 & 1) != 0) {
        pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_2," ",1);
        pcVar8 = (char *)Builtins::name(*(int *)(puVar5 + -3));
        sVar4 = strlen(pcVar8);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                  (pbVar3,pcVar8,sVar4);
      }
      pcVar8 = ")  (";
      uVar7 = 4;
      goto LAB_014e5010;
    }
    if (RVar1 == (RelocInfo)0xb) {
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_2," (size ",7);
      pbVar3 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                          *(int *)(this + 0x10));
      break;
    }
    if ((RVar1 != (RelocInfo)0x6) || (*(long *)(param_1 + 0x9570) == 0)) goto LAB_014e51f4;
    IVar2 = (*(Instruction **)this)[3];
    puVar5 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)this);
    if (IVar2 == (Instruction)0x58) {
      puVar5 = (undefined8 *)*puVar5;
    }
    uVar7 = Deoptimizer::IsDeoptimizationEntry(param_1,(ulong)puVar5,(DeoptimizeKind *)&local_48);
    if ((uVar7 & 1) == 0) goto LAB_014e51f4;
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"  (",3);
    pcVar8 = (char *)Deoptimizer::MessageFor((ulong)local_48 & 0xff);
    sVar4 = strlen(pcVar8);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,pcVar8,sVar4);
    pcVar8 = " deoptimization bailout)";
    uVar7 = 0x18;
    goto LAB_014e51f0;
  case (RelocInfo)0x7:
    if (param_1 != (Isolate *)0x0) {
      ExternalReferenceEncoder::ExternalReferenceEncoder
                ((ExternalReferenceEncoder *)&local_48,param_1);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_2," (",2);
      IVar2 = (*(Instruction **)this)[3];
      puVar5 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)this);
      if (IVar2 == (Instruction)0x58) {
        puVar5 = (undefined8 *)*puVar5;
      }
      pcVar8 = (char *)ExternalReferenceEncoder::NameOfAddress
                                 ((ExternalReferenceEncoder *)&local_48,param_1,(ulong)puVar5);
      sVar4 = strlen(pcVar8);
      pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar3,pcVar8,sVar4);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,") ",2);
      ExternalReferenceEncoder::~ExternalReferenceEncoder((ExternalReferenceEncoder *)&local_48);
    }
    pcVar8 = " (";
    uVar7 = 2;
LAB_014e5010:
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,pcVar8,uVar7);
    IVar2 = (*(Instruction **)this)[3];
    puVar5 = (undefined8 *)Instruction::ImmPCOffsetTarget(*(Instruction **)this);
    if (IVar2 == (Instruction)0x58) {
      puVar5 = (undefined8 *)*puVar5;
    }
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,puVar5);
    break;
  case (RelocInfo)0xd:
  case (RelocInfo)0xe:
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"  (",3);
    pbVar3 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar3,
                        *(long *)(this + 0x10));
    break;
  case (RelocInfo)0xf:
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_2,"  (",3);
    pcVar8 = (char *)DeoptimizeReasonToString(this[0x10]);
    sVar4 = strlen(pcVar8);
    pbVar3 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar3,pcVar8,sVar4);
  }
  pcVar8 = ")";
  uVar7 = 1;
LAB_014e51f0:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar3,pcVar8,uVar7);
LAB_014e51f4:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_2,"\n",1);
  return;
}

