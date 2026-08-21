
/* v8::internal::ICInfo::AppendToTracedValue(v8::tracing::TracedValue*) const */

void __thiscall v8::internal::ICInfo::AppendToTracedValue(ICInfo *this,TracedValue *param_1)

{
  char *pcVar1;
  ICInfo IVar2;
  long lVar3;
  ICInfo *pIVar4;
  byte local_1a0 [16];
  char *local_190;
  undefined **local_188;
  undefined8 local_180;
  undefined **local_178;
  undefined **local_170;
  locale alStack_168 [8];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
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
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  v8::tracing::TracedValue::BeginDictionary(param_1);
  pIVar4 = *(ICInfo **)(this + 0x10);
  if (((byte)*this & 1) == 0) {
    pIVar4 = this + 1;
  }
  v8::tracing::TracedValue::SetString(param_1,"type",(char *)pIVar4);
  if ((*(char **)(this + 0x18) != (char *)0x0) &&
     (v8::tracing::TracedValue::SetString(param_1,"functionName",*(char **)(this + 0x18)),
     this[0x39] != (ICInfo)0x0)) {
    v8::tracing::TracedValue::SetInteger(param_1,"optimized",1);
  }
  if (*(int *)(this + 0x20) != 0) {
    v8::tracing::TracedValue::SetInteger(param_1,"offset",*(int *)(this + 0x20));
  }
  if (*(char **)(this + 0x28) != (char *)0x0) {
    v8::tracing::TracedValue::SetString(param_1,"scriptName",*(char **)(this + 0x28));
  }
  if (*(int *)(this + 0x30) != -1) {
    v8::tracing::TracedValue::SetInteger(param_1,"lineNum",*(int *)(this + 0x30));
  }
  if (*(int *)(this + 0x34) != -1) {
    v8::tracing::TracedValue::SetInteger(param_1,"columnNum",*(int *)(this + 0x34));
  }
  if (this[0x38] != (ICInfo)0x0) {
    v8::tracing::TracedValue::SetInteger(param_1,"constructor",1);
  }
  IVar2 = this[0x40];
  if (((byte)IVar2 & 1) == 0) {
    if ((byte)IVar2 >> 1 != 0) {
LAB_01025790:
      pIVar4 = *(ICInfo **)(this + 0x50);
      if (((byte)IVar2 & 1) == 0) {
        pIVar4 = this + 0x41;
      }
      v8::tracing::TracedValue::SetString(param_1,"state",(char *)pIVar4);
    }
  }
  else if (*(long *)(this + 0x48) != 0) goto LAB_01025790;
  if (*(long *)(this + 0x58) != 0) {
    local_188 = (undefined **)0x1c670a0;
    local_108[0] = (undefined **)0x1c670c8;
    local_180 = 0;
    local_178 = &PTR__basic_stringstream_01c66fb0;
    std::__ndk1::ios_base::init((ios_base *)local_108,&local_170);
    local_78 = 0xffffffff;
    local_170 = &PTR__basic_streambuf_01c671a8;
    local_80 = 0;
    local_188 = &PTR__basic_stringstream_01c66f88;
    local_178 = &PTR__basic_stringstream_01c66fb0;
    local_108[0] = &PTR__basic_stringstream_01c66fd8;
    std::__ndk1::locale::locale(alStack_168);
    uStack_148 = 0;
    local_150 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_158 = 0;
    local_160 = 0;
    uStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (void *)0x0;
    local_110 = 0x18;
    local_170 = &PTR__basic_stringbuf_01c67100;
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)&local_178,
               *(void **)(this + 0x58));
    std::__ndk1::basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    str();
    pcVar1 = (char *)((ulong)local_1a0 | 1);
    if ((local_1a0[0] & 1) != 0) {
      pcVar1 = local_190;
    }
    v8::tracing::TracedValue::SetString(param_1,"map",pcVar1);
    if ((local_1a0[0] & 1) != 0) {
      operator_delete(local_190);
    }
    local_188 = &PTR__basic_stringstream_01c66f88;
    local_178 = &PTR__basic_stringstream_01c66fb0;
    local_108[0] = &PTR__basic_stringstream_01c66fd8;
    if ((local_130 & 1) != 0) {
      local_170 = &PTR__basic_stringbuf_01c67100;
      operator_delete(local_120);
    }
    local_170 = &PTR__basic_streambuf_01c671a8;
    std::__ndk1::locale::~locale(alStack_168);
    std::__ndk1::ios_base::~ios_base((ios_base *)local_108);
    if ((*(long *)(this + 0x58) != 0) &&
       (v8::tracing::TracedValue::SetInteger(param_1,"dict",(uint)(byte)this[0x60]),
       *(long *)(this + 0x58) != 0)) {
      v8::tracing::TracedValue::SetInteger(param_1,"own",*(int *)(this + 100));
    }
  }
  IVar2 = this[0x68];
  if (((byte)IVar2 & 1) == 0) {
    if ((byte)IVar2 >> 1 == 0) goto LAB_01025960;
  }
  else if (*(long *)(this + 0x70) == 0) goto LAB_01025960;
  pIVar4 = *(ICInfo **)(this + 0x78);
  if (((byte)IVar2 & 1) == 0) {
    pIVar4 = this + 0x69;
  }
  v8::tracing::TracedValue::SetString(param_1,"instanceType",(char *)pIVar4);
LAB_01025960:
  v8::tracing::TracedValue::EndDictionary(param_1);
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

