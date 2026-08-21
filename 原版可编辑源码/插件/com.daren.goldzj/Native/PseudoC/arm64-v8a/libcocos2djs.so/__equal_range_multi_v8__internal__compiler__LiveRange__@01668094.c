
/* std::__ndk1::pair<std::__ndk1::__tree_iterator<v8::internal::compiler::LiveRange*,
   std::__ndk1::__tree_node<v8::internal::compiler::LiveRange*, void*>*, long>,
   std::__ndk1::__tree_iterator<v8::internal::compiler::LiveRange*,
   std::__ndk1::__tree_node<v8::internal::compiler::LiveRange*, void*>*, long> >
   std::__ndk1::__tree<v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,
   v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>
   >::__equal_range_multi<v8::internal::compiler::LiveRange*>(v8::internal::compiler::LiveRange*
   const&) */

undefined1  [16] __thiscall
std::__ndk1::
__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
::__equal_range_multi<v8::internal::compiler::LiveRange*>
          (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
           *this,LiveRange **param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var7;
  bool bVar8;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var9;
  LiveRange *pLVar10;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var11;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var12;
  long lVar13;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  
  p_Var9 = this + 8;
  if (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
        **)p_Var9 !=
      (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
       *)0x0) {
    pLVar10 = *param_1;
    iVar1 = **(int **)(pLVar10 + 0x10);
    p_Var12 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                **)p_Var9;
    do {
      while( true ) {
        lVar13 = *(long *)(p_Var12 + 0x20);
        iVar2 = **(int **)(lVar13 + 0x10);
        if (iVar1 == iVar2) break;
        if (iVar2 <= iVar1) {
          bVar8 = SBORROW4(iVar2,iVar1);
          iVar2 = iVar2 - iVar1;
LAB_01668178:
          if (iVar2 < 0 != bVar8) goto LAB_0166817c;
LAB_016681a0:
          p_Var7 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                     **)p_Var12;
          p_Var11 = p_Var12;
          goto joined_r0x016681a4;
        }
LAB_016680b0:
        p_Var11 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                    **)p_Var12;
        p_Var9 = p_Var12;
        p_Var12 = p_Var11;
        if (p_Var11 ==
            (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
             *)0x0) goto LAB_01668194;
      }
      uVar5 = *(uint *)(pLVar10 + 4) >> 0x16 & 0x3f;
      uVar6 = *(uint *)(lVar13 + 4) >> 0x16 & 0x3f;
      if (uVar5 < uVar6) goto LAB_016680b0;
      if (uVar5 <= uVar6) {
        lVar15 = *(long *)(pLVar10 + 0x18);
        lVar16 = *(long *)(lVar13 + 0x18);
        if (lVar15 == lVar16) {
LAB_01668114:
          if (*(int *)(*(long *)(lVar13 + 0x20) + 0x5c) <=
              *(int *)(*(long *)(pLVar10 + 0x20) + 0x5c)) {
LAB_0166812c:
            lVar15 = *(long *)(lVar13 + 0x18);
            lVar16 = *(long *)(pLVar10 + 0x18);
            if (lVar15 != lVar16) {
              if (lVar15 == 0) goto LAB_016681a0;
              if (lVar16 == 0) goto LAB_0166817c;
              iVar3 = *(int *)(lVar15 + 0x18);
              iVar4 = *(int *)(lVar16 + 0x18);
              bVar8 = SBORROW4(iVar3,iVar4);
              iVar2 = iVar3 - iVar4;
              if (iVar3 != iVar4) goto LAB_01668178;
            }
            if (*(int *)(*(long *)(pLVar10 + 0x20) + 0x5c) <=
                *(int *)(*(long *)(lVar13 + 0x20) + 0x5c)) goto LAB_016681a0;
            goto LAB_0166817c;
          }
        }
        else {
          if (lVar15 == 0) goto LAB_0166812c;
          if (lVar16 != 0) {
            if (*(int *)(lVar15 + 0x18) == *(int *)(lVar16 + 0x18)) goto LAB_01668114;
            if (*(int *)(lVar16 + 0x18) <= *(int *)(lVar15 + 0x18)) goto LAB_0166812c;
          }
        }
        goto LAB_016680b0;
      }
LAB_0166817c:
      p_Var11 = p_Var12 + 8;
      p_Var12 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  **)p_Var11;
    } while (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
               **)p_Var11 !=
             (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
              *)0x0);
  }
LAB_01668194:
  auVar17._8_8_ = p_Var9;
  auVar17._0_8_ = p_Var9;
  return auVar17;
