
/* cocos2d::extension::Manifest::saveToFile(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall cocos2d::extension::Manifest::saveToFile(Manifest *this,basic_string *param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  long *plVar5;
  size_t sVar6;
  basic_ostream *this_00;
  char *pcVar7;
  long lVar8;
  locale local_220 [16];
  void *local_210;
  void **local_208;
  undefined8 local_200;
  void *pvStack_1f8;
  void *local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc;
  undefined8 local_1c8;
  void *local_1c0;
  void *pvStack_1b8;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  char *local_198;
  undefined **local_190;
  basic_filebuf<char,std::__ndk1::char_traits<char>> abStack_188 [24];
  byte abStack_170 [144];
  undefined **local_e0 [19];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_208 = &local_1c0;
  pvStack_1b8 = (void *)0x0;
  local_1c0 = (void *)0x0;
  local_1a8 = (char *)0x0;
  local_1b0 = (char *)0x0;
                    /* try { // try from 00a59c2c to 00b59c7f has its CatchHandler @ 00a59c2c
                       catch() { ... } // from try @ 00a59c2c with catch @ 00a59c2c
                       catch() { ... } // from try @ 00a59df0 with catch @ 00a59c2c */
  pvStack_1f8 = (void *)0x0;
  local_200 = 0;
  uStack_1e8 = 0;
  local_1f0 = (void *)0x0;
  local_1a0 = (char *)0x0;
  local_198 = (char *)0x100;
  local_1e0 = 0;
  uStack_1d8 = 0x200;
  local_1d0 = 0x144;
  local_1cc = 0x2000;
  local_1c8 = 4;
  rapidjson::
  GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::
  Accept<rapidjson::PrettyWriter<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::UTF8<char>,rapidjson::CrtAllocator,0u>>
            ((GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>
              *)(this + 0x128),(PrettyWriter *)&local_208);
  plVar5 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar5 + 0xe8))(local_220,plVar5,param_1);
                    /* try { // try from 00a59c80 to 00b59c97 has its CatchHandler @ 00a59e6c */
  FUN_00a5a43c(&local_190,local_220,0x10);
  if (((byte)local_220[0] & 1) != 0) {
    operator_delete(local_210);
  }
  pcVar3 = local_1a8;
  pcVar2 = local_1b0;
                    /* try { // try from 00a59ca0 to 00b59cab has its CatchHandler @ 00a59e68 */
                    /* try { // try from 00a59cac to 00b59cb7 has its CatchHandler @ 00a59e64 */
  if ((abStack_170[(long)local_190[-3]] & 1) == 0) {
    pcVar7 = local_1a8 + 1;
                    /* try { // try from 00a59cb8 to 00b59def has its CatchHandler @ 00a59e7c */
    if (local_1a0 < pcVar7) {
      if (local_1b0 == (char *)0x0) {
        pcVar7 = local_198;
        if (local_1c0 == (void *)0x0) {
          local_1c0 = operator_new(1);
          pcVar7 = local_198;
          pvStack_1b8 = local_1c0;
        }
      }
      else {
        pcVar7 = local_1a0 + (((ulong)(local_1a0 + (1 - (long)local_1b0)) >> 1) - (long)local_1b0);
      }
                    /* try { // try from 00a59df0 to 00b59ed3 has its CatchHandler @ 00a59c2c */
      lVar8 = (long)pcVar3 - (long)pcVar2;
      if (pcVar7 < (char *)(lVar8 + 1)) {
        pcVar7 = (char *)(lVar8 + 1);
      }
      if (pcVar7 == (char *)0x0) {
        free(pcVar2);
        local_1b0 = (char *)0x0;
      }
      else {
        local_1b0 = realloc(pcVar2,(size_t)pcVar7);
      }
      local_1a8 = local_1b0 + lVar8;
      local_1a0 = local_1b0 + (long)pcVar7;
      pcVar7 = local_1a8 + 1;
    }
    pcVar2 = local_1b0;
    *local_1a8 = '\0';
    local_1a8 = pcVar7 + -1;
    sVar6 = strlen(local_1b0);
    this_00 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                        ((basic_ostream *)&local_190,pcVar2,sVar6);
    std::__ndk1::ios_base::getloc();
    plVar5 = (long *)std::__ndk1::locale::use_facet(local_220,(id *)&std::__ndk1::ctype<char>::id);
    cVar4 = (**(code **)(*plVar5 + 0x38))(plVar5,10);
    std::__ndk1::locale::~locale(local_220);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00,cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)this_00);
  }
  local_190 = &PTR__basic_ofstream_01c6e5b8;
  local_e0[0] = &PTR__basic_ofstream_01c6e5e0;
  std::__ndk1::basic_filebuf<char,std::__ndk1::char_traits<char>>::~basic_filebuf(abStack_188);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_e0);
  free(local_1f0);
  if (pvStack_1f8 != (void *)0x0) {
    operator_delete(pvStack_1f8);
  }
  free(local_1b0);
  if (pvStack_1b8 != (void *)0x0) {
    operator_delete(pvStack_1b8);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

