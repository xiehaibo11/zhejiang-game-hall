
/* std::__ndk1::__tree_node_base<void*>*& std::__ndk1::__tree<std::__ndk1::__value_type<unsigned
   long, v8::internal::wasm::ControlTransferEntry>, std::__ndk1::__map_value_compare<unsigned long,
   std::__ndk1::__value_type<unsigned long, v8::internal::wasm::ControlTransferEntry>,
   std::__ndk1::less<unsigned long>, true>,
   v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned long,
   v8::internal::wasm::ControlTransferEntry> > >::__find_equal<unsigned
   long>(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<unsigned long,
   v8::internal::wasm::ControlTransferEntry>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<unsigned long,
   v8::internal::wasm::ControlTransferEntry>, void*>*, long>,
   std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   std::__ndk1::__tree_node_base<void*>*&, unsigned long const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
::__find_equal<unsigned_long>
          (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
           *this,__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                 *param_2,long *param_3,__tree_node_base **param_4,ulong *param_5)

{
  __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
  *p_Var1;
  __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
  *p_Var2;
  bool bVar3;
  __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
  *p_Var4;
  ulong uVar5;
  __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
  *p_Var6;
  __tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
  *p_Var7;
  long lVar8;
  
  p_Var1 = this + 8;
  if (p_Var1 != param_2) {
    uVar5 = *param_5;
    if (*(ulong *)(param_2 + 0x20) <= uVar5) {
      if (uVar5 <= *(ulong *)(param_2 + 0x20)) {
        *param_3 = (long)param_2;
        *param_4 = (__tree_node_base *)param_2;
        return param_4;
      }
      p_Var4 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                 **)(param_2 + 8);
      if (p_Var4 == (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                     *)0x0) {
        p_Var4 = param_2 + 0x10;
        p_Var6 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                   **)p_Var4;
        if (*(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
              **)p_Var6 != param_2) {
          do {
            lVar8 = *(long *)p_Var4;
            p_Var4 = (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                      *)(lVar8 + 0x10);
            p_Var6 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                       **)p_Var4;
          } while (*(long *)p_Var6 != lVar8);
        }
      }
      else {
        do {
          p_Var6 = p_Var4;
          p_Var4 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                     **)p_Var6;
        } while (*(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                   **)p_Var6 !=
                 (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                  *)0x0);
      }
      if ((p_Var6 == p_Var1) || (uVar5 < *(ulong *)(p_Var6 + 0x20))) {
        if (*(long *)(param_2 + 8) == 0) {
          *param_3 = (long)param_2;
          return (__tree_node_base **)(param_2 + 8);
        }
LAB_01243464:
        *param_3 = (long)p_Var6;
        return (__tree_node_base **)p_Var6;
      }
      if (*(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
            **)p_Var1 !=
          (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
           *)0x0) {
        p_Var4 = this + 8;
        p_Var1 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                   **)p_Var1;
        do {
          while (p_Var6 = p_Var1, uVar5 < *(ulong *)(p_Var6 + 0x20)) {
            p_Var4 = p_Var6;
            p_Var1 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                       **)p_Var6;
            if (*(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                  **)p_Var6 ==
                (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                 *)0x0) goto LAB_01243464;
          }
          if (uVar5 <= *(ulong *)(p_Var6 + 0x20)) break;
          p_Var4 = p_Var6 + 8;
          p_Var1 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                     **)p_Var4;
        } while (*(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                   **)p_Var4 !=
                 (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                  *)0x0);
        goto LAB_012434b4;
      }
      goto LAB_012434c0;
    }
  }
  p_Var6 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
             **)param_2;
  p_Var4 = param_2;
  if (*(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
        **)this != param_2) {
    p_Var2 = p_Var6;
    p_Var7 = param_2;
    if (p_Var6 == (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                   *)0x0) {
      do {
        p_Var4 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                   **)(p_Var7 + 0x10);
        bVar3 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                  **)p_Var4 == p_Var7;
        p_Var7 = p_Var4;
      } while (bVar3);
    }
    else {
      do {
        p_Var4 = p_Var2;
        p_Var2 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                   **)(p_Var4 + 8);
      } while (*(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                 **)(p_Var4 + 8) !=
               (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                *)0x0);
    }
    uVar5 = *param_5;
    if (uVar5 <= *(ulong *)(p_Var4 + 0x20)) {
      if (*(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
            **)p_Var1 !=
          (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
           *)0x0) {
        p_Var4 = this + 8;
        p_Var1 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                   **)p_Var1;
        do {
          while (p_Var6 = p_Var1, uVar5 < *(ulong *)(p_Var6 + 0x20)) {
            p_Var4 = p_Var6;
            p_Var1 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                       **)p_Var6;
            if (*(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                  **)p_Var6 ==
                (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                 *)0x0) goto LAB_01243464;
          }
          if (uVar5 <= *(ulong *)(p_Var6 + 0x20)) break;
          p_Var4 = p_Var6 + 8;
          p_Var1 = *(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                     **)p_Var4;
        } while (*(__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                   **)p_Var4 !=
                 (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                  *)0x0);
LAB_012434b4:
        *param_3 = (long)p_Var6;
        return (__tree_node_base **)p_Var4;
      }
LAB_012434c0:
      *param_3 = (long)p_Var1;
      return (__tree_node_base **)p_Var1;
    }
  }
  if (p_Var6 == (__tree<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::__map_value_compare<unsigned_long,std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>,std::__ndk1::less<unsigned_long>,true>,v8::internal::ZoneAllocator<std::__ndk1::__value_type<unsigned_long,v8::internal::wasm::ControlTransferEntry>>>
                 *)0x0) {
    *param_3 = (long)param_2;
    return (__tree_node_base **)param_2;
  }
  *param_3 = (long)p_Var4;
  return (__tree_node_base **)(p_Var4 + 8);
}

