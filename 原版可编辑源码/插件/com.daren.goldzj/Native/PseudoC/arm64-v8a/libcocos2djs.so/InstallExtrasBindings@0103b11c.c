
/* v8::internal::Genesis::InstallExtrasBindings() */

undefined8 __thiscall v8::internal::Genesis::InstallExtrasBindings(Genesis *this)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  Isolate *pIVar5;
  ulong uVar6;
  ulong uVar7;
  
  pIVar5 = *(Isolate **)this;
  uVar1 = *(undefined8 *)(pIVar5 + 0x95a0);
  lVar2 = *(long *)(pIVar5 + 0x95a8);
  *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + 1;
  puVar3 = (ulong *)Factory::NewJSObjectWithNullProto(*(Factory **)this);
  FUN_01029064(*(undefined8 *)this,puVar3,"isTraceCategoryEnabled",0x28a,1,1,2);
  FUN_01029064(*(undefined8 *)this,puVar3,"trace",0x28b,5,1,2);
  uVar6 = *puVar3;
  uVar7 = **(ulong **)(this + 0x10);
  *(int *)(uVar7 + 0xbb) = (int)uVar6;
  if ((uVar6 & 1) != 0) {
    uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xbb,uVar6);
      uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xbb,uVar6);
    }
  }
  if (pIVar5 != (Isolate *)0x0) {
    *(undefined8 *)(pIVar5 + 0x95a0) = uVar1;
    *(int *)(pIVar5 + 0x95b0) = *(int *)(pIVar5 + 0x95b0) + -1;
    if (*(long *)(pIVar5 + 0x95a8) != lVar2) {
      *(long *)(pIVar5 + 0x95a8) = lVar2;
      HandleScope::DeleteExtensions(pIVar5);
    }
  }
  return 1;
}

