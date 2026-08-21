
/* v8::internal::Heap::MarkCompact() */

void __thiscall v8::internal::Heap::MarkCompact(Heap *this)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  Logger *pLVar9;
  CodeSpaceMemoryModificationScope aCStack_68 [8];
  PauseAllocationObserversScope aPStack_48 [8];
  
  PauseAllocationObserversScope::PauseAllocationObserversScope(aPStack_48,this);
  *(undefined4 *)(this + 0x178) = 2;
  pLVar9 = *(Logger **)(*(long *)(this + 0x30) + 0x9558);
  uVar1 = Logger::is_logging(pLVar9);
  if ((uVar1 & 1) != 0) {
    Logger::ResourceEvent(pLVar9,"markcompact","begin");
  }
  lVar2 = (**(code **)(**(long **)(this + 0x130) + 0x50))();
  lVar3 = (**(code **)(**(long **)(this + 0x138) + 0x50))(*(long **)(this + 0x138));
  lVar4 = (**(code **)(**(long **)(this + 0x140) + 0x50))(*(long **)(this + 0x140));
  lVar5 = (**(code **)(**(long **)(this + 0x148) + 0x50))(*(long **)(this + 0x148));
  lVar6 = (**(code **)(**(long **)(this + 0x150) + 0x50))(*(long **)(this + 0x150));
  lVar7 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
  lVar8 = (**(code **)(**(long **)(this + 0x160) + 0x50))(*(long **)(this + 0x160));
  CodeSpaceMemoryModificationScope::CodeSpaceMemoryModificationScope(aCStack_68,this);
  MarkCompactCollector::Prepare(*(MarkCompactCollector **)(this + 0x800));
  *(int *)(this + 0x1b0) = *(int *)(this + 0x1b0) + 1;
  MarkCompactPrologue(this);
  MarkCompactCollector::CollectGarbage(*(MarkCompactCollector **)(this + 0x800));
  pLVar9 = *(Logger **)(*(long *)(this + 0x30) + 0x9558);
  uVar1 = Logger::is_logging(pLVar9);
  if ((uVar1 & 1) != 0) {
    Logger::ResourceEvent(pLVar9,"markcompact","end");
  }
  MarkCompactEpilogue(this);
  if (FLAG_allocation_site_pretenuring != '\0') {
    EvaluateOldSpaceLocalPretenuring(this,lVar3 + lVar2 + lVar4 + lVar5 + lVar6 + lVar7 + lVar8);
  }
  CodeSpaceMemoryModificationScope::~CodeSpaceMemoryModificationScope(aCStack_68);
  PauseAllocationObserversScope::~PauseAllocationObserversScope(aPStack_48);
  return;
}

