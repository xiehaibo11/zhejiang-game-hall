
/* v8::internal::interpreter::BytecodeGenerator::BytecodeGenerator(v8::internal::UnoptimizedCompilationInfo*,
   v8::internal::AstStringConstants const*, std::__ndk1::vector<v8::internal::FunctionLiteral*,
   std::__ndk1::allocator<v8::internal::FunctionLiteral*> >*) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BytecodeGenerator
          (BytecodeGenerator *this,UnoptimizedCompilationInfo *param_1,AstStringConstants *param_2,
          vector *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 *puVar5;
  Zone *pZVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar8;
  uVar2 = UnoptimizedCompilationInfo::num_parameters_including_this(param_1);
  lVar4 = UnoptimizedCompilationInfo::scope(param_1);
  uVar1 = *(undefined4 *)(lVar4 + 0x78);
  uVar3 = UnoptimizedCompilationInfo::SourcePositionRecordingMode(param_1);
  BytecodeArrayBuilder::BytecodeArrayBuilder
            ((BytecodeArrayBuilder *)(this + 0x18),uVar8,uVar2,uVar1,param_1 + 0x38,uVar3);
  *(UnoptimizedCompilationInfo **)(this + 0x1d0) = param_1;
  *(AstStringConstants **)(this + 0x1d8) = param_2;
  uVar8 = UnoptimizedCompilationInfo::scope(param_1);
  *(undefined8 *)(this + 0x1e0) = uVar8;
  uVar8 = UnoptimizedCompilationInfo::scope(param_1);
  pZVar6 = *(Zone **)(this + 0x10);
  *(undefined8 *)(this + 0x1e8) = uVar8;
  *(vector **)(this + 0x1f0) = param_3;
  puVar5 = *(undefined8 **)(pZVar6 + 0x10);
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar5) < 0x20) {
    puVar5 = (undefined8 *)Zone::NewExpand(pZVar6,0x20);
  }
  else {
    *(undefined8 **)(pZVar6 + 0x10) = puVar5 + 4;
  }
  uVar8 = *(undefined8 *)(this + 0x10);
  puVar5[1] = 0;
  *puVar5 = puVar5 + 1;
  puVar5[2] = uVar8;
  puVar5[3] = 0;
  pZVar6 = *(Zone **)(this + 0x10);
  *(undefined8 **)(this + 0x1f8) = puVar5;
  puVar5 = *(undefined8 **)(pZVar6 + 0x10);
  if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar5) < 0x30) {
    puVar5 = (undefined8 *)Zone::NewExpand(pZVar6,0x30);
  }
  else {
    *(undefined8 **)(pZVar6 + 0x10) = puVar5 + 6;
  }
  puVar5[3] = *(undefined8 *)(this + 0x10);
  puVar5[4] = 0;
  *(undefined1 *)(puVar5 + 5) = 0;
  puVar5[2] = 0;
  puVar5[1] = 0;
  *puVar5 = 0;
  *(undefined8 **)(this + 0x200) = puVar5;
  *(undefined8 *)(this + 0x210) = 0;
  *(undefined8 *)(this + 0x208) = 0;
  pZVar6 = *(Zone **)(this + 0x10);
  *(undefined8 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x218) = 0;
  *(Zone **)(this + 0x228) = pZVar6;
  *(undefined8 *)(this + 0x240) = 0;
  *(undefined8 *)(this + 0x238) = 0;
  *(undefined8 *)(this + 0x230) = 0;
  *(Zone **)(this + 0x248) = pZVar6;
  *(undefined8 *)(this + 0x260) = 0;
  *(undefined8 *)(this + 600) = 0;
  *(undefined8 *)(this + 0x250) = 0;
  *(Zone **)(this + 0x268) = pZVar6;
  *(undefined8 *)(this + 0x280) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined8 *)(this + 0x270) = 0;
  *(Zone **)(this + 0x288) = pZVar6;
  *(undefined8 *)(this + 0x298) = 0;
  *(undefined8 *)(this + 0x290) = 0;
  *(undefined8 *)(this + 0x2a0) = 0;
  *(Zone **)(this + 0x2a8) = pZVar6;
  *(undefined8 *)(this + 0x2c0) = 0;
  *(undefined8 *)(this + 0x2b8) = 0;
  *(undefined8 *)(this + 0x2b0) = 0;
  *(Zone **)(this + 0x2c8) = pZVar6;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(Zone **)(this + 0x2e8) = pZVar6;
  *(undefined4 *)(this + 0x308) = 0x7fffffff;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x2f0) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x310) = 0;
  *(undefined8 *)(this + 0x318) = 0xffffffff00000010;
  *(long *)(this + 800) = *(long *)(this + 0x1d0) + 0x38;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined4 *)(this + 0x338) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    puVar5 = *(undefined8 **)(pZVar6 + 0x10);
    if ((ulong)(*(long *)(pZVar6 + 0x18) - (long)puVar5) < 0x30) {
      puVar5 = (undefined8 *)Zone::NewExpand(pZVar6,0x30);
    }
    else {
      *(undefined8 **)(pZVar6 + 0x10) = puVar5 + 6;
    }
    uVar8 = *(undefined8 *)(this + 0x10);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = uVar8;
    puVar5[4] = (BytecodeArrayBuilder *)(this + 0x18);
    puVar5[5] = uVar7;
    *(undefined8 **)(this + 0x208) = puVar5;
  }
  return;
}

