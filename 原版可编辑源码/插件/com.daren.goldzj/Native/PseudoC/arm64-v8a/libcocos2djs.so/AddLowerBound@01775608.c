
/* v8::internal::compiler::InductionVariable::AddLowerBound(v8::internal::compiler::Node*,
   v8::internal::compiler::InductionVariable::ConstraintKind) */

void __thiscall
v8::internal::compiler::InductionVariable::AddLowerBound
          (InductionVariable *this,Node *param_1,undefined4 param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  Zone *this_00;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
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
              ((basic_ostream *)&local_158,"New lower bound for ",0x14);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_158,
               *(uint *)(*(long *)this + 0x14) & 0xffffff);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_158," (loop ",7);
    lVar4 = NodeProperties::GetControlInput(*(Node **)this,0);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_158,
               *(uint *)(lVar4 + 0x14) & 0xffffff);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              ((basic_ostream *)&local_158,"): ",3);
    compiler::operator<<((basic_ostream *)&local_158,param_1);
    local_158 = &PTR__StdoutStream_01ca1128;
    local_f8[0] = &PTR__StdoutStream_01ca1150;
    AndroidLogStream::~AndroidLogStream((AndroidLogStream *)&local_150);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_f8);
  }
  puVar2 = *(undefined8 **)(this + 0x30);
  if (puVar2 < *(undefined8 **)(this + 0x38)) {
    *puVar2 = param_1;
    *(undefined4 *)(puVar2 + 1) = param_3;
    *(long *)(this + 0x30) = *(long *)(this + 0x30) + 0x10;
  }
  else {
    lVar4 = (long)puVar2 - *(long *)(this + 0x28) >> 4;
    uVar1 = lVar4 + 1;
    if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar5 = (long)*(undefined8 **)(this + 0x38) - *(long *)(this + 0x28);
    uVar6 = lVar5 >> 3;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x3fffffe < (ulong)(lVar5 >> 4)) {
      uVar1 = 0x7ffffff;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x40);
      uVar6 = uVar1 * 0x10;
      lVar5 = *(long *)(this_00 + 0x10);
      if (uVar6 < (ulong)(*(long *)(this_00 + 0x18) - lVar5) ||
          uVar6 - (*(long *)(this_00 + 0x18) - lVar5) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar5 + uVar6;
      }
      else {
        lVar5 = Zone::NewExpand(this_00,uVar6);
      }
    }
    puVar2 = (undefined8 *)(lVar5 + lVar4 * 0x10);
    *puVar2 = param_1;
    *(undefined4 *)(puVar2 + 1) = param_3;
    lVar4 = *(long *)(this + 0x28);
    puVar3 = puVar2;
    for (lVar7 = *(long *)(this + 0x30); lVar7 != lVar4; lVar7 = lVar7 + -0x10) {
      uVar8 = *(undefined8 *)(lVar7 + -0x10);
      puVar3[-1] = *(undefined8 *)(lVar7 + -8);
      puVar3[-2] = uVar8;
      puVar3 = puVar3 + -2;
    }
    *(undefined8 **)(this + 0x28) = puVar3;
    *(undefined8 **)(this + 0x30) = puVar2 + 2;
    *(ulong *)(this + 0x38) = lVar5 + uVar1 * 0x10;
  }
  return;
}

