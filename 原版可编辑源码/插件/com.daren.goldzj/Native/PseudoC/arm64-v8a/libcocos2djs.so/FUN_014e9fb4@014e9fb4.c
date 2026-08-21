
void FUN_014e9fb4(basic_ostream *param_1,ulong param_2,undefined8 param_3,TimeDelta *param_4,
                 long *param_5)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  size_t sVar4;
  basic_ostream *pbVar5;
  long *plVar6;
  long lVar7;
  TimeDelta *__s;
  undefined1 auVar8 [16];
  double dVar9;
  locale alStack_d0 [8];
  char acStack_c8 [128];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  auVar8 = v8::base::TimeDelta::InMillisecondsF(param_4);
  lVar7 = *(long *)(param_4 + 8);
  if ((param_2 & 1) == 0) {
    dVar9 = (double)NEON_ucvtf(param_5[1]);
    v8::base::OS::SNPrintF
              (acStack_c8,0x80,"%34s %10.3f (%5.1f%%)  %10zu (%5.1f%%) %10zu %10zu",auVar8,
               ((double)*(long *)param_4 / (double)*param_5) * 100.0,
               (double)(ulong)(lVar7 * 100) / dVar9,param_3,lVar7,*(undefined8 *)(param_4 + 0x10),
               *(undefined8 *)(param_4 + 0x18));
    sVar4 = strlen(acStack_c8);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,acStack_c8,sVar4);
    uVar1 = (ulong)((byte)param_4[0x20] >> 1);
    if (((byte)param_4[0x20] & 1) != 0) {
      uVar1 = *(ulong *)(param_4 + 0x28);
    }
    if (uVar1 != 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_1,"   ",3);
      __s = *(TimeDelta **)(param_4 + 0x30);
      if (((byte)param_4[0x20] & 1) == 0) {
        __s = param_4 + 0x21;
      }
      sVar4 = strlen((char *)__s);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                (pbVar5,(char *)__s,sVar4);
    }
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(alStack_d0,(id *)&std::__ndk1::ctype<char>::id);
    cVar3 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale(alStack_d0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1,cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_1);
  }
  else {
    v8::base::OS::SNPrintF
              (acStack_c8,0x80,"\"%s_time\"=%.3f\n\"%s_space\"=%zu",param_3,param_3,lVar7);
    sVar4 = strlen(acStack_c8);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_1,acStack_c8,sVar4);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

