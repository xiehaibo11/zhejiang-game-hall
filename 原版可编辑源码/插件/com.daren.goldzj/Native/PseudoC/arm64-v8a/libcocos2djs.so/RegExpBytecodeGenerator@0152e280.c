
/* v8::internal::RegExpBytecodeGenerator::RegExpBytecodeGenerator(v8::internal::Isolate*,
   v8::internal::Zone*) */

void __thiscall
v8::internal::RegExpBytecodeGenerator::RegExpBytecodeGenerator
          (RegExpBytecodeGenerator *this,Isolate *param_1,Zone *param_2)

{
  void *pvVar1;
  long *plVar2;
  
  RegExpMacroAssembler::RegExpMacroAssembler((RegExpMacroAssembler *)this,param_1,param_2);
  *(undefined ***)this = &PTR__RegExpBytecodeGenerator_01cc8038;
  pvVar1 = operator_new__(0x400,(nothrow_t *)&std::nothrow);
  if (pvVar1 == (void *)0x0) {
    plVar2 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar2 + 0x18))();
    pvVar1 = operator_new__(0x400,(nothrow_t *)&std::nothrow);
    if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  *(undefined8 *)(this + 0x50) = 0;
  *(void **)(this + 0x28) = pvVar1;
  *(undefined8 *)(this + 0x30) = 0x400;
  *(undefined4 *)(this + 0x4c) = 0xffffffff;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(Zone **)(this + 0x60) = param_2;
  *(undefined8 *)(this + 0x68) = 0;
  *(Zone **)(this + 0x70) = param_2;
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x80) = 0x3f800000;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
  ::rehash((__hash_table<std::__ndk1::__hash_value_type<int,int>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,int>,v8::base::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,int>,std::__ndk1::equal_to<int>,true>,v8::internal::ZoneAllocator<std::__ndk1::__hash_value_type<int,int>>>
            *)(this + 0x50),100);
  *(Isolate **)(this + 0x88) = param_1;
  return;
}

