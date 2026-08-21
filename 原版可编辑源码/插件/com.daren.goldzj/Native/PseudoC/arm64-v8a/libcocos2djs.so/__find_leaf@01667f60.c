
/* std::__ndk1::__tree<v8::internal::compiler::LiveRange*,
   v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,
   v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>
   >::__find_leaf(std::__ndk1::__tree_const_iterator<v8::internal::compiler::LiveRange*,
   std::__ndk1::__tree_node<v8::internal::compiler::LiveRange*, void*>*, long>,
   std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   v8::internal::compiler::LiveRange* const&) */

__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
* __thiscall
std::__ndk1::
__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
::__find_leaf(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
              *this,__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                    *param_2,long *param_3,long *param_4)

{
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var1;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var2;
  bool bVar3;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var4;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var5;
  __tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
  *p_Var6;
  
  p_Var1 = this + 8;
  if ((p_Var1 == param_2) ||
     (*(int *)(*param_4 + 0x58) <= *(int *)(*(long *)(param_2 + 0x20) + 0x58))) {
    if (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
          **)this == param_2) {
      p_Var4 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                 **)param_2;
      p_Var6 = param_2;
    }
    else {
      p_Var4 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                 **)param_2;
      p_Var5 = param_2;
      p_Var2 = p_Var4;
      if (p_Var4 == (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                     *)0x0) {
        do {
          p_Var6 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                     **)(p_Var5 + 0x10);
          bVar3 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                    **)p_Var6 == p_Var5;
          p_Var5 = p_Var6;
        } while (bVar3);
      }
      else {
        do {
          p_Var6 = p_Var2;
          p_Var2 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                     **)(p_Var6 + 8);
        } while (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   **)(p_Var6 + 8) !=
                 (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  *)0x0);
      }
      if (*(int *)(*param_4 + 0x58) < *(int *)(*(long *)(p_Var6 + 0x20) + 0x58)) {
        p_Var4 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   **)p_Var1;
        if (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
              **)p_Var1 ==
            (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
             *)0x0) goto LAB_01668024;
        do {
          while (param_2 = p_Var4,
                *(int *)(*(long *)(param_2 + 0x20) + 0x58) <= *(int *)(*param_4 + 0x58)) {
            p_Var4 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                       **)(param_2 + 8);
            if (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  **)(param_2 + 8) ==
                (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                 *)0x0) {
              *param_3 = (long)param_2;
              return param_2 + 8;
            }
          }
          p_Var4 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                     **)param_2;
        } while (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   **)param_2 !=
                 (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                  *)0x0);
        goto LAB_0166806c;
      }
    }
    if (p_Var4 == (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   *)0x0) {
LAB_0166806c:
      *param_3 = (long)param_2;
      return param_2;
    }
  }
  else {
    p_Var4 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
               **)p_Var1;
    if (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
          **)p_Var1 ==
        (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
         *)0x0) {
LAB_01668024:
      *param_3 = (long)p_Var1;
      return p_Var1;
    }
    do {
      while (p_Var6 = p_Var4, *(int *)(*param_4 + 0x58) <= *(int *)(*(long *)(p_Var6 + 0x20) + 0x58)
            ) {
        p_Var4 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                   **)p_Var6;
        if (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
              **)p_Var6 ==
            (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
             *)0x0) {
          *param_3 = (long)p_Var6;
          return p_Var6;
        }
      }
      p_Var4 = *(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
                 **)(p_Var6 + 8);
    } while (*(__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
               **)(p_Var6 + 8) !=
             (__tree<v8::internal::compiler::LiveRange*,v8::internal::compiler::LinearScanAllocator::InactiveLiveRangeOrdering,v8::internal::ZoneAllocator<v8::internal::compiler::LiveRange*>>
              *)0x0);
  }
  *param_3 = (long)p_Var6;
  return p_Var6 + 8;
}

