
/* se::ScriptEngine::onPromiseRejectCallback(v8::PromiseRejectMessage) */

void se::ScriptEngine::onPromiseRejectCallback(long param_1)

{
  ulong uVar1;
  ScriptEngine SVar2;
  long lVar3;
  char *pcVar4;
  char cVar5;
  ScriptEngine *pSVar6;
  undefined8 uVar7;
  long lVar8;
  size_t sVar9;
  basic_ostream *pbVar10;
  long *plVar11;
  long lVar12;
  Isolate *this;
  Value *pVVar13;
  ulong local_1e0;
  ulong local_1d8;
  char *local_1d0;
  HandleScope aHStack_1c8 [24];
  undefined **local_1b0;
  undefined8 uStack_1a8;
  undefined **local_1a0;
  undefined **ppuStack_198;
  locale alStack_190 [8];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  ulong local_158;
  undefined8 uStack_150;
  void *local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined **local_130 [17];
  undefined8 local_a8;
  undefined4 local_a0;
  char *local_90 [6];
  
  lVar3 = tpidr_el0;
  lVar12 = *(long *)(lVar3 + 0x28);
  if (DAT_01d37220 == (ScriptEngine *)0x0) {
    pSVar6 = operator_new(0x210);
    ScriptEngine(pSVar6);
    DAT_01d37220 = pSVar6;
  }
  this = *(Isolate **)(DAT_01d37220 + 0x90);
  v8::HandleScope::HandleScope(aHStack_1c8,this);
  local_130[0] = (undefined **)0x1c670c8;
  local_1b0 = (undefined **)0x1c670a0;
  uStack_1a8 = 0;
  local_1a0 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::ios_base::init((ios_base *)local_130,&ppuStack_198);
  local_a8 = 0;
  local_a0 = 0xffffffff;
  ppuStack_198 = &PTR__basic_streambuf_01c671a8;
  local_1b0 = &PTR__basic_stringstream_01c66f88;
  local_130[0] = &PTR__basic_stringstream_01c66fd8;
  local_1a0 = &PTR__basic_stringstream_01c66fb0;
  std::__ndk1::locale::locale(alStack_190);
  uStack_160 = 0;
  local_168 = 0;
  uStack_170 = 0;
  local_178 = 0;
  uStack_180 = 0;
  local_188 = 0;
  ppuStack_198 = &PTR__basic_stringbuf_01c67100;
  uStack_140 = 0;
  local_148 = (void *)0x0;
  uStack_150 = 0;
  local_158 = 0;
  local_138 = 0x18;
  pVVar13 = *(Value **)(param_1 + 0x10);
  if (pVVar13 != (Value *)0x0) {
    uVar7 = v8::Isolate::GetCurrentContext(this);
    lVar8 = v8::Value::ToString(pVVar13,uVar7);
    if (lVar8 == 0) {
      v8::V8::ToLocalEmpty();
    }
    v8::String::Utf8Value::Utf8Value((Utf8Value *)local_90,this,lVar8);
    sVar9 = strlen(local_90[0]);
    pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_1a0,local_90[0],sVar9);
    std::__ndk1::ios_base::getloc();
    plVar11 = (long *)std::__ndk1::locale::use_facet
                                ((locale *)&local_1e0,(id *)&std::__ndk1::ctype<char>::id);
    cVar5 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
    std::__ndk1::locale::~locale((locale *)&local_1e0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,cVar5);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10);
    v8::String::Utf8Value::~Utf8Value((Utf8Value *)local_90);
  }
  if (DAT_01d37220 == (ScriptEngine *)0x0) {
    pSVar6 = operator_new(0x210);
    ScriptEngine(pSVar6);
    SVar2 = pSVar6[0x20c];
  }
  else {
    SVar2 = DAT_01d37220[0x20c];
    pSVar6 = DAT_01d37220;
  }
  DAT_01d37220 = pSVar6;
  if (SVar2 == (ScriptEngine)0x0) {
    local_1e0 = 0;
    local_1d8 = 0;
    local_1d0 = (char *)0x0;
  }
  else {
    v8::HandleScope::HandleScope((HandleScope *)local_90,*(Isolate **)(pSVar6 + 0x90));
    v8::StackTrace::CurrentStackTrace(*(undefined8 *)(pSVar6 + 0x90),__jsbStackFrameLimit,0xf);
    FUN_00909784(&local_1e0);
    v8::HandleScope::~HandleScope((HandleScope *)local_90);
  }
  pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      ((basic_ostream *)&local_1a0,"stacktrace: ",0xc);
  std::__ndk1::ios_base::getloc();
  plVar11 = (long *)std::__ndk1::locale::use_facet
                              ((locale *)local_90,(id *)&std::__ndk1::ctype<char>::id);
  cVar5 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
  std::__ndk1::locale::~locale((locale *)local_90);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,cVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10);
  uVar1 = local_1e0 >> 1 & 0x7f;
  pcVar4 = (char *)((ulong)&local_1e0 | 1);
  if ((local_1e0 & 1) != 0) {
    uVar1 = local_1d8;
    pcVar4 = local_1d0;
  }
  pbVar10 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                      ((basic_ostream *)&local_1a0,pcVar4,uVar1);
  std::__ndk1::ios_base::getloc();
  plVar11 = (long *)std::__ndk1::locale::use_facet
                              ((locale *)local_90,(id *)&std::__ndk1::ctype<char>::id);
  cVar5 = (**(code **)(*plVar11 + 0x38))(plVar11,10);
  std::__ndk1::locale::~locale((locale *)local_90);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10,cVar5);
  std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
            ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar10);
  if ((local_1e0 & 1) != 0) {
    operator_delete(local_1d0);
  }
  local_1b0 = &PTR__basic_stringstream_01c66f88;
  local_130[0] = &PTR__basic_stringstream_01c66fd8;
  local_1a0 = &PTR__basic_stringstream_01c66fb0;
  ppuStack_198 = &PTR__basic_stringbuf_01c67100;
  if ((local_158 & 1) != 0) {
    operator_delete(local_148);
  }
  ppuStack_198 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_190);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_130);
  v8::HandleScope::~HandleScope(aHStack_1c8);
  if (*(long *)(lVar3 + 0x28) == lVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

