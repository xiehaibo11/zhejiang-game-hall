
/* v8::internal::PrototypeUsers::Verify(v8::internal::WeakArrayList) */

void v8::internal::PrototypeUsers::Verify(ulong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  
  iVar1 = *(int *)(param_1 + 7) >> 1;
  if (iVar1 != 0) {
    iVar3 = 1;
    iVar4 = *(int *)(param_1 + 0xb);
    while (iVar5 = iVar4 >> 1, iVar5 != 0) {
      if (iVar4 < 2) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","empty_slot > 0");
      }
      if (iVar1 <= iVar5) {
                    /* WARNING: Subroutine does not return */
        V8_Fatal("Check failed: %s.","empty_slot < array.length()");
      }
      iVar3 = iVar3 + 1;
      iVar4 = *(int *)(param_1 + 0xb + (long)(iVar5 << 2));
    }
    if (*(int *)(param_1 + 7) < 4) {
      iVar4 = 0;
    }
    else {
      iVar4 = 0;
      iVar5 = 4;
      lVar6 = 1;
      do {
        uVar2 = *(uint *)(param_1 + 0xb + (long)iVar5);
        if ((uVar2 == 3) || (((ulong)uVar2 & 3) != 3)) {
          if (uVar2 == 3) goto LAB_00f2f868;
LAB_00f2f8ac:
          if ((uVar2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("Check failed: %s.","object->IsSmi()");
          }
        }
        else {
          if (*(short *)((param_1 & 0xffffffff00000000 | 7) +
                        (ulong)*(uint *)(((ulong)uVar2 & 0xfffffffffffffffd |
                                         param_1 & 0xffffffff00000000) - 1)) != 0xa2)
          goto LAB_00f2f8ac;
LAB_00f2f868:
          iVar4 = iVar4 + 1;
        }
        lVar6 = lVar6 + 1;
        iVar5 = iVar5 + 4;
      } while (lVar6 < iVar1);
    }
    if (iVar3 + iVar4 != iVar1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","weak_maps_count + empty_slots_count + 1 == array.length()");
    }
  }
  return;
}

