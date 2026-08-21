
/* v8::internal::Heap::RestoreHeapLimit(unsigned long) */

void __thiscall v8::internal::Heap::RestoreHeapLimit(Heap *this,ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  lVar3 = (**(code **)(**(long **)(this + 0x130) + 0x50))();
  lVar4 = (**(code **)(**(long **)(this + 0x138) + 0x50))(*(long **)(this + 0x138));
  lVar5 = (**(code **)(**(long **)(this + 0x140) + 0x50))(*(long **)(this + 0x140));
  lVar6 = (**(code **)(**(long **)(this + 0x148) + 0x50))(*(long **)(this + 0x148));
  lVar7 = (**(code **)(**(long **)(this + 0x150) + 0x50))(*(long **)(this + 0x150));
  lVar8 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
  lVar9 = (**(code **)(**(long **)(this + 0x160) + 0x50))(*(long **)(this + 0x160));
  lVar10 = (**(code **)(**(long **)(this + 0x130) + 0x50))(*(long **)(this + 0x130));
  lVar11 = (**(code **)(**(long **)(this + 0x138) + 0x50))(*(long **)(this + 0x138));
  lVar12 = (**(code **)(**(long **)(this + 0x140) + 0x50))(*(long **)(this + 0x140));
  lVar13 = (**(code **)(**(long **)(this + 0x148) + 0x50))(*(long **)(this + 0x148));
  lVar14 = (**(code **)(**(long **)(this + 0x150) + 0x50))(*(long **)(this + 0x150));
  lVar15 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
  lVar16 = (**(code **)(**(long **)(this + 0x160) + 0x50))(*(long **)(this + 0x160));
  uVar1 = lVar4 + lVar3 + lVar5 + lVar6 + lVar7 + lVar8 + lVar9 +
          ((ulong)(lVar11 + lVar10 + lVar12 + lVar13 + lVar14 + lVar15 + lVar16) >> 2);
  if (uVar1 <= param_1) {
    uVar1 = param_1;
  }
  uVar2 = *(ulong *)(this + 0x58);
  if (uVar1 <= *(ulong *)(this + 0x58)) {
    uVar2 = uVar1;
  }
  *(ulong *)(this + 0x58) = uVar2;
  return;
}

