
/* v8::internal::Disassembler::Decode(v8::internal::Isolate*, std::__ndk1::basic_ostream<char,
   std::__ndk1::char_traits<char> >*, unsigned char*, unsigned char*, v8::internal::CodeReference,
   unsigned long) */

undefined4 __thiscall
v8::internal::Disassembler::Decode
          (Disassembler *this,undefined8 param_1,undefined8 param_2,undefined8 param_3,
          undefined8 param_4,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  void *pvVar5;
  ExternalReferenceEncoder aEStack_1d8 [8];
  undefined **local_1d0;
  undefined1 *puStack_1c8;
  undefined8 local_1c0;
  undefined1 auStack_1b8 [128];
  Disassembler *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined1 *puStack_120;
  undefined8 local_118;
  undefined1 auStack_110 [128];
  void *local_90;
  undefined8 uStack_88;
  void *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  puStack_1c8 = auStack_1b8;
  local_1d0 = &PTR__V8NameConverter_01ca4b00;
  puStack_120 = auStack_110;
  local_1c0 = 0x80;
  local_118 = 0x80;
  uStack_88 = 0;
  local_90 = (void *)0x0;
  uStack_78 = 0;
  local_80 = (void *)0x0;
  local_70 = 0x3f800000;
  local_138 = this;
  uStack_130 = param_4;
  local_128 = param_6;
  if (this == (Disassembler *)0x0) {
    uVar4 = FUN_00f27848(0,0,param_1,param_4,param_6,&local_1d0,param_2,param_3,param_7);
  }
  else {
    ExternalReferenceEncoder::ExternalReferenceEncoder(aEStack_1d8,(Isolate *)this);
    uVar4 = FUN_00f27848(this,aEStack_1d8,param_1,param_4,param_6,&local_1d0,param_2,param_3,param_7
                        );
    ExternalReferenceEncoder::~ExternalReferenceEncoder(aEStack_1d8);
  }
  local_1d0 = &PTR__V8NameConverter_01ca4b00;
  pvVar2 = local_90;
  puVar3 = local_80;
  while (puVar3 != (void *)0x0) {
    pvVar5 = (void *)*puVar3;
    local_90 = pvVar2;
    operator_delete(puVar3);
    pvVar2 = local_90;
    puVar3 = pvVar5;
  }
  local_90 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}

