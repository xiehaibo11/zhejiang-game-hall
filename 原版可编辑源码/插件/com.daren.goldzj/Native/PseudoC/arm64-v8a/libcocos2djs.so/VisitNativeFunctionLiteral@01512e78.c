
/* v8::internal::interpreter::BytecodeGenerator::VisitNativeFunctionLiteral(v8::internal::NativeFunctionLiteral*)
    */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::VisitNativeFunctionLiteral
          (BytecodeGenerator *this,NativeFunctionLiteral *param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  Zone *this_00;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar5 = BytecodeArrayBuilder::AllocateDeferredConstantPoolEntry();
  iVar2 = *(int *)(*(long *)(this + 0x1d0) + 0x58);
  *(int *)(*(long *)(this + 0x1d0) + 0x58) = iVar2 + 1;
  uVar4 = CreateClosureFlags::Encode(false,false,false);
  BytecodeArrayBuilder::CreateClosure
            ((BytecodeArrayBuilder *)(this + 0x18),uVar5,iVar2,uVar4 & 0xff);
  puVar7 = *(undefined8 **)(this + 600);
  if (puVar7 < *(undefined8 **)(this + 0x260)) {
    *puVar7 = param_1;
    puVar7[1] = uVar5;
    *(long *)(this + 600) = *(long *)(this + 600) + 0x10;
  }
  else {
    lVar10 = (long)puVar7 - *(long *)(this + 0x250) >> 4;
    uVar1 = lVar10 + 1;
    if (uVar1 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar6 = (long)*(undefined8 **)(this + 0x260) - *(long *)(this + 0x250);
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
      this_00 = *(Zone **)(this + 0x268);
      uVar8 = uVar1 * 0x10;
      lVar6 = *(long *)(this_00 + 0x10);
      if (uVar8 < (ulong)(*(long *)(this_00 + 0x18) - lVar6) ||
          uVar8 - (*(long *)(this_00 + 0x18) - lVar6) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar6 + uVar8;
      }
      else {
        lVar6 = Zone::NewExpand(this_00,uVar8);
      }
    }
    puVar7 = (undefined8 *)(lVar6 + lVar10 * 0x10);
    *puVar7 = param_1;
    puVar7[1] = uVar5;
    lVar9 = *(long *)(this + 0x250);
    puVar3 = puVar7;
    for (lVar10 = *(long *)(this + 600); lVar10 != lVar9; lVar10 = lVar10 + -0x10) {
      uVar11 = *(undefined8 *)(lVar10 + -0x10);
      puVar3[-1] = *(undefined8 *)(lVar10 + -8);
      puVar3[-2] = uVar11;
      puVar3 = puVar3 + -2;
    }
    *(undefined8 **)(this + 0x250) = puVar3;
    *(undefined8 **)(this + 600) = puVar7 + 2;
    *(ulong *)(this + 0x260) = lVar6 + uVar1 * 0x10;
  }
  return;
}

