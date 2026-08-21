
/* v8::internal::interpreter::BytecodeGenerator::VisitFunctionLiteral(v8::internal::FunctionLiteral*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitFunctionLiteral
          (BytecodeGenerator *this,FunctionLiteral *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  vector<v8::internal::FunctionLiteral*,std::__ndk1::allocator<v8::internal::FunctionLiteral*>>
  *this_00;
  long lVar6;
  Zone *this_01;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  FunctionLiteral *local_28;
  
  uVar3 = CreateClosureFlags::Encode
                    ((bool)((byte)(*(uint *)(param_1 + 4) >> 10) & 1),
                     *(char *)(*(long *)(this + 0x1e0) + 0x80) == '\x02',
                     (bool)((byte)(**(uint **)(this + 0x1d0) >> 2) & 1));
  uVar5 = BytecodeArrayBuilder::AllocateDeferredConstantPoolEntry();
  iVar4 = GetCachedCreateClosureSlot(this,param_1);
  BytecodeArrayBuilder::CreateClosure
            ((BytecodeArrayBuilder *)(this + 0x18),uVar5,iVar4,uVar3 & 0xff);
  puVar7 = *(undefined8 **)(this + 0x238);
  if (puVar7 < *(undefined8 **)(this + 0x240)) {
    *puVar7 = param_1;
    puVar7[1] = uVar5;
    *(long *)(this + 0x238) = *(long *)(this + 0x238) + 0x10;
  }
  else {
    lVar10 = (long)puVar7 - *(long *)(this + 0x230) >> 4;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (long)*(undefined8 **)(this + 0x240) - *(long *)(this + 0x230);
    uVar8 = lVar6 >> 3;
    if (uVar1 <= uVar8) {
      uVar1 = uVar8;
    }
    if (0x3fffffe < (ulong)(lVar6 >> 4)) {
      uVar1 = 0x7ffffff;
    }
    if (uVar1 == 0) {
      lVar6 = 0;
    }
    else {
      this_01 = *(Zone **)(this + 0x248);
      uVar8 = uVar1 * 0x10;
      lVar6 = *(long *)(this_01 + 0x10);
      if (uVar8 < (ulong)(*(long *)(this_01 + 0x18) - lVar6) ||
          uVar8 - (*(long *)(this_01 + 0x18) - lVar6) == 0) {
        *(ulong *)(this_01 + 0x10) = lVar6 + uVar8;
      }
      else {
        lVar6 = Zone::NewExpand(this_01,uVar8);
      }
    }
    puVar7 = (undefined8 *)(lVar6 + lVar10 * 0x10);
    *puVar7 = param_1;
    puVar7[1] = uVar5;
    lVar9 = *(long *)(this + 0x230);
    puVar2 = puVar7;
    for (lVar10 = *(long *)(this + 0x238); lVar10 != lVar9; lVar10 = lVar10 + -0x10) {
      uVar11 = *(undefined8 *)(lVar10 + -0x10);
      puVar2[-1] = *(undefined8 *)(lVar10 + -8);
      puVar2[-2] = uVar11;
      puVar2 = puVar2 + -2;
    }
    *(undefined8 **)(this + 0x230) = puVar2;
    *(undefined8 **)(this + 0x238) = puVar7 + 2;
    *(ulong *)(this + 0x240) = lVar6 + uVar1 * 0x10;
  }
  if ((*(long *)(this + 0x1f0) != 0) &&
     (local_28 = param_1, uVar5 = FunctionLiteral::ShouldEagerCompile(param_1), (uVar5 & 1) != 0)) {
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

