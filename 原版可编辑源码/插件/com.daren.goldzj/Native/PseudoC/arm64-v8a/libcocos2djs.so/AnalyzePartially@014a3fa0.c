
/* v8::internal::DeclarationScope::AnalyzePartially(v8::internal::Parser*,
   v8::internal::AstNodeFactory*, bool) */

void __thiscall
v8::internal::DeclarationScope::AnalyzePartially
          (DeclarationScope *this,Parser *param_1,AstNodeFactory *param_2,bool param_3)

{
  DeclarationScope *pDVar1;
  ulong uVar2;
  Zone *this_00;
  Variable *this_01;
  DeclarationScope *pDVar3;
  DeclarationScope *pDVar4;
  Variable *pVVar5;
  long local_40;
  DeclarationScope *pDStack_38;
  
  pDStack_38 = (DeclarationScope *)&local_40;
  local_40 = 0;
  pDVar3 = (DeclarationScope *)&local_40;
  if ((1 < (byte)this[0x85] - 9) &&
     (((pDVar3 = (DeclarationScope *)&local_40, *(char *)(*(long *)(this + 8) + 0x80) != '\x04' ||
       (pDVar3 = (DeclarationScope *)&local_40, param_3)) ||
      ((pDVar3 = (DeclarationScope *)&local_40,
       *(PreparseDataBuilder **)(this + 0xd0) != (PreparseDataBuilder *)0x0 &&
       (uVar2 = PreparseDataBuilder::HasInnerFunctions(*(PreparseDataBuilder **)(this + 0xd0)),
       pDVar3 = pDStack_38, (uVar2 & 1) != 0)))))) {
    pDStack_38 = pDVar3;
    Scope::AnalyzePartially((Scope *)this,this,param_2,(ThreadedListBase *)&local_40,param_3);
    pVVar5 = *(Variable **)(this + 0xb8);
    pDVar1 = this;
    if (pVVar5 != (Variable *)0x0) {
      this_00 = *(Zone **)param_2;
      this_01 = *(Variable **)(this_00 + 0x10);
      if ((ulong)(*(long *)(this_00 + 0x18) - (long)this_01) < 0x30) {
        this_01 = (Variable *)Zone::NewExpand(this_00,0x30);
      }
      else {
        *(Variable **)(this_00 + 0x10) = this_01 + 0x30;
      }
      Variable::Variable(this_01,pVVar5);
      *(Variable **)(this + 0xb8) = this_01;
    }
    do {
      do {
        pDVar4 = pDVar1;
        if (((pDVar4[0x80] == (DeclarationScope)0x2) && (1 < (byte)pDVar4[0x85] - 9)) &&
           (*(PreparseDataBuilder **)(pDVar4 + 0xd0) != (PreparseDataBuilder *)0x0)) {
          PreparseDataBuilder::SaveScopeAllocationData
                    (*(PreparseDataBuilder **)(pDVar4 + 0xd0),pDVar4,param_1);
        }
        pDVar1 = *(DeclarationScope **)(pDVar4 + 0x10);
      } while (*(DeclarationScope **)(pDVar4 + 0x10) != (DeclarationScope *)0x0);
      while( true ) {
        pDVar3 = pDStack_38;
        if (*(DeclarationScope **)(pDVar4 + 0x18) != (DeclarationScope *)0x0) break;
        if (pDVar4 == this) goto LAB_014a40b0;
        pDVar4 = *(DeclarationScope **)(pDVar4 + 8);
      }
      pDVar1 = *(DeclarationScope **)(pDVar4 + 0x18);
    } while (pDVar4 != this);
  }
LAB_014a40b0:
  pDStack_38 = pDVar3;
  *(undefined8 *)(this + 0x90) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(DeclarationScope **)(this + 0x60) = this + 0x58;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(DeclarationScope **)(this + 0x40) = this + 0x38;
  pDVar3 = this + 0x48;
  *(undefined8 *)pDVar3 = 0;
  *(DeclarationScope **)(this + 0x50) = pDVar3;
  *(undefined8 *)(this + 0xa0) = 0;
  *(DeclarationScope **)(this + 0xa8) = this + 0xa0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) & 0xfff7;
  *(undefined8 *)(this + 0xb8) = 0;
  Zone::ReleaseMemory(*(Zone **)this);
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(ushort *)(this + 0x83) = *(ushort *)(this + 0x83) | 0x80;
  *(long *)pDVar3 = local_40;
  if (local_40 != 0) {
    pDVar3 = pDStack_38;
  }
  *(DeclarationScope **)(this + 0x50) = pDVar3;
  return;
}

