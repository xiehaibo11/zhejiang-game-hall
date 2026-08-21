
/* v8::internal::compiler::TEMPNAMEPLACEHOLDERVALUE(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&, v8::internal::compiler::InstructionAsJSON const&) */

basic_ostream *
v8::internal::compiler::operator<<(basic_ostream *param_1,InstructionAsJSON *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  basic_ostream *pbVar4;
  long *plVar5;
  uint *puVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  uint local_44;
  
  puVar8 = *(uint **)(param_2 + 8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"{",1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\"id\": ",6);
  pbVar4 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,*(int *)param_2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,",",1);
  pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_1,"\"opcode\": \"",0xb);
  local_70 = (uint *)(CONCAT44(local_70._4_4_,*puVar8) & 0xffffffff000001ff);
  pbVar4 = (basic_ostream *)operator<<(pbVar4,(ArchOpcode *)&local_70);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"\",",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\"flags\": \"",10);
  local_44 = *puVar8 >> 0xe & 7;
  if ((*puVar8 & 0x3e00) != 0) {
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," : ",3);
    local_70 = (uint *)(CONCAT44(local_70._4_4_,*puVar8 >> 9) & 0xffffffff0000001f);
    operator<<(pbVar4,(AddressingMode *)&local_70);
  }
  if (local_44 != 0) {
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1," && ",4);
    pbVar4 = (basic_ostream *)operator<<(pbVar4,(FlagsMode *)&local_44);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4," if ",4);
    local_70 = (uint *)(CONCAT44(local_70._4_4_,*puVar8 >> 0x11) & 0xffffffff0000001f);
    operator<<(pbVar4,(FlagsCondition *)&local_70);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"\",",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\"gaps\": [",9);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"[",1);
  plVar5 = *(long **)(puVar8 + 2);
  if (plVar5 != (long *)0x0) {
    puVar9 = (undefined8 *)*plVar5;
    puVar1 = (undefined8 *)plVar5[1];
    if (puVar9 != puVar1) {
      bVar3 = true;
      do {
        pbVar10 = (byte *)*puVar9;
        if ((*pbVar10 & 7) != 0) {
          if (!bVar3) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,",",1);
          }
          pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"[",1);
          local_70 = (uint *)(pbVar10 + 8);
          local_68 = *(undefined8 *)(param_2 + 0x10);
          pbVar4 = (basic_ostream *)operator<<(pbVar4,(InstructionOperandAsJSON *)&local_70);
          pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar4,",",1);
          uStack_78 = *(undefined8 *)(param_2 + 0x10);
          local_80 = pbVar10;
          pbVar4 = (basic_ostream *)operator<<(pbVar4,(InstructionOperandAsJSON *)&local_80);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"]",1);
          bVar3 = false;
        }
        puVar9 = puVar9 + 1;
      } while (puVar1 != puVar9);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"]",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"[",1);
  plVar5 = *(long **)(puVar8 + 4);
  if (plVar5 != (long *)0x0) {
    puVar9 = (undefined8 *)*plVar5;
    puVar1 = (undefined8 *)plVar5[1];
    if (puVar9 != puVar1) {
      bVar3 = true;
      do {
        pbVar10 = (byte *)*puVar9;
        if ((*pbVar10 & 7) != 0) {
          if (!bVar3) {
            std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      (param_1,",",1);
          }
          pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (param_1,"[",1);
          local_70 = (uint *)(pbVar10 + 8);
          local_68 = *(undefined8 *)(param_2 + 0x10);
          pbVar4 = (basic_ostream *)operator<<(pbVar4,(InstructionOperandAsJSON *)&local_70);
          pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                             (pbVar4,",",1);
          uStack_78 = *(undefined8 *)(param_2 + 0x10);
          local_80 = pbVar10;
          pbVar4 = (basic_ostream *)operator<<(pbVar4,(InstructionOperandAsJSON *)&local_80);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,"]",1);
          bVar3 = false;
        }
        puVar9 = puVar9 + 1;
      } while (puVar1 != puVar9);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"]",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"],",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\"outputs\": [",0xc);
  if ((char)puVar8[1] != '\0') {
    local_70 = puVar8 + 10;
    local_68 = *(undefined8 *)(param_2 + 0x10);
    operator<<(param_1,(InstructionOperandAsJSON *)&local_70);
    if ((puVar8[1] & 0xfe) != 0) {
      puVar6 = puVar8 + 0xc;
      uVar7 = 1;
      do {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
        local_68 = *(undefined8 *)(param_2 + 0x10);
        local_70 = puVar6;
        operator<<(param_1,(InstructionOperandAsJSON *)&local_70);
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (uVar7 < (byte)puVar8[1]);
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"],",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\"inputs\": [",0xb);
  if ((puVar8[1] & 0xffff00) != 0) {
    local_70 = puVar8 + (ulong)(byte)puVar8[1] * 2 + 10;
    local_68 = *(undefined8 *)(param_2 + 0x10);
    operator<<(param_1,(InstructionOperandAsJSON *)&local_70);
    if ((puVar8[1] & 0xfffe00) != 0) {
      uVar7 = 1;
      do {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
        local_70 = puVar8 + (uVar7 + (byte)puVar8[1]) * 2 + 10;
        local_68 = *(undefined8 *)(param_2 + 0x10);
        operator<<(param_1,(InstructionOperandAsJSON *)&local_70);
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ushort *)((long)puVar8 + 5));
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"],",2);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_1,"\"temps\": [",10);
  uVar2 = puVar8[1];
  if ((uVar2 & 0x3f000000) != 0) {
    local_70 = puVar8 + (((ulong)(uVar2 >> 8) & 0xffff) + (ulong)(byte)uVar2) * 2 + 10;
    local_68 = *(undefined8 *)(param_2 + 0x10);
    operator<<(param_1,(InstructionOperandAsJSON *)&local_70);
    if ((*(byte *)((long)puVar8 + 7) & 0x3e) != 0) {
      uVar7 = 1;
      do {
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,",",1);
        local_70 = puVar8 + (uVar7 + ((ulong)(puVar8[1] >> 8) & 0xffff) + (ulong)(byte)puVar8[1]) *
                            2 + 10;
        local_68 = *(undefined8 *)(param_2 + 0x10);
        operator<<(param_1,(InstructionOperandAsJSON *)&local_70);
        uVar7 = uVar7 + 1;
      } while (uVar7 < ((ulong)*(byte *)((long)puVar8 + 7) & 0x3f));
    }
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"]",1);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_1,"}",1);
  return param_1;
}

