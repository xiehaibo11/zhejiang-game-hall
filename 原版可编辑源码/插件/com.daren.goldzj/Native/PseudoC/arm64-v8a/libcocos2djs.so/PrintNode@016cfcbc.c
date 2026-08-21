
/* v8::internal::compiler::JSONGraphNodeWriter::PrintNode(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSONGraphNodeWriter::PrintNode(JSONGraphNodeWriter *this,Node *param_1)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  ushort uVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  basic_ostream *pbVar7;
  size_t sVar8;
  char *pcVar9;
  ulong uVar10;
  uint uVar11;
  ulong local_4c0;
  ulong local_4b8;
  char *local_4b0;
  byte local_4a8 [8];
  ulong local_4a0;
  char *local_498;
  undefined **local_490;
  undefined **local_488;
  char *local_480;
  long local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  ulong local_448;
  undefined8 uStack_440;
  void *local_438;
  undefined8 uStack_430;
  undefined4 local_428;
  undefined **local_420 [17];
  undefined8 local_398;
  undefined4 local_390;
  undefined **local_388;
  undefined **local_380;
  locale alStack_378 [8];
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  ulong local_340;
  undefined8 uStack_338;
  void *local_330;
  undefined8 uStack_328;
  undefined4 local_320;
  undefined **local_318 [17];
  undefined8 local_290;
  undefined4 local_288;
  undefined **local_280;
  undefined **local_278;
  locale alStack_270 [8];
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  ulong local_238;
  undefined8 uStack_230;
  void *local_228;
  undefined8 uStack_220;
  undefined4 local_218;
  undefined **local_210 [17];
  undefined8 local_188;
  undefined4 local_180;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  void *local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined **local_108 [17];
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  if (this[0xa8] == (JSONGraphNodeWriter)0x0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (*(basic_ostream **)this,",\n",2);
  }
  else {
    this[0xa8] = (JSONGraphNodeWriter)0x0;
  }
  ppuVar1 = (undefined **)0x1c6c8a8;
  uVar2 = 0x1c6c8d0;
  local_178 = ppuVar1;
  local_108[0] = (undefined **)uVar2;
  std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
  uVar11 = 0xffffffff;
  local_78 = 0xffffffff;
  local_80 = 0;
  local_178 = &PTR__basic_ostringstream_01c6c858;
  local_170 = &PTR__basic_streambuf_01c671a8;
  local_108[0] = &PTR__basic_ostringstream_01c6c880;
  std::__ndk1::locale::locale(alStack_168);
  uStack_138 = 0;
  local_140 = 0;
  uStack_148 = 0;
  local_150 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (void *)0x0;
  local_110 = 0x10;
  local_280 = ppuVar1;
  local_210[0] = (undefined **)uVar2;
  local_170 = &PTR__basic_stringbuf_01c67100;
  std::__ndk1::ios_base::init((ios_base *)local_210,&local_278);
  local_180 = 0xffffffff;
  local_188 = 0;
  local_280 = &PTR__basic_ostringstream_01c6c858;
  local_278 = &PTR__basic_streambuf_01c671a8;
  local_210[0] = &PTR__basic_ostringstream_01c6c880;
  std::__ndk1::locale::locale(alStack_270);
  uStack_240 = 0;
  local_248 = 0;
  uStack_250 = 0;
  local_258 = 0;
  uStack_260 = 0;
  local_268 = 0;
  uStack_230 = 0;
  local_238 = 0;
  uStack_220 = 0;
  local_228 = (void *)0x0;
  local_218 = 0x10;
  local_388 = ppuVar1;
  local_318[0] = (undefined **)uVar2;
  local_278 = &PTR__basic_stringbuf_01c67100;
  std::__ndk1::ios_base::init((ios_base *)local_318,&local_380);
  local_288 = 0xffffffff;
  local_290 = 0;
  local_388 = &PTR__basic_ostringstream_01c6c858;
  local_380 = &PTR__basic_streambuf_01c671a8;
  local_318[0] = &PTR__basic_ostringstream_01c6c880;
  std::__ndk1::locale::locale(alStack_378);
  uStack_348 = 0;
  local_350 = 0;
  uStack_358 = 0;
  local_360 = 0;
  uStack_368 = 0;
  local_370 = 0;
  uStack_338 = 0;
  local_340 = 0;
  uStack_328 = 0;
  local_330 = (void *)0x0;
  local_320 = 0x10;
  local_380 = &PTR__basic_stringbuf_01c67100;
  (**(code **)(**(long **)param_1 + 0x20))(*(long **)param_1,&local_178,1);
  (**(code **)(**(long **)param_1 + 0x20))(*(long **)param_1,&local_280,0);
  Operator::PrintPropsTo(*(Operator **)param_1,(basic_ostream *)&local_388);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (*(basic_ostream **)this,"{\"id\":",6);
  if (param_1 != (Node *)0x0) {
    uVar11 = *(uint *)(param_1 + 0x14) & 0xffffff;
  }
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,uVar11);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7,",\"label\":\"",10);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  pcVar9 = (char *)((ulong)&local_490 | 1);
  ppuVar1 = (undefined **)((ulong)local_490 >> 1 & 0x7f);
  if (((ulong)local_490 & 1) != 0) {
    pcVar9 = local_480;
    ppuVar1 = local_488;
  }
  for (; ppuVar1 != (undefined **)0x0; ppuVar1 = (undefined **)((long)ppuVar1 + -1)) {
    JSONEscaped::PipeCharacter(pbVar7,*pcVar9);
    pcVar9 = pcVar9 + 1;
  }
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"\"",1)
  ;
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7,",\"title\":\"",10);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  pcVar9 = (char *)((ulong)local_4a8 | 1);
  uVar10 = (ulong)(local_4a8[0] >> 1);
  if ((local_4a8[0] & 1) != 0) {
    pcVar9 = local_498;
    uVar10 = local_4a0;
  }
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    JSONEscaped::PipeCharacter(pbVar7,*pcVar9);
    pcVar9 = pcVar9 + 1;
  }
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"\"",1)
  ;
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7,",\"live\": ",9);
  if (this[0x90] != (JSONGraphNodeWriter)0x1) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","only_inputs_");
  }
  if (param_1 == (Node *)0x0) {
    pcVar9 = "false";
  }
  else {
    uVar10 = (ulong)*(uint *)(param_1 + 0x14) & 0xffffff;
    pcVar9 = "false";
    if ((uVar10 < *(ulong *)(this + 0x78)) &&
       ((*(ulong *)(*(long *)(this + 0x70) + (uVar10 >> 3 & 0x1ffff8)) >>
         ((ulong)*(uint *)(param_1 + 0x14) & 0x3f) & 1) != 0)) {
      pcVar9 = "true";
    }
  }
  sVar8 = strlen(pcVar9);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7,pcVar9,sVar8);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7,",\"properties\":\"",0xf);
  std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  str();
  pcVar9 = (char *)((ulong)&local_4c0 | 1);
  uVar10 = local_4c0 >> 1 & 0x7f;
  if ((local_4c0 & 1) != 0) {
    pcVar9 = local_4b0;
    uVar10 = local_4b8;
  }
  for (; uVar10 != 0; uVar10 = uVar10 - 1) {
    JSONEscaped::PipeCharacter(pbVar7,*pcVar9);
    pcVar9 = pcVar9 + 1;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"\"",1);
  if ((local_4c0 & 1) != 0) {
    operator_delete(local_4b0);
  }
  if ((local_4a8[0] & 1) != 0) {
    operator_delete(local_498);
  }
  if (((ulong)local_490 & 1) != 0) {
    operator_delete(local_480);
  }
  uVar3 = *(ushort *)(*(long *)param_1 + 0x10);
  if (uVar3 - 0x23 < 2) {
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (*(basic_ostream **)this,",\"rankInputs\":[0,",0x11);
    iVar6 = NodeProperties::PastEffectIndex(param_1);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,iVar6);
    pcVar9 = "]";
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"]",1);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (*(basic_ostream **)this,",\"rankWithInput\":[",0x12);
    iVar6 = NodeProperties::PastEffectIndex(param_1);
    pbVar7 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,iVar6);
    uVar10 = 1;
  }
  else {
    if (uVar3 - 4 < 2) {
LAB_016d01c0:
      pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (*(basic_ostream **)this,",\"rankInputs\":[",0xf);
      iVar6 = NodeProperties::PastEffectIndex(param_1);
      pbVar7 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,iVar6);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"]",1);
      if (uVar3 != 2) goto LAB_016d0218;
    }
    else if (uVar3 != 2) {
      if (uVar3 != 1) goto LAB_016d0218;
      goto LAB_016d01c0;
    }
    pbVar7 = *(basic_ostream **)this;
    pcVar9 = ",\"rankInputs\":[0]";
    uVar10 = 0x11;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,pcVar9,uVar10);
LAB_016d0218:
  if ((*(SourcePositionTable **)(this + 0x98) != (SourcePositionTable *)0x0) &&
     (local_490 = (undefined **)
                  SourcePositionTable::GetSourcePosition
                            (*(SourcePositionTable **)(this + 0x98),param_1),
     ((ulong)local_490 & 0x7fffffffffff) != 0)) {
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (*(basic_ostream **)this,", \"sourcePosition\" : ",0x15);
    SourcePosition::PrintJson((SourcePosition *)&local_490,pbVar7);
  }
  if ((*(Node **)(this + 0xa0) != (Node *)0x0) &&
     (NodeOriginTable::GetNodeOrigin(*(Node **)(this + 0xa0)), -1 < local_478)) {
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (*(basic_ostream **)this,", \"origin\" : ",0xd);
    NodeOrigin::PrintJson((NodeOrigin *)&local_490,pbVar7);
  }
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (*(basic_ostream **)this,",\"opcode\":\"",0xb);
  pcVar9 = (char *)IrOpcode::Mnemonic(*(undefined2 *)(*(long *)param_1 + 0x10));
  sVar8 = strlen(pcVar9);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7,pcVar9,sVar8);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"\"",1);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (*(basic_ostream **)this,",\"control\":",0xb);
  bVar5 = 0x16 < *(ushort *)(*(long *)param_1 + 0x10);
  pcVar9 = "true";
  if (bVar5) {
    pcVar9 = "false";
  }
  uVar10 = 4;
  if (bVar5) {
    uVar10 = 5;
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,pcVar9,uVar10);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (*(basic_ostream **)this,",\"opinfo\":\"",0xb);
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                      *(int *)(*(long *)param_1 + 0x14));
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7," v ",3);
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                      *(int *)(*(long *)param_1 + 0x18));
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7," eff ",5);
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                      *(int *)(*(long *)param_1 + 0x1c));
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7," ctrl in, ",10);
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                      *(int *)(*(long *)param_1 + 0x20));
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7," v ",3);
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                      (uint)*(byte *)(*(long *)param_1 + 0x24));
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7," eff ",5);
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,
                      *(int *)(*(long *)param_1 + 0x28));
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (pbVar7," ctrl out\"",10);
  if (*(ulong *)(param_1 + 8) != 0) {
    local_490 = (undefined **)0x1c6c8a8;
    local_420[0] = (undefined **)0x1c6c8d0;
    local_4c0 = *(ulong *)(param_1 + 8);
    std::__ndk1::ios_base::init((ios_base *)local_420,&local_488);
    local_490 = &PTR__basic_ostringstream_01c6c858;
    local_420[0] = &PTR__basic_ostringstream_01c6c880;
    local_488 = &PTR__basic_streambuf_01c671a8;
    local_390 = 0xffffffff;
    local_398 = 0;
    std::__ndk1::locale::locale((locale *)&local_480);
    local_488 = &PTR__basic_stringbuf_01c67100;
    uStack_450 = 0;
    local_458 = 0;
    uStack_460 = 0;
    local_468 = 0;
    uStack_470 = 0;
    local_478 = 0;
    uStack_440 = 0;
    local_448 = 0;
    uStack_430 = 0;
    local_438 = (void *)0x0;
    local_428 = 0x10;
    Type::PrintTo((Type *)&local_4c0,(basic_ostream *)&local_490);
    pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (*(basic_ostream **)this,",\"type\":\"",9);
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pcVar9 = (char *)((ulong)local_4a8 | 1);
    uVar10 = (ulong)(local_4a8[0] >> 1);
    if ((local_4a8[0] & 1) != 0) {
      pcVar9 = local_498;
      uVar10 = local_4a0;
    }
    for (; uVar10 != 0; uVar10 = uVar10 - 1) {
      JSONEscaped::PipeCharacter(pbVar7,*pcVar9);
      pcVar9 = pcVar9 + 1;
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"\"",1);
    if ((local_4a8[0] & 1) != 0) {
      operator_delete(local_498);
    }
    local_490 = &PTR__basic_ostringstream_01c6c858;
    local_420[0] = &PTR__basic_ostringstream_01c6c880;
    local_488 = &PTR__basic_stringbuf_01c67100;
    if ((local_448 & 1) != 0) {
      operator_delete(local_438);
    }
    local_488 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale((locale *)&local_480);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_420);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (*(basic_ostream **)this,"}",1);
  local_388 = &PTR__basic_ostringstream_01c6c858;
  local_318[0] = &PTR__basic_ostringstream_01c6c880;
  if ((local_340 & 1) != 0) {
    local_380 = &PTR__basic_stringbuf_01c67100;
    operator_delete(local_330);
  }
  local_380 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_378);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_318);
  local_280 = &PTR__basic_ostringstream_01c6c858;
  local_210[0] = &PTR__basic_ostringstream_01c6c880;
  if ((local_238 & 1) != 0) {
    local_278 = &PTR__basic_stringbuf_01c67100;
    operator_delete(local_228);
  }
  local_278 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_270);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_210);
  local_178 = &PTR__basic_ostringstream_01c6c858;
  local_108[0] = &PTR__basic_ostringstream_01c6c880;
  local_170 = &PTR__basic_stringbuf_01c67100;
  if ((local_130 & 1) != 0) {
    operator_delete(local_120);
  }
  local_170 = &PTR__basic_streambuf_01c671a8;
  std::__ndk1::locale::~locale(alStack_168);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
  if (*(long *)(lVar4 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

