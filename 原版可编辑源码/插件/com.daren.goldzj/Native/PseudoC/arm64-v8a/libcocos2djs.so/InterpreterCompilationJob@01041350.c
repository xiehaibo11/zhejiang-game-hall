
/* v8::internal::interpreter::InterpreterCompilationJob::InterpreterCompilationJob(v8::internal::ParseInfo*,
   v8::internal::FunctionLiteral*, v8::internal::AccountingAllocator*,
   std::__ndk1::vector<v8::internal::FunctionLiteral*,
   std::__ndk1::allocator<v8::internal::FunctionLiteral*> >*) */

void __thiscall
v8::internal::interpreter::InterpreterCompilationJob::InterpreterCompilationJob
          (InterpreterCompilationJob *this,ParseInfo *param_1,FunctionLiteral *param_2,
          AccountingAllocator *param_3,vector *param_4)

{
  UnoptimizedCompilationInfo *this_00;
  undefined8 uVar1;
  undefined8 uVar2;
  
  *(undefined ***)this = &PTR__InterpreterCompilationJob_01cacb78;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined ***)this = &PTR__CompilationJob_01cacba8;
  this_00 = (UnoptimizedCompilationInfo *)(this + 0x80);
  *(undefined4 *)(this + 8) = 1;
  *(undefined8 *)(this + 0x10) = 0;
  uVar1 = base::TimeTicks::HighResolutionNow();
  *(undefined ***)this = &PTR__InterpreterCompilationJob_01cacb78;
  *(undefined8 *)(this + 0x10) = uVar1;
  *(undefined8 *)(this + 0x18) = uVar2;
  *(ParseInfo **)(this + 0x20) = param_1;
  *(UnoptimizedCompilationInfo **)(this + 0x28) = this_00;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  Zone::Zone((Zone *)(this + 0x40),param_3,"../../src/interpreter/interpreter.cc:148");
  UnoptimizedCompilationInfo::UnoptimizedCompilationInfo
            (this_00,(Zone *)(this + 0x40),param_1,param_2);
  BytecodeGenerator::BytecodeGenerator
            ((BytecodeGenerator *)(this + 0xe0),this_00,*(AstStringConstants **)(param_1 + 0x78),
             param_4);
  return;
}

