
/* v8::internal::Deserializer::VisitExternalReference(v8::internal::Code, v8::internal::RelocInfo*)
    */

void __thiscall
v8::internal::Deserializer::VisitExternalReference
          (Deserializer *this,undefined8 param_2,RelocInfo *param_3)

{
  long lVar1;
  Instruction *pIVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  Instruction *pIVar11;
  Instruction *pIVar12;
  
  lVar9 = (long)*(int *)(this + 0x7c);
  lVar10 = *(long *)(this + 0x70);
  iVar8 = (int)(lVar9 + 1);
  *(int *)(this + 0x7c) = iVar8;
  if (*(char *)(lVar10 + lVar9) != '!') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","data == kExternalReference");
  }
  lVar1 = lVar9 + lVar10;
  bVar6 = *(byte *)(lVar10 + lVar9 + 1);
  uVar3 = *(undefined1 *)(lVar1 + 2);
  uVar4 = *(undefined1 *)(lVar1 + 3);
  uVar5 = *(undefined1 *)(lVar1 + 4);
  lVar9 = ((ulong)bVar6 & 3) + 1;
  *(int *)(this + 0x7c) = (int)lVar9 + iVar8;
  pIVar12 = *(Instruction **)
             (*(long *)(this + 0x50) +
              ((ulong)CONCAT13(uVar5,CONCAT12(uVar4,CONCAT11(uVar3,bVar6))) &
               0xffffffffUL >> (lVar9 * -8 + 0x20U & 0x3f) & 0x7ffffffffffffffc) * 2 + 0x1010);
  uVar7 = RelocInfo::IsCodedSpecially(param_3);
  if ((uVar7 & 1) == 0) {
    pIVar11 = *(Instruction **)param_3;
    if (pIVar11[3] == (Instruction)0x58) {
      pIVar11 = (Instruction *)Instruction::ImmPCOffsetTarget(pIVar11);
    }
    *(Instruction **)pIVar11 = pIVar12;
  }
  else {
    pIVar11 = *(Instruction **)param_3;
    if ((*(uint *)pIVar11 | 0x80000000) >> 0x1a == 0x25) {
      pIVar2 = pIVar11;
      if (pIVar12 != (Instruction *)0x0) {
        pIVar2 = pIVar12;
      }
      Instruction::SetBranchImmTarget(pIVar11,pIVar2);
      FlushInstructionCache(pIVar11,4);
      return;
    }
    *(Instruction **)pIVar11 = pIVar12;
  }
  return;
}

