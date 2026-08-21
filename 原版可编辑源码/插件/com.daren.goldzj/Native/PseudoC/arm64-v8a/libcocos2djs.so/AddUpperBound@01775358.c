
/* v8::internal::compiler::InductionVariable::AddUpperBound(v8::internal::compiler::Node*,
   v8::internal::compiler::InductionVariable::ConstraintKind) */

void __thiscall
v8::internal::compiler::InductionVariable::AddUpperBound
          (InductionVariable *this,Node *param_1,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  Zone *this_00;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined **local_158;
  undefined **local_150;
  locale alStack_148 [8];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined **local_f8 [17];
  undefined8 local_70;
  undefined4 local_68;
  locale alStack_48 [8];
  
  if (FLAG_trace_turbo_loop != '\0') {
    local_158 = (undefined **)0x1ca1178;
    local_f8[0] = (undefined **)0x1ca11a0;
    std::__ndk1::ios_base::init((ios_base *)local_f8,(AndroidLogStream *)&local_150);
    local_68 = 0xffffffff;
    local_150 = &PTR__basic_streambuf_01c671a8;
    local_70 = 0;
    local_158 = &PTR__StdoutStream_01ca1128;
    local_f8[0] = &PTR__StdoutStream_01ca1150;
    std::__ndk1::locale::locale(alStack_148);
    local_150 = &PTR__AndroidLogStream_01cbc008;
    local_110 = 0;
    uStack_108 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_138 = 0;
    local_140 = 0;
    local_100 = 0;
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_158,"New upper bound for ",0x14);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_158,
               *(uint *)(*(long *)this + 0x14) & 0xffffff);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_158," (loop ",7);
    lVar5 = NodeProperties::GetControlInput(*(Node **)this,0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_158,
               *(uint *)(lVar5 + 0x14) & 0xffffff);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_158,"): ",3);
    compiler::operator<<((basic_ostream *)&local_158,param_1);
    std::__ndk1::ios_base::getloc();
    plVar6 = (long *)std::__ndk1::locale::use_facet(alStack_48,(id *)&std::__ndk1::ctype<char>::id);
    cVar4 = (**(code **)(*plVar6 + 0x38))(plVar6,10);
    std::__ndk1::locale::~locale(alStack_48);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::put
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_158,cVar4);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::flush
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_158);
    local_158 = &PTR__StdoutStream_01ca1128;
    local_f8[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_150);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_f8);
  }
  puVar2 = *(undefined8 **)(this + 0x50);
  if (puVar2 < *(undefined8 **)(this + 0x58)) {
    *puVar2 = param_1;
    *(undefined4 *)(puVar2 + 1) = param_3;
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 0x10;
  }
  else {
    lVar5 = (long)puVar2 - *(long *)(this + 0x48) >> 4;
    uVar1 = lVar5 + 1;
    if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar7 = (long)*(undefined8 **)(this + 0x58) - *(long *)(this + 0x48);
    uVar8 = lVar7 >> 3;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x3fffffe < (ulong)(lVar7 >> 4)) {
      uVar1 = 0x7ffffff;
    }
    if (uVar1 == 0) {
      lVar7 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x60);
      uVar8 = uVar1 * 0x10;
      lVar7 = *(long *)(this_00 + 0x10);
      if (uVar8 < (ulong)(*(long *)(this_00 + 0x18) - lVar7) ||
          uVar8 - (*(long *)(this_00 + 0x18) - lVar7) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar7 + uVar8;
      }
      else {
        lVar7 = Zone::NewExpand(this_00,uVar8);
      }
    }
    puVar2 = (undefined8 *)(lVar7 + lVar5 * 0x10);
    *puVar2 = param_1;
    *(undefined4 *)(puVar2 + 1) = param_3;
    lVar5 = *(long *)(this + 0x48);
    puVar3 = puVar2;
    for (lVar9 = *(long *)(this + 0x50); lVar9 != lVar5; lVar9 = lVar9 + -0x10) {
      uVar10 = *(undefined8 *)(lVar9 + -0x10);
      puVar3[-1] = *(undefined8 *)(lVar9 + -8);
      puVar3[-2] = uVar10;
      puVar3 = puVar3 + -2;
    }
    *(undefined8 **)(this + 0x48) = puVar3;
    *(undefined8 **)(this + 0x50) = puVar2 + 2;
    *(ulong *)(this + 0x58) = lVar7 + uVar1 * 0x10;
  }
  return;
}

