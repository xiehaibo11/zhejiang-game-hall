
void FUN_017940ac(long param_1,Node *param_2,char *param_3,undefined8 param_4)

{
  basic_ostream *pbVar1;
  size_t sVar2;
  long lVar3;
  basic_ostream *pbVar4;
  Node *pNVar5;
  char *pcVar6;
  ulong uVar7;
  long *plVar8;
  byte local_190 [16];
  ulong local_180;
  undefined **local_178;
  undefined8 local_170;
  undefined **local_168;
  undefined **local_160;
  locale alStack_158 [8];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined **local_f8 [17];
  undefined8 local_70;
  undefined4 local_68;
  
  local_178 = (undefined **)0x1c670a0;
  local_f8[0] = (undefined **)0x1c670c8;
  pbVar4 = (basic_ostream *)&local_168;
  local_170 = 0;
  local_168 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_f8,&local_160);
  local_178 = &PTR__basic_stringstream_01c66f88;
  local_f8[0] = &PTR__basic_stringstream_01c66fd8;
  local_68 = 0xffffffff;
  local_160 = &PTR__basic_streambuf_01c671a8;
  local_70 = 0;
  local_168 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::locale::locale(alStack_158);
  local_160 = &PTR__basic_stringbuf_01c67100;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  local_100 = 0x18;
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"MemoryOptimizer could not remove write barrier for node #",0x39);
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                      *(uint *)(param_1 + 0x14) & 0xffffff);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\n",1);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar4,"  Run mksnapshot with --csa-trap-on-node=",0x29);
  sVar2 = strlen(param_3);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar1,param_3,sVar2);
  pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,",",1);
  pbVar1 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                      *(uint *)(param_1 + 0x14) & 0xffffff);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar1," to break in CSA code.\n",0x17);
  if (*(short *)(*(long *)param_2 + 0x10) == 0x23) {
    lVar3 = v8::internal::compiler::NodeProperties::GetControlInput(param_2,0);
    for (plVar8 = *(long **)(lVar3 + 0x18); plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
      pNVar5 = (Node *)(plVar8 + (ulong)(*(uint *)(plVar8 + 2) >> 1) * 3 + 3);
      if ((*(uint *)(plVar8 + 2) & 1) == 0) {
        pNVar5 = *(Node **)pNVar5;
      }
      if (*(short *)(*(long *)pNVar5 + 0x10) == 0x24) {
        if ((pNVar5 != (Node *)0x0) && (*(char *)(*(long *)pNVar5 + 0x24) != '\0'))
        goto LAB_0179426c;
        break;
      }
    }
LAB_0179427c:
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar4,
               "\n  It seems the store happened to something different than a direct allocation:\n",
               0x50);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"    ",4);
    pbVar1 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar1,param_2);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\n",1);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"  Run mksnapshot with --csa-trap-on-node=",0x29);
    sVar2 = strlen(param_3);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,param_3,sVar2);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,",",1);
    pbVar4 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,
                        *(uint *)(param_2 + 0x14) & 0xffffff);
    pcVar6 = " to break there.\n";
    uVar7 = 0x11;
  }
  else {
    pNVar5 = param_2;
    if (*(char *)(*(long *)param_2 + 0x24) == '\0') goto LAB_0179427c;
LAB_0179426c:
    pNVar5 = (Node *)FUN_017951ec(param_1,pNVar5,param_4);
    if (pNVar5 == (Node *)0x0) goto LAB_0179427c;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar4,"\n  There is a potentially allocating node in between:\n",0x36);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"    ",4);
    pbVar1 = (basic_ostream *)v8::internal::compiler::operator<<(pbVar1,pNVar5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar1,"\n",1);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"  Run mksnapshot with --csa-trap-on-node=",0x29);
    sVar2 = strlen(param_3);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,param_3,sVar2);
    pbVar1 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar1,",",1);
    pbVar1 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar1,
                        *(uint *)(pNVar5 + 0x14) & 0xffffff);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (pbVar1," to break there.\n",0x11);
    if (*(short *)(*(long *)pNVar5 + 0x10) != 0x31) goto LAB_01794318;
    pcVar6 = 
    "  If this is a never-allocating runtime call, you can add an exception to Runtime::MayAllocate.\n"
    ;
    uVar7 = 0x60;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar4,pcVar6,uVar7);
LAB_01794318:
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  uVar7 = (ulong)local_190 | 1;
  if ((local_190[0] & 1) != 0) {
    uVar7 = local_180;
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("%s",uVar7);
}

