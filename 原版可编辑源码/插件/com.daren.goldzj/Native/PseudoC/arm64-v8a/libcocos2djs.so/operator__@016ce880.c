
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::InstructionOperandAsJSON const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,InstructionOperandAsJSON *param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  byte *pbVar4;
  basic_ostream *pbVar5;
  char *pcVar6;
  size_t sVar7;
  int iVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  long *plVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  ushort local_1b8 [4];
  ulong local_1b0;
  ulong uStack_1a8;
  byte *local_1a0;
  undefined **local_190;
  undefined8 local_188;
  undefined **local_180;
  undefined **local_178;
  locale alStack_170 [8];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  ulong local_138;
  undefined8 uStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined **local_110 [17];
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  puVar1 = *(ulong **)param_2;
  lVar2 = *(long *)(param_2 + 8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"{",1);
  uVar9 = *puVar1;
  switch((uint)uVar9 & 7) {
  case 0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\"type\": \"unallocated\", ",0x17);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\"text\": \"v",10);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        (int)(*puVar1 >> 3));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\"",1);
    if ((*puVar1 >> 0x23 & 1) == 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,",\"tooltip\": \"FIXED_SLOT: ",0x19);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          (int)((long)*puVar1 >> 0x24));
      goto LAB_016cf064;
    }
    pbVar5 = param_1;
    switch((uint)(*puVar1 >> 0x24) & 7) {
    case 1:
      pcVar6 = ",\"tooltip\": \"REGISTER_OR_SLOT\"";
      uVar9 = 0x1e;
      break;
    case 2:
      pcVar6 = ",\"tooltip\": \"REGISTER_OR_SLOT_OR_CONSTANT\"";
      uVar9 = 0x2a;
      break;
    case 3:
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,",\"tooltip\": \"FIXED_REGISTER: ",0x1d);
      uVar9 = *puVar1;
      puVar13 = &RegisterName(v8::internal::Register)::Names;
      goto LAB_016cef88;
    case 4:
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,",\"tooltip\": \"FIXED_FP_REGISTER: ",0x20);
      uVar9 = *puVar1;
      puVar13 = &RegisterName(v8::internal::VRegister)::Names;
LAB_016cef88:
      pcVar6 = (char *)puVar13[uVar9 >> 0x29 & 0x3f];
      sVar7 = strlen(pcVar6);
