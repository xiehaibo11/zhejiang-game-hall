
/* v8::internal::AssemblerBase::AssemblerBase(v8::internal::AssemblerOptions const&,
   std::__ndk1::unique_ptr<v8::internal::AssemblerBuffer,
   std::__ndk1::default_delete<v8::internal::AssemblerBuffer> >) */

void __thiscall
v8::internal::AssemblerBase::AssemblerBase
          (AssemblerBase *this,undefined8 *param_1,undefined8 *param_3)

{
  AssemblerBase AVar1;
  void *pvVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  
  *(undefined ***)this = &PTR__AssemblerBase_01ca10f8;
  plVar4 = (long *)*param_3;
  *param_3 = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0x3f800000;
  *(long **)(this + 8) = plVar4;
  uVar5 = *param_1;
  uVar3 = param_1[2];
  *(undefined8 *)(this + 0xa8) = param_1[1];
  *(undefined8 *)(this + 0xa0) = uVar5;
  *(undefined8 *)(this + 0xb0) = uVar3;
  *(undefined8 *)(this + 0xb8) = 0;
  AVar1 = FLAG_debug_code;
  *(undefined2 *)(this + 0xc1) = 0;
  *(undefined8 *)(this + 200) = 0;
  this[0xc0] = AVar1;
  if (plVar4 == (long *)0x0) {
    plVar4 = operator_new(0x18);
    *plVar4 = (long)&PTR_FUN_01ca11c0;
    pvVar2 = operator_new__(0x1000);
    plVar4[1] = (long)pvVar2;
    plVar4[2] = 0x1000;
    *(long **)(this + 8) = plVar4;
  }
  uVar3 = (**(code **)(*plVar4 + 0x10))(plVar4);
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined8 *)(this + 0x20) = uVar3;
  return;
}

