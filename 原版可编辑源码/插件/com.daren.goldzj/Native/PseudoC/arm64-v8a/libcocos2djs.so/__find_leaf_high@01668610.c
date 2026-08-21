
/* std::__ndk1::__tree<v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,
   v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>
   >::__find_leaf_high(std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   v8::internal::compiler::LiveRange* const&) */

__tree_end_node * __thiscall
std::__ndk1::
__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
::__find_leaf_high(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   *this,__tree_end_node **param_1,LiveRange **param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  __tree_end_node *p_Var7;
  bool bVar8;
  __tree_end_node *p_Var9;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::UnhandledLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var10;
  LiveRange *pLVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  p_Var10 = this + 8;
  if (*(__tree_end_node **)p_Var10 == (__tree_end_node *)0x0) {
    *param_1 = (__tree_end_node *)p_Var10;
    return (__tree_end_node *)p_Var10;
  }
  pLVar11 = *param_2;
  iVar2 = **(int **)(pLVar11 + 0x10);
  p_Var7 = *(__tree_end_node **)p_Var10;
LAB_01668638:
  do {
    p_Var9 = p_Var7;
    lVar12 = *(long *)(p_Var9 + 0x20);
    iVar3 = **(int **)(lVar12 + 0x10);
    bVar8 = SBORROW4(iVar2,iVar3);
    iVar1 = iVar2 - iVar3;
    if (iVar2 == iVar3) {
      uVar5 = *(uint *)(pLVar11 + 4) >> 0x16 & 0x3f;
      uVar6 = *(uint *)(lVar12 + 4) >> 0x16 & 0x3f;
      if (uVar6 <= uVar5) {
        if (uVar5 <= uVar6) {
          lVar13 = *(long *)(pLVar11 + 0x18);
          lVar14 = *(long *)(lVar12 + 0x18);
          if (lVar13 != lVar14) {
            if (lVar13 == 0) goto LAB_016686a8;
            if (lVar14 == 0) goto LAB_0166862c;
            iVar3 = *(int *)(lVar13 + 0x18);
            iVar4 = *(int *)(lVar14 + 0x18);
            bVar8 = SBORROW4(iVar3,iVar4);
            iVar1 = iVar3 - iVar4;
            if (iVar3 != iVar4) goto LAB_016686b4;
          }
          if (*(int *)(*(long *)(pLVar11 + 0x20) + 0x5c) < *(int *)(*(long *)(lVar12 + 0x20) + 0x5c)
             ) goto LAB_0166862c;
        }
LAB_016686a8:
        p_Var7 = *(__tree_end_node **)(p_Var9 + 8);
        if (*(__tree_end_node **)(p_Var9 + 8) == (__tree_end_node *)0x0) {
          *param_1 = p_Var9;
          return p_Var9 + 8;
        }
        goto LAB_01668638;
      }
    }
    else {
LAB_016686b4:
      if (iVar1 < 0 == bVar8) goto LAB_016686a8;
    }
LAB_0166862c:
    p_Var7 = *(__tree_end_node **)p_Var9;
    if (*(__tree_end_node **)p_Var9 == (__tree_end_node *)0x0) {
      *param_1 = p_Var9;
      return p_Var9;
    }
  } while( true );
}