LAB_016cf060:
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar5,pcVar6,sVar7);
LAB_016cf064:
      pcVar6 = "\"";
      uVar9 = 1;
      break;
    case 5:
      pcVar6 = ",\"tooltip\": \"MUST_HAVE_REGISTER\"";
      uVar9 = 0x20;
      break;
    case 6:
      pcVar6 = ",\"tooltip\": \"MUST_HAVE_SLOT\"";
      uVar9 = 0x1c;
      break;
    case 7:
      pcVar6 = ",\"tooltip\": \"SAME_AS_FIRST_INPUT\"";
      uVar9 = 0x21;
      break;
    default:
      goto switchD_016ce8ec_default;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,pcVar6,uVar9);
    goto switchD_016ce8ec_default;
  case 2:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\"type\": \"constant\", ",0x14);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\"text\": \"v",10);
    iVar8 = (int)(uVar9 >> 3);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,iVar8);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\",",2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\"tooltip\": \"",0xc);
    local_190 = (undefined **)0x1c670a0;
    local_110[0] = (undefined **)0x1c670c8;
    local_188 = 0;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::ios_base::init((ios_base *)local_110,&local_178);
    local_190 = &PTR__basic_stringstream_01c66f88;
    local_110[0] = &PTR__basic_stringstream_01c66fd8;
    local_80 = 0xffffffff;
    local_178 = &PTR__basic_streambuf_01c671a8;
    local_88 = 0;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::locale::locale(alStack_170);
    uStack_140 = 0;
    local_148 = 0;
    local_178 = &PTR__basic_stringbuf_01c67100;
    uStack_150 = 0;
    local_158 = 0;
    uStack_160 = 0;
    local_168 = 0;
    uStack_130 = 0;
    local_138 = 0;
    uStack_120 = 0;
    local_128 = (void *)0x0;
    local_118 = 0x18;
    plVar15 = (long *)(lVar2 + 0x48);
    plVar12 = (long *)*plVar15;
    plVar10 = plVar15;
    if (plVar12 == (long *)0x0) {
LAB_016ceaf8:
      plVar10 = plVar15;
    }
    else {
      do {
        if (iVar8 <= (int)plVar12[4]) {
          plVar10 = plVar12;
        }
        plVar12 = (long *)plVar12[(int)plVar12[4] < iVar8];
      } while (plVar12 != (long *)0x0);
      if ((plVar10 == plVar15) || (iVar8 < (int)plVar10[4])) goto LAB_016ceaf8;
    }
    uStack_1a8 = plVar10[6];
    local_1b0 = plVar10[5];
    operator<<((basic_ostream *)&local_180,(Constant *)&local_1b0);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pbVar4 = (byte *)((ulong)&local_1b0 | 1);
    uVar9 = local_1b0 >> 1 & 0x7f;
    if ((local_1b0 & 1) != 0) {
      pbVar4 = local_1a0;
      uVar9 = uStack_1a8;
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      local_1b8[0] = (ushort)*pbVar4;
      internal::operator<<(param_1,(AsEscapedUC16ForJSON *)local_1b8);
      pbVar4 = pbVar4 + 1;
    }
    if ((local_1b0 & 1) != 0) {
      operator_delete(local_1a0);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\"",1);
    local_190 = &PTR__basic_stringstream_01c66f88;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    local_110[0] = &PTR__basic_stringstream_01c66fd8;
    local_178 = &PTR__basic_stringbuf_01c67100;
    if ((local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    break;
  case 3:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\"type\": \"immediate\", ",0x15);
    uVar9 = *puVar1;
    if (((uint)uVar9 >> 3 & 1) == 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"\"text\": \"#",10);
      pbVar5 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                          *(int *)((long)puVar1 + 4));
      goto LAB_016cf064;
    }
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\"text\": \"imm:",0xd);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        (int)(uVar9 >> 0x20));
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\",",2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\"tooltip\": \"",0xc);
    local_190 = (undefined **)0x1c670a0;
    local_110[0] = (undefined **)0x1c670c8;
    local_188 = 0;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::ios_base::init((ios_base *)local_110,&local_178);
    local_190 = &PTR__basic_stringstream_01c66f88;
    local_110[0] = &PTR__basic_stringstream_01c66fd8;
    local_80 = 0xffffffff;
    local_178 = &PTR__basic_streambuf_01c671a8;
    local_88 = 0;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::locale::locale(alStack_170);
    uStack_140 = 0;
    local_148 = 0;
    local_178 = &PTR__basic_stringbuf_01c67100;
    uStack_150 = 0;
    local_158 = 0;
    uStack_160 = 0;
    local_168 = 0;
    uStack_130 = 0;
    local_138 = 0;
    uStack_120 = 0;
    local_128 = (void *)0x0;
    local_118 = 0x18;
    uVar9 = *puVar1;
    if (((uint)uVar9 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_1b0,(int)(uVar9 >> 0x20));
    }
    else {
      puVar1 = (ulong *)(*(long *)(lVar2 + 0x60) + ((long)uVar9 >> 0x20) * 0x10);
      uStack_1a8 = puVar1[1];
      local_1b0 = *puVar1;
    }
    operator<<((basic_ostream *)&local_180,(Constant *)&local_1b0);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pbVar4 = (byte *)((ulong)&local_1b0 | 1);
    uVar9 = local_1b0 >> 1 & 0x7f;
    if ((local_1b0 & 1) != 0) {
      pbVar4 = local_1a0;
      uVar9 = uStack_1a8;
    }
    for (; uVar9 != 0; uVar9 = uVar9 - 1) {
      local_1b8[0] = (ushort)*pbVar4;
      internal::operator<<(param_1,(AsEscapedUC16ForJSON *)local_1b8);
      pbVar4 = pbVar4 + 1;
    }
    if ((local_1b0 & 1) != 0) {
      operator_delete(local_1a0);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\"",1);
    local_190 = &PTR__basic_stringstream_01c66f88;
    local_180 = &PTR__basic_stringstream_01c66fb0;
    local_110[0] = &PTR__basic_stringstream_01c66fd8;
    local_178 = &PTR__basic_stringbuf_01c67100;
    if ((local_138 & 1) != 0) {
      operator_delete(local_128);
    }
    break;
  case 4:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\"type\": \"allocated\", ",0x15);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,"\"text\": \"",9);
    uVar9 = *puVar1;
    uVar14 = uVar9 & 0x1c;
    uVar11 = (uint)(uVar9 >> 5);
    if ((uVar14 == 0xc) && ((uVar11 & 0xff) < 0xb)) {
      pcVar6 = "stack:";
      uVar9 = 6;
LAB_016cec30:
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,pcVar6,uVar9);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                 (int)((long)*puVar1 >> 0x23));
    }
    else {
      if ((uVar14 == 0xc) && (10 < (uVar11 & 0xff))) {
        pcVar6 = "fp_stack:";
        uVar9 = 9;
        goto LAB_016cec30;
      }
      iVar8 = (int)((long)uVar9 >> 0x23);
      if ((uVar14 == 4) && ((uVar11 & 0xff) < 0xb)) {
        if (iVar8 < 0x20) {
          if (iVar8 == -1) goto LAB_016cef10;
          puVar13 = &RegisterName(v8::internal::Register)::Names;
LAB_016cef08:
          pcVar6 = (char *)puVar13[(long)uVar9 >> 0x23];
          goto LAB_016cef18;
        }
        pcVar6 = "sp";
        if (iVar8 != 0x3f) {
          pcVar6 = "UNKNOWN";
        }
        uVar9 = 2;
        if (iVar8 != 0x3f) {
          uVar9 = 7;
        }
      }
      else {
        if (iVar8 != -1) {
          puVar13 = &RegisterName(v8::internal::VRegister)::Names;
          goto LAB_016cef08;
        }
LAB_016cef10:
        pcVar6 = "invalid";
LAB_016cef18:
        uVar9 = strlen(pcVar6);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (param_1,pcVar6,uVar9);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\",",2);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"\"tooltip\": \"",0xc);
    pcVar6 = (char *)MachineReprToString(*puVar1 >> 5);
    sVar7 = strlen(pcVar6);
    goto LAB_016cf060;
  default:
    goto switchD_016ce8ec_default;
  }
  local_178 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_170);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_110);
switchD_016ce8ec_default:
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

