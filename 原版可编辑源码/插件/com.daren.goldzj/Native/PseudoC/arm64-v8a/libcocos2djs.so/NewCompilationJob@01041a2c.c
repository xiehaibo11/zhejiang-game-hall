
/* v8::internal::interpreter::Interpreter::NewCompilationJob(v8::internal::ParseInfo*,
   v8::internal::FunctionLiteral*, v8::internal::AccountingAllocator*,
   std::__ndk1::vector<v8::internal::FunctionLiteral*,
   std::__ndk1::allocator<v8::internal::FunctionLiteral*> >*) */

void __thiscall
v8::internal::interpreter::Interpreter::NewCompilationJob
          (Interpreter *this,ParseInfo *param_1,FunctionLiteral *param_2,
          AccountingAllocator *param_3,vector *param_4)

{
  UnoptimizedCompilationInfo *this_00;
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *in_x8;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x420);
  uVar3 = *(undefined8 *)(this + 0x20);
  this_00 = (UnoptimizedCompilationInfo *)(puVar1 + 0x10);
  *(undefined4 *)(puVar1 + 1) = 1;
  uVar2 = base::TimeTicks::HighResolutionNow();
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = this;
  puVar1[5] = this_00;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *puVar1 = &PTR__InterpreterCompilationJob_01cacb78;
  Zone::Zone((Zone *)(puVar1 + 8),(AccountingAllocator *)param_2,
             "../../src/interpreter/interpreter.cc:148");
  UnoptimizedCompilationInfo::UnoptimizedCompilationInfo
            (this_00,(Zone *)(puVar1 + 8),(ParseInfo *)this,(FunctionLiteral *)param_1);
  BytecodeGenerator::BytecodeGenerator
            ((BytecodeGenerator *)(puVar1 + 0x1c),this_00,*(AstStringConstants **)(this + 0x78),
             (vector *)param_3);
  *in_x8 = puVar1;
  return;
}

