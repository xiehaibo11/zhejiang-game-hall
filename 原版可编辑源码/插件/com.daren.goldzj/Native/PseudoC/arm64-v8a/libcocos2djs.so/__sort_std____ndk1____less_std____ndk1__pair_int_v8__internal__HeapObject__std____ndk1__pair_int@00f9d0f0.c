
/* void std::__ndk1::__sort<std::__ndk1::__less<std::__ndk1::pair<int, v8::internal::HeapObject>,
   std::__ndk1::pair<int, v8::internal::HeapObject> >&, std::__ndk1::pair<int,
   v8::internal::HeapObject>*>(std::__ndk1::pair<int, v8::internal::HeapObject>*,
   std::__ndk1::pair<int, v8::internal::HeapObject>*, std::__ndk1::__less<std::__ndk1::pair<int,
   v8::internal::HeapObject>, std::__ndk1::pair<int, v8::internal::HeapObject> >&) */

void std::__ndk1::
     __sort<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
               (pair *param_1,pair *param_2,__less *param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  ulong uVar8;
  pair *ppVar9;
  long lVar10;
  undefined8 uVar11;
  int iVar12;
  pair *ppVar13;
  pair *ppVar14;
  long lVar15;
  long lVar16;
  pair *ppVar17;
  pair *ppVar18;
  long lVar19;
  pair *ppVar20;
  
LAB_00f9d11c:
  do {
    ppVar17 = param_2 + -0x10;
    ppVar18 = param_1;
LAB_00f9d128:
    while( true ) {
      param_1 = ppVar18;
      lVar10 = (long)param_2 - (long)param_1;
      uVar8 = lVar10 >> 4;
      switch(uVar8) {
      case 0:
      case 1:
        return;
      case 2:
        iVar3 = *(int *)(param_2 + -0x10);
        iVar2 = *(int *)param_1;
        if (iVar2 <= iVar3) {
          if (iVar2 < iVar3) {
            return;
          }
          if (*(uint *)(param_1 + 8) <= *(uint *)(param_2 + -8)) {
            return;
          }
        }
        *(int *)param_1 = iVar3;
        *(int *)(param_2 + -0x10) = iVar2;
        uVar11 = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_2 + -8) = uVar11;
        return;
      case 3:
        __sort3<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
                  (param_1,param_1 + 0x10,ppVar17,param_3);
        return;
      case 4:
        __sort4<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
                  (param_1,param_1 + 0x10,param_1 + 0x20,ppVar17,param_3);
        return;
      case 5:
        FUN_00f9d99c(param_1,param_1 + 0x10,param_1 + 0x20,param_1 + 0x30,ppVar17,param_3);
        return;
      }
      if (lVar10 < 0x70) {
        __sort3<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
                  (param_1,param_1 + 0x10,param_1 + 0x20,param_3);
        if (param_1 + 0x30 == param_2) {
          return;
        }
        lVar19 = 0;
        ppVar18 = param_1 + 0x18;
        lVar10 = 0x10;
        ppVar17 = param_1 + 0x30;
        ppVar9 = param_1 + 0x20;
        goto LAB_00f9d594;
      }
      uVar1 = uVar8;
      if ((long)uVar8 < 0) {
        uVar1 = uVar8 + 1;
      }
      lVar19 = (long)uVar1 >> 1;
      ppVar18 = param_1 + lVar19 * 0x10;
      if (lVar10 < 0x3e71) {
        uVar6 = __sort3<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
                          (param_1,ppVar18,ppVar17,param_3);
      }
      else {
        uVar1 = uVar8 + 3;
        if (-1 < (long)uVar8) {
          uVar1 = uVar8;
        }
        lVar10 = (uVar1 & 0x3ffffffffffffffc) * 4;
        uVar6 = FUN_00f9d99c(param_1,param_1 + lVar10,ppVar18,ppVar18 + lVar10,ppVar17,param_3);
      }
      iVar2 = *(int *)param_1;
      iVar3 = *(int *)ppVar18;
      ppVar9 = ppVar17;
      if ((iVar2 < iVar3) ||
         ((iVar2 <= iVar3 && (*(uint *)(param_1 + 8) < *(uint *)(param_1 + lVar19 * 0x10 + 8)))))
      break;
      if (param_1 != param_2 + -0x20) {
        ppVar9 = param_2 + -0x20;
        do {
          iVar12 = *(int *)ppVar9;
          if ((iVar12 < iVar3) ||
             ((iVar12 <= iVar3 && (*(uint *)(ppVar9 + 8) < *(uint *)(param_1 + lVar19 * 0x10 + 8))))
             ) {
            *(int *)param_1 = iVar12;
            *(int *)ppVar9 = iVar2;
            uVar11 = *(undefined8 *)(param_1 + 8);
            uVar6 = uVar6 + 1;
            *(undefined8 *)(param_1 + 8) = *(undefined8 *)(ppVar9 + 8);
            *(undefined8 *)(ppVar9 + 8) = uVar11;
            goto LAB_00f9d1b8;
          }
          ppVar9 = ppVar9 + -0x10;
        } while (param_1 != ppVar9);
      }
      iVar3 = *(int *)ppVar17;
      ppVar18 = param_1 + 0x10;
      if ((iVar3 <= iVar2) &&
         ((iVar3 < iVar2 || (*(uint *)(param_2 + -8) <= *(uint *)(param_1 + 8))))) {
        if (ppVar18 == ppVar17) {
          return;
        }
        ppVar18 = param_1 + 0x20;
        while ((iVar12 = *(int *)(ppVar18 + -0x10), iVar12 <= iVar2 &&
               ((iVar12 < iVar2 || (*(uint *)(ppVar18 + -8) <= *(uint *)(param_1 + 8)))))) {
          ppVar18 = ppVar18 + 0x10;
          if (param_2 == ppVar18) {
            return;
          }
        }
        *(int *)(ppVar18 + -0x10) = iVar3;
        *(int *)(param_2 + -0x10) = iVar12;
        uVar11 = *(undefined8 *)(ppVar18 + -8);
        *(undefined8 *)(ppVar18 + -8) = *(undefined8 *)(param_2 + -8);
        *(undefined8 *)(param_2 + -8) = uVar11;
      }
      ppVar9 = ppVar17;
      if (ppVar18 == ppVar17) {
        return;
      }
      while( true ) {
        iVar2 = *(int *)param_1;
        iVar3 = *(int *)ppVar18;
        while ((iVar3 <= iVar2 &&
               ((iVar3 < iVar2 || (*(uint *)(ppVar18 + 8) <= *(uint *)(param_1 + 8)))))) {
          ppVar18 = ppVar18 + 0x10;
          iVar3 = *(int *)ppVar18;
        }
        do {
          do {
            ppVar20 = ppVar9;
            ppVar9 = ppVar20 + -0x10;
            iVar12 = *(int *)ppVar9;
          } while (iVar2 < iVar12);
        } while ((iVar2 <= iVar12) && (*(uint *)(param_1 + 8) < *(uint *)(ppVar20 + -8)));
        if (ppVar9 <= ppVar18) break;
        *(int *)ppVar18 = iVar12;
        *(int *)ppVar9 = iVar3;
        uVar11 = *(undefined8 *)(ppVar18 + 8);
        *(undefined8 *)(ppVar18 + 8) = *(undefined8 *)(ppVar20 + -8);
        *(undefined8 *)(ppVar20 + -8) = uVar11;
        ppVar18 = ppVar18 + 0x10;
      }
    }
LAB_00f9d1b8:
    ppVar20 = param_1 + 0x10;
    if (ppVar20 < ppVar9) {
      do {
        iVar2 = *(int *)ppVar18;
        for (; (iVar3 = *(int *)ppVar20, iVar3 < iVar2 ||
               ((iVar3 <= iVar2 && (*(uint *)(ppVar20 + 8) < *(uint *)(ppVar18 + 8)))));
            ppVar20 = ppVar20 + 0x10) {
        }
        iVar12 = *(int *)(ppVar9 + -0x10);
        ppVar13 = ppVar9 + -0x10;
        ppVar14 = ppVar9;
        if (iVar2 <= iVar12) {
          do {
            if ((iVar12 <= iVar2) && (*(uint *)(ppVar9 + -8) < *(uint *)(ppVar18 + 8))) break;
            iVar12 = *(int *)(ppVar9 + -0x20);
            ppVar9 = ppVar9 + -0x10;
          } while (iVar2 <= iVar12);
          ppVar13 = ppVar9 + -0x10;
          ppVar14 = ppVar9;
        }
        ppVar9 = ppVar13;
        if (ppVar9 < ppVar20) break;
        *(int *)ppVar20 = iVar12;
        *(int *)ppVar9 = iVar3;
        uVar11 = *(undefined8 *)(ppVar20 + 8);
        uVar6 = uVar6 + 1;
        ppVar13 = ppVar9;
        if (ppVar18 != ppVar20) {
          ppVar13 = ppVar18;
        }
        *(undefined8 *)(ppVar20 + 8) = *(undefined8 *)(ppVar14 + -8);
        *(undefined8 *)(ppVar14 + -8) = uVar11;
        ppVar20 = ppVar20 + 0x10;
        ppVar18 = ppVar13;
      } while( true );
    }
    if (ppVar20 != ppVar18) {
      iVar2 = *(int *)ppVar18;
      iVar3 = *(int *)ppVar20;
      if ((iVar3 <= iVar2) &&
         ((iVar3 < iVar2 || (*(uint *)(ppVar20 + 8) <= *(uint *)(ppVar18 + 8))))) goto LAB_00f9d34c;
      *(int *)ppVar20 = iVar2;
      *(int *)ppVar18 = iVar3;
      uVar11 = *(undefined8 *)(ppVar20 + 8);
      *(undefined8 *)(ppVar20 + 8) = *(undefined8 *)(ppVar18 + 8);
      *(undefined8 *)(ppVar18 + 8) = uVar11;
      if (uVar6 == 0xffffffff) goto LAB_00f9d350;
      goto LAB_00f9d380;
    }
LAB_00f9d34c:
    if (uVar6 != 0) goto LAB_00f9d380;
LAB_00f9d350:
    bVar4 = __insertion_sort_incomplete<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
                      (param_1,ppVar20,param_3);
    bVar5 = __insertion_sort_incomplete<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
                      (ppVar20 + 0x10,param_2,param_3);
    if (!bVar5) goto code_r0x00f9d37c;
    param_2 = ppVar20;
    if (bVar4) {
      return;
    }
  } while( true );
