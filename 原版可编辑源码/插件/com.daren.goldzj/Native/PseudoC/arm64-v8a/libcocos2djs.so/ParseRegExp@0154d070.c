
/* v8::internal::RegExpParser::ParseRegExp(v8::internal::Isolate*, v8::internal::Zone*,
   v8::internal::FlatStringReader*, v8::base::Flags<v8::internal::JSRegExp::Flag, int>,
   v8::internal::RegExpCompileData*) */

void v8::internal::RegExpParser::ParseRegExp
               (undefined8 param_1,Zone *param_2,long param_3,undefined4 param_4,undefined8 *param_5
               )

{
  long lVar1;
  int iVar2;
  byte bVar3;
  RegExpTree *this;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  undefined **local_1b8;
  undefined **local_1b0;
  locale alStack_1a8 [8];
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined **local_158 [17];
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  Zone *pZStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined1 local_74;
  undefined4 local_73;
  char local_6f;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_b0 = param_5 + 5;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_88 = 0x200000;
  local_80 = 0;
  local_78 = 0;
  local_74 = 1;
  local_73 = 0;
  local_6f = '\0';
  local_c0 = param_1;
  pZStack_b8 = param_2;
  local_90 = param_3;
  uStack_84 = param_4;
  Advance((RegExpParser *)&local_c0);
  this = (RegExpTree *)ParseDisjunction((RegExpParser *)&local_c0);
  cVar7 = '\x01';
  if (local_6f == '\0') {
    PatchNamedBackReferences((RegExpParser *)&local_c0);
    if (local_6f == '\0') {
      uVar4 = (**(code **)(*(long *)this + 0xa0))(this);
      if (((uVar4 & 1) != 0) &&
         (lVar5 = (**(code **)(*(long *)this + 0x98))(this),
         *(int *)(local_90 + 0x24) == *(int *)(lVar5 + 0x10))) {
        local_73 = CONCAT31(local_73._1_3_,1);
      }
      cVar7 = local_6f;
      if (local_6f == '\0') {
        if (FLAG_trace_regexp_parser != '\0') {
          local_1b8 = (undefined **)0x1ca1178;
          local_158[0] = (undefined **)0x1ca11a0;
          std::__ndk1::ios_base::init((ios_base *)local_158,(AndroidLogStream *)&local_1b0);
          local_c8 = 0xffffffff;
          local_1b0 = &PTR__basic_streambuf_01c671a8;
          local_d0 = 0;
          local_1b8 = &PTR__StdoutStream_01ca1128;
          local_158[0] = &PTR__StdoutStream_01ca1150;
          std::__ndk1::locale::locale(alStack_1a8);
          local_1b0 = &PTR__AndroidLogStream_01cbc008;
          local_170 = 0;
          uStack_168 = 0;
          uStack_188 = 0;
          local_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          uStack_198 = 0;
          local_1a0 = 0;
          local_160 = 0;
          RegExpTree::Print(this,(basic_ostream *)&local_1b8,param_2);
          std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                    ((basic_ostream *)&local_1b8,"\n",1);
          local_1b8 = &PTR__StdoutStream_01ca1128;
          local_158[0] = &PTR__StdoutStream_01ca1150;
          AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_1b0);
          std::__ndk1::ios_base::~ios_base((ios_base *)local_158);
        }
        *param_5 = this;
        iVar2 = local_80._4_4_;
        bVar3 = (**(code **)(*(long *)this + 0xa0))(this);
        *(byte *)(param_5 + 3) = iVar2 == 0 & bVar3 & (char)local_73 != '\0';
        *(undefined1 *)((long)param_5 + 0x19) = local_73._1_1_;
        uVar6 = CreateCaptureNameMap((RegExpParser *)&local_c0);
        param_5[4] = uVar6;
        *(int *)(param_5 + 6) = iVar2;
        cVar7 = local_6f;
      }
    }
    else {
      cVar7 = '\x01';
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(cVar7 == '\0');
}

