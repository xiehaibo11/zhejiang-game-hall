
/* v8::internal::CodeEntry::set_deopt_info(char const*, int,
   std::__ndk1::vector<v8::CpuProfileDeoptFrame, std::__ndk1::allocator<v8::CpuProfileDeoptFrame> >)
    */

void __thiscall
v8::internal::CodeEntry::set_deopt_info
          (CodeEntry *this,undefined8 param_1,undefined4 param_2,undefined8 *param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x38);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = operator_new(0x80);
    puVar2[1] = 0;
    *puVar2 = 0;
    puVar2[3] = 0;
    puVar2[2] = 0;
    *puVar2 = &DAT_0189703a;
    puVar2[1] = &DAT_0189703a;
    *(undefined4 *)(puVar2 + 2) = 0xffffffff;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar2[7] = 0;
    puVar2[6] = 0;
    puVar2[0xd] = 0;
    puVar2[0xc] = 0;
    puVar2[0xf] = 0;
    puVar2[0xe] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
    puVar2[0xb] = 0;
    puVar2[10] = 0;
    puVar2[4] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    puVar2[5] = 0;
    *(undefined4 *)(puVar2 + 7) = 0x3f800000;
    *(undefined4 *)(puVar2 + 0xc) = 0x3f800000;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    *(undefined8 **)(this + 0x38) = puVar2;
  }
  *puVar2 = param_1;
  *(undefined4 *)(puVar2 + 2) = param_2;
  pvVar1 = (void *)puVar2[0xd];
  if (pvVar1 != (void *)0x0) {
    puVar2[0xe] = pvVar1;
    operator_delete(pvVar1);
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
  }
  puVar2[0xd] = *param_4;
  puVar2[0xe] = param_4[1];
  puVar2[0xf] = param_4[2];
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  return;
}

