
/* v8::internal::ClosureFeedbackCellArray::New(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>) */

ulong * v8::internal::ClosureFeedbackCellArray::New(Factory *param_1,ulong *param_2)

{
  long lVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = *(uint *)((*param_2 & 0xffffffff00000000 | (ulong)*(uint *)(*param_2 + 0xb)) + 7);
  puVar3 = (ulong *)Factory::NewClosureFeedbackCellArray(param_1,uVar2);
  if (0 < (int)uVar2) {
    lVar8 = 0;
    do {
      puVar4 = (ulong *)Factory::NewNoClosuresCell(param_1,param_1 + 0xa0);
      uVar7 = *puVar3;
      uVar6 = *puVar4;
      lVar1 = uVar7 + (long)(int)lVar8;
      *(int *)(lVar1 + 7) = (int)uVar6;
      if ((uVar6 & 1) != 0) {
        uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
        lVar1 = lVar1 + 7;
        if (((uint)uVar5 >> 0x12 & 1) != 0) {
          Heap_MarkingBarrierSlow(uVar7,lVar1,uVar6);
          uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar6);
        }
      }
      lVar8 = lVar8 + 4;
    } while ((ulong)uVar2 * 4 - lVar8 != 0);
  }
  return puVar3;
}

