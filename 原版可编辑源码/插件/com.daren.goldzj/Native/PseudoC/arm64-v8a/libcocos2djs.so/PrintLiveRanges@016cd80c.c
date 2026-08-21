
/* v8::internal::compiler::GraphC1Visualizer::PrintLiveRanges(char const*,
   v8::internal::compiler::RegisterAllocationData const*) */

void __thiscall
v8::internal::compiler::GraphC1Visualizer::PrintLiveRanges
          (GraphC1Visualizer *this,char *param_1,RegisterAllocationData *param_2)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  LiveRange *pLVar4;
  Tag aTStack_60 [16];
  
  Tag::Tag(aTStack_60,this,"intervals");
  PrintStringProperty(this,"name",param_1);
  plVar1 = *(long **)(param_2 + 0xe8);
  plVar2 = *(long **)(param_2 + 0xf0);
  if (plVar1 != plVar2) {
    pLVar4 = (LiveRange *)*plVar1;
    while( true ) {
      if ((pLVar4 != (LiveRange *)0x0) && (*(long *)(pLVar4 + 0x10) != 0)) {
        iVar3 = *(int *)(pLVar4 + 0x5c);
        do {
          PrintLiveRange(this,pLVar4,"fixed",iVar3);
          pLVar4 = *(LiveRange **)(pLVar4 + 0x28);
        } while (pLVar4 != (LiveRange *)0x0);
      }
      plVar1 = plVar1 + 1;
      if (plVar1 == plVar2) break;
      pLVar4 = (LiveRange *)*plVar1;
    }
  }
  plVar1 = *(long **)(param_2 + 0xa8);
  plVar2 = *(long **)(param_2 + 0xb0);
  if (plVar1 != plVar2) {
    pLVar4 = (LiveRange *)*plVar1;
    while( true ) {
      if ((pLVar4 != (LiveRange *)0x0) && (*(long *)(pLVar4 + 0x10) != 0)) {
        iVar3 = *(int *)(pLVar4 + 0x5c);
        do {
          PrintLiveRange(this,pLVar4,"fixed",iVar3);
          pLVar4 = *(LiveRange **)(pLVar4 + 0x28);
        } while (pLVar4 != (LiveRange *)0x0);
      }
      plVar1 = plVar1 + 1;
      if (plVar1 == plVar2) break;
      pLVar4 = (LiveRange *)*plVar1;
    }
  }
  plVar1 = *(long **)(param_2 + 0x88);
  plVar2 = *(long **)(param_2 + 0x90);
  if (plVar1 != plVar2) {
    pLVar4 = (LiveRange *)*plVar1;
    while( true ) {
      if ((pLVar4 != (LiveRange *)0x0) && (*(long *)(pLVar4 + 0x10) != 0)) {
        iVar3 = *(int *)(pLVar4 + 0x5c);
        do {
          PrintLiveRange(this,pLVar4,"object",iVar3);
          pLVar4 = *(LiveRange **)(pLVar4 + 0x28);
        } while (pLVar4 != (LiveRange *)0x0);
      }
      plVar1 = plVar1 + 1;
      if (plVar1 == plVar2) break;
      pLVar4 = (LiveRange *)*plVar1;
    }
  }
  Tag::~Tag(aTStack_60);
  return;
}

