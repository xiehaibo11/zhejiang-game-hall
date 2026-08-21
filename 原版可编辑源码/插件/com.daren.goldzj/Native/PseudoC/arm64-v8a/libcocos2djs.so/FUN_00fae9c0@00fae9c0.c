
void FUN_00fae9c0(ObjectVisitor *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_48;
  LargeObjectSpaceObjectIterator aLStack_40 [16];
  
  v8::internal::Heap::IterateStrongRoots(*(Heap **)(param_1 + 0x10),param_1 + 8,5);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar5 = *(ulong *)(*(long *)(lVar3 + 0xe8) + 0x68);
  uVar8 = *(ulong *)((uVar5 - 4 & 0xfffffffffffc0000) + 0xe0);
  uVar7 = *(ulong *)(*(long *)(*(long *)(lVar3 + 0xe8) + 0xf0) + 0x20) & 0xfffffffffffc0000;
  if (uVar8 != uVar7) {
    while (uVar4 = *(ulong *)(uVar7 + 0xe0), uVar8 != uVar4) {
      uVar1 = *(ulong *)(uVar7 + 0x28);
      uVar2 = uVar5;
      if (((uVar1 != uVar5) && (uVar2 = uVar1, uVar5 < uVar1)) &&
         (*(ulong *)(uVar7 + 0x20) <= uVar5)) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","limit == end || !page->Contains(end)");
      }
      FUN_00fdb304(param_1,uVar7,*(ulong *)(uVar7 + 0x20),uVar2);
      uVar7 = uVar4;
    }
    FUN_00fdb304(param_1,uVar7,*(undefined8 *)(uVar7 + 0x20),uVar5);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  v8::internal::LargeObjectSpaceObjectIterator::LargeObjectSpaceObjectIterator
            (aLStack_40,*(LargeObjectSpace **)(lVar3 + 0x118));
  while (local_48 = v8::internal::LargeObjectSpaceObjectIterator::Next(aLStack_40),
        (int)local_48 != 0) {
    uVar7 = (**(code **)(*(long *)param_1 + 0xb8))(param_1);
    if ((uVar7 & 1) != 0) {
      v8::internal::HeapObject::Iterate((HeapObject *)&local_48,param_1);
    }
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lVar6 = *(long *)(*(long *)(lVar3 + 0xf0) + 0x20);
  if (lVar6 != 0) {
    do {
      FUN_00fdb304(param_1,lVar6,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28));
      lVar6 = *(long *)(lVar6 + 0xe0);
    } while (lVar6 != 0);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  lVar6 = *(long *)(*(long *)(lVar3 + 0xf8) + 0x20);
  if (lVar6 != 0) {
    do {
      FUN_00fdb304(param_1,lVar6,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28));
      lVar6 = *(long *)(lVar6 + 0xe0);
    } while (lVar6 != 0);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  lVar6 = *(long *)(*(long *)(lVar3 + 0x100) + 0x20);
  if (lVar6 != 0) {
    do {
      FUN_00fdb304(param_1,lVar6,*(undefined8 *)(lVar6 + 0x20),*(undefined8 *)(lVar6 + 0x28));
      lVar6 = *(long *)(lVar6 + 0xe0);
    } while (lVar6 != 0);
    lVar3 = *(long *)(param_1 + 0x10);
  }
  v8::internal::LargeObjectSpaceObjectIterator::LargeObjectSpaceObjectIterator
            (aLStack_40,*(LargeObjectSpace **)(lVar3 + 0x108));
  while (local_48 = v8::internal::LargeObjectSpaceObjectIterator::Next(aLStack_40),
        (int)local_48 != 0) {
    uVar7 = (**(code **)(*(long *)param_1 + 0xb8))(param_1);
    if ((uVar7 & 1) != 0) {
      v8::internal::HeapObject::Iterate((HeapObject *)&local_48,param_1);
    }
  }
  v8::internal::LargeObjectSpaceObjectIterator::LargeObjectSpaceObjectIterator
            (aLStack_40,*(LargeObjectSpace **)(*(long *)(param_1 + 0x10) + 0x110));
  while (local_48 = v8::internal::LargeObjectSpaceObjectIterator::Next(aLStack_40),
        (int)local_48 != 0) {
    uVar7 = (**(code **)(*(long *)param_1 + 0xb8))(param_1);
    if ((uVar7 & 1) != 0) {
      v8::internal::HeapObject::Iterate((HeapObject *)&local_48,param_1);
    }
  }
  return;
}

