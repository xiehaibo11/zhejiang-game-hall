
/* v8::internal::interpreter::BytecodeGenerator::AddToEagerLiteralsIfEager(v8::internal::FunctionLiteral*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::AddToEagerLiteralsIfEager
          (BytecodeGenerator *this,FunctionLiteral *param_1)

{
  ulong uVar1;
  vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
  *this_00;
  FunctionLiteral *local_28;
  
  if ((*(long *)(this + 0x1f0) != 0) &&
     (local_28 = param_1, uVar1 = FunctionLiteral::ShouldEagerCompile(param_1), (uVar1 & 1) != 0)) {
    this_00 = *(vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
                **)(this + 0x1f0);
    if (*(undefined8 **)(this_00 + 8) == *(undefined8 **)(this_00 + 0x10)) {
      std::__ndk1::
      vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
      ::__push_back_slow_path<v8::internal::FunctionLiteral*const&>(this_00,&local_28);
    }
    else {
      **(undefined8 **)(this_00 + 8) = param_1;
      *(long *)(this_00 + 8) = *(long *)(this_00 + 8) + 8;
    }
  }
  return;
}

