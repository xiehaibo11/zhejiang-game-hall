
/* v8::internal::Deserializer::VisitOffHeapTarget(v8::internal::Code, v8::internal::RelocInfo*) */

void __thiscall
v8::internal::Deserializer::VisitOffHeapTarget
          (Deserializer *this,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined8 uVar6;
  Instruction *pIVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  Instruction *pIVar12;
  undefined8 local_50;
  ulong uStack_48;
  
  lVar9 = (long)*(int *)(this + 0x7c);
  lVar11 = *(long *)(this + 0x70);
  iVar10 = (int)(lVar9 + 1);
  *(int *)(this + 0x7c) = iVar10;
  if (*(char *)(lVar11 + lVar9) != '%') {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","data == kOffHeapTarget");
  }
  bVar5 = *(byte *)(lVar11 + lVar9 + 1);
  lVar9 = lVar9 + lVar11;
  uVar2 = *(undefined1 *)(lVar9 + 2);
  uVar3 = *(undefined1 *)(lVar9 + 3);
  uVar4 = *(undefined1 *)(lVar9 + 4);
  iVar1 = (bVar5 & 3) + 1;
  *(int *)(this + 0x7c) = iVar1 + iVar10;
  lVar9 = Isolate::embedded_blob(*(Isolate **)(this + 0x50));
  if (lVar9 != 0) {
    uVar6 = Isolate::CurrentEmbeddedBlob();
    uStack_48 = Isolate::CurrentEmbeddedBlobSize();
    uStack_48 = uStack_48 & 0xffffffff;
    local_50 = uVar6;
    pIVar7 = (Instruction *)
             EmbeddedData::InstructionStartOfBuiltin
                       ((EmbeddedData *)&local_50,
                        (CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,bVar5))) &
                        0xffffffffU >> (ulong)(iVar1 * -8 & 0x1f)) >> 2);
    if (pIVar7 != (Instruction *)0x0) {
      uVar8 = RelocInfo::OffHeapTargetIsCodedSpecially();
      if ((uVar8 & 1) == 0) {
        pIVar12 = (Instruction *)*param_3;
        if (pIVar12[3] == (Instruction)0x58) {
          pIVar12 = (Instruction *)Instruction::ImmPCOffsetTarget(pIVar12);
        }
        *(Instruction **)pIVar12 = pIVar7;
      }
      else {
        pIVar12 = (Instruction *)*param_3;
        if ((*(uint *)pIVar12 | 0x80000000) >> 0x1a == 0x25) {
          Instruction::SetBranchImmTarget(pIVar12,pIVar7);
          FlushInstructionCache(pIVar12,4);
        }
        else {
          *(Instruction **)pIVar12 = pIVar7;
        }
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","kNullAddress != address");
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("Check failed: %s.","(isolate_->embedded_blob()) != nullptr");
}

