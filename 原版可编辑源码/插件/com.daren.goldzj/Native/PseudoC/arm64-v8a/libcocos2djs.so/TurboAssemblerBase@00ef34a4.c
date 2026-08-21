
/* v8::internal::TurboAssemblerBase::TurboAssemblerBase(v8::internal::Isolate*,
   v8::internal::AssemblerOptions const&, v8::internal::CodeObjectRequired,
   std::__ndk1::unique_ptr<v8::internal::AssemblerBuffer,
   std::__ndk1::default_delete<v8::internal::AssemblerBuffer> >) */

void __thiscall
v8::internal::TurboAssemblerBase::TurboAssemblerBase
          (TurboAssemblerBase *this,Isolate *param_1,undefined8 param_2,int param_4,
          undefined8 *param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *local_38;
  
  local_38 = (long *)*param_5;
  *param_5 = 0;
  Assembler::Assembler((Assembler *)this,param_2,&local_38);
  plVar1 = local_38;
  local_38 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(Isolate **)(this + 0x178) = param_1;
  *(undefined8 *)(this + 0x180) = 0;
  this[0x18a] = (TurboAssemblerBase)0x0;
  *(undefined2 *)(this + 0x188) = 1;
  *(undefined4 *)(this + 0x18c) = 0xffffffff;
  *(undefined ***)this = &PTR__Assembler_01ca4330;
  this[400] = (TurboAssemblerBase)0x0;
  if (param_4 == 1) {
    puVar2 = *(undefined8 **)(param_1 + 0x95a0);
    uVar3 = *(undefined8 *)(param_1 + 0x458);
    if (puVar2 == *(undefined8 **)(param_1 + 0x95a8)) {
      puVar2 = (undefined8 *)HandleScope::Extend(param_1);
    }
    *(undefined8 **)(param_1 + 0x95a0) = puVar2 + 1;
    *puVar2 = uVar3;
    *(undefined8 **)(this + 0x180) = puVar2;
  }
  return;
}

