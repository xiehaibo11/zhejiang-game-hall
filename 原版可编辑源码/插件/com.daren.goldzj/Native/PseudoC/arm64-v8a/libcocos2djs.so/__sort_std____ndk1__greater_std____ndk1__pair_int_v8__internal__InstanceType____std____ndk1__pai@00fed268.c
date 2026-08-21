
/* void std::__ndk1::__sort<std::__ndk1::greater<std::__ndk1::pair<int, v8::internal::InstanceType>
   >&, std::__ndk1::pair<int, v8::internal::InstanceType>*>(std::__ndk1::pair<int,
   v8::internal::InstanceType>*, std::__ndk1::pair<int, v8::internal::InstanceType>*,
   std::__ndk1::greater<std::__ndk1::pair<int, v8::internal::InstanceType> >&) */

void std::__ndk1::
     __sort<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
               (pair *param_1,pair *param_2,greater *param_3)

{
  ulong uVar1;
  int iVar2;
  undefined2 uVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  ushort uVar7;
  ulong uVar8;
  pair *ppVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  pair *ppVar14;
  pair *ppVar15;
  long lVar16;
  long lVar17;
  pair *ppVar18;
  pair *ppVar19;
  long lVar20;
  pair *ppVar21;
  
LAB_00fed294:
  do {
    ppVar18 = param_2 + -8;
    ppVar19 = param_1;
LAB_00fed2a0:
    while( true ) {
      param_1 = ppVar19;
      lVar10 = (long)param_2 - (long)param_1;
      uVar8 = lVar10 >> 3;
      switch(uVar8) {
      case 0:
      case 1:
        return;
      case 2:
        iVar12 = *(int *)param_1;
        iVar2 = *(int *)(param_2 + -8);
        if (iVar2 <= iVar12) {
          if (iVar2 < iVar12) {
            return;
          }
          if (*(ushort *)(param_2 + -4) <= *(ushort *)(param_1 + 4)) {
            return;
          }
        }
        *(int *)param_1 = iVar2;
        *(int *)(param_2 + -8) = iVar12;
        uVar3 = *(undefined2 *)(param_1 + 4);
        *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + -4);
        *(undefined2 *)(param_2 + -4) = uVar3;
        return;
      case 3:
        __sort3<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
                  (param_1,param_1 + 8,ppVar18,param_3);
        return;
      case 4:
        __sort4<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
                  (param_1,param_1 + 8,param_1 + 0x10,ppVar18,param_3);
        return;
      case 5:
        FUN_00fedb14(param_1,param_1 + 8,param_1 + 0x10,param_1 + 0x18,ppVar18,param_3);
        return;
      }
      if (lVar10 < 0x38) {
        __sort3<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
                  (param_1,param_1 + 8,param_1 + 0x10,param_3);
        if (param_1 + 0x18 == param_2) {
          return;
        }
        lVar20 = 0;
        ppVar19 = param_1 + 0xc;
        lVar10 = 8;
        ppVar18 = param_1 + 0x18;
        ppVar9 = param_1 + 0x10;
        goto LAB_00fed70c;
      }
      uVar1 = uVar8;
      if ((long)uVar8 < 0) {
        uVar1 = uVar8 + 1;
      }
      lVar20 = (long)uVar1 >> 1;
      ppVar19 = param_1 + lVar20 * 8;
      if (lVar10 < 0x1f39) {
        uVar6 = __sort3<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
                          (param_1,ppVar19,ppVar18,param_3);
      }
      else {
        uVar1 = uVar8 + 3;
        if (-1 < (long)uVar8) {
          uVar1 = uVar8;
        }
        lVar10 = (uVar1 & 0x7ffffffffffffffc) * 2;
        uVar6 = FUN_00fedb14(param_1,param_1 + lVar10,ppVar19,ppVar19 + lVar10,ppVar18,param_3);
      }
      iVar12 = *(int *)ppVar19;
      iVar2 = *(int *)param_1;
      ppVar9 = ppVar18;
      if ((iVar12 < iVar2) ||
         ((iVar12 <= iVar2 && (*(ushort *)(param_1 + lVar20 * 8 + 4) < *(ushort *)(param_1 + 4)))))
      break;
      if (param_1 != param_2 + -0x10) {
        ppVar9 = param_2 + -0x10;
        do {
          iVar11 = *(int *)ppVar9;
          if ((iVar12 < iVar11) ||
             ((iVar12 <= iVar11 && (*(ushort *)(param_1 + lVar20 * 8 + 4) < *(ushort *)(ppVar9 + 4))
              ))) {
            *(int *)param_1 = iVar11;
            *(int *)ppVar9 = iVar2;
            uVar3 = *(undefined2 *)(param_1 + 4);
            uVar6 = uVar6 + 1;
            *(undefined2 *)(param_1 + 4) = *(undefined2 *)(ppVar9 + 4);
            *(undefined2 *)(ppVar9 + 4) = uVar3;
            goto LAB_00fed330;
          }
          ppVar9 = ppVar9 + -8;
        } while (param_1 != ppVar9);
      }
      iVar12 = *(int *)ppVar18;
      ppVar19 = param_1 + 8;
      if ((iVar2 <= iVar12) &&
         ((iVar2 < iVar12 || (*(ushort *)(param_1 + 4) <= *(ushort *)(param_2 + -4))))) {
        if (ppVar19 == ppVar18) {
          return;
        }
        ppVar19 = param_1 + 0x10;
        while ((iVar11 = *(int *)(ppVar19 + -8), iVar2 <= iVar11 &&
               ((iVar2 < iVar11 || (*(ushort *)(param_1 + 4) <= *(ushort *)(ppVar19 + -4)))))) {
          ppVar19 = ppVar19 + 8;
          if (param_2 == ppVar19) {
            return;
          }
        }
        *(int *)(ppVar19 + -8) = iVar12;
        *(int *)(param_2 + -8) = iVar11;
        uVar3 = *(undefined2 *)(ppVar19 + -4);
        *(undefined2 *)(ppVar19 + -4) = *(undefined2 *)(param_2 + -4);
        *(undefined2 *)(param_2 + -4) = uVar3;
      }
      ppVar9 = ppVar18;
      if (ppVar19 == ppVar18) {
        return;
      }
      while( true ) {
        iVar12 = *(int *)ppVar19;
        iVar2 = *(int *)param_1;
        while ((iVar2 <= iVar12 &&
               ((iVar2 < iVar12 || (*(ushort *)(param_1 + 4) <= *(ushort *)(ppVar19 + 4)))))) {
          ppVar19 = ppVar19 + 8;
          iVar12 = *(int *)ppVar19;
        }
        do {
          do {
            ppVar21 = ppVar9;
            ppVar9 = ppVar21 + -8;
            iVar11 = *(int *)ppVar9;
          } while (iVar11 < iVar2);
        } while ((iVar11 <= iVar2) && (*(ushort *)(ppVar21 + -4) < *(ushort *)(param_1 + 4)));
        if (ppVar9 <= ppVar19) break;
        *(int *)ppVar19 = iVar11;
        *(int *)ppVar9 = iVar12;
        uVar3 = *(undefined2 *)(ppVar19 + 4);
        *(undefined2 *)(ppVar19 + 4) = *(undefined2 *)(ppVar21 + -4);
        *(undefined2 *)(ppVar21 + -4) = uVar3;
        ppVar19 = ppVar19 + 8;
      }
    }
LAB_00fed330:
    ppVar21 = param_1 + 8;
    if (ppVar21 < ppVar9) {
      do {
        iVar12 = *(int *)ppVar19;
        for (; (iVar2 = *(int *)ppVar21, iVar12 < iVar2 ||
               ((iVar12 <= iVar2 && (*(ushort *)(ppVar19 + 4) < *(ushort *)(ppVar21 + 4)))));
            ppVar21 = ppVar21 + 8) {
        }
        iVar11 = *(int *)(ppVar9 + -8);
        ppVar14 = ppVar9 + -8;
        ppVar15 = ppVar9;
        if (iVar11 <= iVar12) {
          do {
            if ((iVar12 <= iVar11) && (*(ushort *)(ppVar19 + 4) < *(ushort *)(ppVar9 + -4))) break;
            iVar11 = *(int *)(ppVar9 + -0x10);
            ppVar9 = ppVar9 + -8;
          } while (iVar11 <= iVar12);
          ppVar14 = ppVar9 + -8;
          ppVar15 = ppVar9;
        }
        ppVar9 = ppVar14;
        if (ppVar9 < ppVar21) break;
        *(int *)ppVar21 = iVar11;
        *(int *)ppVar9 = iVar2;
        uVar3 = *(undefined2 *)(ppVar21 + 4);
        uVar6 = uVar6 + 1;
        ppVar14 = ppVar9;
        if (ppVar19 != ppVar21) {
          ppVar14 = ppVar19;
        }
        *(undefined2 *)(ppVar21 + 4) = *(undefined2 *)(ppVar15 + -4);
        *(undefined2 *)(ppVar15 + -4) = uVar3;
        ppVar21 = ppVar21 + 8;
        ppVar19 = ppVar14;
      } while( true );
    }
    if (ppVar21 != ppVar19) {
      iVar12 = *(int *)ppVar21;
      iVar2 = *(int *)ppVar19;
      if ((iVar2 <= iVar12) &&
         ((iVar2 < iVar12 || (*(ushort *)(ppVar19 + 4) <= *(ushort *)(ppVar21 + 4)))))
      goto LAB_00fed4c4;
      *(int *)ppVar21 = iVar2;
      *(int *)ppVar19 = iVar12;
      uVar3 = *(undefined2 *)(ppVar21 + 4);
      *(undefined2 *)(ppVar21 + 4) = *(undefined2 *)(ppVar19 + 4);
      *(undefined2 *)(ppVar19 + 4) = uVar3;
      if (uVar6 == 0xffffffff) goto LAB_00fed4c8;
      goto LAB_00fed4f8;
    }
LAB_00fed4c4:
    if (uVar6 != 0) goto LAB_00fed4f8;
LAB_00fed4c8:
    bVar4 = __insertion_sort_incomplete<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
                      (param_1,ppVar21,param_3);
    bVar5 = __insertion_sort_incomplete<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
                      (ppVar21 + 8,param_2,param_3);
    if (!bVar5) goto code_r0x00fed4f4;
    param_2 = ppVar21;
    if (bVar4) {
      return;
    }
  } while( true );
