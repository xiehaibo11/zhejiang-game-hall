
/* v8::internal::AsmJs::NewCompilationJob(v8::internal::ParseInfo*, v8::internal::FunctionLiteral*,
   v8::internal::AccountingAllocator*) */

void __thiscall
v8::internal::AsmJs::NewCompilationJob
          (AsmJs *this,ParseInfo *param_1,FunctionLiteral *param_2,AccountingAllocator *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *in_x8;
  undefined8 uVar3;
  
  puVar1 = operator_new(0x128);
  uVar3 = *(undefined8 *)(this + 0x20);
  *(undefined4 *)(puVar1 + 1) = 1;
  uVar2 = base::TimeTicks::HighResolutionNow();
  puVar1[2] = uVar2;
  puVar1[3] = uVar3;
  puVar1[4] = this;
  puVar1[5] = (UnoptimizedCompilationInfo *)(puVar1 + 0x11);
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = param_2;
  *puVar1 = &PTR__AsmJsCompilationJob_01cc4118;
  Zone::Zone((Zone *)(puVar1 + 9),(AccountingAllocator *)param_2,"../../src/asmjs/asm-js.cc:194");
  UnoptimizedCompilationInfo::UnoptimizedCompilationInfo
            ((UnoptimizedCompilationInfo *)(puVar1 + 0x11),(Zone *)(puVar1 + 9),(ParseInfo *)this,
             (FunctionLiteral *)param_1);
  puVar1[0x1e] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x20] = 0;
  puVar1[0x1f] = 0;
  *(undefined8 *)((long)puVar1 + 0x10c) = 0;
  *(undefined8 *)((long)puVar1 + 0x104) = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  *in_x8 = puVar1;
  return;
}

