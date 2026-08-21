
/* v8::internal::Heap::CommittedPhysicalMemory() */

long __thiscall v8::internal::Heap::CommittedPhysicalMemory(Heap *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)(this + 0xe8) == 0) {
    lVar7 = 0;
  }
  else {
    lVar1 = (**(code **)(**(long **)(this + 0x130) + 0x58))();
    lVar2 = (**(code **)(**(long **)(this + 0x138) + 0x58))(*(long **)(this + 0x138));
    lVar3 = (**(code **)(**(long **)(this + 0x140) + 0x58))(*(long **)(this + 0x140));
    lVar4 = (**(code **)(**(long **)(this + 0x148) + 0x58))(*(long **)(this + 0x148));
    lVar5 = (**(code **)(**(long **)(this + 0x150) + 0x58))(*(long **)(this + 0x150));
    lVar6 = (**(code **)(**(long **)(this + 0x158) + 0x58))(*(long **)(this + 0x158));
    lVar7 = (**(code **)(**(long **)(this + 0x160) + 0x58))(*(long **)(this + 0x160));
    lVar7 = lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1;
  }
  return lVar7;
}