LAB_00fed70c:
  ppVar21 = ppVar18;
  iVar12 = *(int *)ppVar9;
  if ((iVar12 < *(int *)ppVar21) ||
     ((iVar12 <= *(int *)ppVar21 && (*(ushort *)(ppVar9 + 4) < *(ushort *)(ppVar21 + 4))))) {
    uVar13 = *(undefined8 *)ppVar21;
    *(int *)ppVar21 = iVar12;
    ppVar14 = ppVar9 + 4;
    *(undefined2 *)(ppVar21 + 4) = *(undefined2 *)ppVar14;
    iVar12 = (int)uVar13;
    ppVar18 = ppVar9;
    ppVar15 = ppVar14;
    if (ppVar9 != param_1) {
      ppVar15 = ppVar19 + -lVar10;
      lVar17 = lVar20;
      do {
        iVar2 = *(int *)(param_1 + lVar17 + 8);
        if (iVar2 < iVar12) {
          ppVar14 = param_1 + lVar17 + 0xc;
          uVar7 = *(ushort *)ppVar14;
        }
        else {
          if ((iVar12 < iVar2) ||
             (uVar7 = *(ushort *)(param_1 + lVar17 + 0xc),
             ((uint)((ulong)uVar13 >> 0x20) & 0xffff) <= (uint)uVar7)) {
            ppVar18 = param_1 + lVar17 + 0x10;
            ppVar15 = ppVar14;
            break;
          }
          ppVar14 = ppVar9 + -4;
        }
        *(int *)(param_1 + lVar17 + 0x10) = iVar2;
        lVar16 = lVar17 + -8;
        ppVar9 = ppVar9 + -8;
        *(ushort *)(param_1 + lVar17 + 0x14) = uVar7;
        ppVar18 = param_1;
        lVar17 = lVar16;
      } while (lVar16 != -0x10);
    }
    *(int *)ppVar18 = iVar12;
    *(short *)ppVar15 = (short)((ulong)uVar13 >> 0x20);
  }
  ppVar19 = ppVar19 + 8;
  lVar10 = lVar10 + 8;
  lVar20 = lVar20 + 8;
  ppVar18 = ppVar21 + 8;
  ppVar9 = ppVar21;
  if (ppVar21 + 8 == param_2) {
    return;
  }
  goto LAB_00fed70c;
code_r0x00fed4f4:
  ppVar19 = ppVar21 + 8;
  if (!bVar4) {
LAB_00fed4f8:
    if ((long)param_2 - (long)ppVar21 <= (long)ppVar21 - (long)param_1) {
      __sort<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
                (ppVar21 + 8,param_2,param_3);
      param_2 = ppVar21;
      goto LAB_00fed294;
    }
    __sort<std::__ndk1::greater<std::__ndk1::pair<int,v8::internal::InstanceType>>&,std::__ndk1::pair<int,v8::internal::InstanceType>*>
              (param_1,ppVar21,param_3);
    ppVar19 = ppVar21 + 8;
  }
  goto LAB_00fed2a0;
}