LAB_00f9d594:
  ppVar20 = ppVar17;
  iVar2 = *(int *)ppVar20;
  iVar3 = *(int *)ppVar9;
  if (iVar2 < iVar3) {
    uVar11 = *(undefined8 *)(ppVar20 + 8);
LAB_00f9d5b0:
    *(int *)ppVar20 = iVar3;
    ppVar13 = ppVar9 + 8;
    *(undefined8 *)(ppVar20 + 8) = *(undefined8 *)ppVar13;
    ppVar17 = ppVar9;
    ppVar14 = ppVar13;
    if (ppVar9 != param_1) {
      ppVar14 = ppVar18 + -lVar10;
      lVar16 = lVar19;
      do {
        iVar3 = *(int *)(param_1 + lVar16 + 0x10);
        if (iVar2 < iVar3) {
          ppVar13 = param_1 + lVar16 + 0x18;
          uVar7 = *(undefined8 *)ppVar13;
        }
        else {
          if ((iVar3 < iVar2) ||
             (uVar7 = *(undefined8 *)(param_1 + lVar16 + 0x18), (uint)uVar7 <= (uint)uVar11)) {
            ppVar17 = param_1 + lVar16 + 0x20;
            ppVar14 = ppVar13;
            break;
          }
          ppVar13 = ppVar9 + -8;
        }
        *(int *)(param_1 + lVar16 + 0x20) = iVar3;
        lVar15 = lVar16 + -0x10;
        ppVar9 = ppVar9 + -0x10;
        *(undefined8 *)(param_1 + lVar16 + 0x28) = uVar7;
        ppVar17 = param_1;
        lVar16 = lVar15;
      } while (lVar15 != -0x20);
    }
    *(int *)ppVar17 = iVar2;
    *(undefined8 *)ppVar14 = uVar11;
  }
  else if ((iVar2 <= iVar3) &&
          (uVar11 = *(undefined8 *)(ppVar20 + 8), (uint)uVar11 < *(uint *)(ppVar9 + 8)))
  goto LAB_00f9d5b0;
  ppVar18 = ppVar18 + 0x10;
  lVar10 = lVar10 + 0x10;
  lVar19 = lVar19 + 0x10;
  ppVar17 = ppVar20 + 0x10;
  ppVar9 = ppVar20;
  if (ppVar20 + 0x10 == param_2) {
    return;
  }
  goto LAB_00f9d594;
code_r0x00f9d37c:
  ppVar18 = ppVar20 + 0x10;
  if (!bVar4) {
LAB_00f9d380:
    if ((long)param_2 - (long)ppVar20 <= (long)ppVar20 - (long)param_1) {
      __sort<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
                (ppVar20 + 0x10,param_2,param_3);
      param_2 = ppVar20;
      goto LAB_00f9d11c;
    }
    __sort<std::__ndk1::__less<std::__ndk1::pair<int,v8::internal::HeapObject>,std::__ndk1::pair<int,v8::internal::HeapObject>>&,std::__ndk1::pair<int,v8::internal::HeapObject>*>
              (param_1,ppVar20,param_3);
    ppVar18 = ppVar20 + 0x10;
  }
  goto LAB_00f9d128;
}

