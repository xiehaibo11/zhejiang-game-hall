
/* v8::internal::compiler::InstructionSelector::EmitPrepareArguments(v8::internal::ZoneVector<v8::internal::compiler::PushParameter>*,
   v8::internal::compiler::CallDescriptor const*, v8::internal::compiler::Node*) */

void v8::internal::compiler::InstructionSelector::EmitPrepareArguments
               (ZoneVector *param_1,CallDescriptor *param_2,Node *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  Node *pNVar9;
  InstructionSequence *pIVar10;
  Node *pNVar11;
  int iVar12;
  ulong uVar13;
  Constant aCStack_60 [16];
  
  uVar13 = (ulong)(*(long *)(param_2 + 8) - *(long *)param_2) >> 4;
  iVar12 = (int)uVar13;
  uVar8 = iVar12 + 1U & 0xfffffffe;
  uVar4 = iVar12 - 1;
  if (0 < (int)uVar8) {
    pIVar10 = *(InstructionSequence **)(param_1 + 0x10);
    Constant::Constant(aCStack_60,uVar8);
    uVar5 = InstructionSequence::AddImmediate(pIVar10,aCStack_60);
    Emit((InstructionSelector *)param_1,0xa8,0,uVar5,0,0);
    if ((uVar13 & 1) != 0) {
      pIVar10 = *(InstructionSequence **)(param_1 + 0x10);
      Constant::Constant(aCStack_60,0);
      uVar5 = InstructionSequence::AddImmediate(pIVar10,aCStack_60);
      pIVar10 = *(InstructionSequence **)(param_1 + 0x10);
      Constant::Constant(aCStack_60,uVar8 - 1);
      uVar6 = InstructionSequence::AddImmediate(pIVar10,aCStack_60);
      Emit((InstructionSelector *)param_1,0xa9,0,uVar5,uVar6,0,0);
    }
  }
  do {
    while( true ) {
      if ((int)uVar4 < 0) {
        return;
      }
      puVar1 = (undefined8 *)(*(long *)param_2 + (ulong)uVar4 * 0x10);
      pNVar9 = (Node *)*puVar1;
      uVar3 = *(ushort *)((long)puVar1 + 0xc);
      if (uVar4 == 0) {
        pNVar11 = (Node *)0x0;
        uVar8 = 0;
      }
      else {
        lVar2 = *(long *)param_2 + (long)(int)uVar4 * 0x10;
        pNVar11 = *(Node **)(lVar2 + -0x10);
        uVar8 = (uint)((ulong)*(undefined8 *)(lVar2 + -8) >> 0x20);
      }
      if (pNVar9 != (Node *)0x0) break;
LAB_0162185c:
      uVar4 = uVar4 - 1;
    }
    if (((pNVar11 == (Node *)0x0) || ((uVar3 & 0xff) != (uVar8 & 0xff))) ||
       ((uint)(uVar3 >> 8) != (uVar8 >> 8 & 0xff))) {
      uVar13 = GetVirtualRegister((InstructionSelector *)param_1,pNVar9);
      MarkAsUsed((InstructionSelector *)param_1,pNVar9);
      pIVar10 = *(InstructionSequence **)(param_1 + 0x10);
      Constant::Constant(aCStack_60,uVar4);
      uVar5 = InstructionSequence::AddImmediate(pIVar10,aCStack_60);
      Emit((InstructionSelector *)param_1,0xa9,0,(uVar13 & 0xffffffff) << 3 | 0x5800000001,uVar5,0,0
          );
      goto LAB_0162185c;
    }
    uVar13 = GetVirtualRegister((InstructionSelector *)param_1,pNVar9);
    MarkAsUsed((InstructionSelector *)param_1,pNVar9);
    uVar7 = GetVirtualRegister((InstructionSelector *)param_1,pNVar11);
    MarkAsUsed((InstructionSelector *)param_1,pNVar11);
    pIVar10 = *(InstructionSequence **)(param_1 + 0x10);
    Constant::Constant(aCStack_60,uVar4);
    uVar5 = InstructionSequence::AddImmediate(pIVar10,aCStack_60);
    Emit((InstructionSelector *)param_1,0xaa,0,(uVar13 & 0xffffffff) << 3 | 0x5800000001,
         (uVar7 & 0xffffffff) << 3 | 0x5800000001,uVar5,0,0);
    uVar4 = uVar4 - 2;
  } while( true );
}

