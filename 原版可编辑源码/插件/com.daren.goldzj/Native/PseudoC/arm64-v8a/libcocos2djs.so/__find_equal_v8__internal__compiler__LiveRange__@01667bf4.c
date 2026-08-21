
/* std::__ndk1::__tree_node_base<void*>*& std::__ndk1::__tree<v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LiveRangeOrdering,
   v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>
   >::__find_equal<v8::internal::compiler::LiveRange*>(std::__ndk1::__tree_const_iterator<v8::internal::compiler::LiveRange*,
   std::__ndk1::__tree_node<v8::internal::compiler::LiveRange*, void*>*, long>,
   std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   std::__ndk1::__tree_node_base<void*>*&, v8::internal::compiler::LiveRange* const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
::__find_equal<v8::internal::compiler::LiveRange*>
          (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
           *this,__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                 *param_2,long *param_3,__tree_node_base **param_4,long *param_5)

{
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var1;
  int iVar2;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var3;
  bool bVar4;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var5;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var6;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var7;
  long lVar8;
  
  p_Var1 = this + 8;
  if (p_Var1 != param_2) {
    iVar2 = **(int **)(*param_5 + 0x10);
    if (**(int **)(*(long *)(param_2 + 0x20) + 0x10) <= iVar2) {
      if (iVar2 <= **(int **)(*(long *)(param_2 + 0x20) + 0x10)) {
        *param_3 = (long)param_2;
        *param_4 = (__tree_node_base *)param_2;
        return param_4;
      }
      p_Var5 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                 **)(param_2 + 8);
      if (p_Var5 == (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                     *)0x0) {
        p_Var5 = param_2 + 0x10;
        p_Var6 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   **)p_Var5;
        if (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
              **)p_Var6 != param_2) {
          do {
            lVar8 = *(long *)p_Var5;
            p_Var5 = (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                      *)(lVar8 + 0x10);
            p_Var6 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                       **)p_Var5;
          } while (*(long *)p_Var6 != lVar8);
        }
      }
      else {
        do {
          p_Var6 = p_Var5;
          p_Var5 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                     **)p_Var6;
        } while (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   **)p_Var6 !=
                 (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  *)0x0);
      }
      if ((p_Var6 == p_Var1) || (iVar2 < **(int **)(*(long *)(p_Var6 + 0x20) + 0x10))) {
        if (*(long *)(param_2 + 8) == 0) {
          *param_3 = (long)param_2;
          return (__tree_node_base **)(param_2 + 8);
        }
LAB_01667d78:
        *param_3 = (long)p_Var6;
        return (__tree_node_base **)p_Var6;
      }
      if (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
            **)p_Var1 !=
          (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
           *)0x0) {
        p_Var5 = this + 8;
        p_Var1 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   **)p_Var1;
        do {
          while (p_Var6 = p_Var1, iVar2 < **(int **)(*(long *)(p_Var6 + 0x20) + 0x10)) {
            p_Var5 = p_Var6;
            p_Var1 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                       **)p_Var6;
            if (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  **)p_Var6 ==
                (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                 *)0x0) goto LAB_01667d78;
          }
          if (iVar2 <= **(int **)(*(long *)(p_Var6 + 0x20) + 0x10)) break;
          p_Var5 = p_Var6 + 8;
          p_Var1 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                     **)p_Var5;
        } while (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   **)p_Var5 !=
                 (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  *)0x0);
        goto LAB_01667dd0;
      }
      goto LAB_01667ddc;
    }
  }
  p_Var6 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
             **)param_2;
  p_Var5 = param_2;
  if (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
        **)this != param_2) {
    p_Var3 = p_Var6;
    p_Var7 = param_2;
    if (p_Var6 == (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   *)0x0) {
      do {
        p_Var5 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   **)(p_Var7 + 0x10);
        bVar4 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  **)p_Var5 == p_Var7;
        p_Var7 = p_Var5;
      } while (bVar4);
    }
    else {
      do {
        p_Var5 = p_Var3;
        p_Var3 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   **)(p_Var5 + 8);
      } while (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                 **)(p_Var5 + 8) !=
               (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                *)0x0);
    }
    iVar2 = **(int **)(*param_5 + 0x10);
    if (iVar2 <= **(int **)(*(long *)(p_Var5 + 0x20) + 0x10)) {
      if (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
            **)p_Var1 !=
          (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
           *)0x0) {
        p_Var5 = this + 8;
        p_Var1 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   **)p_Var1;
        do {
          while (p_Var6 = p_Var1, iVar2 < **(int **)(*(long *)(p_Var6 + 0x20) + 0x10)) {
            p_Var5 = p_Var6;
            p_Var1 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                       **)p_Var6;
            if (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  **)p_Var6 ==
                (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                 *)0x0) goto LAB_01667d78;
          }
          if (iVar2 <= **(int **)(*(long *)(p_Var6 + 0x20) + 0x10)) break;
          p_Var5 = p_Var6 + 8;
          p_Var1 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                     **)p_Var5;
        } while (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   **)p_Var5 !=
                 (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  *)0x0);
LAB_01667dd0:
        *param_3 = (long)p_Var6;
        return (__tree_node_base **)p_Var5;
      }
LAB_01667ddc:
      *param_3 = (long)p_Var1;
      return (__tree_node_base **)p_Var1;
    }
  }
  if (p_Var6 == (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                 *)0x0) {
    *param_3 = (long)param_2;
    return (__tree_node_base **)param_2;
  }
  *param_3 = (long)p_Var5;
  return (__tree_node_base **)(p_Var5 + 8);
}

