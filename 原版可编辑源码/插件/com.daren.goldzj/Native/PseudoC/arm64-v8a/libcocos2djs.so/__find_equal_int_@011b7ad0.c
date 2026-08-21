
/* std::__ndk1::__tree_node_base<void*>*& std::__ndk1::__tree<std::__ndk1::__value_type<int,
   v8::internal::Handle<v8::internal::Script> >, std::__ndk1::__map_value_compare<int,
   std::__ndk1::__value_type<int, v8::internal::Handle<v8::internal::Script> >,
   std::__ndk1::less<int>, true>, std::__ndk1::allocator<std::__ndk1::__value_type<int,
   v8::internal::Handle<v8::internal::Script> > >
   >::__find_equal<int>(std::__ndk1::__tree_const_iterator<std::__ndk1::__value_type<int,
   v8::internal::Handle<v8::internal::Script> >,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<int,
   v8::internal::Handle<v8::internal::Script> >, void*>*, long>,
   std::__ndk1::__tree_end_node<std::__ndk1::__tree_node_base<void*>*>*&,
   std::__ndk1::__tree_node_base<void*>*&, int const&) */

__tree_node_base ** __thiscall
std::__ndk1::
__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
::__find_equal<int>(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                    *this,__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                          *param_2,long *param_3,__tree_node_base **param_4,int *param_5)

{
  __tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
  *p_Var1;
  int iVar2;
  __tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
  *p_Var3;
  bool bVar4;
  __tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
  *p_Var5;
  __tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
  *p_Var6;
  __tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
  *p_Var7;
  long lVar8;
  
  p_Var1 = this + 8;
  if (p_Var1 != param_2) {
    iVar2 = *param_5;
    if (*(int *)(param_2 + 0x20) <= iVar2) {
      if (iVar2 <= *(int *)(param_2 + 0x20)) {
        *param_3 = (long)param_2;
        *param_4 = (__tree_node_base *)param_2;
        return param_4;
      }
      p_Var5 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                 **)(param_2 + 8);
      if (p_Var5 == (__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                     *)0x0) {
        p_Var5 = param_2 + 0x10;
        p_Var6 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                   **)p_Var5;
        if (*(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
              **)p_Var6 != param_2) {
          do {
            lVar8 = *(long *)p_Var5;
            p_Var5 = (__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                      *)(lVar8 + 0x10);
            p_Var6 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                       **)p_Var5;
          } while (*(long *)p_Var6 != lVar8);
        }
      }
      else {
        do {
          p_Var6 = p_Var5;
          p_Var5 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                     **)p_Var6;
        } while (*(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                   **)p_Var6 !=
                 (__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                  *)0x0);
      }
      if ((p_Var6 == p_Var1) || (iVar2 < *(int *)(p_Var6 + 0x20))) {
        if (*(long *)(param_2 + 8) == 0) {
          *param_3 = (long)param_2;
          return (__tree_node_base **)(param_2 + 8);
        }
LAB_011b7c24:
        *param_3 = (long)p_Var6;
        return (__tree_node_base **)p_Var6;
      }
      if (*(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
            **)p_Var1 !=
          (__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
           *)0x0) {
        p_Var5 = this + 8;
        p_Var1 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                   **)p_Var1;
        do {
          while (p_Var6 = p_Var1, iVar2 < *(int *)(p_Var6 + 0x20)) {
            p_Var5 = p_Var6;
            p_Var1 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                       **)p_Var6;
            if (*(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                  **)p_Var6 ==
                (__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                 *)0x0) goto LAB_011b7c24;
          }
          if (iVar2 <= *(int *)(p_Var6 + 0x20)) break;
          p_Var5 = p_Var6 + 8;
          p_Var1 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                     **)p_Var5;
        } while (*(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                   **)p_Var5 !=
                 (__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                  *)0x0);
        goto LAB_011b7c74;
      }
      goto LAB_011b7c80;
    }
  }
  p_Var6 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
             **)param_2;
  p_Var5 = param_2;
  if (*(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
        **)this != param_2) {
    p_Var3 = p_Var6;
    p_Var7 = param_2;
    if (p_Var6 == (__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                   *)0x0) {
      do {
        p_Var5 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                   **)(p_Var7 + 0x10);
        bVar4 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                  **)p_Var5 == p_Var7;
        p_Var7 = p_Var5;
      } while (bVar4);
    }
    else {
      do {
        p_Var5 = p_Var3;
        p_Var3 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                   **)(p_Var5 + 8);
      } while (*(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                 **)(p_Var5 + 8) !=
               (__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                *)0x0);
    }
    iVar2 = *param_5;
    if (iVar2 <= *(int *)(p_Var5 + 0x20)) {
      if (*(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
            **)p_Var1 !=
          (__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
           *)0x0) {
        p_Var5 = this + 8;
        p_Var1 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                   **)p_Var1;
        do {
          while (p_Var6 = p_Var1, iVar2 < *(int *)(p_Var6 + 0x20)) {
            p_Var5 = p_Var6;
            p_Var1 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                       **)p_Var6;
            if (*(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                  **)p_Var6 ==
                (__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                 *)0x0) goto LAB_011b7c24;
          }
          if (iVar2 <= *(int *)(p_Var6 + 0x20)) break;
          p_Var5 = p_Var6 + 8;
          p_Var1 = *(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                     **)p_Var5;
        } while (*(__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                   **)p_Var5 !=
                 (__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                  *)0x0);
LAB_011b7c74:
        *param_3 = (long)p_Var6;
        return (__tree_node_base **)p_Var5;
      }
LAB_011b7c80:
      *param_3 = (long)p_Var1;
      return (__tree_node_base **)p_Var1;
    }
  }
  if (p_Var6 == (__tree<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::__map_value_compare<int,std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>,std::__ndk1::less<int>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<int,v8::internal::Handle<v8::internal::Script>>>>
                 *)0x0) {
    *param_3 = (long)param_2;
    return (__tree_node_base **)param_2;
  }
  *param_3 = (long)p_Var5;
  return (__tree_node_base **)(p_Var5 + 8);
}

