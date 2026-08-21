
/* v8::internal::FlagList::PrintHelp() */

void v8::internal::FlagList::PrintHelp(void)

{
  char cVar1;
  basic_ostream *pbVar2;
  size_t sVar3;
  char *pcVar4;
  uint *puVar5;
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
  undefined8 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  char local_6c [12];
  
  if (CpuFeatures::initialized_ == '\0') {
    CpuFeatures::initialized_ = '\x01';
    CpuFeatures::ProbeImpl(false);
  }
  CpuFeatures::PrintTarget();
  CpuFeatures::PrintFeatures();
  local_168 = (undefined **)0x1ca1178;
  local_108[0] = (undefined **)0x1ca11a0;
  std::__ndk1::ios_base::init((ios_base *)local_108,(AndroidLogStream *)&local_160);
  local_78 = 0xffffffff;
  local_168 = &PTR__StdoutStream_01ca1128;
  local_108[0] = &PTR__StdoutStream_01ca1150;
  local_160 = &PTR__basic_streambuf_01c671a8;
  local_80 = 0;
  std::__ndk1::locale::locale(alStack_158);
  local_160 = &PTR__AndroidLogStream_01cbc008;
  local_120 = 0;
  uStack_118 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_110 = 0;
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            ((basic_ostream *)&local_168,
             "Synopsis:\n  shell [options] [--shell] [<file>...]\n  d8 [options] [-e <string>] [--shell] [[--module] <file>...]\n\n  -e        execute a string in V8\n  --shell   run an interactive JavaScript shell\n  --module  execute a file as a JavaScript module\n\nNote: the --module option is implicitly enabled for *.mjs files.\n\nThe following syntax for options is accepted (both \'-\' and \'--\' are ok):\n  --flag        (bool flags only)\n  --no-flag     (bool flags only)\n  --flag=value  (non-bool flags only, no spaces around \'=\')\n  --flag value  (non-bool flags only)\n  --            (captures all remaining args in JavaScript)\n\nOptions:\n"
             ,0x26e);
  puVar5 = &DAT_01d2f058;
  while( true ) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_168,"  --",4);
    pcVar4 = *(char **)(puVar5 + 2);
    cVar1 = *pcVar4;
    while (cVar1 != '\0') {
      pcVar4 = pcVar4 + 1;
      local_6c[0] = '-';
      if (cVar1 != '_') {
        local_6c[0] = cVar1;
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)&local_168,local_6c,1);
      cVar1 = *pcVar4;
    }
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       ((basic_ostream *)&local_168," (",2);
    pcVar4 = *(char **)(puVar5 + 8);
    sVar3 = strlen(pcVar4);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,pcVar4,sVar3);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,")\n",2);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"        type: ",0xe);
    if (7 < *puVar5) break;
    pcVar4 = (&PTR_s_bool_0185e0ea_0x3a_01ca6fb8)[(int)*puVar5];
    sVar3 = strlen(pcVar4);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,pcVar4,sVar3);
    pbVar2 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar2,"  default: ",0xb);
    pbVar2 = (basic_ostream *)FUN_00f64570(pbVar2,puVar5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar2,"\n",1);
    puVar5 = puVar5 + 0xc;
    if (puVar5 == (uint *)&Marking::kWhiteBitPattern) {
      local_168 = &PTR__StdoutStream_01ca1128;
      local_108[0] = &PTR__StdoutStream_01ca1150;
      AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_160);
      std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

