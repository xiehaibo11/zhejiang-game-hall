
/* v8::internal::FeedbackNexus::GetTypesForSourcePositions(unsigned int) const */

void v8::internal::FeedbackNexus::GetTypesForSourcePositions(uint param_1)

{
  Isolate *pIVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  ulong *puVar6;
  ulong *puVar7;
  uint in_w1;
  vector<v8::internal::Handle<v8::internal::String>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::String>>>
  *in_x8;
  ulong uVar8;
  int iVar9;
  Isolate *pIVar10;
  ulong uVar11;
  long lVar12;
  double dVar13;
  ulong *local_48;
  
  plVar5 = (long *)(ulong)param_1;
  puVar6 = (ulong *)(plVar5 + 1);
  if ((ulong *)*plVar5 != (ulong *)0x0) {
    puVar6 = (ulong *)*plVar5;
  }
  pIVar10 = (Isolate *)(*puVar6 & 0xffffffff00000000);
  uVar3 = *(uint *)(*puVar6 + (long)((int)plVar5[2] << 2) + 0x1f);
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  if (uVar3 != *(uint *)(pIVar10 + 0xc08)) {
    pIVar1 = pIVar10 + 0x95b8;
    uVar11 = (ulong)pIVar10 | (ulong)uVar3;
    if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
      puVar6 = *(ulong **)(pIVar10 + 0x95a0);
      if (puVar6 == *(ulong **)(pIVar10 + 0x95a8)) {
        puVar6 = (ulong *)HandleScope::Extend(pIVar10);
      }
      *(ulong **)(pIVar10 + 0x95a0) = puVar6 + 1;
      *puVar6 = uVar11;
    }
    else {
      puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)pIVar1,uVar11);
      uVar11 = *puVar6;
    }
    uVar8 = (*(ulong *)(*(long *)(pIVar10 + 0x490) + 7) ^ (ulong)in_w1 ^ 0xffffffffffffffff) +
            (*(ulong *)(*(long *)(pIVar10 + 0x490) + 7) ^ (ulong)in_w1) * 0x40000;
    uVar8 = (uVar8 ^ uVar8 >> 0x1f) * 0x15;
    uVar8 = (uVar8 ^ uVar8 >> 0xb) * 0x41;
    uVar4 = (*(int *)(uVar11 + 0xf) >> 1) - 1;
    uVar2 = uVar4 & ((uint)(uVar8 >> 0x16) ^ (uint)uVar8);
    uVar3 = uVar2 & 0x3fffffff;
    uVar2 = *(uint *)(uVar11 + 7 + (long)(int)(uVar2 * 8 + 0xc));
    if (uVar2 != *(uint *)(pIVar10 + 0xa0)) {
      iVar9 = 1;
      do {
        if (uVar2 != (uint)*(undefined8 *)(pIVar10 + 0xa8)) {
          if ((uVar2 & 1) == 0) {
            dVar13 = (double)((int)uVar2 >> 1);
          }
          else {
            dVar13 = *(double *)((uVar11 & 0xffffffff00000000 | (ulong)uVar2) + 3);
          }
          if ((int)dVar13 == in_w1) {
            uVar11 = uVar11 & 0xffffffff00000000 |
                     (ulong)*(uint *)(uVar11 + ((long)(int)(uVar3 * 8 + 0x10) | 7U));
            if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
              puVar6 = *(ulong **)(pIVar10 + 0x95a0);
              if (puVar6 == *(ulong **)(pIVar10 + 0x95a8)) {
                puVar6 = (ulong *)HandleScope::Extend(pIVar10);
              }
              *(ulong **)(pIVar10 + 0x95a0) = puVar6 + 1;
              *puVar6 = uVar11;
            }
            else {
              puVar6 = (ulong *)CanonicalHandleScope::Lookup
                                          (*(CanonicalHandleScope **)pIVar1,uVar11);
            }
            lVar12 = 0;
            iVar9 = 4;
            do {
              uVar11 = *puVar6;
              if (*(uint *)(uVar11 + 3) < 2) {
                if (-1 < lVar12) {
                  return;
                }
              }
              else if (*(int *)(uVar11 + 7) >> 1 <= lVar12) {
                return;
              }
              uVar11 = uVar11 & 0xffffffff00000000 | (ulong)*(uint *)(uVar11 + (long)iVar9 + 7);
              if (*(CanonicalHandleScope **)pIVar1 == (CanonicalHandleScope *)0x0) {
                puVar7 = *(ulong **)(pIVar10 + 0x95a0);
                if (puVar7 == *(ulong **)(pIVar10 + 0x95a8)) {
                  puVar7 = (ulong *)HandleScope::Extend(pIVar10);
                }
                *(ulong **)(pIVar10 + 0x95a0) = puVar7 + 1;
                *puVar7 = uVar11;
              }
              else {
                puVar7 = (ulong *)CanonicalHandleScope::Lookup
                                            (*(CanonicalHandleScope **)pIVar1,uVar11);
              }
              local_48 = puVar7;
              if (*(long **)(in_x8 + 8) < *(long **)(in_x8 + 0x10)) {
                **(long **)(in_x8 + 8) = (long)puVar7;
                *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 8;
              }
              else {
                std::__ndk1::
                vector<v8::internal::Handle<v8::internal::String>,std::__ndk1::allocator<v8::internal::Handle<v8::internal::String>>>
                ::__push_back_slow_path<v8::internal::Handle<v8::internal::String>>
                          (in_x8,(Handle *)&local_48);
              }
              lVar12 = lVar12 + 1;
              iVar9 = iVar9 + 4;
            } while( true );
          }
        }
        uVar3 = uVar3 + iVar9 & uVar4;
        uVar2 = *(uint *)(uVar11 + 7 + (long)(int)(uVar3 * 8 + 0xc));
        iVar9 = iVar9 + 1;
      } while (uVar2 != *(uint *)(pIVar10 + 0xa0));
    }
  }
  return;
}

