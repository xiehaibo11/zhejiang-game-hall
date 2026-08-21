
/* v8::internal::FeedbackNexus::Collect(v8::internal::Handle<v8::internal::String>, int) */

void __thiscall
v8::internal::FeedbackNexus::Collect(FeedbackNexus *this,ulong *param_2,uint param_3)

{
  uint uVar1;
  FeedbackNexus *pFVar2;
  uint uVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  Isolate *pIVar12;
  long lVar13;
  double dVar14;
  ulong local_48;
  
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  pIVar12 = (Isolate *)(*(ulong *)pFVar2 & 0xffffffff00000000);
  uVar3 = *(uint *)(*(ulong *)pFVar2 + (long)(*(int *)(this + 0x10) << 2) + 0x1f);
  if (uVar3 == *(uint *)(pIVar12 + 0xc08)) {
    puVar5 = (ulong *)HashTable<v8::internal::SimpleNumberDictionary,v8::internal::SimpleNumberDictionaryShape>
                      ::New(pIVar12,1,0,0);
  }
  else {
    uVar10 = (ulong)pIVar12 | (ulong)uVar3;
    if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar5 = *(ulong **)(pIVar12 + 0x95a0);
      if (puVar5 == *(ulong **)(pIVar12 + 0x95a8)) {
        puVar5 = (ulong *)HandleScope::Extend(pIVar12);
      }
      *(ulong **)(pIVar12 + 0x95a0) = puVar5 + 1;
      *puVar5 = uVar10;
    }
    else {
      puVar5 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar12 + 0x95b8),uVar10);
    }
  }
  uVar8 = *puVar5;
  uVar10 = (*(ulong *)(*(long *)(pIVar12 + 0x490) + 7) ^ (ulong)param_3 ^ 0xffffffffffffffff) +
           (*(ulong *)(*(long *)(pIVar12 + 0x490) + 7) ^ (ulong)param_3) * 0x40000;
  uVar4 = (*(int *)(uVar8 + 0xf) >> 1) - 1;
  uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
  uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
  uVar1 = uVar4 & ((uint)(uVar10 >> 0x16) ^ (uint)uVar10);
  uVar3 = uVar1 & 0x3fffffff;
  uVar1 = *(uint *)(uVar8 + 7 + (long)(int)(uVar1 * 8 + 0xc));
  if (uVar1 != *(uint *)(pIVar12 + 0xa0)) {
    iVar11 = 1;
    do {
      if (uVar1 != (uint)*(undefined8 *)(pIVar12 + 0xa8)) {
        if ((uVar1 & 1) == 0) {
          dVar14 = (double)((int)uVar1 >> 1);
        }
        else {
          dVar14 = *(double *)((uVar8 & 0xffffffff00000000 | (ulong)uVar1) + 3);
        }
        if ((int)dVar14 == param_3) {
          uVar10 = uVar8 & 0xffffffff00000000 |
                   (ulong)*(uint *)(uVar8 + ((long)(int)(uVar3 * 8 + 0x10) | 7U));
          if (*(CanonicalHandleScope **)(pIVar12 + 0x95b8) == (CanonicalHandleScope *)0x0) {
            puVar6 = *(ulong **)(pIVar12 + 0x95a0);
            if (puVar6 == *(ulong **)(pIVar12 + 0x95a8)) {
              puVar6 = (ulong *)HandleScope::Extend(pIVar12);
            }
            *(ulong **)(pIVar12 + 0x95a0) = puVar6 + 1;
            *puVar6 = uVar10;
          }
          else {
            puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                        (*(CanonicalHandleScope **)(pIVar12 + 0x95b8),uVar10);
          }
          lVar13 = 0;
          iVar11 = 4;
          goto LAB_010c766c;
        }
      }
      uVar3 = uVar3 + iVar11 & uVar4;
      uVar1 = *(uint *)(uVar8 + 7 + (long)(int)(uVar3 * 8 + 0xc));
      iVar11 = iVar11 + 1;
    } while (uVar1 != *(uint *)(pIVar12 + 0xa0));
  }
  puVar6 = (ulong *)ArrayList::New(pIVar12,1);
LAB_010c752c:
  uVar7 = ArrayList::Add(pIVar12,puVar6,param_2);
  puVar5 = (ulong *)SimpleNumberDictionary::Set(pIVar12,puVar5,param_3,uVar7);
LAB_010c754c:
  pFVar2 = this + 8;
  if (*(FeedbackNexus **)this != (FeedbackNexus *)0x0) {
    pFVar2 = *(FeedbackNexus **)this;
  }
  uVar8 = *(ulong *)pFVar2;
  uVar10 = *puVar5;
  lVar13 = uVar8 + (long)(*(int *)(this + 0x10) << 2);
  *(int *)(lVar13 + 0x1f) = (int)uVar10;
  if (((int)uVar10 != 3) && ((uVar10 & 1) != 0)) {
    uVar9 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    lVar13 = lVar13 + 0x1f;
    if (((uint)uVar9 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar8,lVar13,uVar10 & 0xfffffffffffffffd);
      uVar9 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar9 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar8,lVar13,uVar10 & 0xfffffffffffffffd);
    }
  }
  return;
LAB_010c766c:
  uVar10 = *puVar6;
  if (*(uint *)(uVar10 + 3) < 2) {
    if (-1 < lVar13) goto LAB_010c752c;
  }
  else if (*(int *)(uVar10 + 7) >> 1 <= lVar13) goto LAB_010c752c;
  uVar3 = *(uint *)(uVar10 + (long)iVar11 + 7);
  local_48 = uVar10 & 0xffffffff00000000 | (ulong)uVar3;
  uVar8 = *param_2;
  if ((uVar3 == (uint)uVar8) ||
     (((0x1f < *(ushort *)((uVar10 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(local_48 - 1)) ||
       (0x1f < *(ushort *)((uVar8 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar8 - 1)))) &&
      (uVar10 = String::SlowEquals((String *)&local_48), (uVar10 & 1) != 0)))) goto LAB_010c754c;
  lVar13 = lVar13 + 1;
  iVar11 = iVar11 + 4;
  goto LAB_010c766c;
}

