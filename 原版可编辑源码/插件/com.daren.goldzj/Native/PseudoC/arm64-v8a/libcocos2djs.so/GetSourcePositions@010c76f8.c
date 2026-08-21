
/* v8::internal::FeedbackNexus::GetSourcePositions() const */

void v8::internal::FeedbackNexus::GetSourcePositions(void)

{
  uint uVar1;
  long *in_x0;
  Isolate *pIVar2;
  ulong *puVar3;
  vector<int,std::__ndk1::allocator<int>> *in_x8;
  ulong uVar4;
  int iVar5;
  long lVar6;
  int local_24;
  
  *(undefined8 *)in_x8 = 0;
  *(undefined8 *)(in_x8 + 8) = 0;
  *(undefined8 *)(in_x8 + 0x10) = 0;
  puVar3 = (ulong *)(in_x0 + 1);
  if ((ulong *)*in_x0 != (ulong *)0x0) {
    puVar3 = (ulong *)*in_x0;
  }
  pIVar2 = (Isolate *)(*puVar3 & 0xffffffff00000000);
  uVar1 = *(uint *)(*puVar3 + (long)((int)in_x0[2] << 2) + 0x1f);
  if (uVar1 != *(uint *)(pIVar2 + 0xc08)) {
    uVar4 = (ulong)pIVar2 | (ulong)uVar1;
    if (*(CanonicalHandleScope **)(pIVar2 + 0x95b8) == (CanonicalHandleScope *)0x0) {
      puVar3 = *(ulong **)(pIVar2 + 0x95a0);
      if (puVar3 == *(ulong **)(pIVar2 + 0x95a8)) {
        puVar3 = (ulong *)HandleScope::Extend(pIVar2);
      }
      *(ulong **)(pIVar2 + 0x95a0) = puVar3 + 1;
      *puVar3 = uVar4;
    }
    else {
      puVar3 = (ulong *)CanonicalHandleScope::Lookup
                                  (*(CanonicalHandleScope **)(pIVar2 + 0x95b8),uVar4);
      uVar4 = *puVar3;
    }
    if (7 < *(int *)(uVar4 + 3)) {
      iVar5 = 0xc;
      lVar6 = 3;
      do {
        uVar1 = *(uint *)(uVar4 + (long)iVar5 + 7);
        if ((uVar1 & 1) == 0) {
          local_24 = (int)uVar1 >> 1;
          if (*(int **)(in_x8 + 8) == *(int **)(in_x8 + 0x10)) {
            std::__ndk1::vector<int,std::__ndk1::allocator<int>>::__push_back_slow_path<int_const&>
                      (in_x8,&local_24);
          }
          else {
            **(int **)(in_x8 + 8) = local_24;
            *(long *)(in_x8 + 8) = *(long *)(in_x8 + 8) + 4;
          }
          uVar4 = *puVar3;
        }
        lVar6 = lVar6 + 2;
        iVar5 = iVar5 + 8;
      } while (lVar6 < *(int *)(uVar4 + 3) >> 1);
    }
  }
  return;
}