joined_r0x016681a4:
  p_Var14 = p_Var7;
  if (p_Var14 !=
      (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
       *)0x0) {
    do {
      lVar13 = *(long *)(p_Var14 + 0x20);
      if (**(int **)(lVar13 + 0x10) == iVar1) {
        uVar5 = *(uint *)(lVar13 + 4) >> 0x16 & 0x3f;
        uVar6 = *(uint *)(pLVar10 + 4) >> 0x16 & 0x3f;
        if (uVar5 < uVar6) goto LAB_016681b0;
        if (uVar6 < uVar5) goto LAB_01668240;
        lVar15 = *(long *)(lVar13 + 0x18);
        lVar16 = *(long *)(pLVar10 + 0x18);
        if (lVar15 == lVar16) {
          if (*(int *)(*(long *)(pLVar10 + 0x20) + 0x5c) <=
              *(int *)(*(long *)(lVar13 + 0x20) + 0x5c)) goto LAB_01668240;
          p_Var14 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                      **)(p_Var14 + 8);
        }
        else {
          if (lVar15 == 0) goto LAB_01668240;
          if (lVar16 == 0) goto LAB_016681b0;
          if (*(int *)(lVar15 + 0x18) == *(int *)(lVar16 + 0x18)) {
            if (*(int *)(*(long *)(pLVar10 + 0x20) + 0x5c) <=
                *(int *)(*(long *)(lVar13 + 0x20) + 0x5c)) goto LAB_01668240;
            p_Var14 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                        **)(p_Var14 + 8);
          }
          else {
            if (*(int *)(lVar16 + 0x18) <= *(int *)(lVar15 + 0x18)) goto LAB_01668240;
            p_Var14 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                        **)(p_Var14 + 8);
          }
        }
      }
      else {
        if (iVar1 <= **(int **)(lVar13 + 0x10)) goto LAB_01668240;
LAB_016681b0:
        p_Var14 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                    **)(p_Var14 + 8);
      }
      if (p_Var14 ==
          (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
           *)0x0) break;
    } while( true );
  }
  p_Var12 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
              **)(p_Var12 + 8);
joined_r0x01668294:
  do {
    while( true ) {
      p_Var7 = p_Var12;
      if (p_Var7 == (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                     *)0x0) {
        auVar18._8_8_ = p_Var9;
        auVar18._0_8_ = p_Var11;
        return auVar18;
      }
      lVar13 = *(long *)(p_Var7 + 0x20);
      if (iVar1 == **(int **)(lVar13 + 0x10)) break;
      if (**(int **)(lVar13 + 0x10) <= iVar1) goto LAB_01668330;
LAB_016682a0:
      p_Var12 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  **)p_Var7;
      p_Var9 = p_Var7;
    }
    uVar5 = *(uint *)(pLVar10 + 4) >> 0x16 & 0x3f;
    uVar6 = *(uint *)(lVar13 + 4) >> 0x16 & 0x3f;
    if (uVar5 < uVar6) goto LAB_016682a0;
    if (uVar6 < uVar5) goto LAB_01668330;
    lVar15 = *(long *)(pLVar10 + 0x18);
    lVar16 = *(long *)(lVar13 + 0x18);
    if (lVar15 != lVar16) {
      if (lVar15 != 0) {
        if (lVar16 == 0) goto LAB_016682a0;
        if (*(int *)(lVar15 + 0x18) == *(int *)(lVar16 + 0x18)) {
          if (*(int *)(*(long *)(pLVar10 + 0x20) + 0x5c) < *(int *)(*(long *)(lVar13 + 0x20) + 0x5c)
             ) {
            p_Var12 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                        **)p_Var7;
            p_Var9 = p_Var7;
            goto joined_r0x01668294;
          }
        }
        else if (*(int *)(lVar15 + 0x18) < *(int *)(lVar16 + 0x18)) {
          p_Var12 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                      **)p_Var7;
          p_Var9 = p_Var7;
          goto joined_r0x01668294;
        }
      }
LAB_01668330:
      p_Var12 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  **)(p_Var7 + 8);
      goto joined_r0x01668294;
    }
    if (*(int *)(*(long *)(lVar13 + 0x20) + 0x5c) <= *(int *)(*(long *)(pLVar10 + 0x20) + 0x5c))
    goto LAB_01668330;
    p_Var12 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                **)p_Var7;
    p_Var9 = p_Var7;
  } while( true );
LAB_01668240:
  p_Var7 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
             **)p_Var14;
  p_Var11 = p_Var14;
  goto joined_r0x016681a4;
}

