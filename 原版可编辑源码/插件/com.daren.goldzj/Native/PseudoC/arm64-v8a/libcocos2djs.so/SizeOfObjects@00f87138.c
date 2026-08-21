
/* v8::internal::Heap::SizeOfObjects() */

long __thiscall v8::internal::Heap::SizeOfObjects(Heap *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = (**(code **)(**(long **)(this + 0x130) + 0x50))();
  lVar2 = (**(code **)(**(long **)(this + 0x138) + 0x50))(*(long **)(this + 0x138));
  lVar3 = (**(code **)(**(long **)(this + 0x140) + 0x50))(*(long **)(this + 0x140));
  lVar4 = (**(code **)(**(long **)(this + 0x148) + 0x50))(*(long **)(this + 0x148));
  lVar5 = (**(code **)(**(long **)(this + 0x150) + 0x50))(*(long **)(this + 0x150));
  lVar6 = (**(code **)(**(long **)(this + 0x158) + 0x50))(*(long **)(this + 0x158));
  lVar7 = (**(code **)(**(long **)(this + 0x160) + 0x50))(*(long **)(this + 0x160));
  return lVar7 + lVar6 + lVar5 + lVar4 + lVar3 + lVar2 + lVar1;
}

