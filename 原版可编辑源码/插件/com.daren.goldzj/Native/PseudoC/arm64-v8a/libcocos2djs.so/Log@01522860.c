
/* v8::internal::Log::Log(v8::internal::Logger*, char const*) */

void __thiscall v8::internal::Log::Log(Log *this,Logger *param_1,char *param_2)

{
  OFStream *this_00;
  Mutex *this_01;
  __sFILE *p_Var1;
  char cVar2;
  __sFILE *p_Var3;
  void *pvVar4;
  long *plVar5;
  long lVar6;
  size_t sVar7;
  char *pcVar8;
  Log *local_50;
  Mutex *pMStack_48;
  locale local_28 [8];
  
  *this = (Log)0x0;
  p_Var3 = (__sFILE *)CreateOutputHandle(param_2);
  *(__sFILE **)(this + 8) = p_Var3;
  this_00 = (OFStream *)(this + 0x10);
  p_Var1 = (__sFILE *)waitpid;
  if (p_Var3 != (__sFILE *)0x0) {
    p_Var1 = p_Var3;
  }
  OFStream::OFStream(this_00,p_Var1);
  this_01 = (Mutex *)(this + 0xf8);
  base::Mutex::Mutex(this_01);
  pvVar4 = operator_new__(0x800,(nothrow_t *)&std::nothrow);
  if (pvVar4 == (void *)0x0) {
    plVar5 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar5 + 0x18))();
    pvVar4 = operator_new__(0x800,(nothrow_t *)&std::nothrow);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  *(void **)(this + 0x120) = pvVar4;
  *(Logger **)(this + 0x128) = param_1;
  if (FLAG_log_all != '\0') {
    FLAG_log_api = 1;
    FLAG_log_code = 1;
    FLAG_log_suspect = 1;
    FLAG_log_handles = 1;
    FLAG_log_internal_timer_events = 1;
    FLAG_log_function_events = 1;
  }
  if (FLAG_prof != '\0') {
    FLAG_log_code = 1;
  }
  if (*(long *)(this + 8) != 0) {
    local_50 = this;
    pMStack_48 = this_01;
    base::Mutex::Lock(this_01);
    lVar6 = __strlen_chk("v8-version",0xb);
    if (lVar6 != 0) {
      pcVar8 = "v8-version";
      do {
        MessageBuilder::AppendCharacter((MessageBuilder *)&local_50,*pcVar8);
        lVar6 = lVar6 + -1;
        pcVar8 = pcVar8 + 1;
      } while (lVar6 != 0);
    }
    local_28[0] = (locale)0x2c;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)this_00,(char *)local_28,1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,Version::major_);
    local_28[0] = (locale)0x2c;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)this_00,(char *)local_28,1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,Version::minor_);
    local_28[0] = (locale)0x2c;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)this_00,(char *)local_28,1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,Version::build_);
    local_28[0] = (locale)0x2c;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)this_00,(char *)local_28,1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,Version::patch_);
    if (*Version::embedder_ != '\0') {
      local_28[0] = (locale)0x2c;
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                ((basic_ostream *)this_00,(char *)local_28,1);
      pcVar8 = Version::embedder_;
      if (Version::embedder_ != (undefined *)0x0) {
        sVar7 = strlen(Version::embedder_);
        for (; sVar7 != 0; sVar7 = sVar7 - 1) {
          MessageBuilder::AppendCharacter((MessageBuilder *)&local_50,*pcVar8);
          pcVar8 = pcVar8 + 1;
        }
      }
    }
    local_28[0] = (locale)0x2c;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)this_00,(char *)local_28,1);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,
               (bool)Version::candidate_);
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet(local_28,(id *)&std::__ndk1::ctype<char>::id);
    cVar2 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale(local_28);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,cVar2);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00);
    base::Mutex::Unlock(this_01);
  }
  return;
}

