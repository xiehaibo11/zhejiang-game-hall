
/* v8::internal::Heap::ComputeHeapState() */

void v8::internal::Heap::ComputeHeapState(void)

{
  long in_x0;
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *in_x8;
  undefined8 uVar8;
  
  *in_x8 = *(undefined4 *)(in_x0 + 0xe0);
  uVar8 = GCTracer::ContextDisposalRateInMilliseconds(*(GCTracer **)(in_x0 + 0x7f8));
  *(undefined8 *)(in_x8 + 2) = uVar8;
  lVar1 = (**(code **)(**(long **)(in_x0 + 0x130) + 0x50))();
  lVar2 = (**(code **)(**(long **)(in_x0 + 0x138) + 0x50))(*(long **)(in_x0 + 0x138));
  lVar3 = (**(code **)(**(long **)(in_x0 + 0x140) + 0x50))(*(long **)(in_x0 + 0x140));
  lVar4 = (**(code **)(**(long **)(in_x0 + 0x148) + 0x50))(*(long **)(in_x0 + 0x148));
  lVar5 = (**(code **)(**(long **)(in_x0 + 0x150) + 0x50))(*(long **)(in_x0 + 0x150));
  lVar6 = (**(code **)(**(long **)(in_x0 + 0x158) + 0x50))(*(long **)(in_x0 + 0x158));
  lVar7 = (**(code **)(**(long **)(in_x0 + 0x160) + 0x50))(*(long **)(in_x0 + 0x160));
  *(long *)(in_x8 + 4) = lVar2 + lVar1 + lVar3 + lVar4 + lVar5 + lVar6 + lVar7;
  *(bool *)(in_x8 + 6) = *(int *)(*(long *)(in_x0 + 0x828) + 0x58) == 0;
  return;
}

