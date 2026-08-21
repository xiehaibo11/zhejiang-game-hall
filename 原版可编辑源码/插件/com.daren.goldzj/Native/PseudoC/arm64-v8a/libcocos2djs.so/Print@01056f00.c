
/* v8::internal::RuntimeCallStatEntries::Print(std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >&) */

void __thiscall
v8::internal::RuntimeCallStatEntries::Print(RuntimeCallStatEntries *this,basic_ostream *param_1)

{
  Entry *this_00;
  undefined8 uVar1;
  Entry *pEVar2;
  char cVar3;
  basic_ostream *pbVar4;
  long *plVar5;
  char *pcVar6;
  char *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  if (*(long *)this != 0) {
    std::__ndk1::
    __sort<std::__ndk1::__less<v8::internal::RuntimeCallStatEntries::Entry,v8::internal::RuntimeCallStatEntries::Entry>&,std::__ndk1::reverse_iterator<std::__ndk1::__wrap_iter<v8::internal::RuntimeCallStatEntries::Entry*>>>
              (*(undefined8 *)(this + 0x18),*(undefined8 *)(this + 0x18),
               *(undefined8 *)(this + 0x10),*(undefined8 *)(this + 0x10),&local_68);
    *(undefined8 *)(param_1 + *(long *)(*(long *)param_1 + -0x18) + 0x18) = 0x32;
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,"Runtime Function/C++ Builtin",0x1c);
    *(undefined8 *)(pbVar4 + *(long *)(*(long *)pbVar4 + -0x18) + 0x18) = 0xc;
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"Time",4);
    *(undefined8 *)(pbVar4 + *(long *)(*(long *)pbVar4 + -0x18) + 0x18) = 0x12;
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,"Count",5);
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_68,(id *)&std::__ndk1::ctype<char>::id);
    cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale((locale *)&local_68);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4);
    pcVar6 = operator_new(0x60);
    builtin_strncpy(pcVar6,
                    "========================================================================================"
                    ,0x59);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar4,pcVar6,0x58);
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_68,(id *)&std::__ndk1::ctype<char>::id);
    cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale((locale *)&local_68);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4);
    operator_delete(pcVar6);
    pEVar2 = *(Entry **)(this + 0x18);
    for (this_00 = *(Entry **)(this + 0x10); this_00 != pEVar2; this_00 = this_00 + 0x28) {
      Entry::SetTotal(this_00,*(undefined8 *)(this + 8),*(undefined8 *)this);
      Entry::Print(this_00,param_1);
    }
    pcVar6 = operator_new(0x60);
    builtin_strncpy(pcVar6,
                    "----------------------------------------------------------------------------------------"
                    ,0x59);
    pbVar4 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_1,pcVar6,0x58);
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet
                               ((locale *)&local_68,(id *)&std::__ndk1::ctype<char>::id);
    cVar3 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale((locale *)&local_68);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4,cVar3);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar4);
    operator_delete(pcVar6);
    uVar1 = *(undefined8 *)this;
    local_28 = *(undefined8 *)(this + 8);
    local_68 = "Total";
    local_60 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_28);
    uStack_48 = 0x4059000000000000;
    local_50 = 0x4059000000000000;
    uStack_58 = uVar1;
    Entry::Print((Entry *)&local_68,param_1);
  }
  return;
}

