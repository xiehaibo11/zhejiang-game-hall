
/* v8::internal::interpreter::Interpreter::NewSourcePositionCollectionJob(v8::internal::ParseInfo*,
   v8::internal::FunctionLiteral*, v8::internal::Handle<v8::internal::BytecodeArray>,
   v8::internal::AccountingAllocator*) */

void __thiscall
v8::internal::interpreter::Interpreter::NewSourcePositionCollectionJob
          (undefined8 *param_1_00,Interpreter *this,FunctionLiteral *param_1,undefined8 param_2,
          AccountingAllocator *param_5)

{
  UnoptimizedCompilationInfo *this_00;
  undefined8 *puVar1;
  undefined8 uVar2;
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
  Zone::Zone((Zone *)(puVar1 + 8),param_5,"../../src/interpreter/interpreter.cc:148");
  UnoptimizedCompilationInfo::UnoptimizedCompilationInfo
            (this_00,(Zone *)(puVar1 + 8),(ParseInfo *)this,param_1);
  BytecodeGenerator::BytecodeGenerator
            ((BytecodeGenerator *)(puVar1 + 0x1c),this_00,*(AstStringConstants **)(this + 0x78),
             (vector *)0x0);
  *(undefined8 *)(puVar1[5] + 0x28) = param_2;
  *param_1_00 = puVar1;
  return;
}

