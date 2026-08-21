
/* v8::internal::Heap::Available() */

long __thiscall v8::internal::Heap::Available(Heap *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (*(long *)(this + 0xe8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar1 = (**(code **)(**(long **)(this + 0x130) + 0x60))();
    lVar2 = (**(code **)(**(long **)(this + 0x138) + 0x60))(*(long **)(this + 0x138));
    lVar3 = (**(code **)(**(long **)(this + 0x140) + 0x60))(*(long **)(this + 0x140));
    lVar4 = (**(code **)(**(long **)(this + 0x148) + 0x60))(*(long **)(this + 0x148));
    lVar5 = (**(code **)(**(long **)(this + 0x150) + 0x60))(*(long **)(this + 0x150));
    lVar6 = (**(code **)(**(long **)(this + 0x158) + 0x60))(*(long **)(this + 0x158));
    lVar7 = (**(code **)(**(long **)(this + 0x160) + 0x60))(*(long **)(this + 0x160));
    uVar10 = *(ulong *)(*(long *)(this + 0x820) + 0x50);
    uVar9 = *(ulong *)(*(long *)(this + 0x820) + 0x48);
    lVar8 = 0;
    if (uVar10 <= uVar9) {
      lVar8 = uVar9 - uVar10;
    }
    lVar8 = lVar8 + lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1;
  }
  return lVar8;
}

