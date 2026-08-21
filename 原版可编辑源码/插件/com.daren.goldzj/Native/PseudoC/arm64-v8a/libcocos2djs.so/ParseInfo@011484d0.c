
/* v8::internal::ParseInfo::ParseInfo(v8::internal::Isolate*, v8::internal::AccountingAllocator*) */

void __thiscall
v8::internal::ParseInfo::ParseInfo(ParseInfo *this,Isolate *param_1,AccountingAllocator *param_2)

{
  Zone *this_00;
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  void *pvVar6;
  
  this_00 = operator_new(0x40);
  Zone::Zone(this_00,param_2,"../../src/parsing/parse-info.cc:23");
  *(undefined8 *)(this + 0x34) = 0xffffffff;
  *(undefined8 *)(this + 0x3c) = 0xffffffff00000000;
  *(Zone **)this = this_00;
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0xaf) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined2 *)(this + 0x30) = 0x200;
  *(undefined8 *)(this + 0x44) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(this + 0x28) = *(undefined8 *)(*(long *)(param_1 + 0x490) + 7);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x58);
  *(long *)(this + 0x88) = *(long *)(param_1 + 0x9520) + 0x58a0;
  *(undefined8 *)(this + 0x90) = *(undefined8 *)(param_1 + 0x9558);
  *(undefined8 *)(this + 0x78) = *(undefined8 *)(param_1 + 0xb6e0);
  uVar3 = (uint)FLAG_enable_lazy_source_positions;
  if (FLAG_enable_lazy_source_positions != 0) {
    uVar1 = Isolate::NeedsDetailedOptimizedCodeLineInfo(param_1);
    uVar3 = *(uint *)(this + 8);
    if ((uVar1 & 1) == 0) {
      uVar3 = uVar3 & 0xf7ffffff;
      goto LAB_011485c8;
    }
  }
  uVar3 = uVar3 | 0x8000000;
LAB_011485c8:
  *(uint *)(this + 8) = uVar3;
  uVar4 = uVar3;
  if (*(int *)(param_1 + 0xb810) != 0) {
    *(uint *)(this + 8) = uVar3 | 0x400;
    uVar4 = uVar3 | 0x400;
    if (*(int *)(param_1 + 0xb810) - 3U < 2) {
      *(uint *)(this + 8) = uVar3 | 0xc00;
      uVar4 = uVar3 | 0xc00;
    }
  }
  if (*(int *)(param_1 + 0xb814) == 1) {
    *(uint *)(this + 8) = uVar4 | 0x200;
  }
  uVar1 = CompilerDispatcher::IsEnabled();
  if ((uVar1 & 1) != 0) {
    puVar2 = operator_new(0x10);
    *puVar2 = *(undefined8 *)(param_1 + 0xb700);
    puVar2[1] = 0;
    pvVar5 = *(void **)(this + 0xa0);
    *(undefined8 **)(this + 0xa0) = puVar2;
    if (pvVar5 != (void *)0x0) {
      puVar2 = *(void **)((long)pvVar5 + 8);
      while (puVar2 != (void *)0x0) {
        pvVar6 = (void *)*puVar2;
        operator_delete(puVar2);
        puVar2 = pvVar6;
      }
      operator_delete(pvVar5);
    }
  }
  uVar3 = *(uint *)(this + 8) & 0xfffeffff;
  if ((FLAG_prepare_always_opt & 1) != 0 || FLAG_always_opt != '\0') {
    uVar3 = *(uint *)(this + 8) | 0x10000;
  }
  uVar4 = uVar3 & 0xfffdffff;
  if (FLAG_lazy != '\0') {
    uVar4 = uVar3 | 0x20000;
  }
  uVar3 = uVar4 & 0xfffbffff;
  if (FLAG_allow_natives_syntax != '\0') {
    uVar3 = uVar4 | 0x40000;
  }
  uVar4 = uVar3 & 0xffdfffff;
  if (FLAG_harmony_dynamic_import != '\0') {
    uVar4 = uVar3 | 0x200000;
  }
  uVar3 = uVar4 & 0xffbfffff;
  if (FLAG_harmony_import_meta != '\0') {
    uVar3 = uVar4 | 0x400000;
  }
  uVar4 = uVar3 & 0xff7fffff;
  if (FLAG_harmony_optional_chaining != '\0') {
    uVar4 = uVar3 | 0x800000;
  }
  uVar3 = uVar4 & 0xefffffff;
  if (FLAG_harmony_nullish != '\0') {
    uVar3 = uVar4 | 0x10000000;
  }
  uVar4 = uVar3 & 0xfdffffff;
  if (FLAG_harmony_private_methods != '\0') {
    uVar4 = uVar3 | 0x2000000;
  }
  uVar3 = uVar4 & 0xdfffffff;
  if (FLAG_harmony_top_level_await != '\0') {
    uVar3 = uVar4 | 0x20000000;
  }
  *(uint *)(this + 8) = uVar3;
  return;
}

