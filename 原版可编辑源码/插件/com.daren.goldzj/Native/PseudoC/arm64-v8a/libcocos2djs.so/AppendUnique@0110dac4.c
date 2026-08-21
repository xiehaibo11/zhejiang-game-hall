
/* v8::internal::AccessorInfo::AppendUnique(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::Object>, v8::internal::Handle<v8::internal::FixedArray>, int)
    */

uint v8::internal::AccessorInfo::AppendUnique
               (Isolate *param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  Isolate *pIVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar4 = *param_2;
  if ((int)*(uint *)(uVar4 + 7) < 2) {
    return param_4;
  }
  pIVar1 = param_1 + 0x95a0;
  uVar8 = (ulong)(*(uint *)(uVar4 + 7) >> 1);
  do {
    uVar8 = uVar8 - 1;
    uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + (long)((int)uVar8 * 4 + 4) + 7);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar2 = *(ulong **)pIVar1;
      if (puVar2 == *(ulong **)(param_1 + 0x95a8)) {
        puVar2 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar2 + 1;
      *puVar2 = uVar4;
    }
    else {
      puVar2 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
      uVar4 = *puVar2;
    }
    uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 3);
    if (*(CanonicalHandleScope **)(param_1 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)pIVar1;
      if (puVar3 == *(ulong **)(param_1 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(param_1);
      }
      *(ulong **)pIVar1 = puVar3 + 1;
      *puVar3 = uVar4;
      if ((int)param_4 < 1) goto LAB_0110dbf4;
LAB_0110db8c:
      uVar4 = *param_3;
      lVar5 = 0;
      do {
        if (*(int *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7 + (long)(int)lVar5)) +
                    3) == (int)*puVar3) goto LAB_0110dc60;
        lVar5 = lVar5 + 4;
      } while ((ulong)param_4 * 4 - lVar5 != 0);
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(param_1 + 0x95b8),uVar4);
      if (0 < (int)param_4) goto LAB_0110db8c;
LAB_0110dbf4:
      uVar4 = *param_3;
    }
    uVar7 = *puVar2;
    lVar5 = uVar4 + (long)(int)(param_4 << 2);
    *(int *)(lVar5 + 7) = (int)uVar7;
    if ((uVar7 & 1) != 0) {
      uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
      lVar5 = lVar5 + 7;
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        Heap_MarkingBarrierSlow(uVar4,lVar5,uVar7);
        uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        Heap_GenerationalBarrierSlow(uVar4,lVar5,uVar7);
      }
    }
    param_4 = param_4 + 1;
LAB_0110dc60:
    if ((long)uVar8 < 1) {
      return param_4;
    }
    uVar4 = *param_2;
  } while( true );
}

