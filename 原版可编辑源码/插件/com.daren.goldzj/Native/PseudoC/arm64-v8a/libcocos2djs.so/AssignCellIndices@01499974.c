
/* v8::internal::SourceTextModuleDescriptor::AssignCellIndices() */

void __thiscall
v8::internal::SourceTextModuleDescriptor::AssignCellIndices(SourceTextModuleDescriptor *this)

{
  bool bVar1;
  int iVar2;
  SourceTextModuleDescriptor *pSVar3;
  SourceTextModuleDescriptor *pSVar4;
  long lVar5;
  SourceTextModuleDescriptor *pSVar6;
  long lVar7;
  
  pSVar3 = *(SourceTextModuleDescriptor **)(this + 0x60);
  pSVar4 = this + 0x68;
  if (pSVar4 != pSVar3) {
    iVar2 = 1;
    do {
      lVar5 = *(long *)(pSVar3 + 0x20);
      do {
        *(int *)(*(long *)(pSVar3 + 0x28) + 0x24) = iVar2;
        pSVar6 = *(SourceTextModuleDescriptor **)(pSVar3 + 8);
        if (*(SourceTextModuleDescriptor **)(pSVar3 + 8) == (SourceTextModuleDescriptor *)0x0) {
          pSVar6 = pSVar3 + 0x10;
          bVar1 = *(SourceTextModuleDescriptor **)*(SourceTextModuleDescriptor **)pSVar6 != pSVar3;
          pSVar3 = *(SourceTextModuleDescriptor **)pSVar6;
          if (bVar1) {
            do {
              lVar7 = *(long *)pSVar6;
              pSVar6 = (SourceTextModuleDescriptor *)(lVar7 + 0x10);
              pSVar3 = *(SourceTextModuleDescriptor **)pSVar6;
            } while (*(long *)pSVar3 != lVar7);
          }
        }
        else {
          do {
            pSVar3 = pSVar6;
            pSVar6 = *(SourceTextModuleDescriptor **)pSVar3;
          } while (*(SourceTextModuleDescriptor **)pSVar3 != (SourceTextModuleDescriptor *)0x0);
        }
        if (pSVar3 == pSVar4) goto LAB_01499a0c;
      } while (*(long *)(pSVar3 + 0x20) == lVar5);
      iVar2 = iVar2 + 1;
    } while (pSVar4 != pSVar3);
  }
LAB_01499a0c:
  if (*(SourceTextModuleDescriptor **)(this + 0x80) != this + 0x88) {
    iVar2 = -1;
    pSVar4 = *(SourceTextModuleDescriptor **)(this + 0x80);
    do {
      *(int *)(*(long *)(pSVar4 + 0x28) + 0x24) = iVar2;
      iVar2 = iVar2 + -1;
      pSVar3 = *(SourceTextModuleDescriptor **)(pSVar4 + 8);
      if (*(SourceTextModuleDescriptor **)(pSVar4 + 8) == (SourceTextModuleDescriptor *)0x0) {
        pSVar3 = pSVar4 + 0x10;
        pSVar6 = *(SourceTextModuleDescriptor **)pSVar3;
        if (*(SourceTextModuleDescriptor **)pSVar6 != pSVar4) {
          do {
            lVar5 = *(long *)pSVar3;
            pSVar3 = (SourceTextModuleDescriptor *)(lVar5 + 0x10);
            pSVar6 = *(SourceTextModuleDescriptor **)pSVar3;
          } while (*(long *)pSVar6 != lVar5);
        }
      }
      else {
        do {
          pSVar6 = pSVar3;
          pSVar3 = *(SourceTextModuleDescriptor **)pSVar6;
        } while (*(SourceTextModuleDescriptor **)pSVar6 != (SourceTextModuleDescriptor *)0x0);
      }
      pSVar4 = pSVar6;
    } while (pSVar6 != this + 0x88);
  }
  return;
}

